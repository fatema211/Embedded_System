
void setup() {

  pinMode(2,INPUT); 
  Serial.begin(9600); //open serial port to host                     //  initialized the outputPin 
                                   // put your setup code here, to run once:

}

void loop() {
int v= digitalRead(2); // sense volatage at pin 2
Serial.println(v); //send voltage to host coz v is the viltage reading from pin 2

  delay(100);  //wait delay 100ms 
  
                          
}
