void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {// put your main code here, to run repeatedly:
  int temp= analogRead(A0); 
  Serial.print("The temparature is: ");
  Serial.println(temp);
  delay(1000);
  

}
