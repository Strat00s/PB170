//using all RED LEDS (LEDR)

module DE2_Default (input CLOCK_50, output [17:0] LEDR);
    //constants
    parameter MAIN_FREQ   = 50000000;   //CLOCK_50 frequency
    parameter PWM_FREQ    =     1000;   //base PWM frequency
    parameter PWM_S_CNT   =      200;   //sample count ("precision")

    //pwm vars
    reg [31:0] pwm_d_cnt;   //pwm division counter
    reg pwm_clk;            //pwm clock output

    //reg [31:0] t_cnt;
    wire state;

    //reg [7:0] on_time;
    reg [31:0] switch_cnt;  //led change counter
    //LED duty cycle array
    reg [7:0] leds[17:0];   //array of bytes 
    reg direction;          //led firection
    reg [17:0] led_selector;    //led selection array
    wire [17:0] led_out; //led output
    reg [31:0]  dim_cnt; //led dim counter



    reg [4:0] i;

    //setup
    initial begin
        pwm_d_cnt <= 0;
        pwm_clk   <= 0;


        leds[0]      <= 0;
        leds[1]      <= 0;
        leds[2]      <= 0;
        leds[3]      <= 0;
        leds[4]      <= 0;
        leds[5]      <= 0;
        leds[6]      <= 0;
        leds[7]      <= 0;
        leds[8]      <= 0;
        leds[9]      <= 0;
        leds[10]     <= 0;
        leds[11]     <= 0;
        leds[12]     <= 0;
        leds[13]     <= 0;
        leds[14]     <= 0;
        leds[15]     <= 0;
        leds[16]     <= 0;
        leds[17]     <= 0;
        switch_cnt   <= 0;
        led_selector <= 1;
        direction    <= 0;
        //led_out      <= 0;
        dim_cnt      <= 0;
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


        ////gradually change PWM
        //if (switch_cnt == MAIN_FREQ / 100) begin
        //    switch_cnt <= 0;
        //    on_time <= on_time + 1;
        //end
        //else
        //    switch_cnt = switch_cnt + 1;
        //
        //if (on_time >= 200)
        //    on_time <= 0;
    
        //switch between LEDs
        if (switch_cnt == MAIN_FREQ / 20) begin
            switch_cnt <= 0;

            if (led_selector == 0)
                direction = 0;
            if (led_selector == 17)
                direction = 1;
            led_selector = direction ? led_selector - 1 : led_selector + 1;
            leds[led_selector] <= 200;   //set max brighntess for current LED
        end
        else
            switch_cnt = switch_cnt + 1;

        //continuously decrease the LED brightness
        if (dim_cnt == MAIN_FREQ / 400) begin
            dim_cnt <= 0;
            for (i = 0; i < 18; i = i + 1) begin
                if (leds[i] > 0)
                    leds[i] <= leds[i] - 1;
            end
        end
        else
            dim_cnt <= dim_cnt + 1;
    end



    PWM pwm0 (
        .clk(pwm_clk),
        .on_time(leds[0]),
        .out(led_out[0])
    );
    PWM pwm1 (
        .clk(pwm_clk),
        .on_time(leds[1]),
        .out(led_out[1])
    );
    PWM pwm2 (
        .clk(pwm_clk),
        .on_time(leds[2]),
        .out(led_out[2])
    );
    PWM pwm3 (
        .clk(pwm_clk),
        .on_time(leds[3]),
        .out(led_out[3])
    );
    PWM pwm4 (
        .clk(pwm_clk),
        .on_time(leds[4]),
        .out(led_out[4])
    );
    PWM pwm5 (
        .clk(pwm_clk),
        .on_time(leds[5]),
        .out(led_out[5])
    );
    PWM pwm6 (
        .clk(pwm_clk),
        .on_time(leds[6]),
        .out(led_out[6])
    );
    PWM pwm7 (
        .clk(pwm_clk),
        .on_time(leds[7]),
        .out(led_out[7])
    );
    PWM pwm8 (
        .clk(pwm_clk),
        .on_time(leds[8]),
        .out(led_out[8])
    );
    PWM pwm9 (
        .clk(pwm_clk),
        .on_time(leds[9]),
        .out(led_out[9])
    );
    PWM pwm10 (
        .clk(pwm_clk),
        .on_time(leds[10]),
        .out(led_out[10])
    );
    PWM pwm11 (
        .clk(pwm_clk),
        .on_time(leds[11]),
        .out(led_out[11])
    );
    PWM pwm12 (
        .clk(pwm_clk),
        .on_time(leds[12]),
        .out(led_out[12])
    );
    PWM pwm13 (
        .clk(pwm_clk),
        .on_time(leds[13]),
        .out(led_out[13])
    );
    PWM pwm14 (
        .clk(pwm_clk),
        .on_time(leds[14]),
        .out(led_out[14])
    );
    PWM pwm15 (
        .clk(pwm_clk),
        .on_time(leds[15]),
        .out(led_out[15])
    );
    PWM pwm16 (
        .clk(pwm_clk),
        .on_time(leds[16]),
        .out(led_out[16])
    );
    PWM pwm17 (
        .clk(pwm_clk),
        .on_time(leds[17]),
        .out(led_out[17])
    );

    assign	LEDR  = led_out;
endmodule
