#include <ArduinoDistanceSensor.h>

ArduinoDistanceSensor distanceSensor(9, 10); // Create an instance of the distance sensor with trigger pin 9 and echo pin 10

void setup() {
    pinMode(LED_BUILTIN, OUTPUT); // Set the built-in LED pin as output
    distanceSensor.begin(); // Initialize the distance sensor
}

void loop() {
    long distanceCm = distanceSensor.getDistanceByCm(); // Get the distance in cm

    if (distanceCm < 10) { // If the distance is less than 10 cm
        digitalWrite(LED_BUILTIN, HIGH); // Turn on the LED
    } else {
        digitalWrite(LED_BUILTIN, LOW); // Turn off the LED
    }

    delay(1000); // Wait for 1 second before taking the next reading
}