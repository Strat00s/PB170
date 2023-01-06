module DE2_Default
	(
		////////////////////	Clock Input	 	////////////////////	 
		CLOCK_50,						//	50 MHz
		////////////////////	Push Button		////////////////////
		KEY,							//	Pushbutton[3:0]
		////////////////////	DPDT Switch		////////////////////
		SW,								//	Toggle Switch[17:0]
		////////////////////	7-SEG Dispaly	////////////////////
		HEX0,							//	Seven Segment Digit 0
		HEX1,							//	Seven Segment Digit 1
		HEX2,							//	Seven Segment Digit 2
		HEX3,							//	Seven Segment Digit 3
		HEX4,							//	Seven Segment Digit 4
		HEX5,							//	Seven Segment Digit 5
		HEX6,							//	Seven Segment Digit 6
		HEX7,							//	Seven Segment Digit 7
		////////////////////////	LED		////////////////////////
		LEDG,							//	LED Green[8:0]
		LEDR,							//	LED Red[17:0]
		////////////////////	LCD Module 16X2		////////////////
		LCD_ON,							//	LCD Power ON/OFF
		LCD_BLON,						//	LCD Back Light ON/OFF
		LCD_RW,							//	LCD Read/Write Select, 0 = Write, 1 = Read
		LCD_EN,							//	LCD Enable
		LCD_RS,							//	LCD Command/Data Select, 0 = Command, 1 = Data
		LCD_DATA,						//	LCD Data bus 8 bits
	);

////////////////////////	Clock Input	 	////////////////////////
input			   CLOCK_50;				//	50 MHz
////////////////////////	Push Button		////////////////////////
input	  [3:0]	KEY;					//	Pushbutton[3:0]
////////////////////////	DPDT Switch		////////////////////////
input	  [17:0]	SW;						//	Toggle Switch[17:0]
////////////////////////	7-SEG Dispaly	////////////////////////
output	[6:0]	HEX0;					//	Seven Segment Digit 0
output	[6:0]	HEX1;					//	Seven Segment Digit 1
output	[6:0]	HEX2;					//	Seven Segment Digit 2
output	[6:0]	HEX3;					//	Seven Segment Digit 3
output	[6:0]	HEX4;					//	Seven Segment Digit 4
output	[6:0]	HEX5;					//	Seven Segment Digit 5
output	[6:0]	HEX6;					//	Seven Segment Digit 6
output	[6:0]	HEX7;					//	Seven Segment Digit 7
////////////////////////////	LED		////////////////////////////
output	[8:0]	LEDG;					//	LED Green[8:0]
output [17:0]	LEDR;					//	LED Red[17:0]
////////////////////	LCD Module 16X2	////////////////////////////
inout	 [7:0]	LCD_DATA;				//	LCD Data bus 8 bits
output			LCD_ON;					//	LCD Power ON/OFF
output			LCD_BLON;				//	LCD Back Light ON/OFF
output			LCD_RW;					//	LCD Read/Write Select, 0 = Write, 1 = Read
output			LCD_EN;					//	LCD Enable
output			LCD_RS;					//	LCD Command/Data Select, 0 = Command, 1 = Data

//	LCD ON
assign	LCD_ON		=	1'b1;
assign	LCD_BLON	=	1'b1;


wire   [31:0]	mSEG7_DIG;
reg	 [31:0]	Cont;

wire		      DLY_RST;

always@(posedge CLOCK_50 or negedge KEY[0])
begin
	if(!KEY[0])
	Cont	<=	0;
	else
	Cont	<=	Cont+1;
end


assign	mSEG7_DIG	=	KEY[0]?{	Cont[27:24],Cont[27:24],Cont[27:24],Cont[27:24],
							Cont[27:24],Cont[27:24],Cont[27:24],Cont[27:24]	}:32'h88888888;

assign	LEDR		=	KEY[0]?{	Cont[31:14] } : 18'h3ffff;
							
assign	LEDG		=	KEY[0]?{	Cont[25:23],Cont[25:23],Cont[25:23]	}:9'h1ff;

Reset_Delay			r0	(	.iCLK(CLOCK_50),.oRESET(DLY_RST)	);

SEG7_LUT_8 			u0	(	HEX0,HEX1,HEX2,HEX3,HEX4,HEX5,HEX6,HEX7,mSEG7_DIG );


LCD_TEST 			u5	(	//	Host Side
							.iCLK(CLOCK_50),
							.iRST_N(DLY_RST),
							//	LCD Side
							.LCD_DATA(LCD_DATA),
							.LCD_RW(LCD_RW),
							.LCD_EN(LCD_EN),
							.LCD_RS(LCD_RS)	);

endmodule
