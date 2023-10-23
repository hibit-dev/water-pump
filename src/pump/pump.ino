// -------------------------------------------------
// Copyright (c) 2023 HiBit <https://www.hibit.dev>
// -------------------------------------------------

#define PUMP_PIN 13

void setup()
{
  pinMode(PUMP_PIN, OUTPUT);

  Serial.begin(115200);
}

void loop()
{
  Serial.println("Turning pump ON");
  digitalWrite(PUMP_PIN, HIGH);
  delay(3000); // Wait three seconds

  Serial.println("Turning pump OFF");
  digitalWrite(PUMP_PIN, LOW);
  delay(3000); // Wait three seconds
}
