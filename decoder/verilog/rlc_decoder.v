module rlc_decoder (
    input clk, reset
    input start,                 // from controller
    input [15:0] sram_din,       // 16 bits at a time
    input sram_valid,            // controller to pulse when new 16bit word ready
    output reg sram_req,         // decoder asks controller for next word
    output reg [31:0] out,       // final 8 values packed
    output reg done              // high when all 8 values decoded
);

  // internal regs
  reg [2:0] out_cnt;            // counts how many 4b values produced
  reg [31:0] out_shift;         // temp shift store of values
  reg [31:0] bitbuf;            // buffer accumulates bits
  reg [5:0] bitcnt;             // how many valid unprocessed bits in bitbuf
  reg [3:0] cur_val;            // current decoded value
  reg [1:0] runlen;             // run length
  reg [2:0] state;              // fsm states

  // state enc
  localparam IDLE = 0;
  localparam NEED_BITS_VAL = 1;
  localparam HAVE_VAL = 2;
  localparam NEED_BITS_RUN = 3;
  localparam PROCESS = 4;
  localparam FINISH = 5;

  // adding new bits into buffer
  always @ (posedge clk) begin
    if (reset) begin
       bitbuf <= 0;
       bitcnt <= 0;
    end else begin
       if (sram_valid) begin
         bitbuf <= {bitbuf[15:0], sram_din};   // load new 16 bits 16 LSBs
         bitcnt <= bitcnt + 16;
       end
    end
  end

  integer k;
  // main fsm
  always @ (posedge clk) begin
    if (reset) begin
       state <= IDLE;
       out_cnt <= 0;
       out_shift <= 0;
       done <= 0;
       sram_req <= 0;
    end else begin
       case (state)

         IDLE: begin
           done <= 0;
           out_cnt <= 0;
           out_shift <= 0;
           if (start) begin
             sram_req <= 1;   // ask for first chunk
             state <= NEED_BITS_VAL;
           end
         end

         NEED_BITS_VAL: begin
           sram_req <= 0;
           if (bitcnt >= 4) begin
             cur_val <= bitbuf[bitcnt-1 : bitcnt-4];   // grab top 4 bits
             bitcnt <= bitcnt - 4; // processed 4 bits already
             state <= HAVE_VAL;
           end else begin
             sram_req <= 1; // tell controlller i want next 16 bits
           end
         end

         HAVE_VAL: begin
           if (bitcnt >= 2) begin
             runlen <= bitbuf[bitcnt-1 : bitcnt-2];  // grab runlen (the next 2 bits)
             bitcnt <= bitcnt - 2;
             state <= PROCESS;
           end else begin
             sram_req <= 1;
             state <= NEED_BITS_RUN;
           end
         end

         NEED_BITS_RUN: begin
           sram_req <= 0;
           if (bitcnt >= 2) begin
             runlen <= bitbuf[bitcnt-1 -: 2];
             bitcnt <= bitcnt - 2;
             state <= PROCESS;
           end else begin
             sram_req <= 1; // tell controller i need more bitss
           end
         end

         PROCESS: begin
           if (cur_val == 4'b0000) begin
             // literal zero value means direct zero weight
             out_shift <= {out_shift[27:0], cur_val};  // pack 4 bits
             out_cnt <= out_cnt + 1;
             if (out_cnt == 7) state <= FINISH;
             else state <= NEED_BITS_VAL;
           end else begin
             // non zero. push value first
             out_shift <= {out_shift[27:0], cur_val};
             out_cnt <= out_cnt + 1;

             if (out_cnt == 7) begin
               state <= FINISH;
             end else begin
               // now expand runlength zeroes
               if (runlen == 0) begin
                  state <= NEED_BITS_VAL;
               end else begin
                  // emit runlen zeroes but max is 3

                  for (k = 0; k < runlen; k = k + 1) begin
                     if (out_cnt < 7) begin
                        out_shift <= {out_shift[27:0], 4'b0000};
                        out_cnt <= out_cnt + 1;
                     end
                  end
                  if (out_cnt == 7) state <= FINISH;
                  else state <= NEED_BITS_VAL;
               end
             end
           end
         end

         FINISH: begin
           out <= out_shift;
           done <= 1;
           state <= IDLE;
         end

       endcase
    end
  end

endmodule
