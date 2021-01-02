#pragma once
#include "device_framework/inputs/Input.h"

amespace BitOS
{
  namespace Inputs
  {
    class StringInput : Input
    {
      public:
        virtual int GetPresses() = 0;
        virtual bool WasLongPressed() = 0;
        virtual bool WasHeldDown() = 0;
        virtual bool WasPressed() = 0;
        virtual bool WasDoublePressed() = 0;
        virtual bool IsPressed() = 0;
    };
  }
}
