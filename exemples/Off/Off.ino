#include <RGBLed.h>

RGBLed led(13, 12, 11, COMMON_CATHODE);

void setup() { }

void loop() {
	
	// Light off RGB led
	led.off();
}
