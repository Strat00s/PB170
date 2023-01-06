library verilog;
use verilog.vl_types.all;
entity knight_rider is
    port(
        CLOCK_50        : in     vl_logic;
        clk             : out    vl_logic
    );
end knight_rider;
