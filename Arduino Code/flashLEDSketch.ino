void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  delay(500);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  delay(500);
}
