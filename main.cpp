#include <wiringPi.h>

#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern void setup(void);
extern void loop(void);

int main(void) {
	if (wiringPiSetup() == -1) {
		printf ( "SPI Setup Failed: %s\n", strerror(errno));
		exit(1);
	}

	setup();

	for (;;) {
		loop();
	}

	return 0;
}
