#include <RGBLed.h>

RGBLed led(11, 10, 9, RGBLed::COMMON_CATHODE);

void setup() { }

void loop() {
	
	// Light off RGB led
	led.off();
}
