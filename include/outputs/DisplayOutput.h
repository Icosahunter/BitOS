#pragma once
#include "outputs/Output.h"

namespace BitOS
{
  namespace Outputs
  {
    using namespace Drawing
    class DisplayOutput : Output
    {
      public:
        virtual void Clear() = 0;
        virtual void DrawText(string text) = 0;
        virtual void DrawText(string text, float x, float y) = 0;
        virtual void DrawIcon(string icon) = 0;
        virtual void DrawIcon(string icon, float x, float y) = 0;
        virtual void DrawRect(Rectangle rect) = 0;
        virtual void DrawRect(Rectangle rect, float x, float y) = 0;
    };
  }
}
