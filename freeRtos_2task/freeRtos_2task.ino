#include <Arduino_FreeRTOS.h>

// define two tasks for blinking led with push button and print it on the serial monitor at the same time, both of the task areable to run at the same 
//time based on an event
// si fisrt of all ki ki lagbe: 1. void set up and loop , task ahndler, task functions and define the pins of the push button and the led 
void Task_Print1(void *parameter);
void Task_Print2(void *parameter);
//0: task handler

TaskHandle_t Task_handle1;   // keno use kore?task handle processor to handle task
TaskHandle_t Task_handle2;

//1: set up
void setup(){

  // jeheru print monitor a dekhte cai, tai print begin korte hobe with baud rate 

  Serial.begin(9600);
  // cinfigure the pins for inputof the pussbuttion with pullup, and the outputpin for the led 
  pinMode(13, OUTPUT);
  pinMode(8, INPUT_PULLUP ); // er mane holo i dont need to coonect 10kohm register with the button , i just need to connect its legs with the arduino pin and gnd  
  
  // create the task and transfer the parameters: function name, name given by us, stack size, null parameter to pass, priority level, task handler
  xTaskCreate(Task_Print1,"TaskN1",100,NULL,1,&Task_handle1);
  xTaskCreate(Task_Print2,"TaskN2",100,NULL,1,&Task_handle1);
  
  
  
  
  }
//2: loop 
  void loop(){
    
    
    
    }

//3: function for tasks 

void Task_Print1(void *parameter){
  
  (void)parameter;
  while(1){
    if (digitalRead(8)==0)
    {
      while(digitalRead(8)==0);
      
     
    digitalWrite(13, LOW); // turnd on coz pull up deya  
    }else 
    digitalWrite(13, HIGH); // led turs off coz pullup kora 
    vTaskDelay(2000/portTICK_PERIOD_MS); 
    
    
    
    }
  
  
  
  
  
  }
  void Task_Print2(void *parameter){
  
  (void)parameter;
  while(1){
    
    
    Serial.println("Task is running");  
    vTaskDelay(2000/portTICK_PERIOD_MS); //// arduni will print to the monitor each 1sec: 1 sec in the monitor 1sec in the block state
    
    }
  
  
  
  
  
  }


  
