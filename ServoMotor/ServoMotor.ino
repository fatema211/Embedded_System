#include <Servo.h>
Servo servomotor; // initiate servo obejct 
int angle=0;
void setup() {
servomotor.attach(9);
Serial.begin(9600);  
                
}

void loop() {
 int Newangle = angle;

 while (Serial.available()>0){
  int c= Serial.read();
  int i;
  for(i=0;i<=179;i++){
 if (c==i && Newangle<179 ){
  Newangle++; }
  
 else if (c==i && Newangle>0)
    Newangle--;}}

if(Newangle != angle){
angle=Newangle;
Serial.print("Angle of the servo =");
Serial.println(angle);
servomotor.write(angle);}


delay(10);
}
