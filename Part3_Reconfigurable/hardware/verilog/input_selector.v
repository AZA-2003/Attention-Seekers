// Created by prof. Mingu Kang @VVIP Lab in UCSD ECE department
// Please do not spread this code without permission 
module input_selector (in, add, out);

  parameter bw = 4;
  parameter nijg = 36;
  parameter row = 8;

  wire  [5:0] add0, add1, add2, add3, add4, add5, add6, add7;
  wire  [bw-1:0] out0, out1, out2, out3, out4, out5, out6, out7;

  input  [nijg*bw-1:0] in;
  input  [6*row-1:0] add;
  output [row*bw-1:0] out;

  assign add0 = add[5:0];
  assign add1 = add[11:6];
  assign add2 = add[17:12];
  assign add3 = add[23:18];
  assign add4 = add[29:24];
  assign add5 = add[35:30];
  assign add6 = add[41:36];	
  assign add7 = add[47:42];

  assign out[3:0] = out0;
  assign out[7:4] = out1;
  assign out[11:8] = out2;
  assign out[15:12] = out3;
  assign out[19:16] = out4;
  assign out[23:20] = out5;
  assign out[27:24] = out6;	
  assign out[31:28] = out7;

  fifo_mux_64_1 add0_mux(
     .out(out0),
     .sel(add0),
     .in(in));
  fifo_mux_64_1 add1_mux(
     .out(out1),
     .sel(add1),
     .in(in));
  fifo_mux_64_1 add2_mux(
     .out(out2),
     .sel(add2),
     .in(in));
  fifo_mux_64_1 add3_mux(
     .out(out3),
     .sel(add3),
     .in(in));
  fifo_mux_64_1 add4_mux(
     .out(out4),
     .sel(add4),
     .in(in));
  fifo_mux_64_1 add5_mux(
     .out(out5),
     .sel(add5),
     .in(in));
  fifo_mux_64_1 add6_mux(
     .out(out6),
     .sel(add6),
     .in(in));
  fifo_mux_64_1 add7_mux(
     .out(out7),
     .sel(add7),
     .in(in));


endmodule
