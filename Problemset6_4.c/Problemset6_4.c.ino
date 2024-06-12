#define F_CPU 16000000UL
#include <avr/io.h>
#include <avr/interrupt.h>

volatile int toggle=0; 


int main (void){  // initializing the TC1 with mode and prescaler 
  TIMSK1 |= 0B00000010;     //0000 0010 enable local interrupt in bit OCIEA
  TCCR1A &= 0B11111100;           // nomal mode 0000  WGM11=0, WGM10=0
  TCCR1B |= 0B00001000;   // wgm12=1
  TCCR1B &= 0B11101111; // wgm13=0                    // numebr of clock pulse in 1s=16MHZ/256=62500==0xF424
  TCCR1B |= 0B00000100; // CS12 =1
                     // when TCNT1=OCR1A , generates compare match interrupt 
  TCCR1B &= 0B11111100; // CS11 =CS10=0
  OCR1AH =0xF4; // MSB 8 bits
  OCR1AL =0x23; // LSB 8bits 

  TCNT1L = 0x00; // initial value of TCNT1
  TCNT1H = 0x00;
  sei(); // enable global interrupt in SREG bit 7(I)
  DDRB = 0B11111110; // congigure PB4 for output  to toggle a led 
  while(1){
    
  }
  }

  ISR(TIMER1_COMPA_vect){
    if(toggle){
      PORTB |0B00001000;
      }
      else {
        PORTB &=0b11011111; 
        
        }
    toggle = 1-toggle;
    
    
    }
