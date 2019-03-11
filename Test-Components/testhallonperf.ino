void setup() {
  // put your setup code here, to run once:
  for(int pin = 2; pin <=11; pin++)
    pinMode(pin,OUTPUT);
  Serial.begin(9600);
   pinMode(12,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("THE readings are");
  Serial.println(digitalRead(12));
  if(digitalRead(12) == 0)
  {
    for(int pin = 2; pin <= 11; pin++)
      digitalWrite(pin,HIGH);
  }
  else
  {
    for(int pin = 2; pin <= 11; pin++)
      digitalWrite(pin,LOW);
  }

}
