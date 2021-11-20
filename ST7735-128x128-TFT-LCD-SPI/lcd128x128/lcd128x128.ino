#include <Adafruit_GFX.h>    // Core graphics library
#include <XTronical_ST7735.h> // Hardware-specific library
#include <SPI.h>

// set up pins we are going to use to talk to the screen
#define TFT_SCLK 13         // SPI clock
#define TFT_MOSI 11         // SPI Data
#define TFT_CS   10         // Display enable (Chip select), if not enabled will not talk on SPI bus
#define TFT_RST   9         // Display reset pin, you can also connect this to the Arduino reset
                            // in which case, set this #define pin to -1!
#define TFT_DC     8        // register select (stands for Data Control perhaps!)

// initialise the routine to talk to this display with these pin connections (as we've missed off
// TFT_SCLK and TFT_MOSI the routine presumes we are using hardware SPI and internally uses 13 and 11
Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS,  TFT_DC, TFT_RST);  
void setup() {
  // put your setup code here, to run once:
  tft.init();   // initialize a ST7735S chip,
  tft.setRotation(3);              // values 0-3 set to 1 of 4 different orientations
  tft.fillScreen(ST7735_BLACK);    // clear to black
}

void loop() {
  // put your main code here, to run repeatedly:
  tft.setCursor(3,5);
  tft.setTextColor(ST7735_GREEN);
  tft.setTextWrap(true);
  tft.print("This is long text This is long textThis is long textThis is long textThis is long textThis is long textThis is long textThis is long text");
}
