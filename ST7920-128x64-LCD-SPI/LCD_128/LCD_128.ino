#include <Arduino.h>
#include <U8g2lib.h>

#ifdef U8X8_HAVE_HW_SPI
#include <SPI.h>
#endif
#ifdef U8X8_HAVE_HW_I2C
#include <Wire.h>
#endif

U8G2_ST7920_128X64_F_SW_SPI u8g2(U8G2_R0, /* clock=*/ 2, /* data=*/ 4, /* CS=*/ 3, /* reset=*/ 5);



void setup() 
{
  // put your setup code here, to run once:
  u8g2.begin();
}

void loop()
{
  u8g2.firstPage();
  do {
    u8g2.setFont(u8g2_font_siji_t_6x10);
    u8g2.drawStr(10,22,"Signal = -25dBm");
    u8g2.drawStr(10,32,"IP  = 192.168.10.2");
    u8g2.drawStr(10,42,"DID = 7AC2189E203");
    u8g2.drawStr(10,52,"RFID = 29B92A32");
    u8g2.setFont(u8g2_font_p01type_tf);
    u8g2.drawStr(73,63,"CONNECTED");
    u8g2.drawStr(10,8,"UPDATE AVAILABLE");
    u8g2.drawStr(10,63,"1.0V BETA");
    
    u8g2.setFont(u8g2_font_open_iconic_all_1x_t);
    u8g2.drawGlyph(119, 8, 91);  /* dec 9731/hex 2603 Snowman */
    u8g2.drawGlyph(112, 8, 94);
    u8g2.drawGlyph(103, 8, 247);
    u8g2.drawGlyph(0, 64, 205);
    u8g2.drawGlyph(0, 22, 253);
    u8g2.drawGlyph(0, 32, 124);
    u8g2.drawGlyph(0, 42, 230);
    u8g2.drawGlyph(0, 52, 156);
    u8g2.drawGlyph(120, 64, 115);
    u8g2.drawGlyph(0, 8, 206);
  } while ( u8g2.nextPage() );
  delay(1000);

}
