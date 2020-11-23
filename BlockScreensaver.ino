#include <DigiMouse.h>

#define MOUSE_MOVE_AMOUNT 1
#define TIME_INTERVAL_S 5

int time_interval_ms = TIME_INTERVAL_S * 1000;

void setup()
{
  pinMode(0, OUTPUT); //LED on Model B
  pinMode(1, OUTPUT); //LED on Model A  
  DigiMouse.begin();  //start or reenumerate USB
}

void loop()
{
  DigiMouse.moveY(MOUSE_MOVE_AMOUNT);
  digitalWrite(0, LOW); // ON
  digitalWrite(1, LOW);
  DigiMouse.delay(100);

  DigiMouse.moveY(-1 * MOUSE_MOVE_AMOUNT);
  digitalWrite(0, HIGH); // OFF
  digitalWrite(1, HIGH); 
  DigiMouse.delay(time_interval_ms);
}
