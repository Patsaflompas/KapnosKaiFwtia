// C++ code
//
int redLed = 12;
int smokeA0 = A0;
int sensorThres = 100;


void setup()
{
  pinMode(redLed, OUTPUT);
  pinMode(smokeA0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int analogSensor = analogRead(smokeA0);
  Serial.print("Pin A0: ");
  Serial.println(analogSensor);
  
  if (analogSensor > sensorThres)
  {
    digitalWrite(redLed, HIGH);
  }
  else
  {
    digitalWrite(redLed, LOW);
  }
 
}