#include <Servo.h>
Servo servo1;
int Red = 4;
int Blue = 5;
int Green = 6;
int trigPin = 2;
int echoPin = 3;
long distance;
long duration;
int potpin = 0;
int val;


 
void setup() 
{
  servo1.attach(11);
  pinMode(Red,OUTPUT);
  pinMode(Blue,OUTPUT);
  pinMode(Green,OUTPUT);
   pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
}
 
void loop() {
  ultra();
  servo1.write(0);
  val=analogRead(potpin);
  val=map(val,0,1023,0,100);
  servo1.write(val);
 delay(15);
  
  if(distance<=10){
	digitalWrite(Red,HIGH);
     delay(1000);
    digitalWrite(Red,LOW);
    delay(1000);
    servo1.write(60);
  }
  else{servo1.write(0);}
    if(distance<=15){
   digitalWrite(Blue,HIGH);
   delay(1000);
   digitalWrite(Blue,LOW);
   delay(1000);
  servo1.write(120);
    }
  else{servo1.write(0);}
    if(distance<=20){
  digitalWrite(Green,HIGH);
  delay(1000);
  digitalWrite(Green,LOW);
  delay(1000);
     servo1.write(180);
    }
  else{servo1.write(0);}
}
  
 void ultra(){
  digitalWrite(trigPin,LOW);
  delayMicroseconds(10);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(20);
  digitalWrite(trigPin,LOW);
  duration = pulseIn(echoPin, HIGH);
  distance=duration*0.343/2;
}

  
  
 