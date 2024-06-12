// control LED brightness using poetentiometer  


int inputValue=0;
int potentioPin =A0; 
int Led1=12; 
int Led2=8;
int Led3=4; 

void setup() { // the set up runs once when we set Reset 
 pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
  pinMode(Led3, OUTPUT);
  pinMode(potentioPin,INPUT);
  
}
void loop() {  //the loop runs over and over infinity loop
  inputValue=analogRead(potentioPin);//ai pin theke potentio value nibe
  // to control the brightness
  analogWrite(Led1,inputValue/4);
  analogWrite(Led2,inputValue/4);
  analogWrite(Led3,inputValue/4);

    delay(1000);// delay in between read for stability 
  
}

 



  
  

  
                          
