#include <Arduino_FreeRTOS.h>


int Counter=0;

void Task_Print1(void *pvParameters) {
 //char *pcTaskName;
 const TickType_t delayTime=pdMS_TO_TICKS(750);
  //pcTaskName = (char*)pvParameters;
  
while (1) {
    digitalWrite(8, HIGH);
   vTaskDelay(delayTime);
   digitalWrite(8, LOW);
   vTaskDelay(delayTime);
   }

}
void Task_Print2(void *pvParameters) {
  //char *pcTaskName;
  
 const TickType_t delayTime=pdMS_TO_TICKS(1000);
  //pcTaskName = (char*)pvParameters;    
while (1) {

    Serial.println("Second Count: " +String(Counter));
    Counter++;
    vTaskDelay(delayTime);}

}
void setup() {
  pinMode(8, OUTPUT);
  Serial.begin(9600);
  xTaskCreate(Task_Print1, "TaskN1", 100, (void *)"", 1, NULL);
  xTaskCreate(Task_Print2, "TaskN2", 100, (void *)"", 1, NULL);

}
void loop() {

}
