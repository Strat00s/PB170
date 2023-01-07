
module PWM (input clk, input [7:0] on_time, output out);
    //constants
    parameter SAMPLES = 200;


    reg [7:0] cnt;

    //setup
    initial begin
        cnt <= 0;
    end


    //"main"
    always @(posedge clk) begin
        if (cnt == SAMPLES)
            cnt <= 0;
        else
            cnt <= cnt + 1;
    end

    assign out = (cnt <= on_time) ? 1:0;
endmodule

