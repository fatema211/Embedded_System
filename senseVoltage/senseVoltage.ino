
void setup() { // how to sense a voltage and control actuator both together 

  pinMode(2,INPUT); 
  pinMode(13,OUTPUT);
  //Serial.begin(9600); //open serial port to host                     //  initialized the outputPin 
                                   // put your setup code here, to run once:

}

void loop() {
int c= digitalRead(2); 
if(c==1)
digitalWrite(13, HIGH);
else
digitalWrite(13,LOW);
                                     // sense volatage at pin 2
//Serial.println(v);
                                      //send voltage to host coz v is the viltage reading from pin 2

  delay(1);  //wait delay 100ms 
  
                          
}
