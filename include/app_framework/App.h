#pragma once

namespace BitOS
{
  class App
  {
    public:
      string name;
      string icon;
      string description;

      virtual void update() = 0;
  };
}
