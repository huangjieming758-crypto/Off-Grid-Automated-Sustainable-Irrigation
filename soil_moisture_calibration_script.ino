/*
 * AI Assistance Declaration:
 * Generative AI models (Google Gemini / ChatGPT) were referenced solely for 
 * code syntax refinement, bug checks, and formatting optimization. All core 
 * system logic and control algorithms were designed and provided by the author.
 */
const int sensorPin = A0; 
const unsigned long interval = 1000; // 1-second interval (1000 ms)
unsigned long previousMillis = 0;

void setup() {
  Serial.begin(9600); //default communication speed at 9600 baud for Arduino UNO

  Serial.println("Time_sec,Moisture_Value");
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;

    int sensorValue = analogRead(sensorPin);

    Serial.print(currentMillis / 1000);
    Serial.print(",");
    Serial.println(sensorValue);
  }
}