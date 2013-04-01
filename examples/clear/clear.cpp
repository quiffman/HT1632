#include "HT1632.h"


#define DATA 2
#define WR   3
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

  matrix.writeScreen();
}

void loop() {
  exit(0);
}
/* vim: set ts=2 sw=2 tw=0 et :*/
