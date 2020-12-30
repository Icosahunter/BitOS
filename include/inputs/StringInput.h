#pragma once
#include "inputs/Input.h"

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
