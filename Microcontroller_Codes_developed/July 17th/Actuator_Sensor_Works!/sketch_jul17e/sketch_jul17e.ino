#include <elapsedMillis.h>

int isObstaclePin = 4;  // Input pin for the sensor
int isObstacle = HIGH;  // HIGH MEANS NO OBSTACLE

int ActSpeed=100;//Speed of all the actuators

int Act1Ina1=7;
int Act1Ina2=8;
int Act1Ena=9;

  void up()
    {
      elapsedMillis time1;
      while(time1<=600)
    {
    digitalWrite(Act1Ina1,HIGH);
    digitalWrite(Act1Ina2,LOW);
    digitalWrite(Act1Ena,ActSpeed);
    }
    }

    void down()
    {
     elapsedMillis time2;
     while(time2<=600)
    {
    digitalWrite(Act1Ina1,LOW);
    digitalWrite(Act1Ina2,HIGH);
    digitalWrite(Act1Ena,ActSpeed);
    }
    }

    void stopit()
    {
     elapsedMillis time2;
     while(time2<=300)
    {
    digitalWrite(Act1Ina1,LOW);
    digitalWrite(Act1Ina2,LOW);
    digitalWrite(Act1Ena,ActSpeed);
    }
    }

void setup() {
Serial.begin(9600);
pinMode(isObstaclePin, INPUT);
pinMode(Act1Ina1,OUTPUT);
pinMode(Act1Ina2,OUTPUT);
pinMode(Act1Ena,ActSpeed);

}

void loop() {
 isObstacle = digitalRead(isObstaclePin);
/// Serial.println(isObstacle);
 if(!isObstacle)
 {
    Serial.println(isObstacle);
    delay(3000);
    up();
    stopit();
    down();
    stopit();
 }
 /*digitalWrite(Act1Ina1,HIGH);
    digitalWrite(Act1Ina2,LOW);
    digitalWrite(Act1Ena,ActSpeed);
    delay(1000);
*/
}
