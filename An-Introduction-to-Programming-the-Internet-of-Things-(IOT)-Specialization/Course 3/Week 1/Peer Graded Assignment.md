## Assignment

### Code

```
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
  pinMode(5, INPUT);
}

void loop()
{
  if (digitalRead(2) == HIGH || digitalRead(5) == HIGH)
  	digitalWrite(13, HIGH);
  else
    digitalWrite(13, LOW);
}
```

![Circuit](Capture.png)
