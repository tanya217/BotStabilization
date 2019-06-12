
const int encoderIn = 2; // input pin for the interrupter 
//int detectState=0; // Variable for reading the encoder status
int k=0;
void func() {
  k++;
}
void setup()
{
  Serial.begin(9600);
   pinMode(encoderIn, INPUT); //Set pin 8 as input
   attachInterrupt(0, func, RISING);
}

void loop() 
{
   Serial.println(k/5);
   
}


