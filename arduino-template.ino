#include <Arduino.h>

void setup()
{
  Serial.begin(9600);
  while (!Serial);
}

int loops = 0;
int maxLoops = 1000;
char message[20];
void loop()
{
  /**
   * Do something
   */
   // here
  
  ++loops;
  if(loops > maxLoops)
  {
    loops = 0;
  }
  
  sprintf(message, "Loop: #%d", loops);
  Serial.println(message);
 
  delay(1500);
}
