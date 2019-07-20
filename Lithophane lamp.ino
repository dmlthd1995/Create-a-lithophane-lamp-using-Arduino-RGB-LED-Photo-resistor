int potpin = 0;
int redpin = 11;
int greenpin = 9;
int bluepin = 10;

int val = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(redpin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  pinMode(bluepin, OUTPUT);
}

void loop
{
  val = analogRead(potpin)/2;
  
  if(val >= 100)
  {
    Serial.println(val);
    analogWrite(redpin, val);
    analogWrite(greenpin, 128-val);
    analogWrite(bluepin, 255-val);
    delay(10);
  }
  else
  {
    analogWrite(redpin, 0);
    analogWrite(greenpin, 0);
    analogWrite(bluepin, 0);
    delay(10);
  }
}
