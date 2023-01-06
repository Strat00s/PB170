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
// Major Functions:	DE2 NIOS Reference Design
//
// ============================================================================
//
// Revision History :
// ============================================================================
//   Ver  :| Author            :| Mod. Date :| Changes Made:
//   V2.0 :| Johnny Chen       :| 06/07/19  :|      Initial Revision
//   V2.1 :| Vic chang         :| 2012/01/31:|      upgrade to 11.1 version
// ============================================================================
module My_First_NiosII(
	CLOCK_50,
	LED,
);
input CLOCK_50;
output LED;


DE2_SOPC u0 (
        .clk_clk       (CLOCK_50),       //   clk.clk
        .led_export    (LED),    //   led.export
        .reset_reset_n (1'b1)  // reset.reset_n
    );
	 
endmodule 
