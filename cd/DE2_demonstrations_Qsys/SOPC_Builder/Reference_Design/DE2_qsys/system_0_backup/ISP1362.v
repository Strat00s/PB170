// ISP1362.v

// This file was auto-generated as part of a generation operation.
// If you edit it your changes will probably be lost.

`timescale 1 ps / 1 ps
module ISP1362 (
		output wire [15:0] oDATA,     //   avalon_slave_0.readdata
		input  wire [1:0]  iADDR,     //                 .address
		input  wire        iRD_N,     //                 .read_n
		input  wire        iWR_N,     //                 .write_n
		input  wire        iCS_N,     //                 .chipselect_n
		input  wire [15:0] iDATA,     //                 .writedata
		inout  wire [15:0] OTG_DATA,  //      conduit_end.export
		output wire [1:0]  OTG_ADDR,  //                 .export
		output wire        OTG_RD_N,  //                 .export
		output wire        OTG_WR_N,  //                 .export
		output wire        OTG_CS_N,  //                 .export
		output wire        OTG_RST_N, //                 .export
		input  wire        OTG_INT0,  //                 .export
		input  wire        iCLK,      //       clock_sink.clk
		input  wire        iRST_N,    // clock_sink_reset.reset_n
		output wire        oINT0_N    // interrupt_sender.irq_n
	);

	ISP1362_IF isp1362 (
		.oDATA     (oDATA),     //   avalon_slave_0.readdata
		.iADDR     (iADDR),     //                 .address
		.iRD_N     (iRD_N),     //                 .read_n
		.iWR_N     (iWR_N),     //                 .write_n
		.iCS_N     (iCS_N),     //                 .chipselect_n
		.iDATA     (iDATA),     //                 .writedata
		.OTG_DATA  (OTG_DATA),  //      conduit_end.export
		.OTG_ADDR  (OTG_ADDR),  //                 .export
		.OTG_RD_N  (OTG_RD_N),  //                 .export
		.OTG_WR_N  (OTG_WR_N),  //                 .export
		.OTG_CS_N  (OTG_CS_N),  //                 .export
		.OTG_RST_N (OTG_RST_N), //                 .export
		.OTG_INT0  (OTG_INT0),  //                 .export
		.iCLK      (iCLK),      //       clock_sink.clk
		.iRST_N    (iRST_N),    // clock_sink_reset.reset_n
		.oINT0_N   (oINT0_N)    // interrupt_sender.irq_n
	);

endmodule
