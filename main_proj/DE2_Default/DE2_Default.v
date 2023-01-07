//using all RED LEDS (LEDR)

module DE2_Default (input CLOCK_50, output [17:0] LEDR);
    //constants
    parameter MAIN_FREQ   = 50000000;   //CLOCK_50 frequency
    parameter PWM_FREQ    =     1000;   //base PWM frequency
    parameter PWM_S_CNT   =      200;   //sample count ("precision")

    //pwm vars
    reg [31:0] pwm_d_cnt;   //pwm division counter
    reg pwm_clk;            //pwm clock output

    //LED duty cycle array
    //reg [7:0] leds[17:0];

    //reg [31:0] t_cnt;
    wire state;

    reg [31:0] dim_cnt;


    //setup
    initial begin
        pwm_d_cnt <= 0;
        pwm_clk   <= 0;
        on_time   <= 10;

        dim_cnt <= 0;
    end

    //"main"
    always @(posedge CLOCK_50) begin
        //generate PWM clock
        //desired frequency * samples * 2; *2 as we are flipping the state
        if (pwm_d_cnt == MAIN_FREQ / (PWM_FREQ * PWM_S_CNT * 2)) begin
            pwm_d_cnt <= 0;
            pwm_clk <= ~pwm_clk;
        end
        else
            pwm_d_cnt <= pwm_d_cnt + 1;
        
        //gradually change PWM
        if (dim_cnt == MAIN_FREQ / 100) begin
            dim_cnt <= 0;
            
        end
        else
            dim_cnt = dim_cnt + 1;
    

    end



    PWM pwm (
        .clk(pwm_clk),
        .on_time(on_time),
        .out(state)
    );


    //assign pwm_on_time = on_time;

    assign	LEDR[0]  = state;
    assign	LEDR[2]  = state;
    assign	LEDR[4]  = state;
    assign	LEDR[6]  = state;
    assign	LEDR[8]  = state;
    assign	LEDR[10] = state;
    assign	LEDR[12] = state;
    assign	LEDR[14] = state;
    assign	LEDR[16] = state;
endmodule
