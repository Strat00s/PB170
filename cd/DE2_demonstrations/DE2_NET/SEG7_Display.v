// SEG7_Display.v

// This file was auto-generated as part of a generation operation.
// If you edit it your changes will probably be lost.

`timescale 1 ps / 1 ps
module SEG7_Display (
		input  wire        iCLK,   //                   clk.clk
		input  wire        iRST_N, //             clk_reset.reset_n
		output wire [6:0]  oSEG0,  // avalon_slave_0_export.export
		output wire [6:0]  oSEG1,  //                      .export
		output wire [6:0]  oSEG2,  //                      .export
		output wire [6:0]  oSEG3,  //                      .export
		output wire [6:0]  oSEG4,  //                      .export
		output wire [6:0]  oSEG5,  //                      .export
		output wire [6:0]  oSEG6,  //                      .export
		output wire [6:0]  oSEG7,  //                      .export
		input  wire [31:0] iDIG,   //        avalon_slave_0.writedata
		input  wire        iWR     //                      .write
	);

	SEG7_LUT_8 seg7_display (
		.iCLK   (iCLK),   //                   clk.clk
		.iRST_N (iRST_N), //             clk_reset.reset_n
		.oSEG0  (oSEG0),  // avalon_slave_0_export.export
		.oSEG1  (oSEG1),  //                      .export
		.oSEG2  (oSEG2),  //                      .export
		.oSEG3  (oSEG3),  //                      .export
		.oSEG4  (oSEG4),  //                      .export
		.oSEG5  (oSEG5),  //                      .export
		.oSEG6  (oSEG6),  //                      .export
		.oSEG7  (oSEG7),  //                      .export
		.iDIG   (iDIG),   //        avalon_slave_0.writedata
		.iWR    (iWR)     //                      .write
	);

endmodule
