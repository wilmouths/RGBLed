#include <RGBLed.h>

RGBLed led(11, 10, 9, COMMON_CATHODE);

void setup() { }

void loop() {
  
  	// Color is red with brigthness 100%
	led.setColor(led.RED);
	delay(2000);

	// Color is red with brigthness 10%
	led.brightness(led.RED, 10);
	delay(2000);
}
