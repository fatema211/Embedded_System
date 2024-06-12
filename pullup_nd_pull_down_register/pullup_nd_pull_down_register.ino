#define pushButton 2

void setup() { 

 Serial.begin(9600); 
  pinMode(pushButton,INPUT_PULLUP); 


}

void loop() {  //body or main part of the sketch, fisrt of all create a variable with int data type for raeding the input of the digitalRead from the pins 
  int buttonState=digitalRead(pushButton);//digital value pin 2 is raeding 
 // int Button2State=digitalRead(Button2);//digital value pin 3 is reading 
  // now gonna print the reading to the serial monitor 
  Serial.print("Button State is: ");
  Serial.println(buttonState);
  //Serial.print("\t");
  // serial printing ststement for the second Button
 // Serial.print("Button 2 State is : ");
  //Serial.println("Button2State");

  
  

  
                          
}
