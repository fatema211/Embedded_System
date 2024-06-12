
int Potmin=1023;
int Potmax=321;  // with puldown registor 4.7k

int Pmap(int d){// function to map the output d with m, m=f(d(t))
  int m=(int)(((d-Potmin)*255.)/(Potmax-Potmin));  //afine function: m=f(d(t))=ad(t)+b ; b=0
  if (m<0)
  return 0; //saturated region with lower limit 
  else if (m<=255)
  return m;
  else 
  return 255; // saturated region with upper limit 
  
  }
  void setup() {// 
  Serial.begin(9600); // begin the serial communication with speed 9600b/s
  Serial.println("Calibartion in progress, wait 10s......");
  CalibratePot();   //using the calibration function in set up part i get 10s to calibrate the pot to determin the Pmax and Pmin     
  Serial.println(" ");
  Serial.print("Calibration range ");    
  Serial.print(Potmin); 
  Serial.print("----");
  Serial.print(Potmax);
              

}
  
  //function to calibrate the pot 
  void CalibratePot(){
    int i;
    for(i=0;i<1000;i++){// taking 1000 smaple for precision 
      int Pot=analogRead(A0); // anoalog input of the pot and ADC output d  (the arbitery reading of the pin )
      if (Pot<Potmin)
      Potmin= Pot; // to update the abitery Pot value with the Potmin
      if (Pot>Potmax)
      Potmax=Pot; //  updating  the abitery Pot value with the Potmax
      delay (10); 
      
      }
    }


void loop() {// main function 
int Pot =analogRead(A0);// to sense the raeding of the pot and return digital output 
int led=Pmap(Pot); // maped Pot sample to Pwm doa
Serial.print("Pot: ");
Serial.println(Pot);    // print value 
Serial.print(" ");
Serial.print(led);
analogWrite(11,led); 
delay(1000); // waiting time 
}
