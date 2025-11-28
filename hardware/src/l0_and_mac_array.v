// Wrapper that instantiates l0 and mac_array and connects l0.out -> mac_array.in_w
// Exposes l0 input and control pins (l0_in, l0_wr, l0_rd) and mac_array outputs

module l0_and_mac_array #(
  parameter row = 8,
  parameter bw  = 4,
  parameter psum_bw = 16,
  parameter col = 8
) (
  input  clk,
  input  reset,

  // Expose l0 inputs so an external TB or top can drive them
  input  start_kernel_load,
  input  start_mac_compute,
  input  [7:0] num_nij_to_compute, // Up to 256 nij to compute
  input  [row*bw-1:0] l0_in,
  input l0_wr,

  // Expose mac_array outputs
  output [psum_bw*col-1:0] mac_out_s,
  output [col-1:0] mac_valid,

  // ofifo interface
  input ofifo_rd,
  output [psum_bw*col-1:0] ofifo_out,

  // Expose l0 status optionally
  output l0_o_full,
  output l0_o_ready
);

  // internal connection: l0 output -> mac_array in_w
  wire [row*bw-1:0] l0_out_w;
  wire [psum_bw*col-1:0] mac_in_n;
  reg [1:0] mac_inst_w, next_mac_inst_w;
  reg l0_rd, next_l0_rd;
  reg flush_rd_ptr, next_flush_rd_ptr;

  // Tie mac_array optional inputs to reasonable defaults (in_n=0, inst_w=0)
  assign mac_in_n = { (psum_bw*col){1'b0} };

  // Instantiate l0
  l0 #(.row(row), .bw(bw)) u_l0 (
    .clk(clk),
    .in(l0_in),
    .out(l0_out_w),
    .rd(l0_rd),
    .wr(l0_wr),
    .flush_rd_ptr(flush_rd_ptr),
    .o_full(l0_o_full),
    .reset(reset),
    .o_ready(l0_o_ready)
  );

  // Instantiate mac_array
  mac_array #(.bw(bw), .psum_bw(psum_bw), .col(col), .row(row)) u_mac_array (
    .clk(clk),
    .reset(reset),
    .out_s(mac_out_s),
    .in_w(l0_out_w),
    .in_n(mac_in_n),
    .inst_w(mac_inst_w),
    .valid(mac_valid)
  );

  // Instantiate output FIFOs (ofifo) to buffer per-column psums
  wire ofifo_o_full;
  wire ofifo_o_ready;
  wire ofifo_o_valid;

  ofifo #(.col(col), .bw(psum_bw)) u_ofifo (
    .clk(clk),
    .reset(reset),
    .rd(ofifo_rd),
    .wr(mac_valid),
    .in(mac_out_s),

    .out(ofifo_out),
    .o_full(ofifo_o_full),
    .o_ready(ofifo_o_ready),
    .o_valid(ofifo_o_valid)
  );

  // Controller code
  // TBD: Need to perform for kij > 1 - only compute for kij = 1 for now

  reg [7+$clog2(col):0] mac_inst_counter, next_mac_inst_counter;

  reg [2:0] state;
  reg [8*40-1:0] state_name_str;

  // State mapping
  localparam IDLE = 3'b000;
  localparam KERNEL_LOAD = 3'b001;
  localparam MAC_COMPUTE = 3'b010; 

  always @ (posedge clk) begin
    if (reset) begin
      state <= IDLE;
    end
    else begin
      case(state)
        IDLE: begin
          if (start_kernel_load) begin
            state <= KERNEL_LOAD;
          end
          else if(start_mac_compute) begin
            state <= MAC_COMPUTE;
          end
          else begin
            state <= IDLE;
          end
        end

        KERNEL_LOAD: begin
          if (mac_inst_counter == mac_inst_max_count) begin
            state <= IDLE;
          end
          else begin
            state <= KERNEL_LOAD;
          end
        end

        MAC_COMPUTE: begin
          if (mac_inst_counter == mac_inst_max_count) begin
            state <= IDLE;
          end
          else begin
            state <= MAC_COMPUTE;
          end
        end

        default: state <= IDLE;
      endcase
    end
  end

  `ifndef SYNTHESIS
    always @(*) begin
      case(state)
        3'b000: state_name_str = "IDLE";
        3'b001: state_name_str = "KERNEL_LOAD";
        3'b010: state_name_str = "MAC_COMPUTE";
        default: state_name_str = "UNKNOWN"; 
      endcase
    end
  `endif

  always @ (posedge clk) begin
    if (reset) begin // Synchronous reset
      mac_inst_counter <= 0;
      mac_inst_w <= 2'b00;
      flush_rd_ptr <= 1'b0;
    end
    else begin
      // Simple example controller: cycle through inst_w values every cycle
      mac_inst_w <= next_mac_inst_w; 
      mac_inst_counter <= next_mac_inst_counter;
      l0_rd <= next_l0_rd;
      flush_rd_ptr <= 1'b0;
    end
  end

  wire [7+$clog2(col):0] mac_inst_max_count;

  assign mac_inst_max_count = state == KERNEL_LOAD ? 3*col - 1 : 
                              state == MAC_COMPUTE ? num_nij_to_compute + (2*col - 1) :
                              2 * col - 1; 

  always @(*) begin
    if (reset) begin
      next_mac_inst_counter = 0;
      next_mac_inst_w = 2'b00;
      next_l0_rd = 1'b0;
      next_flush_rd_ptr = 1'b0;
    end
    else begin
      if (mac_inst_counter == mac_inst_max_count) begin
        next_mac_inst_counter = 0;
      end
      else if (start_kernel_load || start_mac_compute || mac_inst_counter != 0) begin
        next_mac_inst_counter = mac_inst_counter + 1;
      end
      else begin
        next_mac_inst_counter = 0;
      end

      if(start_kernel_load) begin
        next_mac_inst_w = 2'b01;
        next_l0_rd = 1'b1;
      end
      else if(start_mac_compute) begin
        next_l0_rd = 1'b1;
        next_mac_inst_w = 2'b10;
      end
      else if(state == KERNEL_LOAD && (mac_inst_counter >= 1 && mac_inst_counter < col)) begin
        next_mac_inst_w = 2'b01;
        next_l0_rd = 1'b1;
      end
      else if(state == MAC_COMPUTE && (mac_inst_counter >= 1 && mac_inst_counter < num_nij_to_compute)) begin
        next_mac_inst_w = 2'b10;
        next_l0_rd = 1'b1;
      end
      else begin
        next_mac_inst_w = 2'b00;
        next_l0_rd = 1'b0;
      end

      if(state == MAC_COMPUTE && mac_inst_counter == mac_inst_max_count) begin
        next_flush_rd_ptr = 1'b1;
      end
      else begin
        next_flush_rd_ptr = 1'b0;
      end
    end
  end
endmodule
