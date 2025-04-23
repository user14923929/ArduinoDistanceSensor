## Overview

ArduinoDistanceSensor is a library designed to simplify the process of working with distance sensors in Arduino projects. It provides an easy-to-use interface for reading distance measurements and supports a variety of sensor models.

## Features

- Support for multiple distance sensor types.
- Simple API for reading distance values.
- Configurable measurement units (e.g., centimeters, inches).
- Lightweight and efficient.

## Installation

1. Download the library from the [GitHub repository](https://github.com/your-repo-link).
2. Extract the contents into the `libraries` folder of your Arduino IDE.
3. Restart the Arduino IDE to recognize the library.

## Usage

```cpp
#include <ArduinoDistanceSensor.h>

ArduinoDistanceSensor sensor;

void setup() {
    Serial.begin(9600);
    sensor.begin();
}

void loop() {
    float distance = sensor.getDistance();
    Serial.println(distance);
    delay(500);
}
```

## Supported Sensors

- HC-SR04
- VL53L0X
- GP2Y0A21YK

## License

This project is licensed under the MIT License. See the `LICENSE` file for details.