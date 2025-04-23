#ifndef ARDUINODISTANCESENSOR_H
#define ARDUINODISTANCESENSOR_H

class ArduinoDistanceSensor {
public:
    ArduinoDistanceSensor(int triggerPin, int echoPin);
    void begin();
    long getDistanceByCm();
    long getDistanceByInch();
private:
    int _triggerPin;
    int _echoPin;
    long duration;
    long distance;
}

#endif // ARDUINODISTANCESENSOR_H