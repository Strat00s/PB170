
//module PWM (input clk, input [31:0] on_time, output out);
//    parameter PWM_FREQ = 5000;
//
//    reg [31:0] cnt;
//
//    initial begin
//        cnt <= 0;
//    end
//
//    always @(posedge clk) begin
//        if (cnt == PWM_FREQ)
//            cnt <= 0;
//        else
//            cnt <= cnt + 1;
//    end
//
//    assign out = cnt < on_time ? 1:0; 
//
//endmodule


module PWM (input clk, output out);
    //constants
    parameter PWM_FREQ = 5000;      //5KHz

    reg [31:0] cnt;
    reg state;

    //setup
    initial begin
        cnt <= 0;
        state <= 0;
    end


    //"main"
    always @(posedge clk) begin
        if (cnt == PWM_FREQ) begin
            state <= ~state;
            cnt <= 0;
        end
        else
            cnt <= cnt + 1;
    end

    assign out = state;
endmodule

