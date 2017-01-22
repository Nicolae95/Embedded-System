
#include<reg51f.h>    //---Reg file 8051
#include"lcd.h"
sbit r1 = P2^0; //----R1 is the row 1 
sbit r2 = P2^1; //----Row 2
sbit r3 = P2^2; //----Row 3
sbit r4 = P2^3; //----Row 4
 
sbit c1 = P2^4; //----Column 1
sbit c2 = P2^5; //----Column 2
sbit c3 = P2^6; //----Column 3
sbit c4 = P2^7; //----Column 4
 
//----Prot0-type----//
void scan();
//----Main Program----//
void main()
{
        P2 = 0xF0;      //---PORT2(0-3) are output and PORT2(4-7) are output
        P0 = 0x00;  //---PORT0 output
        lcd_init();
        lcd_msg("4x4 KEYBOARD");
        while(1)
        {
            scan();
        }
}
 
void scan()
{
    r1 = 0; r2 = r3 = r4 = 1;   //---Row 1 = 0; and all other row is high
    //--Check for for columns one and wait for 32 ms for debounce peroid 
    //--if still key is pressed dispaly corresponding value --//
    if(c1 == 0){delay(32);while(c1 == 0){lcd_cmd(0xC5);lcd_dwr('0');}}
    //--Check for for columns two and wait for 32 ms for debounce peroid 
    //--if still key is pressed dispaly corresponding value --//
    if(c2 == 0){delay(32);while(c2 == 0){lcd_cmd(0xC5);lcd_dwr('1');}}
    //--Check for for columns three and wait for 32 ms for debounce peroid 
    //--if still key is pressed dispaly corresponding value --//
    if(c3 == 0){delay(32);while(c3 == 0){lcd_cmd(0xC5);lcd_dwr('2');}}
    //--Check for for columns four and wait for 32 ms for debounce peroid 
    //--if still key is pressed dispaly corresponding value --//
    if(c4 == 0){delay(32);while(c4 == 0){lcd_cmd(0xC5);lcd_dwr('3');}}
     
    r2 = 0; r1 = r3 = r4 = 1; //---Row 2 = 0; and all other row is high
    //--Check for for columns one and wait for 32 ms for debounce peroid 
    //--if still key is pressed dispaly corresponding value --//
    if(c1 == 0){delay(32);while(c1 == 0){lcd_cmd(0xC5);lcd_dwr('4');}}
    //--Check for for columns two and wait for 32 ms for debounce peroid 
    //--if still key is pressed dispaly corresponding value --//
    if(c2 == 0){delay(32);while(c2 == 0){lcd_cmd(0xC5);lcd_dwr('5');}}
    //--Check for for columns three and wait for 32 ms for debounce peroid 
    //--if still key is pressed dispaly corresponding value --//
    if(c3 == 0){delay(32);while(c3 == 0){lcd_cmd(0xC5);lcd_dwr('6');}}
    //--Check for for columns four and wait for 32 ms for debounce peroid 
    //--if still key is pressed dispaly corresponding value --//
    if(c4 == 0){delay(32);while(c4 == 0){lcd_cmd(0xC5);lcd_dwr('7');}}
 
    r3 = 0; r1 = r2 = r4 = 1; //----Row 3 = 0; rest all row are 1
    //--Check for for columns one and wait for 32 ms for debounce peroid 
    //--if still key is pressed dispaly corresponding value --//
    if(c1 == 0){delay(32);while(c1 == 0){lcd_cmd(0xC5);lcd_dwr('8');}}
    //--Check for for columns two and wait for 32 ms for debounce peroid 
    //--if still key is pressed dispaly corresponding value --//
    if(c2 == 0){delay(32);while(c2 == 0){lcd_cmd(0xC5);lcd_dwr('9');}}
    //--Check for for columns three and wait for 32 ms for debounce peroid 
    //--if still key is pressed dispaly corresponding value --//
    if(c3 == 0){delay(32);while(c3 == 0){lcd_cmd(0xC5);lcd_dwr('A');}}
    //--Check for for columns four and wait for 32 ms for debounce peroid 
    //--if still key is pressed dispaly corresponding value --//
    if(c4 == 0){delay(32);while(c4 == 0){lcd_cmd(0xC5);lcd_dwr('B');}}
     
    r4 = 0; r1 = r2 = r3 = 1;       //----Row 4 = 0; all rest are 1
    //--Check for for columns one and wait for 32 ms for debounce peroid 
    //--if still key is pressed dispaly corresponding value --//
    if(c1 == 0){delay(32);while(c1 == 0){lcd_cmd(0xC5);lcd_dwr('C');}}
    //--Check for for columns two and wait for 32 ms for debounce peroid 
    //--if still key is pressed dispaly corresponding value --//
    if(c2 == 0){delay(32);while(c2 == 0){lcd_cmd(0xC5);lcd_dwr('D');}}
    //--Check for for columns three and wait for 32 ms for debounce peroid 
    //--if still key is pressed dispaly corresponding value --//
    if(c3 == 0){delay(32);while(c3 == 0){lcd_cmd(0xC5);lcd_dwr('E');}}
    //--Check for for columns four and wait for 32 ms for debounce peroid 
    //--if still key is pressed dispaly corresponding value --//
    if(c4 == 0){delay(32);while(c4 == 0){lcd_cmd(0xC5);lcd_dwr('F');}}
}