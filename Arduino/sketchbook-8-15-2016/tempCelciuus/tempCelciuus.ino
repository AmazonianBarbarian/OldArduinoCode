void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0));
  int degC = random(20, 61);
  int degF;
  degF = degC * 9/5 + 32;
  Serial.println(degF);
}

void loop()
{
  
}
  
