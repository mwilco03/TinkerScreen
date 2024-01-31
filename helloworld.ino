#include "SPI.h"
#include "Adafruit_GFX.h"
#include "Adafruit_GC9A01A.h"
#include <ESP8266WiFi.h>

#define TFT_DC D2
#define TFT_CS D8

#define BLACK   0x0000
#define WHITE   0xFFFF

Adafruit_GC9A01A tft(TFT_CS, TFT_DC);

void setup(void) {
  tft.begin (); 
  tft.setRotation (2);   // Set if needed, depends on your display's orientation
  tft.fillScreen (BLACK);  
  
  tft.setTextColor(WHITE, BLACK);  // Set the font color to white and the background to black
  tft.setTextSize(2);              // Set the text size. Increase this to make the text larger.
  
  tft.setCursor(0, 0);  // Set the position where the text will start
  tft.print("Hello, world!");  // Print text to the screen
}

void loop() {
  // Nothing to do here since we are just displaying static text.
}
