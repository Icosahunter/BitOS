#pragma once

namespace BitOS
{
  class AppFactory
  {
    public:
      string name;
      string icon;
      string description;

      virtual App CreateApp() = 0;
  };
}
