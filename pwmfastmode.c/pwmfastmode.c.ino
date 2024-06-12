#include <avr/io.h>
#include <avr/interrupt.h>
int main (void){
   TCCR2A = 0x83; // COM2A1=1, COM2A0=0 // noninverting mode WGM012= 011 fast pwm 
  TCCR2B = 0x07;   // force output compare )0, prescaler(1024) CS20,1,2= 111
 

  DDRB = 0b00001000;  // output in OC2A connected to PB3
  

  OCR2A=0;// assign any value of the duty cycle u want to generate. eg: 255 for 100% duty cycle and 128 for 50% duty cycle 
  while(1){
    
 
}
}
  
    

  
  
  
  
