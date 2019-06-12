int isObstaclePin = A0;  // Input pin for the sensor
int isObstacle = HIGH;  // HIGH MEANS NO OBSTACLE

void setup() {
  Serial.begin(9600);
  pinMode(isObstaclePin, INPUT);
}

void loop() {
  isObstacle = analogRead(isObstaclePin);
  Serial.println(isObstacle);
}
