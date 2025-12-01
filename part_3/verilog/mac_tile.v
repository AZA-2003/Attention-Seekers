// reconfigurable mac tile for OS/WS dataflow, project part 3

// verilog_format: off
module mac_tile (clk, out_s, in_w, out_e, in_n, inst_w, inst_e, reset);
// verilog_format: on

  parameter bw = 4;
  parameter psum_bw = 16;

  output [psum_bw-1:0] out_s;
  input [bw-1:0] in_w;
  output [bw-1:0] out_e;
  input [2:0] inst_w;  // inst_w[2]:OS, inst_w[1]:execute, inst_w[0]:kernel loading/flush in OS
  output [2:0] inst_e;
  input [psum_bw-1:0] in_n;
  input clk;
  input reset;

  reg [bw-1:0] a_q;
  reg [bw-1:0] b_q;
  reg [psum_bw-1:0] c_q;
  wire [psum_bw-1:0] mac_out;

  wire os, execute, kflush;
  assign os = inst_w[2];
  assign execute = inst_w[1];
  assign kflush = inst_w[0]; // kernel load in WS/ flush in OS

  reg load_ready_q;
  reg [2:0] inst_q;

  // verilog_format: off

  assign out_s = (!os)? mac_out :                                     // just mac_out in ws
                        (execute)? {{(psum_bw-bw){b_q[bw-1]}}, b_q} : // if executing in OS, output b_q SIGN-extended
                        c_q;                                          // if flushing in OS, output c_q
  // {psum_bw{1'b0}};
// verilog_format: off
  assign out_e = a_q;
  assign inst_e = inst_q;

  // verilog_format: off
  mac #(.bw(bw), .psum_bw(psum_bw)) mac_instance (
      .a (a_q), .b(b_q), .c(c_q),
      .out(mac_out)
  );
// verilog_format: on

  //aq
  // behavior is the same in WS/ OS
  always @(posedge clk) begin
    if (reset) a_q <= 0;
    else begin
        if (|inst_w[1:0]) begin
          a_q <= in_w;
        end
    end
  end

  // b_q, inst_q, load_ready_q (as of now unused)
  //TODO try to reuse load_ready_q in OS to "set" c_q<=0 of exec OS, reset makes lrq =1
  always @(posedge clk) begin
    if (reset) begin
      b_q <= 0;
      load_ready_q <= 1'b1;
      inst_q <= 0;
    end else begin
      if (!os) begin  // WS
        inst_q[2:1] <= inst_w[2:1];
        if (kflush && load_ready_q) begin
          b_q <= in_w;
          load_ready_q <= 1'b0;
        end else if (!load_ready_q) begin
          inst_q[0] <= kflush;
        end
      end else begin  // OS
        inst_q <= inst_w;
        if (execute) b_q <= in_n[bw-1:0];
      end
    end
  end

  // cq
  always @(posedge clk) begin
    if (reset) begin
      c_q <= 0;
    end else begin
      if (!os) begin //WS
        if (|inst_w[1:0]) begin
          c_q <= in_n;
        end
      end else begin //OS
        if (kflush)  //flush
          c_q <= in_n;
        else if (inst_q[1]) c_q <= mac_out;  //execute of OS
      end
    end
  end

endmodule
