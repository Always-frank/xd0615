void setup()
{
  for(int i=0;i<=7;i++)
  pinMode(i, OUTPUT);
}

void loop()
{
  for(int i=0;i<=7;i++){
  digitalWrite(i, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(i, LOW);
  delay(500); // Wait for 1000 millisecond(s)
  }
}