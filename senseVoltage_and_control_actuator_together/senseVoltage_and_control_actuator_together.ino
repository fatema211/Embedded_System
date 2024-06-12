#define Button1 2
#define Button2 3
void setup() { 

 Serial.begin(9600); // in oder to see values in serial monitor i need the  command called and this initate serial comminication with data tarnsfer speed 9600(bouf rate)
  pinMode(2,INPUT); //definning pinmode button 1 and 2 as input, coz pinMode configues input or output 
  pinMode(13,OUTPUT);

}

void loop() {  //body or main part of the sketch, fisrt of all craete a variable with int data type for raeding the input of the digitalRead from the pins 
  int Button1State=digitalRead(Button1);//digital value pin 2 is raeding 
  int Button2State=digitalRead(Button2);//digital value pin 3 is reading 
  // now gonna print the reading to the serial monitor 
  Serial.print("Button 1 State is: ");
  Serial.print("Button1State");
  Serial.print("\t");
  // serial printing ststement for the second Button
  Serial.print("Button 2 State is : ");
  Serial.println("Button2State");

  
  
  //delay(1);  //wait delay 100ms 
  
                          
}
