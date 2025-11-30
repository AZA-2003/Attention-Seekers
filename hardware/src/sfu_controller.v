module sfu_controller #(
	parameter ADDR_W      = 11,
  parameter num_oij     = 16,
  parameter num_nij     = 36,
  parameter num_oc      = 8,
  parameter num_oij_row = 4,
  parameter num_kij_row = 3,
  parameter num_nij_row = 6
)
(
    input  wire                clk,
    input  wire                reset,
    input  wire                start_sfu,

    output reg [ADDR_W-1:0]    psum_mem_addr,
    output reg                 psum_mem_rd_enable,
    output reg                 psum_mem_wr_enable,
    output reg                 sfu_active,
    output wire [num_oc*2-1:0] sfu_op_array
);

  // State encoding
  localparam OP_NOP  = 3'b000;
  localparam OP_SET  = 3'b001;
  localparam OP_ACC  = 3'b010;
  localparam OP_RELU  = 3'b011;
  localparam OP_RELU_WAIT  = 3'b100;
  localparam OP_WRITEBACK  = 3'b101;

  // SFU states
  reg [2:0] sfu_op_state, next_sfu_op_state;
  reg [1:0] sfu_op, next_sfu_op, sfu_op_delayed;

  // Counters for SFU operation
  reg [3:0] curr_oij_row, curr_oij_col;
  reg [3:0] curr_kij_row, curr_kij_col;

  reg [7:0] curr_oij_idx;

  // Address calculation for PSUM memory
  reg [ADDR_W-1:0] next_psum_mem_addr, start_psum_addr;
  reg next_psum_mem_wr_enable, next_psum_mem_rd_enable;

  `ifndef SYNTHESIS
    reg [8*40-1:0] state_name_str;
    reg [8*40-1:0] sfu_op_delyayed_str;

    // For debugging: state name strings
    always @(*) begin
      case (sfu_op_state)
        OP_NOP: state_name_str = "OP_NOP";
        OP_SET: state_name_str = "OP_SET";
        OP_ACC: state_name_str = "OP_ACC";
        OP_RELU: state_name_str = "OP_RELU";
        OP_RELU_WAIT: state_name_str = "OP_RELU_WAIT";
        OP_WRITEBACK: state_name_str = "OP_WRITEBACK";
        default: state_name_str = "UNKNOWN";
      endcase
    end

    // For debugging: sfu_op delayed string
    always @(*) begin
      case (sfu_op_delayed)
        2'b00: sfu_op_delyayed_str = "OP_NOP";
        2'b01: sfu_op_delyayed_str = "OP_SET";
        2'b10: sfu_op_delyayed_str = "OP_ACC";
        2'b11: sfu_op_delyayed_str = "OP_RELU";
        default: sfu_op_delyayed_str = "UNKNOWN";
      endcase
    end
  `endif

  // SFU controller FSM state machine
  always @(posedge clk) begin
    if (reset) begin
      sfu_op_state <= 3'b000;
    end
    else begin
      sfu_op_state <= next_sfu_op_state;
    end
  end

  always @(*) begin
    // default to hold current state to avoid latches
    next_sfu_op_state = sfu_op_state;

    case (sfu_op_state)
      OP_NOP: begin
        // State logic for OP_NOP
        if(start_sfu || (sfu_active && (curr_kij_row == 0) && (curr_kij_col == 0))) begin
          next_sfu_op_state = OP_SET; // Transition to OP_SET
        end
        else begin
          next_sfu_op_state = sfu_op_state;
        end
      end
      OP_SET: begin
        // State logic for OP_SET
        next_sfu_op_state = OP_ACC; // Transition to OP_ACC
      end
      OP_ACC: begin
        // Stay in OP_ACC until all KIJ processed
        if((curr_kij_col != (num_kij_row - 1)) || (curr_kij_row != (num_kij_row - 1))) begin
          next_sfu_op_state = OP_ACC; // Transition back to OP_SET
        end
        else begin
          next_sfu_op_state = OP_RELU; // Transition to OP_RELU
        end
      end
      OP_RELU: begin
        // State logic for OP_RELU
        next_sfu_op_state = OP_RELU_WAIT; // Transition to OP_RELU_WAIT
      end
      OP_RELU_WAIT: begin
        // State logic for OP_RELU_WAIT
        next_sfu_op_state = OP_WRITEBACK; // Transition to OP_WRITEBACK
      end
      OP_WRITEBACK: begin
        // State logic for OP_WRITEBACK
        if(curr_oij_idx != (num_oij -1)) begin
          next_sfu_op_state = OP_SET; // Transition back to OP_SET
        end
        else begin
          next_sfu_op_state = OP_NOP; // Transition back to OP_NOP
        end
      end
      default: begin
        next_sfu_op_state = sfu_op_state; // Stay in current state 
      end
    endcase
  end

  // SFU operation encoding based on state
  always @(posedge clk) begin
    if (reset) begin
      sfu_op <= OP_NOP;
    end
    else begin
      sfu_op <= next_sfu_op;
    end
  end

  always @(*) begin
    if(reset) begin
      next_sfu_op = OP_NOP;
    end
    else begin
      case (sfu_op_state)
        OP_NOP: begin
          next_sfu_op = OP_NOP;
        end
        OP_SET: begin
          next_sfu_op = OP_SET;
        end
        OP_ACC: begin
          next_sfu_op = OP_ACC;
        end
        OP_RELU: begin
          next_sfu_op = OP_RELU;
        end
        OP_RELU_WAIT: begin
          next_sfu_op = OP_NOP; // No operation during wait
        end
        OP_WRITEBACK: begin
          next_sfu_op = OP_NOP; // No operation during writeback
        end
        default: begin
          next_sfu_op = OP_NOP;
        end
      endcase
    end
  end

  // Delay sfu_op by one cycle for timing alignment
  always @(posedge clk) begin
    if (reset) begin
      sfu_op_delayed <= OP_NOP;
    end
    else begin
      sfu_op_delayed <= sfu_op;
    end
  end

  // KIJ counters implementation
  always @(posedge clk) begin
    if (reset) begin
      curr_kij_row <= 4'b0;
      curr_kij_col <= 4'b0;
    end
    else begin
      if(sfu_op_state == OP_WRITEBACK) begin
        curr_kij_row <= 4'b0;
        curr_kij_col <= 4'b0;
      end
      else if (sfu_op_state == OP_ACC) begin
        if (curr_kij_col == (num_kij_row - 1) && (curr_kij_row != (num_kij_row - 1))) begin
          curr_kij_col <= 4'b0;
        end
        else if(curr_kij_col == (num_kij_row - 1) && (curr_kij_row == (num_kij_row - 1))) begin
          curr_kij_col <= curr_kij_col;
        end
        else begin
          curr_kij_col <= curr_kij_col + 4'b1;
        end

        if(curr_kij_col == (num_kij_row - 1)) begin
          curr_kij_row <= curr_kij_row + 4'b1;
        end
        else begin
          curr_kij_row <= curr_kij_row;
        end
      end
      else if(sfu_op_state == OP_SET) begin
        curr_kij_row <= 4'b0;
        curr_kij_col <= 4'b0001;
      end
      else begin
        curr_kij_row <= curr_kij_row;
        curr_kij_col <= curr_kij_col;
      end
    end
  end

  // OIJ counters implementation
  always @(posedge clk) begin
    if (reset) begin
      curr_oij_row <= 4'b0;
      curr_oij_col <= 4'b0;
    end
    else begin
      if(sfu_op_state == OP_WRITEBACK) begin
        if(curr_oij_col == (num_oij_row - 1) && (curr_oij_row != (num_oij_row - 1))) begin
          curr_oij_col <= 4'b0;
        end
        else begin
          curr_oij_col <= curr_oij_col + 4'b1;
        end
        if(curr_oij_col == (num_oij_row - 1)) begin
          curr_oij_row <= curr_oij_row + 4'b1;
        end
        else begin
          curr_oij_row <= curr_oij_row;
        end
      end
      else begin
        curr_oij_row <= curr_oij_row;
        curr_oij_col <= curr_oij_col;
      end
    end
  end

  // OIJ index calculation
  always @(posedge clk) begin
    if (reset) begin
      curr_oij_idx <= 8'b0;
      sfu_active <= 1'b0;
    end
    else begin
      sfu_active <= sfu_active;

      if(start_sfu) begin
        sfu_active <= 1'b1;
      end

      if((sfu_op_state == OP_WRITEBACK) && curr_oij_idx == (num_oij -1)) begin
        sfu_active <= 1'b0;
        curr_oij_idx <= 8'b0;
      end
      else if(sfu_op_state == OP_WRITEBACK) begin
        curr_oij_idx <= curr_oij_idx + 8'b1;
      end
      else begin
        curr_oij_idx <= curr_oij_idx;
      end
    end
  end

  // PSUM memory address calculation
  /* 
    NOP state:
      - Hold address
      - Disable read/write
    SET state:
      - Read from PSUM memory at calculated address
      - Enable read
    ACC state:
      - Read from PSUM memory at calculated address
      - Enable read
    RELU state:
      - Hold address
      - Disable read/write
    RELU_WAIT state:
      - Hold address
      - Disable read/write
    WRITEBACK state:
      - Write to PSUM memory at calculated address
      - Enable write
    
    Address calculation:
      SET state:
        psum_mem_addr = start_curr_oij_psum_addr
      ACC state:
        if(curr_kij_col != (num_kij_row - 1)) begin
          psum_mem_addr = psum_mem_addr + num_kij + 1
        end
        else begin
          psum_mem_addr = psum_mem_addr + num_kij + 2
        end

      
      WRITEBACK state:
        psum_mem_addr = curr_oij_idx
        if(curr_oij_col != (num_oij_row - 1)) begin
          start_curr_oij_psum_addr = start_curr_oij_psum_addr + 1 
        end
        else begin
          start_curr_oij_psum_addr = start_curr_oij_psum_addr + 2 
        end
  */

  // Combinational PSUM memory control logic (decide next address and enables)
  always @(*) begin
    // defaults: hold address, disable accesses
    next_psum_mem_addr = psum_mem_addr;
    next_psum_mem_rd_enable = 1'b0;
    next_psum_mem_wr_enable = 1'b0;

    case (sfu_op_state)
      OP_SET: begin
        // Read from start address for this OIJ
        next_psum_mem_addr = start_psum_addr;
        next_psum_mem_rd_enable = 1'b1;
      end

      OP_ACC: begin
        // Read successive PSUM addresses according to KIJ position
        next_psum_mem_rd_enable = 1'b1;
        if (curr_kij_col != 0) begin
          next_psum_mem_addr = psum_mem_addr + (num_nij + 1);
        end
        else begin
          next_psum_mem_addr = psum_mem_addr + (num_nij + 1 + num_kij_row);
        end
      end

      OP_NOP: begin
        // Hold address, no access
        next_psum_mem_addr = psum_mem_addr;
        next_psum_mem_rd_enable = 1'b0;
        next_psum_mem_wr_enable = 1'b0;
      end

      OP_WRITEBACK: begin
        // Writeback current output index into PSUM memory
        next_psum_mem_addr = { {(ADDR_W-8){1'b0}}, curr_oij_idx }; // zero-extend curr_oij_idx
        next_psum_mem_wr_enable = 1'b1;
      end

      default: begin
        next_psum_mem_addr = psum_mem_addr;
        next_psum_mem_rd_enable = 1'b0;
        next_psum_mem_wr_enable = 1'b0;
      end
    endcase
  end

  // Sequential updates for PSUM address outputs and start_psum_addr bookkeeping
  always @(posedge clk) begin
    if (reset) begin
      psum_mem_addr <= {ADDR_W{1'b0}};
      psum_mem_rd_enable <= 1'b0;
      psum_mem_wr_enable <= 1'b0;
      start_psum_addr <= {ADDR_W{1'b0}};
    end
    else begin
      psum_mem_addr <= next_psum_mem_addr;
      psum_mem_rd_enable <= next_psum_mem_rd_enable;
      psum_mem_wr_enable <= next_psum_mem_wr_enable;

      // Update start_psum_addr at the end of a WRITEBACK iteration
      if (sfu_op_state == OP_WRITEBACK) begin
        if (curr_oij_col != (num_oij_row - 1)) begin
          start_psum_addr <= start_psum_addr + 1;
        end
        else begin
          start_psum_addr <= start_psum_addr + num_kij_row;
        end
      end
      else begin
        start_psum_addr <= start_psum_addr;
      end
    end
  end

  // Output SFU OP replicated for all output channels
  assign sfu_op_array = {num_oc{sfu_op_delayed}};

endmodule
