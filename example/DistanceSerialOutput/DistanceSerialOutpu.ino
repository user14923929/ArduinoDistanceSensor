#include <ArduinoDistanceSensor.h>

ArduinoDistanceSensor distanceSensor(9, 10); // Create an instance of the distance sensor with trigger pin 9 and echo pin 10

void setup() {
    Serial.begin(9600); // Start the serial communication at 9600 baud rate
    distanceSensor.begin(); // Initialize the distance sensor
}

void loop() {
    long distanceCm = distanceSensor.getDistanceByCm(); // Get the distance in cm
    long distanceInch = distanceSensor.getDistanceByInch(); // Get the distance in inches

    Serial.print("Distance: ");
    Serial.print(distanceCm);
    Serial.print(" cm, ");
    Serial.print(distanceInch);
    Serial.println(" inch"); // Print the distances to the serial monitor

    delay(1000); // Wait for 1 second before taking the next reading
}