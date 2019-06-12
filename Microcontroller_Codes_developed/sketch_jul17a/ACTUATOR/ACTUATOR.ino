
#include<elapsedMillis.h>
#define ACTTIME 300;
#define ACTSPEED 100;

//Initializing the pins for the Actuator
//In1, In2 and ENA, 3 pins for each Actuator
int Act1In1=28;
int Act1In2=32;
int Act1ENA=9;
int Act2In1=36;
int Act2In2=24;
int Act2ENA=10;
int Act3In1=38;
int Act3In2=37;
int Act3ENA=8;
int Act4In1=35;
int Act4In2=34;
int Act4ENA=7;
int Act5In1=43;
int Act5In2=42;
int Act5ENA=6;
int Act6In1=46;
int Act6In2=47;
int Act6ENA=5;

int current[6] = {0, 0, 0, 0, 0, 0};


void reset1(int &arr)
{
  if(arr[i]==1)
  {
   if(i==0)
   {
     digitalWrite(Act1In1,LOW);
     digitalWrite(Act1In2,HIGH);
     analogWrite(Act1Ena,ACTSPEED);
     delay(acTime);
     digitalWrite(Act1In1,LOW);
     digitalWrite(Act1In2,LOW);
     analogWrite(Act1Ena,0);
     
   }
   
   else if(i==1)
   {
   elapsedMillis time1;
   while(time1<=ACTTIME)
   {
   digitalWrite(Act2In1,LOW);
   digitalWrite(Act2In2,HIGH);
   digitalWrite(Act2Ena,ACTSPEED);
   }
   }

   else if(i==2)
   {
   elapsedMillis time1;
   while(time1<=ACTTIME)
   {
   digitalWrite(Act3In1,LOW);
   digitalWrite(Act3In2,HIGH);
   digitalWrite(Act3Ena,ACTSPEED);
   }
   }

   else if(i==3)
   {
   elapsedMillis time1;
   while(time1<=ACTTIME)
    {
   digitalWrite(Act4In1,LOW);
   digitalWrite(Act4In2,HIGH);
   digitalWrite(Act4Ena,ACTSPEED);
   }
   }

   else if(i==4)
   {
   elapsedMillis time1;
   while(time1<=ACTTIME)
    {
   digitalWrite(Act6In1,LOW);
   digitalWrite(Act6In2,HIGH);
   digitalWrite(Act6Ena,ACTSPEED);
   }
   }
   
   else if(i==5)
   {
   elapsedMillis time1;
   while(time1<=ACTTIME)
   {
   digitalWrite(Act6In1,LOW);
   digitalWrite(Act6In2,HIGH);
   digitalWrite(Act6Ena,ACTSPEED);
   }
   }
}  
  current[i]=0;
}

void resetAll(int &arr)
{
  int i=0;
  while(i<6)
  {
    
    arr[i]=0;
    current[i]=0;
    i++;
  }
  elapsedMillis time1;
  while(time1<=ACTTIME)
    {
     digitalWrite(Act1In1,LOW);
     digitalWrite(Act1In2,HIGH);
     digitalWrite(Act1Ena,ACTSPEED);
    }
   
   elapsedMillis time1;
   while(time1<=ACTTIME)
   {
   digitalWrite(Act2In1,LOW);
   digitalWrite(Act2In2,HIGH);
   digitalWrite(Act2Ena,ACTSPEED);
   }
  
   elapsedMillis time1;
   while(time1<=ACTTIME)
   {
   digitalWrite(Act3In1,LOW);
   digitalWrite(Act3In2,HIGH);
   digitalWrite(Act3Ena,ACTSPEED);
   }
   
   elapsedMillis time1;
   while(time1<=ACTTIME)
    {
   digitalWrite(Act4In1,LOW);
   digitalWrite(Act4In2,HIGH);
   digitalWrite(Act4Ena,ACTSPEED);
   }

   elapsedMillis time1;
   while(time1<=ACTTIME)
    {
   digitalWrite(Act6In1,LOW);
   digitalWrite(Act6In2,HIGH);
   digitalWrite(Act6Ena,ACTSPEED);
   }
   
   elapsedMillis time1;
   while(time1<=ACTTIME)
   {
   digitalWrite(Act6In1,LOW);
   digitalWrite(Act6In2,HIGH);
   digitalWrite(Act6Ena,ACTSPEED);
   }
}



void actuatorLift(int &arr,int time1)
{
  int i=0;
  while(i<6)
  {
    if(arr[i]==1)
    {
     
      if(i==0)
      {
        elapsedMillis time1;
        while(time1<=ACTTIME)
        {
         digitalWrite(Act1In1,HIGH);
         digitalWrite(Act1In2,LOW);
         digitalWrite(Act1Ena,ACTSPEED);
        }
       }
       
       else if(i==1)
       {
       elapsedMillis time1;
       while(time1<=ACTTIME)
       {
       digitalWrite(Act2In1,HIGH);
       digitalWrite(Act2In2,LOW);
       digitalWrite(Act2Ena,ACTSPEED);
       }
       }
    
       else if(i==2)
       {
       elapsedMillis time1;
       while(time1<=ACTTIME)
       {
       digitalWrite(Act3In1,HIGH);
       digitalWrite(Act3In2,LOW);
       digitalWrite(Act3Ena,ACTSPEED);
       }
       }
    
       else if(i==3)
       {
       elapsedMillis time1;
       while(time1<=ACTTIME)
        {
       digitalWrite(Act4In1,HIGH);
       digitalWrite(Act4In2,LOW);
       digitalWrite(Act4Ena,ACTSPEED);
       }
       }
    
       else if(i==4)
       {
       elapsedMillis time1;
       while(time1<=ACTTIME)
        {
       digitalWrite(Act6In1,HIGH);
       digitalWrite(Act6In2,LOW);
       digitalWrite(Act6Ena,ACTSPEED);
       }
       }
       
       else if(i==5)
       {
       elapsedMillis time1;
       while(time1<=ACTTIME)
       {
       digitalWrite(Act6In1,HIGH);
       digitalWrite(Act6In2,LOW);
       digitalWrite(Act6Ena,ACTSPEED);
       }
       }
   }
    i++;
  }
}

void setup() {
  // put your setup code here, to run once:
pinMode(Act1In,OUTPUT);
pinMode(Act1In2,OUTPUT);
pinMode(Act1ENA,OUTPUT);
pinMode(Act2In1,OUTPUT);
pinMode(Act2In2,OUTPUT);
pinMode(Act2ENA,OUTPUT);
pinMode(Act3In1,OUTPUT);
pinMode(Act3In2,OUTPUT);
pinMode(Act3ENA,OUTPUT);
pinMode(Act4In1,OUTPUT);
pinMode(Act4In2,OUTPUT);
pinMode(Act4ENA,OUTPUT);
pinMode(Act5In1,OUTPUT);
pinMode(Act5In2,OUTPUT);
pinMode(Act5ENA,OUTPUT);
pinMode(Act6In1,OUTPUT);
pinMode(Act6In2,OUTPUT);
pinMode(Act6ENA,OUTPUT);
}

void loop() {
  

}
