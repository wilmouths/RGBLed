#include "Arduino.h"

#include "RGBLed.h"

int RGBLed::RED[3] = {255, 0, 0};
int RGBLed::GREEN[3] = {0, 255, 0};
int RGBLed::BLUE[3] = {0, 0, 255};
int RGBLed::MAGENTA[3] = {255, 0, 255};
int RGBLed::CYAN[3] = {0, 255, 255};
int RGBLed::YELLOW[3] = {255, 255, 0};
int RGBLed::WHITE[3] = {255, 255, 255};

RGBLed::RGBLed(int red, int green, int blue, Mode common)
{
	this->_red = red;
	this->_green = green;
	this->_blue = blue;
	this->_common = common;

	pinMode(this->_red, OUTPUT);
	pinMode(this->_green, OUTPUT);
	pinMode(this->_blue, OUTPUT);
}

void RGBLed::off() {
	this->color(0, 0, 0);
}

void RGBLed::brightness(int color[3], int brightness) {
	this->intensity(color[0], color[1], color[2], brightness);
}

void RGBLed::brightness(int red, int green, int blue, int brightness) {
	this->intensity(red, green, blue, brightness);
}

void RGBLed::intensity(int red, int green, int blue, int brightness) {
	red = (red * brightness) / 100;
	green = (green * brightness) / 100;
	blue = (blue * brightness) / 100;
	this->color(red, green, blue);
}

void RGBLed::flash(int color[3], int duration) {
	this->blink(color[0], color[1], color[2], duration, duration);
}

void RGBLed::flash(int color[3], int onDuration, int duration) {
	this->blink(color[0], color[1], color[2], onDuration, duration);
}

void RGBLed::flash(int red, int green, int blue, int duration) {
	this->blink(red, green, blue, duration, duration);
}

void RGBLed::flash(int red, int green, int blue, int onDuration, int duration) {
	this->blink(red, green, blue, onDuration, duration);
}

void RGBLed::blink(int red, int green, int blue, int onDuration, int duration) {
	this->color(red, green, blue);
	delay(onDuration);
	this->off();
	delay(duration);
}

void RGBLed::setColor(int color[3]) {
	this->color(color[0], color[1], color[2]);
}

void RGBLed::setColor(int red, int green, int blue) {
	this->color(red, green, blue);
}

void RGBLed::color(int red, int green, int blue) {
	if (this->_common == COMMON_ANODE) {
		analogWrite(_red, ~red);
		analogWrite(_green, ~green);
		analogWrite(_blue, ~blue);
	} else {
		analogWrite(_red, red);
		analogWrite(_green, green);
		analogWrite(_blue, blue);
	}
}

void RGBLed::fadeOut(int color[3], int steps, int duration) {
	this->fade(color[0], color[1], color[2], steps, duration, true);
}

void RGBLed::fadeOut(int red, int green, int blue, int steps, int duration) {
	this->fade(red, green, blue, steps, duration, true);
}

void RGBLed::fadeIn(int color[3], int steps, int duration) {
	this->fade(color[0], color[1], color[2], steps, duration, false);
}

void RGBLed::fadeIn(int red, int green, int blue, int steps, int duration) {
	this->fade(red, green, blue, steps, duration, false);
}

void RGBLed::fade(int red, int green, int blue, int steps, int duration, bool out) {
	if (out) {
		for (int i = 255; i >= 0; i -= steps) {
			this->fade(red, green, blue, steps, duration, i);
		}
	} else {
		for (int i = 0; i <= 255; i += steps) {
			this->fade(red, green, blue, steps, duration, i);
		}
	}
}

void RGBLed::fade(int red, int green, int blue, int steps, int duration, int value) {
	if (red > 0 && red <= 255) analogWrite(this->_red, value);
	if (green > 0 && green <= 255) analogWrite(this->_green, value);
	if (blue > 0 && blue <= 255) analogWrite(this->_blue, value);
	delay((unsigned long) (duration / steps));
}