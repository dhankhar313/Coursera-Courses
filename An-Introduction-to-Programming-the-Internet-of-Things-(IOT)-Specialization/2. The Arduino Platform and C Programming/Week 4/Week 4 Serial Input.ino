void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  if (Serial.available() > 0)
  {
    char input = Serial.read();
    if (input == '0')
      digitalWrite(13, 0);
    else if (input == '1')
      digitalWrite(13, 1);
  }
}