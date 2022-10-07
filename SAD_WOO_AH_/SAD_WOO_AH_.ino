// C++ code
//
int sensorPin = A0; 
int sensorValue;  
int limit = 100; 
const int button = 2;
const int Leds[] = {4,5,6,7,8,9};
const int buzzer = 3;

void setup()
{
Serial.begin(9600);
pinMode(13, OUTPUT);

pinMode(button, INPUT);
  for(int i = 0; i < 7; i++)
  {
    pinMode(Leds[i], OUTPUT); 
  }  
    pinMode(buzzer, OUTPUT);
 
}
void loop()
{
  sensorValue = analogRead(sensorPin); 
  Serial.println("Analog Value : ");
Serial.println(sensorValue);
  
  
  if (sensorValue<limit) {
digitalWrite(13, HIGH); 
}
else {
digitalWrite(13, LOW);
 }
delay(1000); 
}
}


  tone(buzzer, 1000); 
  delay(1000);        
  noTone(buzzer);     
  delay(1000);       

  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)

}
