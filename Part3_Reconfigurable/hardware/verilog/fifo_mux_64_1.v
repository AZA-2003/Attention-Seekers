// Created by prof. Mingu Kang @VVIP Lab in UCSD ECE department
// Please do not spread this code without permission 
module fifo_mux_64_1 (out, sel, in);

  parameter bw = 4;
  parameter nijg = 36;

  input [bw*nijg-1:0]in;

  input  [5:0 ] sel ;
  
  wire [bw-1:0] in0, in1, in2, in3, in4, in5, in6, in7, in8, in9, in10, in11, in12, in13, in14, in15, in16, in17, in18, in19, in20, in21, in22, in23, in24, in25, in26, in27, in28, in29, in30, in31, in32, in33, in34, in35; 

  assign in35=in[3:0];
  assign in34=in[7:4];
  assign in33=in[11:8];
  assign in32=in[15:12];
  assign in31=in[19:16];
  assign in30=in[23:20];
  assign in29=in[27:24];
  assign in28=in[31:28];
  assign in27=in[35:32];
  assign in26=in[39:36];
  assign in25=in[43:40];
  assign in24=in[47:44];
  assign in23=in[51:48];
  assign in22=in[55:52];
  assign in21=in[59:56];
  assign in20=in[63:60];
  assign in19=in[67:64];
  assign in18=in[71:68];
  assign in17=in[75:72];
  assign in16=in[79:76];
  assign in15=in[83:80];
  assign in14=in[87:84];
  assign in13=in[91:88];
  assign in12=in[95:92];
  assign in11=in[99:96];
  assign in10=in[103:100];
  assign in9=in[107:104];
  assign in8=in[111:108];
  assign in7=in[115:112];
  assign in6=in[119:116];
  assign in5=in[123:120];
  assign in4=in[127:124];
  assign in3=in[131:128];
  assign in2=in[135:132];
  assign in1=in[139:136];
  assign in0=in[143:140];

  output [bw-1:0] out;

  wire   [bw-1:0] out_sub0, out_sub1 , out_sub2, out_sub3, out_sub1_0, out_sub1_1;


 fifo_mux_16_1  #(.bw(bw)) mux_16_1a (.in0(in0), .in1(in1), .in2(in2), .in3(in3), .in4(in4), .in5(in5), .in6(in6), .in7(in7),  .in8(in8), .in9(in9), .in10(in10), .in11(in11), .in12(in12), .in13(in13), .in14(in14), .in15(in15), .sel(sel[3:0]), .out(out_sub0));
 
 fifo_mux_16_1  #(.bw(bw)) mux_16_1b (.in0(in16), .in1(in17), .in2(in18), .in3(in19), .in4(in20), .in5(in21), .in6(in22), .in7(in23),  .in8(in24), .in9(in25), .in10(in26), .in11(in27), .in12(in28), .in13(in29), .in14(in30), .in15(in31), .sel(sel[3:0]), .out(out_sub1));

 fifo_mux_16_1  #(.bw(bw)) mux_16_1c (.in0(in32), .in1(in33), .in2(in34), .in3(in35), .sel(sel[3:0]), .out(out_sub2));

 //fifo_mux_16_1  #(.bw(bw)) mux_16_1d (.in0(), .in1(), .in2(), .in3(), .in4(), .in5(), .in6(), .in7(),  .in8(), .in9(), .in10(), .in11(), .in12(), .in13(), .in14(), .in15(), .sel(sel[3:0]), .out(out_sub3));


 fifo_mux_2_1 #(.bw(bw)) fifo_mux_2_1e (.in0(out_sub0), .in1(out_sub1), .sel(sel[4]), .out(out_sub1_0));
 fifo_mux_2_1 #(.bw(bw)) fifo_mux_2_1f (.in0(out_sub2), .in1(out_sub3), .sel(sel[4]), .out(out_sub1_1));
 
 fifo_mux_2_1 #(.bw(bw)) fifo_mux_2_1g (.in0(out_sub1_0), .in1(out_sub1_1), .sel(sel[5]), .out(out));


endmodule
