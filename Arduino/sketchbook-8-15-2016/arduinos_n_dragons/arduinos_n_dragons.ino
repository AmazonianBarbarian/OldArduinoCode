void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0));
  int a = random(1, 21);
  int STR = 4;
  int BA = 7;
  int c = a + STR + BA;
  Serial.println(c);
  
}

void loop()
{
  
}
