#include<Servo.h>
Servo s1;
Servo s2;
Servo s3;
Servo s4;

void setup() {
  // put your setup code here, to run once:
  s1.attach(5);
  s2.attach(6);
  s3.attach(7);
  s4.attach(8);
}

void loop() {
  // put your main code here, to run repeatedly:
s1.write(0);       //s1 motor (waist) rotate
delay(2000);

s2.write(70);      //shoulder down
delay(2000);

s3.write(160);    //elbow down
delay(2000);

s4.write(0);      //gripper close to pick the element
delay(2000);

s3.write(90);     //elbow up
delay(2000);

s2.write(120);    //shoulder up
delay(2000);

s1.write(90);     //waist rotate
delay(2000);

s2.write(70);     //shoulder down
delay(2000);

s3.write(160);    //elbow down
delay(2000);

s4.write(90);     //open jow realese the element
delay(2000);

s2.write(120);    //shoulder up
delay(2000);

// after all operations done. arm will come to its original position.
}