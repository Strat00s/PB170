//using all RED LEDS (LEDR)

module DE2_Default (input CLOCK_50, input [3:0] KEY, input [17:0] SW, output [17:0] LEDR);
    /*---(Constants)---*/
    parameter MAIN_FREQ = 50000000; //CLOCK_50 frequency
    
    //PWM
    parameter PWM_FREQ  = 1000; //base PWM frequency
    parameter PWM_S_CNT = 200;  //sample count ("precision")

    //LEDs
    parameter LED_CNT        = 18;  //number of LEDs
    parameter MAX_BRIGHTNESS = 200; //maximal brighntess based on PWM sample count


    /*---(Variables)---*/
    //PWM
    reg [31:0] pwm_timer;   //pwm division counter
    reg pwm_clk;            //pwm clock output

    //LEDs
    reg          direction;     //switching firection
    reg  [31:0]  switch_timer;  //timer for switching to next LED
    reg  [7:0]   leds[17:0];    //LED "duty cycle" array
    reg  [4:0]   selected_led;
    reg  [31:0]  dim_timer;     //dimming timer
    wire [17:0]  led_out;       //output from PWM to LEDs
    reg  [9:0]   dim_time;       //LED dimming time in ms
    reg  [9:0]   delay;         //delay for switching between LEDs in ms
    //reg  [4:0]   led_cnt;

    reg [31:0] button_timer;

    //for loop var
    reg [4:0] i;
    reg [4:0] j;


    //setup
    initial begin
        pwm_timer <= 0;
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
        switch_timer <= 0;
        selected_led  = 0;
        direction     = 0;
        dim_timer    <= 0;
        dim_time     <= 300;
        delay        <= 50;

        button_timer <= 0;
    end

    //"main"
    always @(posedge CLOCK_50) begin
        //reset when all buttons are pressed
        if (KEY == 4'b0000) begin
            pwm_timer <= 0;
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
            switch_timer <= 0;
            selected_led  = 0;
            direction     = 0;
            dim_timer    <= 0;
            dim_time     <= 300;
            delay        <= 50;

            button_timer <= 0;
        end

        //generate PWM clock
        //desired frequency * samples * 2; *2 as we are flipping the state
        if (pwm_timer >= MAIN_FREQ / (PWM_FREQ * PWM_S_CNT * 2)) begin
            pwm_timer <= 0; //reset timer
            pwm_clk <= ~pwm_clk;    //toggle clock
        end
        else
            pwm_timer <= pwm_timer + 1;

        //switch between LEDs
        if (switch_timer >= MAIN_FREQ / (1000 / delay)) begin //delay - delay in ms before changing to next LED
            switch_timer <= 0;  //reset timer

            //flip direction at the ends
            if (selected_led == 0 || selected_led == LED_CNT - 1)
                direction = ~direction;
            
            selected_led = direction ? selected_led + 1 : selected_led - 1;
            leds[selected_led] <= MAX_BRIGHTNESS;   //set max brighntess for current LED
        end
        else
            switch_timer <= switch_timer + 1;   //increment timer

        //continuously decrease the LED brightness
        if (dim_timer >= MAIN_FREQ / ((1000 * PWM_S_CNT) / dim_time)) begin //dim_time - how long in ms should the LEDs be on
            dim_timer <= 0; //reset timer

            //go through all LEDs and decrease their brightness
            for (i = 0; i < LED_CNT; i = i + 1) begin
                if (leds[i] > 0)
                    leds[i] <= leds[i] - 1;
            end
        end
        else
            dim_timer <= dim_timer + 1; //increment timer
        
        //cheap and easy buttons
        if (button_timer >= MAIN_FREQ / 10) begin
            button_timer <= 0;
            if (!KEY[0] && delay < 1000)
                delay <= delay + 5;
            else if (!KEY[1] && delay > 0)
                delay <= delay - 5;
            else if (!KEY[2] && dim_time < 1000)
                dim_time <= dim_time + 10;
            else if (!KEY[3] && dim_time > 0)
                dim_time <= dim_time - 10;
        end
        else
            button_timer <= button_timer + 1;
    end


    //each LED has its own PWM controller
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


    assign	LEDR  = led_out & ~SW;    //finally, set LEDs to the output of the PWMs
endmodule
