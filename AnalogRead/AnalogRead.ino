// abnalog read with serial monitor 

void setup() { // the set up runs once when we set Reset 

 Serial.begin(9600); 

}

void loop() {  //the loop runs over and over infinity loop
int pValue= analogRead(A1);// read the input in analog pin 0
  Serial.print("Potentiometer volatage value is : ");
  Serial.println(pValue);
 
  delay(100);// delay in between read for stability 


  
  

  
                          
}
