// --------------------------------------------------------------------
// Copyright (c) 2010 by Terasic Technologies Inc. 
// --------------------------------------------------------------------
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
// --------------------------------------------------------------------
//           
//                     Terasic Technologies Inc
//                     356 Fu-Shin E. Rd Sec. 1. JhuBei City,
//                     HsinChu County, Taiwan
//                     302
//
//                     web: http://www.terasic.com/
//                     email: support@terasic.com
//
// --------------------------------------------------------------------

/*
 *
 * Revision:
 *      V1.0, 11/21/2007, init by Richard.
 *      V2.0, 08/12/2007, revision by Perly.
 *      V3.0  08/10/2011  Porting to Q11.0 qsys by Dee Zeng
 *      V3.0  01/30/2011  Porting to Q11.0 qsys by Peli Li
 * Compatibility:
 *      Quartus 11.0 SP2
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <io.h>
#include <fcntl.h>
//#include "BASICTYP.h"
#include "system.h"
#include "VGA.h"
#include "basic_io.h"
#include "LCD.h"
#include <unistd.h>


#include "Test.h"
#include "sys/alt_irq.h"
#include "HAL4D13.h"

#include "isa290.h"
#include "reg.h"
#include "buf_man.h"
#include "port.h"
#include "usb.h"
#include "ptd.h"
#include "cheeyu.h"
#include "mouse.h"


#include "ISP1362_HAL.h"

#define VGA_BASE VGA_0_BASE

unsigned int		hc_data;
unsigned int		hc_com;
unsigned int		dc_data;
unsigned int		dc_com;

/******************************* Notice **********************************
 * Different USB mouse may send out different data packet format
 *
 * You should change the DATA_IN_PACKET_LENGTH value in MOUSE.h,and change the
 * calculation of X,Y in the function <void play_mouse(unsigned int addr) > in MOUSE.c
 * base on the format of USB Mouse data packet(if needed)
 */


int main(void)
{
  VGA_Ctrl_Reg vga_ctrl_set;
  
  vga_ctrl_set.VGA_Ctrl_Flags.RED_ON    = 1;
  vga_ctrl_set.VGA_Ctrl_Flags.GREEN_ON  = 1;
  vga_ctrl_set.VGA_Ctrl_Flags.BLUE_ON   = 1;
  vga_ctrl_set.VGA_Ctrl_Flags.CURSOR_ON = 1;
  
  Vga_Write_Ctrl(VGA_BASE, vga_ctrl_set.Value);
  
  Set_Pixel_On_Color(1023,1023,1023);
  Set_Pixel_Off_Color(0,0,512);
  Set_Cursor_Color(0,1023,0);

  usleep(100*1000);

  LCD_Test();


  w16(HcReset,0x00F6);//reset      
  reset_usb();//config  
  mouse();
  return 0;
}

