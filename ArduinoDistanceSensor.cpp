#include "ArduinoDistanceSensor.h"
#include <Arduino.h>

ArduinoDistanceSensor::ArduinoDistanceSensor(int triggerPin, int echoPin) {
    _triggerPin = triggerPin;
    _echoPin = echoPin;
}

void ArduinoDistanceSensor::begin() {
    pinMode(_triggerPin, OUTPUT); // Set trigger pin as output
    pinMode(_echoPin, INPUT);     // Set echo pin as input
}

ArduinoDistanceSensor::getDistanceByCm() {
    // Clear the trigger pin
    digitalWrite(_triggerPin, LOW);
    delayMicroseconds(2);

    // Set the trigger pin high for 10 microseconds
    digitalWrite(_triggerPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(_triggerPin, LOW);

    // Read the echo pin and calculate the distance
    duration = pulseIn(_echoPin, HIGH);
    distance = (duration * 0.034) / 2; // Distance in cm

    return distance;
}

ArduinoDistanceSensor::getDistanceByInch() {
    // Clear the trigger pin
    digitalWrite(_triggerPin, LOW);
    delayMicroseconds(2);

    // Set the trigger pin high for 10 microseconds
    digitalWrite(_triggerPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(_triggerPin, LOW);

    // Read the echo pin and calculate the distance
    duration = pulseIn(_echoPin, HIGH);
    distance = (duration * 0.0135) / 2; // Distance in inches

    return distance;
}