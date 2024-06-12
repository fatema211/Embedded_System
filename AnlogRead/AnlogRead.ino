// aSnalog read with serial monitor 

void setup() { // the set up runs once when we set Reset 

 Serial.begin(9600); // in oder to see values in serial monitor i need the  command called and this initate serial comminication with data tarnsfer speed 9600(bouf rate)
  //pinMode(pushButton,INPUT_PULLUP); //definning pinmode button 1 and 2 as input, coz pinMode configues input or output 


}

void loop() {  //the loop runs over and over infinity loop
int pValue= analogRead(A0);// read the input in analog pin 0
  Serial.print("Potentiometer volatage value is : ");
  Serial.println(pValue);
 
  delay(100);// delay in between read for stability 


  
  

  
                          
}
