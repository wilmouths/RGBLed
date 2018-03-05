#include <RGBLed.h>

RGBLed led(13, 12, 11, COMMON_CATHODE);

void setup() { }

void loop() {
	
	// Fade out red color, with 5 steps during 100ms
	led.fadeOut(led.RED, 5, 100);

	// Fade out green color, with 5 steps during 100ms
	led.fadeOut(0, 255, 0, 5, 100);

	// Fade in red color, with 5 steps during 100ms
	led.fadeIn(led.RED, 5, 100);

	// Fade in green color, with 5 steps during 100ms
	led.fadeIn(0, 255, 0, 5, 100);
}
