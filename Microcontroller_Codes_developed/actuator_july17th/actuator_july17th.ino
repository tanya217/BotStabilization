

#include<elapsedMillis.h>
#define ACTIME 750
#define ACTSPEED 50

//Initializing the pins for the Actuator
//In1, In2 and ENA, 3 pins for each Actuator
int Act1In1=22;
int Act1In2=23;
int Act1Ena=2;
int Act2In1=25;
int Act2In2=29;
int Act2Ena=1;
int Act3In1=32;
int Act3In2=33;
int Act3Ena=7;
int Act4In1=41;
int Act4In2=40;
int Act4Ena=3;
int Act5In1=51;
int Act5In2=27;
int Act5Ena=13;
int Act6In1=52;
int Act6In2=53;
int Act6Ena=12;

int current[6] = {0, 0, 0, 0, 0, 0};

int isObstaclePin = 4;  // Input pin for the sensor
int isObstacle = HIGH;  // HIGH MEANS NO OBSTACLE


void stopAc(int i)
{
      switch(i)
    {
      case 0:
      {
      digitalWrite(Act1In1,LOW);
      digitalWrite(Act1In2,LOW);
      analogWrite(Act1Ena,0);
      break;
      }

      case 1:
      {
      digitalWrite(Act2In1,LOW);
      digitalWrite(Act2In2,LOW);
      analogWrite(Act2Ena,0);
      break;
      }

      case 2:
      {
      digitalWrite(Act3In1,LOW);
      digitalWrite(Act3In2,LOW);
      analogWrite(Act3Ena,0);
      break;
      }
      case 3:
      {
      digitalWrite(Act4In1,LOW);
      digitalWrite(Act4In2,LOW);
      analogWrite(Act4Ena,0);
      break;
      }
      case 4:
      {
      digitalWrite(Act5In1,LOW);
      digitalWrite(Act5In2,LOW);
      analogWrite(Act5Ena,0);
      break;
      }
      case 5:
      {
      digitalWrite(Act6In1,LOW);
      digitalWrite(Act6In2,LOW);
      analogWrite(Act6Ena,0);
      break;
      }
      }
}

void reset1(int i)
{
  
 // if(arr[i]==1)
  //{
    switch(i)
    {
      case 0:
      {
      digitalWrite(Act1In1,LOW);
      digitalWrite(Act1In2,HIGH);
      analogWrite(Act1Ena,ACTSPEED);
      current[i]=0;
      break;
      }

      case 1:
      {
      digitalWrite(Act2In1,LOW);
      digitalWrite(Act2In2,HIGH);
      analogWrite(Act2Ena,ACTSPEED);
      current[i]=0;
      break;
      }

      case 2:
      {
      digitalWrite(Act3In1,LOW);
      digitalWrite(Act3In2,HIGH);
      analogWrite(Act3Ena,ACTSPEED);
      current[i]=0;
      break;
      }
      case 3:
      {
      digitalWrite(Act4In1,LOW);
      digitalWrite(Act4In2,HIGH);
      analogWrite(Act4Ena,ACTSPEED);
      current[i]=0;
      break;
      }
      case 4:
      {
      digitalWrite(Act5In1,HIGH);
      digitalWrite(Act5In2,LOW);
      analogWrite(Act5Ena,ACTSPEED);
      current[i]=0;
      break;
      }
      case 5:
      {
      digitalWrite(Act6In1,HIGH);
      digitalWrite(Act6In2,LOW);
      analogWrite(Act6Ena,ACTSPEED);
      current[i]=0;
      break;
      }
      }
   //}
}


void lift1(int i)
{
  //int i=0;
   //if(current[i]!=arr[i])
   //{
     switch(i)
    {
      case 0:
      {
      digitalWrite(Act1In1,LOW);
      digitalWrite(Act1In2,HIGH);
      analogWrite(Act1Ena,ACTSPEED);
      current[i]=1;
      break;
      }

      case 1:
      {
      digitalWrite(Act2In1,LOW);
      digitalWrite(Act2In2,HIGH);
      analogWrite(Act2Ena,ACTSPEED);
      current[i]=1;
      break;
      }

      case 2:
      {
      digitalWrite(Act3In1,HIGH);
      digitalWrite(Act3In2,LOW);
      analogWrite(Act3Ena,ACTSPEED);
      current[i]=1;
      break;
      }
      case 3:
      {
      digitalWrite(Act4In1,HIGH);
      digitalWrite(Act4In2,LOW);
      analogWrite(Act4Ena,ACTSPEED);
      current[i]=1;
      break;
      }
      case 4:
      {
      digitalWrite(Act5In1,LOW);
      digitalWrite(Act5In2,HIGH);
      analogWrite(Act5Ena,ACTSPEED);
      current[i]=1;
      break;
      }
      case 5:
      {
      digitalWrite(Act6In1,LOW);
      digitalWrite(Act6In2,HIGH);
      analogWrite(Act6Ena,ACTSPEED);
      current[i]=1;
      break;
      }
      }
   //}
}

void liftMultiple(int * arr)
{
  int i;
  for(i=0;i<6;i++)
  {
    if(current[i]!=arr[i])
            lift1(i);
  }

  delay(ACTIME);
  for(i=0;i<6;i++)
  {
    stopAc(i);
  }
  
}


void resetMultiple(int * arr)
{
  int i;
  for(i=0;i<6;i++)
  {
    if(current[i]!=arr[i])
          reset1(i);
  }

  delay(ACTIME);
  for(i=0;i<6;i++)
  {
    stopAc(i);
  }
  
}
void setup() 
{
Serial.begin(9600);

pinMode(isObstaclePin, INPUT);

pinMode(Act1In1,OUTPUT);
pinMode(Act1In2,OUTPUT);
pinMode(Act1Ena,ACTSPEED);
pinMode(Act1In1,OUTPUT);
pinMode(Act1In2,OUTPUT);
pinMode(Act1Ena,ACTSPEED);
pinMode(Act2In1,OUTPUT);
pinMode(Act2In2,OUTPUT);
pinMode(Act2Ena,ACTSPEED);
pinMode(Act3In1,OUTPUT);
pinMode(Act3In2,OUTPUT);
pinMode(Act3Ena,ACTSPEED);
pinMode(Act4In1,OUTPUT);
pinMode(Act4In2,OUTPUT);
pinMode(Act4Ena,ACTSPEED);
pinMode(Act5In1,OUTPUT);
pinMode(Act5In2,OUTPUT);
pinMode(Act5Ena,ACTSPEED);
pinMode(Act6In1,OUTPUT);
pinMode(Act6In2,OUTPUT);
pinMode(Act6Ena,ACTSPEED);
}

void loop() {
  
int temp[6]={0, 0, 0, 0, 0, 0};

isObstacle = digitalRead(isObstaclePin);
//Serial.println(isObstacle);
 if(isObstacle)
 {
Serial.println(isObstacle);
/*temp[0]=1;
temp[1]=1;
delay(ACTIME);
reset1(0);
temp[2]=1;
temp[3]=1;
actuatorLift(temp);
delay(ACTIME);
reset1(temp);*/
//temp[4]=1;
//temp[5]=1;
lift1(2);
//lift1(3);
delay(ACTIME);
stopAc(2);
//stopAc(3);
reset1(2);
//reset1(3);
delay(ACTIME);
stopAc(2);
//stopAc(3);
delay(ACTIME);
/*lift1(5);
delay(ACTIME);
stopAc(4);
delay(ACTIME);
stopAc(5);
delay(ACTIME);
reset1(4);
delay(ACTIME);
reset1(5);
delay(ACTIME);
stopAc(4);
delay(ACTIME);
stopAc(5);
delay(ACTIME);*/
}

}
