#ifndef RGBLed_h
#define RGBLed_h

#include "Arduino.h"

enum Mode { 
	COMMON_ANODE, 
	COMMON_CATHODE 
};

class RGBLed {

	public:
		RGBLed(int red, int green, int blue, Mode common);

		void off();

		void brightness(int color[3], int brightness);
		void brightness(int red, int green, int blue, int brightness);

		void flash(int color[3], int duration);
		void flash(int color[3], int onDuration, int duration);

		void flash(int red, int green, int blue, int duration);
		void flash(int red, int green, int blue, int onDuration, int duration);

		void setColor(int color[3]);
		void setColor(int red, int green, int blue);

		void fadeOut(int color[3], int steps, int duration);
		void fadeOut(int red, int green, int blue, int steps, int duration);

		void fadeIn(int color[3], int steps, int duration);
		void fadeIn(int red, int green, int blue, int steps, int duration);

		int RED[3] = {255, 0, 0};
		int GREEN[3] = {0, 255, 0};
		int BLUE[3] = {0, 0, 255};
		int MAGENTA[3] = {255, 0, 255};
		int CYAN[3] = {0, 255, 255};
		int YELLOW[3] = {255, 255, 0};
		int WHITE[3] = {255, 255, 255};

	private:
		int _red, _blue, _green, _common;
		void color(int red, int green, int blue);
		void blink(int red, int green, int blue, int onDuration, int duration);
		void intensity(int red, int green, int blue, int brightness);
		void fade(int red, int green, int blue, int steps, int duration, bool out);
		void fade(int red, int green, int blue, int steps, int duration, int value);

};

#endif