#include <Servo.h>. 

Servo myServo;
Servo myServo1;
Servo myServo2;
Servo myServo3; 

int switch1 = A0;
int switch2 = A1;
int switch3 = A2;
int switch4 = A3;

void setup() {
  myServo.attach(13);
myServo1.attach(12); 
myServo2.attach(11);
myServo3.attach(10); 


}

void loop() {

   myServo.write(90);
  myServo1.write(90);
  myServo2.write(90);
  myServo3.write(90);
  delay(50);
  
 int state1=digitalRead(switch1);
 int state2=digitalRead(switch2);
 int state3=digitalRead(switch3);
 int state4=digitalRead(switch4);

  if(state1 == HIGH){  
  myServo.write(180);
  
  delay(700);
 
  }
   if(state2 == HIGH){  
  myServo1.write(90);
  
  delay(700);
 
  }
   if(state3 == HIGH){  
  myServo2.write(0);
  
  delay(700);
 
  }
  if(state4 == HIGH){  
  myServo3.write(45);
  
  delay(700);
 
  }
 
  

}
