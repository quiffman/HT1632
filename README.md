HT1632 - WiringPi
=================
Port of https://github.com/adafruit/HT1632 to run on RaspberryPi using WiringPi.

Requires
---
[WiringPi](https://projects.drogon.net/raspberry-pi/wiringpi/)

I used WiringPi GPIO 0-3, numbered according to [the WiringPi Pins page](https://projects.drogon.net/raspberry-pi/wiringpi/pins/), 17, 18, R1:21/R2:27, and 22.

Build
---
```console
pi@raspbmc $ sudo apt-get install cmake make gcc g++
pi@raspbmc $ cmake . && make
```

Thanks
---
To Luke Berndt @robotastic, for his excellent [blog](http://lukeberndt.com/2013/raspberry-pi-to-led-message-board-via-spi/) and [code](https://github.com/robotastic/SPI-LED-Print) that pointed me in the right direction.
