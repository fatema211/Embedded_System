#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
int main(void){
  
  DDRB |= 0B00100000;
  //DDRB  &= 0B11111100;  pin 8 9 input
  while(1){
    if(PINB&0B00000011==3){
      PORTB |=0B00100000; // LED on
      
      
      } else {
        PORTB &=0B11011111; // led off
        
        
        }
    
   // PORTB|=0B00100000;
    //_delay_ms(500);
    //PORTB &= B11011111;
   // _delay_ms(500);
    //make the led respond to push button 

    
    }
  
  }
