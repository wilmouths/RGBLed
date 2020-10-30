# RGBLed Arduino library

> This library for Arduino allows you to control RGB led.

## Installation
[Installing Additional Arduino Libraries](https://www.arduino.cc/en/Guide/Libraries)

## Usage
+ Include library file header
```cpp
#include <RGBLed.h>
```

+ Create an object, this object takes one parameter which corressponds to the analgo pins are connected to on the Arduino.
```cpp
RGBLed led(RED_PIN, GREEN_PIN, BLUE_PIN, RGBLed::COMMON_ANODE or RGBLed::COMMON_CATHODE);
```

+ Set color
```cpp
led.setColor(RGBLed::RED);
// or
led.setColor(255, 0, 0);
```

+ Light off
```cpp
led.off();
```

+ Set brightness
```cpp
led.brightness(RGBLed::RED, 50); // 50% brightness
// or
led.brightness(255, 0, 0, 50); // 50% brightness
```

+ Flash
```cpp
led.flash(RGBLed::RED, 100); // Interval 100ms
// or
led.flash(255, 0, 0, 100); // Interval 100ms

led.flash(RGBLed::RED, 250, 100); // Light on during 250ms and flash with interval (100ms)
// or
led.flash(255, 0, 0, 250, 100); // Light on during 250ms and flash with interval (100ms)
```

+ Fade
```cpp
led.fadeOut(RGBLed::RED, 5, 100); // Fade out with 5 steps during 100ms
// or
led.fadeOut(255, 0, 0, 5, 100); // Fade out with 5 steps during 100ms

led.fadeIn(RGBLed::RED, 5, 100); // Fade in with 5 steps during 100ms
// or
led.fadeIn(255, 0, 0, 5, 100); // Fade in with 5 steps during 100ms
```

## Colors
> You can create your own colors or use the followings colors
+ RED
+ GREEN
+ BLUE
+ MAGENTA
+ CYAN
+ YELLOW
+ WHITE

How use colors ?
```cpp
RGLed::RED
```