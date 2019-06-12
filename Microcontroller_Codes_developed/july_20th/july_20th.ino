struct motor
{
  int In1;
  int In2;
  int Ena;
};


#define SPEED 50

struct motor M[6];

void setup()
{
  Serial.begin(9600);
  
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

  M[4].In1 = 42;
  M[4].In2 = 43;
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
  analogWrite(M[0].Ena,SPEED);
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
  analogWrite(M[5].Ena,SPEED);
 
}


void loop()
{

}
