#pragma once
#include "device_framework/inputs/Input.h"

namespace BitOS
{
  namespace Inputs
  {
    class StringInput : Input
    {
      public:
        virtual string ReadString() = 0;
    };
  }
}
