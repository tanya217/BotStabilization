#include <elapsedMillis.h>
#include"motor.h"
#include"actuator.h"

typedef struct  motor Motor;
typedef struct actuator Actuator;

Motor M1,M2,M3,M4,M5,M6;
Actuator Act1,Act2,Act3,Act4,Act5,Act6;

M1->In1=32;
M1->In2=28;
M1->ENA=9;
M2->In1=36;
M2->In2=24;
M2->ENA=10;
M3->In1=37;
M3->In2=38;
M3->ENA=8;
M4->In1=34;
M4->In2=35;
M4->ENA=7;
M5->In1=42;
M5->In2=43;
M5->ENA=6;
M6->In1=46;
M6->In2=47;
M6->ENA=5;

int SPEED=100;

Act11=1;
Act12=1;
Act21=1;
Act22=1;
Act31=1;
Act32=1;
Act41=1;
Act42=1;
Act51=1;
Act52=1;
Act61=1;
Act62=1;


int LED = 13; // Use the onboard Uno LED

int isObstaclePin = 2;  // This is our input pin
int isObstacle = HIGH;  // HIGH MEANS NO OBSTACLE

void setup()
{
  pinMode(M1->In1,OUTPUT);
  pinMode(M1->In2,OUTPUT);
  pinMode(M1->ENA,OUTPUT);
  pinMode(M2->In1,OUTPUT);
  pinMode(M2->In2,OUTPUT);
  pinMode(M2->ENA,OUTPUT);
  pinMode(M3->In1,OUTPUT);
  pinMode(M3->In2,OUTPUT);
  pinMode(M3->ENA,OUTPUT);
  pinMode(M4->In1,OUTPUT);
  pinMode(M4->In2,OUTPUT);
  pinMode(M4->ENA,OUTPUT);
  pinMode(M5->In1,OUTPUT);
  pinMode(M5->In2,OUTPUT);
  pinMode(M5->ENA,OUTPUT);
  pinMode(M6->In1,OUTPUT);
  pinMode(M6->In2,OUTPUT);
  pinMode(M6->ENA,OUTPUT);

  digitalWrite(In1,LOW);
  digitalWrite(In2,HIGH);
  analogWrite(ENA,SPEED);
  digitalWrite(In1,HIGH);
  digitalWrite(In2,LOW);
  analogWrite(ENA,SPEED);
  digitalWrite(In1,HIGH);
  digitalWrite(In32,LOW);
  analogWrite(ENA3,SPEED);
  digitalWrite(In41,HIGH);
  digitalWrite(In42,LOW);
  analogWrite(ENA4,SPEED);
  digitalWrite(In51,HIGH);
  digitalWrite(In52,LOW);
  analogWrite(ENA5,SPEED);
  digitalWrite(In61,HIGH);
  digitalWrite(In62,LOW);
  analogWrite(ENA6,SPEED);

  pinMode(LED, OUTPUT);
  pinMode(isObstaclePin, INPUT);
  pinMode(Act1->In1,OUTPUT);
  pinMode(Act1->In2,OUTPUT);
  pinMode(Act2->In1,OUTPUT);
  pinMode(Act2->In2,OUTPUT);
  pinMode(Act3->In1,OUTPUT);
  pinMode(Act3->In2,OUTPUT);
  pinMode(Act4->In1,OUTPUT);
  pinMode(Act4->In2,OUTPUT);
  pinMode(Act5->In1,OUTPUT);
  pinMode(Act5->In2,OUTPUT);
  pinMode(Act6->In1,OUTPUT);
  pinMode(Act6->In2,OUTPUT);
  Serial.begin(9600);
}



void loop()
{
  
  digitalWrite(Act1->In1,LOW);
  digitalWrite(Act1->In2,HIGH);
  digitalWrite(Act2->In1,LOW);
  digitalWrite(Act2->In2,HIGH);
  digitalWrite(Act3->In1,HIGH);
  digitalWrite(Act3->In2,LOW);
  digitalWrite(Act4->In1,HIGH);
  digitalWrite(Act4->In2,LOW);
  
  isObstacle = digitalRead(isObstaclePin);
  if(isObstacle==LOW)
  {
 
  
    Serial.println("OBSTACLE!");
    digitalWrite(LED, HIGH);
    
    elapsedMillis time;
    
    while(time<=1000)
    {
      digitalWrite(A1->In1,LOW);
      digitalWrite(A1->In2,HIGH);
      digitalWrite(A2->In1,LOW);
      digitalWrite(A2->In2,HIGH);
    }
    time = 0;
    //delay(1000);
   
   while(time<=1000)
    {
      digitalWrite(A1->In1,HIGH);
      digitalWrite(A1->In2,LOW);
      digitalWrite(A2->In1,HIGH);
      digitalWrite(A2->In2,LOW);
    }
   time=0;
  }
  else
  {
    Serial.println("NO OBSTACLE!");
    digitalWrite(LED, LOW);
  }*/

/*digitalWrite(Act3->In1,LOW);
digitalWrite(Act3->In2,HIGH);
digitalWrite(Act4->In1,LOW);
digitalWrite(Act4->In2,HIGH);
digitalWrite(Act5->In1,HIGH);
digitalWrite(Act5->In2,LOW);
digitalWrite(Act6->In1,HIGH);
digitalWrite(Act6->In2,LOW);
digitalWrite(Act5->In1,LOW);
digitalWrite(Act5->In2,HIGH);
digitalWrite(Act6->In1,LOW);
digitalWrite(Act6->In2,HIGH);*/

delay(1500);
digitalWrite(A3->In1,LOW);
digitalWrite(A3->In2,HIGH);
digitalWrite(A4->In1,LOW);
digitalWrite(A4->In2,HIGH);

digitalWrite(A5->In1,HIGH);
digitalWrite(A5->In2,LOW);
digitalWrite(A6->In1,HIGH);
digitalWrite(A6->In2,LOW);

delay(1500);
digitalWrite(A3->In1,LOW);
digitalWrite(A3->In2,HIGH);
digitalWrite(A4->In1,LOW);
digitalWrite(A4->In2,HIGH);
while(isobstacle1)
{
digitalWrite(A3->In1,LOW);
digitalWrite(A3->In2,LOW);
digitalWrite(A4->In1,LOW);
digitalWrite(A4->In2,LOW);
}
}
digitalWrite(A3->In1,HIGH);
digitalWrite(A3->In2,LOW);
digitalWrite(A4->In1,HIGH);
digitalWrite(A4->In2,LOW);


delay(1500);
digitalWrite(A5->In1,LOW);
digitalWrite(A5->In2,HIGH);
digitalWrite(A6->In1,LOW);
digitalWrite(A6->In2,HIGH);
while(isobstacle1)
{
digitalWrite(A5->In1,LOW);
digitalWrite(A5->In2,LOW);
digitalWrite(A6->In1,LOW);
digitalWrite(A6->In2,LOW);
}
}
digitalWrite(A5->In1,HIGH);
digitalWrite(A5->In2,LOW);
digitalWrite(A6->In1,HIGH);
digitalWrite(A6->In2,LOW);

}


