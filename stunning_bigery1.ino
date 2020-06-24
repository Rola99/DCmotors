void setup()
{
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(9, LOW);
  delay(10); // Delay a little bit to improve simulation performance
}