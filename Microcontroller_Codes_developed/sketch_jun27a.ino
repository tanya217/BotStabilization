#include <elapsedMillis.h>

//In1, In2 and ENA, 3 pins for each motor
/*int In11=28;
int In12=32;
int ENA1=9;
int In21=36;
int In22=24;
int ENA2=10;
int In31=38;
int In32=37;
int ENA3=8;
int In41=35;
int In42=34;
int ENA4=7;
int In51=43;
int In52=42;
int ENA5=6;
int In61=46;
int In62=47;
int ENA6=5;*/


int SPEED=100;//Speed of all the motors

//In1 and In2, 2 pins for each actuator
int Act11=7;
int Act12=8;
int ENA=9;

//int Act21=4;
//int Act22=5;
/*int Act31=1;
int Act32=1;
int Act41=1;
int Act42=;
int Act51=;
int Act52=;
int Act61=;
int Act62=;*/

/*int isObstaclePin = A0;  // Input pin for the sensor
int isObstacle = HIGH;  // HIGH MEANS NO OBSTACLE


const int encoderIn1 = 19; // Input pin for the interrupter 
int k1=0;
void func1() {
  k1++;
}

const int encoderIn2 = 20; // Input pin for the interrupter 
int k2=0;
void func2() {
  k2++;
}

void foo(int x)
{
  int k3,k4;
  k3=k1/6;
  k4=k2/6;
  while((k3!=(k1/6)+x)&&(k4!=(k2/6)+x))
  {
    k3++;
    k4++;
  }
}*/

void setup() {

Serial.begin(9600);
//For encoder1
/*pinMode(encoderIn1, INPUT); //Set pin 8 as input
attachInterrupt(0, foo, RISING);
//For encoder2
pinMode(encoderIn2, INPUT); //Set pin 8 as input
attachInterrupt(0, foo, RISING);

//The sensor
pinMode(isObstaclePin, INPUT);*?

/*pinMode(In11,OUTPUT);
pinMode(In12,OUTPUT);
pinMode(ENA1,OUTPUT);
pinMode(In21,OUTPUT);
pinMode(In22,OUTPUT);
pinMode(ENA2,OUTPUT);
pinMode(In31,OUTPUT);
pinMode(In32,OUTPUT);
pinMode(ENA3,OUTPUT);
pinMode(In41,OUTPUT);
pinMode(In42,OUTPUT);
pinMode(ENA4,OUTPUT);
pinMode(In51,OUTPUT);
pinMode(In52,OUTPUT);
pinMode(ENA5,OUTPUT);
pinMode(In61,OUTPUT);
pinMode(In62,OUTPUT);
pinMode(ENA6,OUTPUT);*/

pinMode(Act11,OUTPUT);
pinMode(Act12,OUTPUT);
pinMode(ENA,OUTPUT);
//pinMode(Act21,OUTPUT);
//pinMode(Act22,OUTPUT);
/*pinMode(Act31,OUTPUT);
pinMode(Act32,OUTPUT);
pinMode(Act41,OUTPUT);
pinMode(Act42,OUTPUT);
pinMode(Act51,OUTPUT);
pinMode(Act52,OUTPUT);
pinMode(Act61,OUTPUT);
pinMode(Act62,OUTPUT);*/

//pinMode(ENA2,OUTPUT);
//digitalWrite(In1,HIGH);
//digitalWrite(In2,LOW);
/*digitalWrite(In11,LOW);
digitalWrite(In12,HIGH);
analogWrite(ENA1,SPEED);
digitalWrite(In21,HIGH);
digitalWrite(In22,LOW);
analogWrite(ENA2,SPEED);
digitalWrite(In31,HIGH);
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
analogWrite(ENA6,SPEED);*/
//digi
//analogWrite(ENA2,SPEED);

}

void loop() {
  //Sensor
 // isObstacle = analogRead(isObstaclePin);
  //Serial.println(isObstacle);
  //Encoder1
  //Serial.println(k1/5);
  //Encoder2
  //Serial.println(k2/5);

 // if(isObstacle==HIGH)
 // {
    
    delay(3000);
    elapsedMillis time1;
    while(time1<=500)
    {
    digitalWrite(Act11,HIGH);
    digitalWrite(Act12,LOW);
    digitalWrite(ENA,SPEED);
    }
    //delay(3000);
    elapsedMillis time2;
    while(time2<=500)
    {
    digitalWrite(Act11,LOW);
    digitalWrite(Act12,HIGH);
    digitalWrite(ENA,SPEED);
    }
    //digitalWrite(Act21,HIGH);
    //digitalWrite(Act22,LOW);
    //digitalWrite(Act11,LOW);
    //digitalWrite(Act12,HIGH);
    //digitalWrite(Act21,HIGH);
    //digitalWrite(Act22,LOW);
    //}

   /* delay(3000);
    elapsedMillis time1;
    while(time1<=300)
    {
    digitalWrite(Act11,HIGH);
    digitalWrite(Act12,LOW);
    digitalWrite(Act21,HIGH);
    digitalWrite(Act22,LOW);
    }*/
    
    /*foo(5);
    analogWrite(Act11,LOW);
    analogWrite(Act12,HIGH);
    analogWrite(Act21,LOW);
    analogWrite(Act22,HIGH);
  
    /*elapsedMillis time;
    while(time<=)
    {
    digitalWrite(Act11,LOW);
    digitalWrite(Act12,LOW);
    digitalWrite(Act21,LOW);
    digitalWrite(Act22,LOW);
    }*/
    //foo(2); 
    /*delay(1000);
    analogWrite(Act11,LOW);
    analogWrite(Act12,LOW);
    analogWrite(Act21,LOW);
    analogWrite(Act22,LOW);*/
  }   
    
    
 

