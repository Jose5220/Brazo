#include <SoftwareSerial.h>    
#include <Servo.h>


Servo base,gancho,izquierdo,derecho;
char servo;
int angulo;
int B=90;
int G=90;
int A;
int C;
int J;
int D=70;
int I=70;  //acomodar angulos para servos
SoftwareSerial BT(2,3);


void setup() {
 Serial.begin(9600);
 base.attach(12);
 izquierdo.attach(10);
 derecho.attach(11);
 gancho.attach(9);
}

void loop() {
  if(Serial.available() > 0){
    servo = Serial.read();
    angulo = Serial.parseInt();
  }
  
  if(BT.available() > 0){
    servo = BT.read();
    angulo = BT.parseInt();
}
  switch(servo){
    case 'B':
    B = angulo;
    base.write(B);
    break;
    case 'G':
    G = angulo;
    gancho.write(G);
    break;
    case 'A':
    A = 60;
    break;
    case 'C' :
    C = 100;
    break;
    case 'D':
    D = angulo;
    derecho.write(D);
    break;
    case 'I':
    I = angulo;
    izquierdo.write(I);
    break;
    case 'Z' :
    base.write(92);
    delay(2000);
    gancho.write(60);
    delay(2000);
    izquierdo.write(58);
    delay(2000);
    derecho.write(107);
    delay(2000);
    gancho.write(90);
    delay(2000);
    derecho.write(100);
    delay(2000);
    izquierdo.write(100);
    delay(2000);
    derecho.write(60);
    delay(2000);
    base.write(100);
    delay(2000);
    base.write(110);
    delay(2000);
    base.write(120);
    delay(2000);
    base.write(130);
    delay(2000);
    base.write(150);
    delay(2000);
    base.write(160);
    delay(2000);
    base.write(180);
    delay(2000);
    gancho.write(60);
    delay(2000);
  case 'J' :
  base.write(180);
    delay(2000);
    base.write(160);
    delay(2000);
    base.write(140);
    delay(2000);
    base.write(130);
    delay(2000);
    base.write(120);
    delay(2000);
    base.write(110);
    delay(2000);
    base.write(100);
    delay(2000);
    base.write(90);
    delay(2000);
 
  }
  
} 
