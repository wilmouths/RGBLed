#include <RGBLed.h>

RGBLed led(11, 10, 9, RGBLed::COMMON_CATHODE);

void setup() { }

void loop() {
	
	// Set color to red
	led.setColor(RGBLed::RED);
	delay(100);
  
  	// Set color to green
	led.setColor(0, 255, 0);
	delay(100);
}
