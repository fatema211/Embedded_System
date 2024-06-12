 const byte  ioDDRB = 0x04;
//uint8_t analogRead8A0();

void setup(){
  
  Serial.begin(9600);
  byte b = 0x30;
  asm volatile("out %0, %1":: "i"(ioDDRB), "r"(b));// 0011 0000
  asm volatile(
    "ldi r26, 0x00\n\t"
    "ldi r27, 0x7A\n\t"  //x pointer = ADCSRA
    "ldi r16, 0x8F\n\t"   //ADEN,0,ADATE,0,ADIE-ADPSO=1111  af 1000 1111
    "st   X,  r16\n\t"   // configured ADCSRA with 1010 1111
    "ldi r26, 0x7C\n\t"  // x=ADMUX
    "ldi r16, 0x61\n\t"  // ADMUX= 0x40=0100 0000
    );
    sei();
}
 void loop(){
   //erial.begin(9600);
     uint8_t inp;
  
   inp = analogRead8A1();
  Serial.print("Potentiometer volatage value : ");
  Serial.println(inp);
  delay(1000);
  
  }
  uint8_t analogRead8A1(){
    register uint8_t adcsra("r17");
    uint8_t adch;

    asm volatile(  // function to start conversion 
       "ldi r27, 0x00\n\t"
       "ldi r26, 0x7A\n\t" // X= adcsra
       "ld %0,  X \n\t" //read ADCSRA
       "ori %0, 0x40\n\t" //set ADSC=1  start conversion 
       "st   X,  %1\n\t"
       : "+r"(adcsra):"r"(adcsra)
       
    ); 
    do {
      asm volatile (
        
        "ld %0, X": "=r"(adcsra):
        );
        
        } while (adcsra & 0x40); // while ADSC ==1

        asm volatile (
        
        // return 8 bit digital value ;
    "ldi r27, 0x00\n\t"
    "ldi r26, 0x79\n\t" // X=ADCL
    "ld %0, X" // read ADCL
    :"=r"(adch):);
  
    return adch;
    
    
    }
  ISR(ADC_vect){
      if (ADC>350){
      asm ("sbi 0x05, 5");
      //delay(1000);
      asm("cbi 0x05, 5");}

      else {
      asm ("sbi 0x05, 4");
      //delay(1000);
      asm("cbi 0x05, 4");}
      
      
      }
  
