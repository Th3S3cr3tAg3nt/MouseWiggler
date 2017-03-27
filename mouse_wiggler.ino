/*
 * Mouse Wiggler
 * To Keep machines from going to sleep
 */

#include "Mouse.h"

int mouseStep = 5;       // Distance to move mouse
int loopDelay = 1000;    // Loop delay in ms


void setup() {
  // Initialize mouse control
  Mouse.begin();
}

void loop() {

  // Define mouse movement
  int  dx = mouseStep;
  int  dy = mouseStep;

  // Reverse direction next time
  mouseStep = -mouseStep;

  if ((dx != 0) || (dy != 0)) {
    Mouse.move(dx, dy, 0);
  }

  delay(loopDelay); // Delay so the mouse doesn't move too fast:
}
