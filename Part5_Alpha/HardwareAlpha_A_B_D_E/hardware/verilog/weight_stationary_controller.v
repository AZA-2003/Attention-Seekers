module weight_stationary_controller #(
  // Default parameters
  parameter col = 8,              // PE columns
  parameter row = 8,              // PE rows
  parameter ADDR_W = 11,          // Address width for SRAM ports
  parameter INCLUDE_FLUSH_FIFO=1  // 1 = Supporting the version where the FIFO is flushed, 0 = not supporting the version where the FIFO is flushed. )
)
(
  input  wire                     clk,
  input  wire                     reset,
  input  wire                     debug_mode,
  // Configuration inputs
  input  wire [7:0]               num_nij_to_compute, // Up to 256 nij to compute
  input  wire [7:0]               num_kij_to_compute, // Up to 256 kij to compute
  input  wire [ADDR_W-1:0]        weight_start_sram_addr,
  input  wire [ADDR_W-1:0]        activation_start_sram_addr,
  // Start signals
  input  wire                     start_controller,

  // MAC Array control signals (outputs)
  output reg                     execute,
  output reg                     load,
  output reg                     mac_reset,
  output wire                    ld_mode,

  // L0 control signals (outputs)
  output reg                      l0_rd,
  output reg                      l0_wr,
  output reg                      l0_flush_ptr,

  // OFIFO control/status
  input wire                      ofifo_valid,
  output reg                      ofifo_rd,

  // SFU control/status
  output reg                      sfu_start,
  input  wire                     sfu_active,
  output wire                     sfu_active_to_mem,

  // Controller status
  output reg                      controller_active,

  // SRAM address outputs and memory control
  output wire [ADDR_W-1:0]        activation_sram_addr,
  output wire [ADDR_W-1:0]        psum_sram_addr,

  // Clock Gating Control
  output wire                     weights_sram_clk_en,
  output wire                     psum_sram_clk_en,
  output wire                     mac_array_clk_en,
  output wire                     l0_clk_en,
  output wire                     ofifo_clk_en,
  output wire                     sfu_clk_en
);

  /* Controller Implementation Plan:
  - States are: IDLE, KERNEL_LOAD_TO_LO, KERNEL_LOAD_TO_MAC, ACT_LOAD_TO_L0, MAC_COMPUTE, SFU_PROCESS
  - On start_controller, move to KERNEL_LOAD_TO_L0 from IDLE
  - While we are not in the IDLE state, controller_active is high
  - We repeat this sequence for kij times:
      KERNEL_LOAD_TO_L0 -> KERNEL_LOAD_TO_MAC -> ACT_LOAD_TO_L0 -> MAC_COMPUTE

  - Then, we go into SFU_PROCESS state where the SFU processes the data. We transition back to idle
  once SFU is done as indicated by sfu_active going low.

  - If debug_mode is high, we only transition to each of the states once start_controller is pulsed high again.
  - i.e. we go into each of the states, ten return to IDLE, and wait for start_controller to be pulsed again to go to the next state.

  State behavior defintions:
  1. KERNEL_LOAD_TO_L0:
      In this state, we load weights from weight SRAM to L0.
      - l0_wr is high
      - activation_sram_addr increments from weight_start_sram_addr
      - This has to repeat for col cycles to load all weights into L0
  2. KERNEL_LOAD_TO_MAC:
      In this state, we load weights from L0 to MAC array.
      - load is high
      - l0_rd is high
      - This has to repeat for col*3 cycles to load all weights into MAC array  
      - Note: Opportunity for optimization: We can overlap KERNEL_LOAD_TO_L0 and KERNEL_LOAD_TO_MAC
  3. ACT_LOAD_TO_L0:
      In this state, we load activations from activation SRAM to L0.
      - l0_wr is high.
      - activation_sram_addr increments from activation_start_sram_addr
      - This has to repeat for nij cycles to load all activations into L0
  4. MAC_COMPUTE:
      In this state, we perform MAC computations.
      - execute is high
      - l0_rd is high
      - ofifo_rd is high when ofifo_valid is high to drain OFIFO output to PSUM.
      - This has to repeat for nij + 2*col cycles to compute all partial sums
      - psum_sram_addr increments from 0 to store all partial sums back to PSUM SRAM

  5. SFU_PROCESS:
      In this state, we let the SFU process the data.
      - sfu_start is pulsed high for 1 cycle at start of this state
      - We wait in this state until sfu_active goes low again
  
  INCLUDE_FLUSH_FIFO:
  - When the FIFO ptrs are flushable, we will do the following:
  - On first load:
  1 - KERNEL_LOAD_T0_LO -> ACT_LOAD_TO_LO -> FIFO SIZE = Num Weights + Num activations

  2 - Then, on subsequent loads, we will flush the FIFO before loading new data:
      - KERNEL_LOAD_TO_L0 -> MAC_COMPUTE -> FLUSH_FIFO (or FIFO flush at the end of MAC_compute).

  */

  // Controller code
  
  // GP (General Purpose) counter used for MAC instruction, Loading, etc.
  reg [7+$clog2(col):0] gp_counter, next_gp_counter;

  // Counter for Repeating loading and accumulation for kij times
  reg [7:0] kij_counter, next_kij_counter;

  reg [2:0] state, prev_state, next_state, next_prev_state;

  // FSM Output Signals
  reg next_l0_rd;
  reg next_l0_wr;

  // Wire to indicate kernel load from memory is done
  wire kernel_load_from_mem_done;
  wire kernel_load_to_mac_done;

  // Wire to indicate ACT load from memory is done
  wire act_load_from_mem_done;

  // State mapping
  localparam IDLE = 3'b000;
  localparam KERNEL_LOAD_TO_L0 = 3'b001;
  localparam KERNEL_LOAD_TO_MAC = 3'b010;
  localparam ACT_LOAD_TO_L0 = 3'b011;
  localparam MAC_COMPUTE = 3'b100;
  localparam SFU_START = 3'b101; 
  localparam SFU_PROCESS = 3'b110; 

  // Controller active signal
  always @ (posedge clk) begin
    if(reset) begin
      controller_active <= 1'b0;
    end
    else begin
      if(next_state != IDLE) begin
        controller_active <= 1'b1;
      end
      else begin
        controller_active <= 1'b0;
      end
    end
  end

  // KIJ Counter Logic
  always @(posedge clk) begin
    if (reset) begin // Synchronous reset
      kij_counter <= 0;
    end
    else begin
      kij_counter <= next_kij_counter;
    end
  end

  always @(*) begin
    if (reset) begin
      next_kij_counter = 0;
    end
    else begin
      if((state == SFU_START) && (kij_counter == num_kij_to_compute)) begin
        next_kij_counter = 0;
      end
      else if (state == MAC_COMPUTE && (gp_counter == 0)) begin
        next_kij_counter = kij_counter + 1;
      end
      else begin
        next_kij_counter = kij_counter;
      end
    end
  end   

  // FSM Next State Logic and State Flops
  always @ (*) begin
    if (reset) begin
      next_state = IDLE;
      next_prev_state = IDLE;
    end
    else begin
      next_prev_state = prev_state; // Default assignment
      case(state)
        IDLE: begin
          if(debug_mode) begin : DEBUG_MODE_IDLE
            if (prev_state == IDLE && start_controller) begin
              next_state = KERNEL_LOAD_TO_L0;
            end
            else if(prev_state == KERNEL_LOAD_TO_L0 && start_controller) begin
              next_state = KERNEL_LOAD_TO_MAC;
            end
            else if(prev_state == KERNEL_LOAD_TO_MAC && start_controller) begin
              next_state = ACT_LOAD_TO_L0;
            end
            else if(prev_state == ACT_LOAD_TO_L0 && start_controller) begin
              next_state = MAC_COMPUTE;
            end
            else if(prev_state == MAC_COMPUTE && start_controller) begin
              next_state = SFU_PROCESS;
            end
            else begin
              next_state = IDLE;
            end
          end : DEBUG_MODE_IDLE
          else begin
            if (start_controller) begin
              next_state = KERNEL_LOAD_TO_L0;
            end
            else begin
              next_state = IDLE;
            end
          end
        end

        KERNEL_LOAD_TO_L0: begin
          if (debug_mode && kernel_load_from_mem_done) begin
            next_state = IDLE;
            next_prev_state = KERNEL_LOAD_TO_L0;
          end
          else begin
            if(INCLUDE_FLUSH_FIFO) begin
              if((kij_counter == 0) && kernel_load_from_mem_done) begin
                next_state = ACT_LOAD_TO_L0;
              end
              else if((kernel_load_from_mem_done)) begin
                next_state = KERNEL_LOAD_TO_MAC;
              end
              else begin
                next_state = KERNEL_LOAD_TO_L0;
              end
            end
            else begin
              if(kernel_load_from_mem_done) begin
                next_state = KERNEL_LOAD_TO_MAC;
              end
              else begin
                next_state = KERNEL_LOAD_TO_L0;
              end
            end
          end
        end

        KERNEL_LOAD_TO_MAC: begin
          if (debug_mode && kernel_load_to_mac_done) begin
            next_state = IDLE;
            next_prev_state = KERNEL_LOAD_TO_MAC;
          end
          else begin
            if(INCLUDE_FLUSH_FIFO) begin
              if(kernel_load_to_mac_done) begin
                next_state = MAC_COMPUTE;
              end
              else begin
                next_state = KERNEL_LOAD_TO_MAC;
              end
            end
            else begin
              if(kernel_load_to_mac_done) begin
                next_state = ACT_LOAD_TO_L0;
              end
              else begin
                next_state = KERNEL_LOAD_TO_MAC;
              end
            end
          end
        end

        ACT_LOAD_TO_L0: begin
          if (debug_mode && (gp_counter == num_nij_to_compute - 1)) begin
            next_state = IDLE;
            next_prev_state = ACT_LOAD_TO_L0;
          end
          else begin
            if(INCLUDE_FLUSH_FIFO) begin
              if(act_load_from_mem_done) begin
                next_state = KERNEL_LOAD_TO_MAC;
              end
              else begin
                next_state = ACT_LOAD_TO_L0;
              end
            end
            else begin
              if(act_load_from_mem_done) begin
                next_state = MAC_COMPUTE;
              end
              else begin
                next_state = ACT_LOAD_TO_L0;
              end
            end
          end
        end

        MAC_COMPUTE: begin
          if (debug_mode && (gp_counter == (num_nij_to_compute + (2*col) + 2))) begin
            next_state = IDLE;
            next_prev_state = MAC_COMPUTE;
          end
          else if((gp_counter == (num_nij_to_compute + (2*col) + 2)) && (kij_counter == num_kij_to_compute)) begin
            next_state = SFU_START;
            //next_state = IDLE;
            // FIXME: Need to start SFU process here instead of going to IDLE directly
          end
          else if((gp_counter == (num_nij_to_compute + (2*col) + 2)) && (kij_counter != num_kij_to_compute)) begin
            next_state = KERNEL_LOAD_TO_L0;
          end
          else begin
            next_state = MAC_COMPUTE;
          end
        end

        SFU_START: begin
          next_state = SFU_PROCESS;
        end

        SFU_PROCESS: begin
          if(!sfu_active) begin
            next_state = IDLE;
          end
          else begin
            next_state = SFU_PROCESS;
          end
        end

        default: begin 
          next_state = IDLE;
          next_prev_state = IDLE;
        end
      endcase
    end
  end

  always @ (posedge clk) begin
    if (reset) begin
      state <= IDLE;
      prev_state <= IDLE;
    end
    else begin
      state <= next_state;
      prev_state <= next_prev_state;
    end
  end

  // Activation Memory Controller
  reg [7:0] last_weight_load_addr;

  always @ (posedge clk) begin
    if (reset) begin
      last_weight_load_addr <= 8'b0;
    end
    else begin
      if(state == KERNEL_LOAD_TO_MAC && gp_counter == 0) begin
        last_weight_load_addr <= last_weight_load_addr + col;
      end
      else begin
        last_weight_load_addr <= last_weight_load_addr;
      end
    end
  end

  assign activation_sram_addr = (state == KERNEL_LOAD_TO_L0) ? weight_start_sram_addr + gp_counter + last_weight_load_addr :
                               (state == ACT_LOAD_TO_L0) ? activation_start_sram_addr + gp_counter :
                               {ADDR_W{1'b0}};

  // PSUM Memory Controller
  reg [7+$clog2(col):0] last_psum_address, start_psum_gp_counter;
  always @ (posedge clk) begin
    if (reset) begin
      last_psum_address <= 0;
    end
    else begin
      if(state == MAC_COMPUTE && gp_counter == (num_nij_to_compute + (2*col) + 2)) begin
        last_psum_address <= last_psum_address + num_nij_to_compute;
      end
      else begin
        last_psum_address <= last_psum_address;
      end
    end
  end

  assign psum_sram_addr = (state == MAC_COMPUTE) ? last_psum_address + start_psum_gp_counter :
                          {ADDR_W{1'b0}};

  // GP Counter Logic and Control
  always @(posedge clk) begin
    if (reset) begin // Synchronous reset
      gp_counter <= 0;
    end
    else begin
      gp_counter <= next_gp_counter;
    end
  end

  always @(*) begin
    if (reset) begin
      next_gp_counter = 0;
    end
    else begin
      if(state == KERNEL_LOAD_TO_L0) begin
        if(gp_counter == col - 1) begin
          next_gp_counter = 0;
        end
        else begin
          next_gp_counter = gp_counter + 1;
        end
      end
      else if(state == ACT_LOAD_TO_L0) begin
        if(gp_counter == num_nij_to_compute - 1) begin
          next_gp_counter = 0;
        end
        else begin
          next_gp_counter = gp_counter + 1;
        end
      end
      else if(state == KERNEL_LOAD_TO_MAC) begin
        if(gp_counter == (2*col) - 1) begin
          next_gp_counter = 0;
        end
        else begin
          next_gp_counter = gp_counter + 1;
        end
      end
      else if(state == MAC_COMPUTE) begin
        if(gp_counter == (num_nij_to_compute + (2*col) + 2)) begin
          next_gp_counter = 0;
        end
        else begin
          next_gp_counter = gp_counter + 1;
        end
      end
      else begin
        next_gp_counter = 0;
      end
    end
  end

  // assign kernel_load_from_mem_done signal
  assign kernel_load_from_mem_done = (state == KERNEL_LOAD_TO_L0) && (gp_counter == col - 1);
  assign kernel_load_to_mac_done = (state == KERNEL_LOAD_TO_MAC) && (gp_counter == (2*col) - 1);
  assign act_load_from_mem_done = (state == ACT_LOAD_TO_L0) && (gp_counter == num_nij_to_compute - 1);

  // FIFO flush pointer control
  always @ (posedge clk) begin
    if (reset) begin
      l0_flush_ptr <= 1'b0;
    end
    else begin
      if(INCLUDE_FLUSH_FIFO) begin
        if((state == MAC_COMPUTE) && (gp_counter == num_nij_to_compute - 1)) begin
          l0_flush_ptr <= 1'b1;
        end
        else begin
          l0_flush_ptr <= 1'b0;
        end
      end
      else begin
        l0_flush_ptr <= 1'b0;
      end
    end
  end

  // L0 FIFO signals control
  always @ (posedge clk) begin
    if (reset) begin
      l0_rd <= 1'b0;
      l0_wr <= 1'b0;
    end
    else begin
      l0_rd <= next_l0_rd;
      l0_wr <= next_l0_wr;
    end
  end

  always @(*) begin
    if (reset) begin
      next_l0_rd = 1'b0;
      next_l0_wr = 1'b0;
    end
    else begin
      case(next_state)
        KERNEL_LOAD_TO_L0: begin
          next_l0_wr = 1'b1;
          next_l0_rd = 1'b0;
        end
        KERNEL_LOAD_TO_MAC: begin
          next_l0_wr = 1'b0;
          if((gp_counter < (col-1)) || act_load_from_mem_done || (kernel_load_from_mem_done)) begin
            next_l0_rd = 1'b1;
          end 
          else begin
            next_l0_rd = 1'b0;
          end
        end
        ACT_LOAD_TO_L0: begin
          next_l0_wr = 1'b1;
          next_l0_rd = 1'b0;
        end
        MAC_COMPUTE: begin
          next_l0_wr = 1'b0;
          if(gp_counter < (num_nij_to_compute-1)) begin
            next_l0_rd = 1'b1;
          end
          else begin
            next_l0_rd = 1'b0;
          end
        end
        default: begin
          next_l0_wr = 1'b0;
          next_l0_rd = 1'b0;
        end
      endcase
    end
  end 

  // MAC Execute and Load signals control
  always @ (posedge clk) begin
    if (reset) begin
      execute <= 1'b0;
      load <= 1'b0;
    end
    else begin
      case(next_state)
        KERNEL_LOAD_TO_MAC: begin
          execute <= 1'b0;
          if((gp_counter < (col-1)) || act_load_from_mem_done || (kernel_load_from_mem_done)) begin
            load <= 1'b1; // Load
          end
          else begin
            load <= 1'b0; // Load
          end
        end
        MAC_COMPUTE: begin    
          load <= 1'b0;

          if(gp_counter < (num_nij_to_compute)) begin
            execute <= 1'b1; // Execute
          end
          else begin
            execute <= 1'b0; // Execute
          end

        end
        default: begin
          execute <= 1'b0;
          load <= 1'b0;
        end
      endcase
    end
  end
  
  // OFIFO read control
  reg ofifo_rd_q;

  always @ (posedge clk) begin
    if (reset) begin
      ofifo_rd <= 1'b0;
    end
    else begin
      if(state == MAC_COMPUTE && (gp_counter >= (num_nij_to_compute + (2*col) + 1))) begin
        ofifo_rd <= 1'b0;
      end
      else if(state == MAC_COMPUTE && ofifo_valid) begin
        ofifo_rd <= 1'b1;
      end
      else begin
        ofifo_rd <= 1'b0;
      end
    end
  end

  always @ (posedge clk) begin
    if (reset) begin
      ofifo_rd_q <= 1'b0;
    end
    else begin
      ofifo_rd_q <= ofifo_rd;
    end
  end 

  always @ (posedge clk) begin
    if (reset) begin
      start_psum_gp_counter <= 0;
    end
    else begin
      if(state == MAC_COMPUTE && ofifo_rd_q) begin
        start_psum_gp_counter <= start_psum_gp_counter + 1;
      end
      else begin
        start_psum_gp_counter <= 0;
      end
    end
  end

  // SFU start control
  always @ (posedge clk) begin
    if (reset) begin
      sfu_start <= 1'b0;
    end
    else begin
      if(next_state == SFU_START) begin
        sfu_start <= 1'b1;
      end
      else begin
        sfu_start <= 1'b0;
      end
    end
  end

  assign sfu_active_to_mem = sfu_active || (state == SFU_PROCESS);

  // MAC Reset control
  always @ (posedge clk) begin
    if (reset) begin
      mac_reset <= 1'b0;
    end
    else begin
      if((state == KERNEL_LOAD_TO_L0) && (gp_counter < 2)) begin
        mac_reset <= 1'b1;
      end
      else begin
        mac_reset <= 1'b0;
      end
    end 
  end

  `ifndef SYNTHESIS
    // General String for state name (for debug)
    reg [8*40-1:0] state_name_str;

    always @(*) begin
      case(state)
        3'b000: state_name_str = "IDLE";
        3'b001: state_name_str = "KERNEL_LOAD_TO_L0";
        3'b010: state_name_str = "KERNEL_LOAD_TO_MAC";
        3'b011: state_name_str = "ACT_LOAD_TO_L0";
        3'b100: state_name_str = "MAC_COMPUTE";
        3'b101: state_name_str = "SFU_START";
        3'b110: state_name_str = "SFU_PROCESS";
        default: state_name_str = "UNKNOWN"; 
      endcase
    end
  `endif

  wire weights_sram_clk_en_pre;
  wire psum_sram_clk_en_pre;
  wire mac_array_clk_en_pre;
  wire l0_clk_en_pre;
  wire sfu_clk_en_pre;
  wire ofifo_clk_en_pre;

  wire [5:0] sync_in;
  wire [5:0] sync_out;

  genvar sync_ii;
  generate
    for(sync_ii = 0; sync_ii < 6; sync_ii = sync_ii + 1) begin : SYNC_GEN
      sync #(.STAGES(2)) sync_inst (
        .clk(clk),
        .reset(reset),
        .async_in(sync_in[sync_ii]),
        .sync_out(sync_out[sync_ii])
      );
    end
  endgenerate

  assign sync_in[0] = weights_sram_clk_en_pre; 
  assign sync_in[1] = psum_sram_clk_en_pre; 
  assign sync_in[2] = mac_array_clk_en_pre; 
  assign sync_in[3] = l0_clk_en_pre; 
  assign sync_in[4] = sfu_clk_en_pre; 
  assign sync_in[5] = ofifo_clk_en_pre; 

  assign weights_sram_clk_en_pre = debug_mode || ((next_state == KERNEL_LOAD_TO_L0) || (state == IDLE) || (next_state == ACT_LOAD_TO_L0)); 
  assign psum_sram_clk_en_pre    = debug_mode || (((next_state == MAC_COMPUTE) || (next_state == SFU_START) || (next_state == SFU_PROCESS)) || (state == IDLE));
  assign mac_array_clk_en_pre    = debug_mode || (((next_state == MAC_COMPUTE) || (next_state == KERNEL_LOAD_TO_MAC) || (state == IDLE) || (next_state == KERNEL_LOAD_TO_L0) && (gp_counter < 2)));
  assign l0_clk_en_pre           = debug_mode || (!(next_state == IDLE || (next_state == SFU_START) || (next_state == SFU_PROCESS)));
  assign sfu_clk_en_pre          = debug_mode || ((next_state == SFU_START) || (next_state == SFU_PROCESS));
  assign ofifo_clk_en_pre        = debug_mode || ((next_state == MAC_COMPUTE) || (next_state == SFU_START) || (next_state == SFU_PROCESS));

  assign weights_sram_clk_en = weights_sram_clk_en_pre || sync_out[0];
  assign psum_sram_clk_en    = psum_sram_clk_en_pre || sync_out[1];
  assign mac_array_clk_en    = mac_array_clk_en_pre || sync_out[2];
  assign l0_clk_en           = l0_clk_en_pre || sync_out[3];
  assign sfu_clk_en          = sfu_clk_en_pre || sync_out[4];
  assign ofifo_clk_en        = ofifo_clk_en_pre || sync_out[5];

  // FIFO Ld Mode
  assign ld_mode = ~(execute | (next_state == MAC_COMPUTE));

endmodule
