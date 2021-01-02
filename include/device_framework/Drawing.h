#pragma once

namespace BitOS
{
  namespace Drawing
  {
    struct Color
    {
      char hue;
      char saturation;
      char brightness = 0xff;
      char alpha = 0xff;
    };

    struct Rectangle
    {
      float width;
      float height;
      Color color;
    };
  }
}
