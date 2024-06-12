void setup() {
  Serial.begin(9600); // begin the serial communication with speed 9600b/s
                              

}

void loop() {// mqin body 
  int Pot =analogRead(A0);// to sense the raeding of the pot and return digital output 
 
Serial.print("Pot reading is : ");
Serial.println(Pot);    // print value 
delay(1000); // waiting time 
}
