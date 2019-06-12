#include <elapsedMillis.h>
int In1=32;
int In2=38;
//int ENA=10;
int SPEED=210;
int LED = 13; // Use the onboard Uno LED
int isObstaclePin = 2;  // This is our input pin
int isObstacle = HIGH;  // HIGH MEANS NO OBSTACLE

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(isObstaclePin, INPUT);
  pinMode(In1,OUTPUT);
  pinMode(In2,OUTPUT);
  //pinMode(ENA,OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  isObstacle = digitalRead(isObstaclePin);
  if(isObstacle==LOW)
  {
 
  
    Serial.println("OBSTACLE!");
    digitalWrite(LED, HIGH);
    //while(isObstacle=LOW)
    elapsedMillis time;
    while(time<=1000)
    {
    digitalWrite(In1,LOW);
    digitalWrite(In2,HIGH);
    //analogWrite(ENA,SPEED);
    }
    time = 0;
    //delay(1000);
   /*if(isObstacle=!HIGH)
    {
    digitalWrite(In1,LOW);
    digitalWrite(In2,LOW);
    }*/
    
    while(time<=1000)
    {
    digitalWrite(In1,HIGH);
    digitalWrite(In2,LOW);
    }
   time=0;
  }
  else
  {
    Serial.println("NO OBSTACLE!");
    digitalWrite(LED, LOW);
  }
  
}
