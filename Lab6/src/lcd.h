#define lcd P0
 sbit rs = P0^2;
 sbit en = P0^3;
  
 void delay(int ms)
 {
    int i,j;
    for(i=0;i<=ms;i++)
    for(j=0;j<=120;j++);
 }
  
 void tog()
 {
    en = 1; delay(1); en = 0;
 }
  
 void lcd_cmd_hf(char v1)
 {
    rs = 0;
    lcd &= 0x0F;
    lcd |= (v1 & 0xF0);
    tog();
 }
  
 void lcd_cmd(char v2)
 {
    rs = 0;
    lcd &= 0x0F;
    lcd |= (v2 & 0xF0);
    tog();
     
    lcd &= 0x0F;
    lcd |= ((v2 & 0x0F)<<4);
    tog();
 }
  
 void lcd_dwr(char v3)
 {
    rs = 1;
    lcd &= 0x0F;
    lcd |= (v3 & 0xF0);
    tog();
     
    lcd &= 0x0F;
    lcd |= ((v3 & 0x0F)<<4);
    tog();
 }
  
 void lcd_init()
 {
    lcd_cmd_hf(0x30);
    lcd_cmd_hf(0x30);
    lcd_cmd_hf(0x20);
    lcd_cmd(0x28);
    lcd_cmd(0x0E);
    lcd_cmd(0x01);
    lcd_cmd(0x06);
    lcd_cmd(0x80);
 }
  
 void lcd_msg(char *c)
 {
    while(*c != 0)
        lcd_dwr(*c++);
 }