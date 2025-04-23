#include "ArduinoDistanceSensor.h"
#include <Arduino.h>

ArduinoDistanceSensor::ArduinoDistanceSensor(int trigPin, int echoPin) {
  _trigPin = trigPin;
  _echoPin = echoPin;
}

void ArduinoDistanceSensor::begin() {
  pinMode(_trigPin, OUTPUT);
  pinMode(_echoPin, INPUT);
}

long ArduinoDistanceSensor::getDistanceByCm() {
  digitalWrite(_trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(_trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(_trigPin, LOW);
  
  long duration = pulseIn(_echoPin, HIGH);
  long distance = duration * 0.0344 / 2;  // Distance in cm
  
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