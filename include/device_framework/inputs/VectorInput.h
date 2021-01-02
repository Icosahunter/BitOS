#pragma once
#include "Utilities.h"
#include "device_framework/inputs/Input.h"

namespace BitOS
{
  namespace Inputs
  {
    enum VectInputType : string {
      CURSOR = "cursor",
      COMPASS = "compass",
      ACCELEROMTER = "accelerometer",
      GYROSCOPE = "gyroscope"
    };

    class VectorInput : Input
    {
      public:
        virtual Vector currentValue();
        virtual Vector readValue();
        virtual Vector[] getValues();
    };
  }
}
