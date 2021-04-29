#include servo
Servo servo1;
int trigPin=4;
int echoPin=5;
long distance;
long duration;


void setup(){
Servo1.attach(8);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  

}
void loop(){
ultra();
servo1.write(0);
  if(distance>=100){
  servo1.write(180);
  
  
  }
  else{
  servo1.write(0);
  }
  

void ultra(){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH)
}
  
  
  
