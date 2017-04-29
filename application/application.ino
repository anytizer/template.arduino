#include <Arduino.h>

int loops = 0;
int maxLoops = 1000;
int delayMoments = 1500;
char message[20];

void setup()
{
  Serial.begin(9600);
  while (!Serial);
}

void loop()
{
  /**
   * Do something here
   */
  ++loops;
  if(loops > maxLoops)
  {
    loops = 0;
  }
  
  sprintf(message, "Loop: #%04d", loops);
  Serial.println(message);
 
  //delay(500);
}
