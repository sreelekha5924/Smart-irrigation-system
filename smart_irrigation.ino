int sensorPin = A0;
int relayPin = 7;
int sensorValue = 0;

void setup() {
  pinMode(relayPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);

  if (sensorValue > 700) {
    // Soil is Dry - Motor ON
    digitalWrite(relayPin, LOW);
  } else {
    // Soil is Wet - Motor OFF
    digitalWrite(relayPin, HIGH);
  }
  delay(1000);
}
