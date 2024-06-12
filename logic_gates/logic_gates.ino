void setup() {
Serial.begin(9600);
byte s1= 0b10001100;
byte s2= 0b11001100;
byte a=s1&s2; 
Serial.print("Result of the AND operator: ");
Serial.println(a,BIN); //10001100
byte b=s1|s2;
Serial.print("Result of the OR operator: ");
Serial.println(b,BIN); //11001100
byte c=s1^s2; //XOR
Serial.print("Result of the Exclusive OR operator: ");
Serial.println(c,BIN); //01000000
byte d=~s1; // one's complement 
Serial.print("Result of One's complement : ");
Serial.println(d,BIN); //01110011

}

void loop() {
  // put your main code here, to run repeatedly:

}
