#ifndef RGBLed_h
#define RGBLed_h

#include "Arduino.h"

class RGBLed {

	public:
		RGBLed(int red, int green, int blue, bool common);

		void off();

		void brightness(int rgb[3], int brightness);
		void brightness(int red, int green, int blue, int brightness);

		void flash(int rgb[3], int duration);
		void flash(int rgb[3], int onDuration, int duration);

		void flash(int red, int green, int blue, int duration);
		void flash(int red, int green, int blue, int onDuration, int duration);

		void setColor(int rgb[3]);
		void setColor(int red, int green, int blue);

		void fadeOut(int rgb[3], int steps, int duration);
		void fadeOut(int red, int green, int blue, int steps, int duration);

		void fadeIn(int rgb[3], int steps, int duration);
		void fadeIn(int red, int green, int blue, int steps, int duration);

		static int RED[3];
		static int GREEN[3];
		static int BLUE[3];
		static int MAGENTA[3];
		static int CYAN[3];
		static int YELLOW[3];
		static int WHITE[3];

		static bool COMMON_ANODE;
		static bool COMMON_CATHODE;

	private:
		int _red, _green, _blue, _common;
		void color(int red, int green, int blue);
		void blink(int red, int green, int blue, int onDuration, int duration);
		void intensity(int red, int green, int blue, int brightness);
		void fade(int red, int green, int blue, int steps, int duration, bool out);
		void fade(int red, int green, int blue, int steps, int duration, int value, bool wait);

};

#endif
