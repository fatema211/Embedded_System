// led dimmer 
int Led1=9; 
int Led2=10;
int Led3=11;
int Lbrightness=0; 
int fade=5;  

void setup() { // 
}
void loop() {  //the loop runs over and over infinity loop
  
  analogWrite(Led1,Lbrightness);
  analogWrite(Led2,Lbrightness);
  analogWrite(Led3,Lbrightness);

  Lbrightness= Lbrightness + fade; 

  if ((Lbrightness==0)|| (Lbrightness==255)){
    
    fade = -fade; 
    }

    delay(50);// 
  
}
