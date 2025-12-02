module rlc_decoder (clk, reset, in_data, in_valid, in_ready, out, out_valid, out_ready);

    input clk, reset;
    input  wire [31:0] in_data;
    input  wire        in_valid;
    output wire        in_ready;
    output reg  [31:0] out;
    output reg         out_valid;
    input  wire        out_ready;

    // bit buffer
    reg [63:0] bitbuf;
    reg [6:0]  bitcnt;

    // current token
    reg [3:0] cur_val;
    reg [2:0] cur_run;   // zeros after value
    reg [3:0] run_cnt;
    reg       send_val;

    // to pack 8 nibbles
    reg [31:0] out_shift;
    reg [2:0]  out_cnt;

    localparam [1:0] S_IDLE  = 2'b00,
                     S_FETCH = 2'b01,
                     S_OUT   = 2'b10;

    reg [1:0] state, next_state;

    assign in_ready = (bitcnt <= 32);


    // next state
    always @(*) begin
        next_state = state;

        case (state)
            S_IDLE:  if (bitcnt >= 7) next_state = S_FETCH;
            S_FETCH: if (bitcnt >= 7) next_state = S_OUT;
            S_OUT: begin
                if (send_val == 0 && run_cnt == 0) begin
                    if (bitcnt >= 7) next_state = S_FETCH;
                    else next_state = S_IDLE;
                end
            end
        endcase
    end


    // state reg
    always @(posedge clk or posedge reset) begin
        if (reset) state <= S_IDLE;
        else       state <= next_state;
    end


    // datapath
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            bitbuf    <= 0;
            bitcnt    <= 0;
            out_valid <= 0;
            out_cnt   <= 0;
            out_shift <= 0;
            send_val  <= 0;
            run_cnt   <= 0;
        end else begin

            if (in_valid && in_ready) begin
                bitbuf <= {bitbuf[31:0], in_data};
                bitcnt <= bitcnt + 32;
            end

            out_valid <= 0;

            case (state)

                S_IDLE: begin
                    // nothing
                end

                S_FETCH: begin
                    // read 4b value + 3b run
                    cur_val <= bitbuf[bitcnt-1 -: 4]; // start at bitcnt-1, take till bitcnt-4 (lower 4 bits)
                    cur_run <= bitbuf[bitcnt-5 -: 3];

                    bitcnt  <= bitcnt - 7; // update bitcnt

                    send_val <= 1;
                    run_cnt  <= bitbuf[bitcnt-5 -: 3];
                end

                S_OUT: begin
                    if (out_ready || !out_valid) begin

                        // pick what nibble to output
                        if (send_val) begin
                            out_shift <= {out_shift[27:0], cur_val};
                            out_cnt   <= out_cnt + 1;
                            send_val  <= 0;
                        end else if (run_cnt != 0) begin
                            // zeros
                            out_shift <= {out_shift[27:0], 4'b0000};
                            out_cnt   <= out_cnt + 1;
                            run_cnt   <= run_cnt - 1;
                        end

                        // if 8 nibbs collected, output 32b word
                        if (out_cnt == 3'd7) begin
                            out       <= {out_shift[27:0], send_val ? cur_val : 4'b0000};
                            out_valid <= 1;
                            out_cnt   <= 0;
                        end
                    end
                end

            endcase
        end
    end

endmodule
