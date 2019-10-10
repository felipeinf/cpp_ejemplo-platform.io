#include <Arduino.h>
#include <string>
#include "_network.h"

void setup()
{
  struct Red felipe;

  felipe.name = "iPhone de Felipe";
  felipe.password = "pipe@124";

  wifiConnect(felipe);
}

void loop(){ }
