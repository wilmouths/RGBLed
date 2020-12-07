#include <RGBLed.h>

RGBLed led(11, 10, 9, RGBLed::COMMON_CATHODE);

void setup() { }

void loop() {
	
	// Flash red color, interval 100ms
	led.flash(RGBLed::RED, 100);

	// Flash green color, interval 100ms
	led.flash(0, 255, 0, 100);

	// Flash red color, during 250ms with interval 100ms
	led.flash(RGBLed::RED, 250, 100);

	// Flash green color, during 250ms with interval 100ms
	led.flash(0, 255, 0, 250, 100);
}
