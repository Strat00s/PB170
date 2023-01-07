// ============================================================================
// Copyright (c) 2012 by Terasic Technologies Inc.
// ============================================================================
//
// Permission:
//
//   Terasic grants permission to use and modify this code for use
//   in synthesis for all Terasic Development Boards and Altera Development 
//   Kits made by Terasic.  Other use of this code, including the selling 
//   ,duplication, or modification of any portion is strictly prohibited.
//
// Disclaimer:
//
//   This VHDL/Verilog or C/C++ source code is intended as a design reference
//   which illustrates how these types of functions can be implemented.
//   It is the user's responsibility to verify their design for
//   consistency and functionality through the use of formal
//   verification methods.  Terasic provides no warranty regarding the use 
//   or functionality of this code.
//
// ============================================================================
//           
//  Terasic Technologies Inc
//  9F., No.176, Sec.2, Gongdao 5th Rd, East Dist, Hsinchu City, 30070. Taiwan
//
//
//
//                     web: http://www.terasic.com/
//                     email: support@terasic.com
//
// ============================================================================
//
// Major Functions:	DE2 Default Bitstream
//
// ============================================================================
//
// Revision History :
// ============================================================================
//   Ver  :| Author            :| Mod. Date :| Changes Made:
//   V1.0 :| Johnny Chen       :| 05/08/19  :|      Initial Revision
//   V1.1 :| Sean Peng         :| 05/09/30  :|      Changed CLOCK, SW, LEDG/R
//                                                  according to Zvonko's requests.
//   V1.2 :| Johnny Chen       :| 05/11/16  :|      Add to FLASH Address FL_ADDR[21:20]
//   V1.3 :| Johnny Chen       :| 05/12/12  :|      Fixed VGA_Audio_PLL Initial Sequence.
//   V1.4 :| Johnny Chen       :| 06/07/12  :|      Modify I2C_AV_Config LUT Data.
//   V1.5 :| Eko    Yan        :| 12/01/30  :|      Update to version 11.1 sp1.
// ============================================================================


module DE2_Default
	(
		CLOCK_50,						//	50 MHz
		
		LEDR							//	LED Red[17:0]
	);


input			   CLOCK_50;				//	50 MHz

output [17:0]	LEDR;					//	LED Red[17:0]

reg	 [31:0]	Cont;
reg state;


parameter FREQ = 50000000;


initial begin
    Cont <= 0;
    state <= 0;
end

always @(posedge CLOCK_50)begin
        if (Cont == 50000000) begin
            state <= ~state;
            Cont <= 0;
        end
        else
            Cont <= Cont + 1;
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
