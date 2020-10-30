#include <RGBLed.h>

RGBLed led(11, 10, 9, RGBLed::COMMON_CATHODE);

void setup() { }

void loop() {
	
	// Fade out red color, with 5 steps during 100ms
	led.fadeOut(RGBLed::RED, 5, 100);

	// Fade out green color, with 5 steps during 100ms
	led.fadeOut(0, 255, 0, 5, 100);

	// Fade in red color, with 5 steps during 100ms
	led.fadeIn(RGBLed::RED, 5, 100);

	// Fade in green color, with 5 steps during 100ms
	led.fadeIn(0, 255, 0, 5, 100);
}
