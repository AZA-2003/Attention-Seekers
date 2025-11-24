// Created by prof. Mingu Kang @VVIP Lab in UCSD ECE department
// Please do not spread this code without permission 
module sram #(
    parameter depth = 2048,
    parameter DATA_W = 16,
    parameter ADDR_W = $clog2(depth)
)(CLK, D, Q, CEN, WEN, A);

  input  CLK;
  input  WEN;
  input  CEN;
  input  [DATA_W-1:0] D;
  input  [ADDR_W-1:0] A;
  output [DATA_W-1:0] Q;
  

  reg [DATA_W-1:0] memory [depth-1:0];
  reg [ADDR_W-1:0] add_q;
  assign Q = memory[add_q];

  always @ (posedge CLK) begin

   if (!CEN && WEN) // read 
      add_q <= A;
   if (!CEN && !WEN) // write
      memory[A] <= D; 

  end

endmodule