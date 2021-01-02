#pragma once
#include "device_framework/inputs/ButtonInput.h"
#include "device_framework/inputs/StringInput.h"
#include "device_framework/inputs/VectorInput.h"
#include "device_framework/outputs/Display.h"
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
    INTEGRATED = "integrated"
  };

  class Device
  {
    public:
      string name;
      string type;
      std::map<string, string> properties;
      ButtonInput buttonInputs[];
      StringInput stringInputs[];
      VectorInput vectorInputs[];
      DisplayOutput displayOutputs[];

      static Device CreateDevice();
      static void ScanForThisDevice() = 0;
  };
}
