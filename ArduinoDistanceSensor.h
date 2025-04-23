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