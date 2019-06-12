
#define ACTIME 400
#define ACTSPEED 65

struct motor
{
  int In1;
  int In2;
  int Ena;
};

float initial=0;

#define SPEED 75 

struct motor M[6];


int cur_act[6] = {0,0,0,0,0,0};

int isObstaclePin = 50;  // Input pin for the sensor
int isObstacle = LOW;  // HIGH MEANS NO OBSTACLE*/
//float isObstacle;

struct actuator
{
  int In1;
  int In2;
  int Ena;
};

struct actuator A[6];


//const int trigPin = 53;
//const int echoPin = 6;

/*float trigger()
{
  float duration;
  pinMode(trigPin,OUTPUT);
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  pinMode(echoPin,INPUT);
  duration=pulseIn(echoPin,HIGH);
  Serial.println(duration/29/2);
  return (duration);
}*/

void stopit()
{
  digitalWrite(M[0].In1,LOW);
  digitalWrite(M[0].In2,LOW);
  analogWrite(M[0].Ena,0);

  digitalWrite(M[1].In1,LOW);
  digitalWrite(M[1].In2,LOW);
  analogWrite(M[1].Ena,0);

  digitalWrite(M[2].In1,LOW);
  digitalWrite(M[2].In2,LOW);
  analogWrite(M[2].Ena,0);

  digitalWrite(M[3].In1,LOW);
  digitalWrite(M[3].In2,LOW);
  analogWrite(M[3].Ena,0);

  digitalWrite(M[4].In1,LOW);
  digitalWrite(M[4].In2,LOW);
  analogWrite(M[4].Ena,0);

  digitalWrite(M[5].In1,LOW);
  digitalWrite(M[5].In2,LOW);
  analogWrite(M[5].Ena,0);

  digitalWrite(A[0].In1,LOW);
  digitalWrite(A[0].In2,LOW);
  analogWrite(A[0].Ena,0);

  digitalWrite(A[1].In1,LOW);
  digitalWrite(A[1].In2,LOW);
  analogWrite(A[1].Ena,0);
  digitalWrite(A[2].In1,LOW);
  digitalWrite(A[2].In2,LOW);
  analogWrite(A[2].Ena,0);
  digitalWrite(A[3].In1,LOW);
  digitalWrite(A[3].In2,LOW);
  analogWrite(A[3].Ena,0);
  digitalWrite(A[4].In1,LOW);
  digitalWrite(A[4].In2,LOW);
  analogWrite(A[4].Ena,0);
  digitalWrite(A[5].In1,LOW);
  digitalWrite(A[5].In2,LOW);
  analogWrite(A[5].Ena,0);    
}


void setup()
{
  Serial.begin(9600);
  //initial=trigger();
  //pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  //pinMode(echoPin, INPUT); // Sets the echoPin as an Input

  pinMode(isObstaclePin, INPUT);  
  
  M[0].In1 = 35;
  M[0].In2 = 34;
  M[0].Ena = 13;

  M[1].In1 = 36;
  M[1].In2 = 37;
  M[1].Ena = 12;

  M[2].In1 = 38;
  M[2].In2 = 39;
  M[2].Ena = 10;

  M[3].In1 = 41;
  M[3].In2 = 40;
  M[3].Ena = 11;

  M[4].In1 = 43;
  M[4].In2 = 42;
  M[4].Ena = 8;

  M[5].In1 = 46;
  M[5].In2 = 47;
  M[5].Ena = 9;

  pinMode(M[0].In1,OUTPUT);
  pinMode(M[0].In2,OUTPUT);
  pinMode(M[0].Ena,OUTPUT);
  pinMode(M[1].In1,OUTPUT);
  pinMode(M[1].In2,OUTPUT);
  pinMode(M[1].Ena,OUTPUT);
  pinMode(M[2].In1,OUTPUT);
  pinMode(M[2].In2,OUTPUT);
  pinMode(M[2].Ena,OUTPUT);
  pinMode(M[3].In1,OUTPUT);
  pinMode(M[3].In2,OUTPUT);
  pinMode(M[3].Ena,OUTPUT);
  pinMode(M[4].In1,OUTPUT);
  pinMode(M[4].In2,OUTPUT);
  pinMode(M[4].Ena,OUTPUT);
  pinMode(M[5].In1,OUTPUT);
  pinMode(M[5].In2,OUTPUT);
  pinMode(M[5].Ena,OUTPUT);
  

  digitalWrite(M[0].In1,LOW);
  digitalWrite(M[0].In2,HIGH);
  analogWrite(M[0].Ena,125);
  digitalWrite(M[1].In1,LOW);
  digitalWrite(M[1].In2,HIGH);
  analogWrite(M[1].Ena,SPEED);
  digitalWrite(M[2].In1,LOW);
  digitalWrite(M[2].In2,HIGH);
  analogWrite(M[2].Ena,SPEED);
  digitalWrite(M[3].In1,LOW);
  digitalWrite(M[3].In2,HIGH);
  analogWrite(M[3].Ena,SPEED);
  digitalWrite(M[4].In1,LOW);
  digitalWrite(M[4].In2,HIGH);
  analogWrite(M[4].Ena,SPEED);
  digitalWrite(M[5].In1,LOW);
  digitalWrite(M[5].In2,HIGH);
  analogWrite(M[5].Ena,75);
  
  A[0].In1 = 22;
  A[0].In2 = 23;
  A[0].Ena = 2;

  A[1].In1 = 24;
  A[1].In2 = 25;
  A[1].Ena = 3;

  A[2].In1 = 27;
  A[2].In2 = 26;
  A[2].Ena = 6;

  A[3].In1 = 28;
  A[3].In2 = 29;
  A[3].Ena = 5;

  A[4].In1 = 30;
  A[4].In2 = 31;
  A[4].Ena = 6;

  A[5].In1 = 32;
  A[5].In2 = 33;
  A[5].Ena = 7;

  pinMode(A[0].In1,OUTPUT);
  pinMode(A[0].In2,OUTPUT);
  pinMode(A[0].Ena,ACTSPEED);
  pinMode(A[1].In1,OUTPUT);
  pinMode(A[1].In2,OUTPUT);
  pinMode(A[1].Ena,ACTSPEED);
  pinMode(A[2].In1,OUTPUT);
  pinMode(A[2].In2,OUTPUT);
  pinMode(A[2].Ena,ACTSPEED);
  pinMode(A[3].In1,OUTPUT);
  pinMode(A[3].In2,OUTPUT);
  pinMode(A[3].Ena,ACTSPEED);
  pinMode(A[4].In1,OUTPUT);
  pinMode(A[4].In2,OUTPUT);
  pinMode(A[4].Ena,10);
  pinMode(A[5].In1,OUTPUT);
  pinMode(A[5].In2,OUTPUT);
  pinMode(A[5].Ena,ACTSPEED);
} 


void stop1(int i)
{
   switch(i)
    {
      case 0:
      {
      digitalWrite(A[0].In1,LOW);
      digitalWrite(A[0].In2,LOW);
      analogWrite(A[0].Ena,0);
      Serial.println("Actuator 0 stops");
      break;
      }

      case 1:
      {
      digitalWrite(A[1].In1,LOW);
      digitalWrite(A[1].In2,LOW);
      analogWrite(A[1].Ena,0);
      Serial.println("Actuator 1 stops");
      break;
      }

      case 2:
      {
      digitalWrite(A[2].In1,LOW);
      digitalWrite(A[2].In1,LOW);
      analogWrite(A[2].Ena,0);
      Serial.println("Actuator 2 stops");
      break;
      }
      case 3:
      {
      digitalWrite(A[3].In1,LOW);
      digitalWrite(A[3].In2,LOW);
      analogWrite(A[3].Ena,0);
      Serial.println("Actuator 3 stops");
      break;
      }
      case 4:
      {
      digitalWrite(A[4].In1,LOW);
      digitalWrite(A[4].In2,LOW);
      analogWrite(A[4].Ena,0);
      Serial.println("Actuator 4 stops");
      break;
      }
      case 5:
      {
      digitalWrite(A[5].In1,LOW);
      digitalWrite(A[5].In2,LOW);
      analogWrite(A[5].Ena,0);
      Serial.println("Actuator 5 stops");
      break;
      }
      }
}



void reset1(int i)
{
  
  switch(i)
    {
      case 0:
      {
      digitalWrite(A[0].In1,HIGH);
      digitalWrite(A[0].In2,LOW);
      analogWrite(A[0].Ena,ACTSPEED);
      cur_act[i]=0;
      Serial.println("Actuator 0 resets");
      break;
      }

      case 1:
      {
      digitalWrite(A[1].In1,LOW);
      digitalWrite(A[1].In2,HIGH);
      analogWrite(A[1].Ena,ACTSPEED);
      cur_act[i]=0;
      Serial.println("Actuator 1 resets");
      break;
      }

      case 2:
      {
      digitalWrite(A[2].In1,HIGH);
      digitalWrite(A[2].In2,LOW);
      analogWrite(A[2].Ena,ACTSPEED);
      cur_act[i]=0;
      Serial.println("Actuator 2 resets");
      break;
      }
      case 3:
      {
      digitalWrite(A[3].In1,LOW);
      digitalWrite(A[3].In2,HIGH);
      analogWrite(A[3].Ena,ACTSPEED);
      cur_act[i]=0;
      Serial.println("Actuator 3 resets");
      break;
      }
      case 4:
      {
      digitalWrite(A[4].In1,HIGH);
      digitalWrite(A[4].In2,LOW);
      analogWrite(A[4].Ena,ACTSPEED);
      cur_act[i]=0;
      Serial.println("Actuator 4 resets");
      break;
      }
      case 5:
      {
      digitalWrite(A[5].In1,LOW);
      digitalWrite(A[5].In2,HIGH);
      analogWrite(A[5].Ena,ACTSPEED);
      cur_act[i]=0;
      Serial.println("Actuator 5 resets");
      break;
      }
      }
}

void lift(int i)
{
  
  switch(i)
    {
      case 0:
      {
      digitalWrite(A[0].In1,LOW);
      digitalWrite(A[0].In2,HIGH);
      analogWrite(A[0].Ena,ACTSPEED);
      cur_act[i]=1;
      Serial.println("Actuator 0 lifts");
      break;
      }

      case 1:
      {
      digitalWrite(A[1].In1,HIGH);
      digitalWrite(A[1].In2,LOW);
      analogWrite(A[1].Ena,ACTSPEED);
      cur_act[i]=1;
      Serial.println("Actuator 1 lifts");
      break;
      }

      case 2:
      {
      digitalWrite(A[2].In1,LOW);
      digitalWrite(A[2].In2,HIGH);
      analogWrite(A[2].Ena,ACTSPEED);
      cur_act[i]=1;
      Serial.println("Actuator 2 lifts");
      break;
      }
      case 3:
      {
      digitalWrite(A[3].In1,HIGH);
      digitalWrite(A[3].In2,LOW);
      analogWrite(A[3].Ena,ACTSPEED);
      cur_act[i]=1;
      Serial.println("Actuator 3 lifts");
      break;
      }
      case 4:
      {
      digitalWrite(A[4].In1,LOW);
      digitalWrite(A[4].In2,HIGH);
      analogWrite(A[4].Ena,ACTSPEED);
      cur_act[i]=1;
      Serial.println("Actuator 4 lifts");
      break;
      }
      case 5:
      {
      digitalWrite(A[5].In1,HIGH);
      digitalWrite(A[5].In2,LOW);
      analogWrite(A[5].Ena,ACTSPEED);
      cur_act[i]=1;
      Serial.println("Actuator 5 lifts");
      break;
      }
      }
}

void liftMultiple(int *arr)
{
  int i;
  for(i=0;i<6;i++)
  {
    if((cur_act[i]==0)&&(arr[i]==1))  
    {
      lift(i);
      cur_act[i]=1;
    }
    
    else if((cur_act[i]==1)&&(arr[i]==0))
      {
        reset1(i);
        cur_act[i]=0;
      } 
  }
}

void create_track(int *array1)
{
  int i;
  for(i=0;i<26;i++)
    array1[i]=0; 
}

void moveTrack(int *array1)
{
  int i;
  for(i=25;i>0;i--)
  {
    array1[i]=array1[i-1];
  }
}


void runBot(int *track, int *temp_act)
{
  temp_act[0]=track[3];
  temp_act[1]=track[5];
  temp_act[2]=track[13];
  temp_act[3]=track[15];
  temp_act[4]=track[23];
  temp_act[5]=track[25];
  //delay(500);
  //stopit();
  //while(1)
  //{
    
  //}
}



void loop()
{
  int track[26];
  create_track(track);
  int temp_act[6] = {0,0,0,0,0,0};  
  int j = 0;
  
  while(1)
  {
    Serial.print("-");
    for(j = 0; j < 26; j++)
      Serial.print(track[j]);
    Serial.print("-");  
    Serial.println("");  
    isObstacle = digitalRead(isObstaclePin);
    Serial.println(isObstacle);
    if(!isObstacle)
    {
      track[0]=1;
      //Serial.println(track[0]);
    }
   else
   {
      track[0]=0;
      //Serial.println(track[0]);
    }  
      
    Serial.print("-");
    for(j = 0; j < 26; j++)
      Serial.print(track[j]);
    Serial.print("-");  
    Serial.println("");
    runBot(track,temp_act);
    liftMultiple(temp_act);   
    delay(ACTIME);
    int i;
    for(i=0;i<6;i++) 
    {
      stop1(i);
    }
    moveTrack(track);   
    // delay(100);
    //stopit();  
  }
}

