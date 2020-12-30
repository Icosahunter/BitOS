#pragma once
#include "inputs/ButtonInput.h"
#include "inputs/StringInput.h"
#include "inputs/VectorInput.h"
#include "outputs/Display.h"
#include <string>
#include <map>

namespace BitOS
{
  enum DeviceType : string {
    GAMEPAD = "gamepad",
    MOUSE = "mouse",
    SENSOR = "sensor",
    KEYBOARD = "keyboard",
    DISPLAY = "display"
  };

  class Device
  {
    string name;
    string type;
    std::map<string, string> properties;
    ButtonInput buttonInputs[];
    StringInput stringInputs[];
    VectorInput vectorInputs[];
    DisplayOutput displayOutputs[];
  };
}
