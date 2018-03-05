#include <RGBLed.h>

RGBLed led(13, 12, 11, COMMON_CATHODE);

void setup() { }

void loop() {
	
	// Set color to red
	led.setColor(led.RED);
	delay(100);
  
  	// Set color to green
	led.setColor(0, 255, 0);
	delay(100);
}
