#include "HT1632.h"

/* 
This is a basic demo program showing how to write to a HT1632
These can be used for up to 16x24 LED matrix grids, with internal memory
and using only 3 pins - data, write and select.
Multiple HT1632's can share data and write pins, but need unique CS pins.
*/

#define DATA 0
#define WR 0
#define CS 0

HT1632 matrix = HT1632(DATA, WR, CS);

void setup() {
  if (wiringPiSPISetup(0, 2560000) < 0) {
    printf ( "SPI Setup Failed: %s\n", strerror(errno));
  }
  if (wiringPiSetup() == -1) {
    exit(1);
  }

  matrix.begin(HT1632_COMMON_16NMOS);

  matrix.setBrightness(1);

  delay(100);
  matrix.clearScreen();

}

void testMatrix(HT1632 matrix) {
  for (int i=0; i<24*16; i++) {
    matrix.setPixel(i);
    matrix.writeScreen();
  }
  
  // blink!
  matrix.blink(true);
  delay(2000);
  matrix.blink(false);
  
  // Adjust the brightness down 
  for (int8_t i=15; i>=0; i--) {
   matrix.setBrightness(i);
   delay(100);
  }
  // then back up
  for (uint8_t i=0; i<16; i++) {
   matrix.setBrightness(i);
   delay(100);
  }

  // Clear it out
  for (int i=0; i<24*16; i++) {
    matrix.clrPixel(i);
    matrix.writeScreen();
  }
}

void loop() {
  testMatrix(matrix);
}
/* vim: set ts=2 sw=2 tw=0 et :*/
