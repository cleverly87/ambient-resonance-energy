/*
  Ambient Resonance Energy - Pulse Driver & Logger
  Date: 2025-06-06
  Author: cleverly87
*/

const int pulsePin = 9;          // Digital pin for pulse output
const int senseVoltagePin = A0;  // Analog voltage sensor
const int senseCurrentPin = A1;  // Analog current sensor

const unsigned long pulseInterval = 128; // Pulse frequency ~7.8Hz (ms)
unsigned long lastPulseTime = 0;

void setup() {
  pinMode(pulsePin, OUTPUT);
  digitalWrite(pulsePin, LOW);
  Serial.begin(9600);
  Serial.println("Starting pulse logger...");
}

void loop() {
  unsigned long currentMillis = millis();

  // Pulse ON and OFF based on interval
  if (currentMillis - lastPulseTime >= pulseInterval) {
    digitalWrite(pulsePin, HIGH);
    delay(5);  // Pulse duration (tweak as needed)
    digitalWrite(pulsePin, LOW);
    lastPulseTime = currentMillis;

    // Read sensor data
    int rawVoltage = analogRead(senseVoltagePin);
    int rawCurrent = analogRead(senseCurrentPin);

    float voltage = rawVoltage * (5.0 / 1023.0);  // Convert to volts
    float current = rawCurrent * (5.0 / 1023.0);  // Dummy conversion, adjust for sensor

    // Output log line
    Serial.print("t=");
    Serial.print(currentMillis);
    Serial.print("ms, V=");
    Serial.print(voltage, 3);
    Serial.print("V, I=");
    Serial.print(current, 3);
    Serial.println("A");
  }
}
