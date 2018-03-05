#include <RGBLed.h>

RGBLed led(11, 10, 9, COMMON_CATHODE);

void setup() { }

void loop() {
	
	// Light off RGB led
	led.off();
}
