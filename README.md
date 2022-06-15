# RGBLed Arduino library

> This library for Arduino allows you to control RGB led.

## Installation
[Installing Additional Arduino Libraries](https://www.arduino.cc/en/Guide/Libraries)

## Usage
+ Include library file header
```cpp
#include <RGBLed.h>
```

+ Create an object, this object takes one parameter which corresponds to the analog pins are connected to on the Arduino. 
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

+ Set LED relative brightness level. (*Note: brightness level defaults to `100`.*)
```cpp
led.brightness(50); // 50% brightness
```

+ Set brightness and color at the same time ()
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

+ Fade In or Out
```cpp
led.fadeOut(RGBLed::RED, 5, 100); // Fade out with 5 steps during 100ms
// or
led.fadeOut(255, 0, 0, 5, 100); // Fade out with 5 steps during 100ms

led.fadeIn(RGBLed::RED, 5, 100); // Fade in with 5 steps during 100ms
// or
led.fadeIn(255, 0, 0, 5, 100); // Fade in with 5 steps during 100ms
```

+ Cross Fade between two colors
```cpp
// Usage: led.crossFade(rgbFrom[3], rgbTo[3], steps, duration)
led.crossFade(RGBLed::RED, RGBLed::GREEN, 5, 100);  // Fade from RED to GREEN in 5 steps during 100ms 
// or 
// Usage: led.crossFade(fromR, fromG, fromB, toR, toG, toB, steps, duration)
led.crossFade(255, 0, 0, 0, 255, 0, 5, 100);    // Fade from RED to GREEN in 5 steps during 100ms 
```

+ Set step (0-255) for specific color gradient between two colors
```cpp
// Usage: led.gradient(rgbFrom[3], rgbTo[3], step)
led.gradient(RGBLed::RED, RGBLed::GREEN, 200);  // Color step 200 of Gradient from RED to GREEN
// or 
// Usage: led.crossFade(fromR, fromG, fromB, toR, toG, toB, steps, duration)
led.gradient(255, 0, 0, 0, 255, 0, 200);     // Color step 200 of Gradient from RED to GREEN
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

## Contributors

Thank you to all our [contributors](https://github.com/wilmouths/RGBLed/graphs/contributors)!

[![](https://contrib.rocks/image?repo=wilmouths/RGBLed)](https://github.com/wilmouths/RGBLed/graphs/contributors)

