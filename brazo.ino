#include <Servo.h>
Servo base;
Servo derecho;
Servo izquierdo;
Servo gancho;

void setup(){
  base.attach(12);
  derecho.attach(11);
  izquierdo.attach(10);
  gancho.attach(9);
}
void loop(){
base.write(80);
delay(2000);
derecho.write(100);
delay(2000);
izquierdo.write(70);
delay(2000);
gancho.write(50);
delay(2000);
gancho.write(100);
delay(2000);
derecho.write(60);
delay(2000);
base.write(70);
delay(1000);
base.write(60);
delay(1000);
base.write(50);
delay(1000);
base.write(40);
delay(1000);
base.write(30);
delay(1000);
base.write(20);
delay(1000);
gancho.write(50);
delay(3000);
gancho.write(100);
delay(3000);
base.write(30);
delay(1000);
base.write(40);
delay(1000);
base.write(50);
delay(1000);
base.write(60);
delay(1000);
base.write(70);
delay(1000);

return 0;
}

