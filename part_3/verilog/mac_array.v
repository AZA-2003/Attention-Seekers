// Created by prof. Mingu Kang @VVIP Lab in UCSD ECE department
// Please do not spread this code without permission
module mac_array (clk, reset, out_s, in_w, in_n, ld_mode, inst_w, valid);

  parameter bw = 4;
  parameter psum_bw = 16;
  parameter col = 8;
  parameter row = 8;

  input  clk, reset;
  output [psum_bw*col-1:0] out_s;
  input  [row*bw-1:0] in_w;
  input  [2:0] inst_w; // inst_w[2]:OS, inst_w[1]:execute, inst_w[0]:kernel load / flush in OS
  input  [psum_bw*col-1:0] in_n;
  input  ld_mode;
  output [col-1:0] valid;

  // changed to 3 bits per row
  reg [3*row-1:0] inst_w_temp;
  wire [psum_bw*col*(row+1)-1:0] temp;
  wire [row*col-1:0] valid_temp;
  genvar i;

  for (i = 1; i < row+1; i = i + 1) begin : row_num
    mac_row #(.bw(bw), .psum_bw(psum_bw)) mac_row_instance (
        .clk(clk), .reset(reset),
        .in_n(temp[((psum_bw*col*i)-1) : (psum_bw*col*(i-1))]),
        .out_s(temp[((psum_bw*col*(i+1))-1) : (psum_bw*col*i)]),
        .in_w(in_w[((bw*i)-1) : (bw*(i-1))]),
        .inst_w(inst_w_temp[((3*i)-1) : (3*(i-1))]), // now 3bit wide slicee
        .valid(valid_temp[((col*i)-1) : (col*(i-1))])
    );
  end

  always @ (posedge clk) begin
   // inst_w flows from row0 to row(row-1)
   if (reset) begin
      inst_w_temp <= 0;
   end
   else begin
    if (!ld_mode) begin // this is execute in OS/ WS
        // shift chain: place new inst_w at row0, push older values down, once per cycle
        inst_w_temp[2:0]   <= inst_w;
        inst_w_temp[5:3]   <= inst_w_temp[2:0];
        inst_w_temp[8:6]   <= inst_w_temp[5:3];
        inst_w_temp[11:9]  <= inst_w_temp[8:6];
        inst_w_temp[14:12] <= inst_w_temp[11:9];
        inst_w_temp[17:15] <= inst_w_temp[14:12];
        inst_w_temp[20:18] <= inst_w_temp[17:15];
        inst_w_temp[23:21] <= inst_w_temp[20:18];
    end
    else begin // this is for kernel loading in WS (all at once) / flushing in OS
      // replicate inst_w across all rows
      inst_w_temp <= {row{inst_w}};
    end
   end
  end

  assign out_s = temp[((psum_bw*col*(row+1))-1) : (psum_bw*col*row)];
  assign valid = valid_temp[((col*row)-1) : (col*(row-1))];
  assign temp[psum_bw*col-1:0] = in_n;

endmodule
