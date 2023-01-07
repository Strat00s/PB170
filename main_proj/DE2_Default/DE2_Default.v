
module DE2_Default (input CLOCK_50, output [17:0] LEDR);
    //constants
    parameter MAIN_FREQ = 50000000; //50MHz
    parameter PWM_FREQ = 5000;      //5KHz

    //pwm clock vars
    reg [31:0] cnt;
    reg pwm_clk;


    reg [31:0] t_cnt;
    reg state;

    //setup
    initial begin
        cnt <= 0;
        pwm_clk <= 0;

        t_cnt <= 0;
        state <= 0;
    end


    //"main"
    always @(posedge CLOCK_50) begin
        if (cnt == MAIN_FREQ / (PWM_FREQ * 2)) begin //*2 becuase we are flipping the state
            pwm_clk <= ~pwm_clk;
            cnt <= 0;
        end
        else
            cnt <= cnt + 1;
    end

    always @(posedge pwm_clk) begin
        if (t_cnt == PWM_FREQ) begin
            state <= ~state;
            t_cnt <= 0;
        end
        else
            t_cnt <= t_cnt + 1;
    end

    assign	LEDR[0] = state;
    assign	LEDR[2] = state;
    assign	LEDR[4] = state;
    assign	LEDR[6] = state;
    assign	LEDR[8] = state;
    assign	LEDR[10] = state;
    assign	LEDR[12] = state;
    assign	LEDR[14] = state;
    assign	LEDR[16] = state;
endmodule
