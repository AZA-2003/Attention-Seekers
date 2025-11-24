// Created by prof. Mingu Kang @VVIP Lab in UCSD ECE department
// Please do not spread this code without permission 
module sram #(
    parameter ADDR_W = 11,
    parameter DATA_W = 16
)(CLK, D, Q, CEN, WEN, A);

  parameter DEPTH = 2**ADDR_W;

  input  CLK;
  input  WEN;
  input  CEN;
  input  [DATA_W-1:0] D;
  input  [ADDR_W-1:0] A;
  output [DATA_W-1:0] Q;
  

  reg [DATA_W-1:0] memory [DEPTH:0];
  reg [ADDR_W-1:0] add_q;
  assign Q = memory[add_q];

  always @ (posedge CLK) begin

   if (!CEN && WEN) // read 
      add_q <= A;
   if (!CEN && !WEN) // write
      memory[A] <= D; 

  end

endmodule