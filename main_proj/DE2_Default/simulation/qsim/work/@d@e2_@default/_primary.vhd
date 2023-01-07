library verilog;
use verilog.vl_types.all;
entity DE2_Default is
    port(
        CLOCK_50        : in     vl_logic;
        LEDR            : out    vl_logic_vector(17 downto 0)
    );
end DE2_Default;
