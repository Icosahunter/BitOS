#pragma once
#include "App.h"
#include "core/MicroBitFiber.h"

namespace BitOS
{
  class AppManager
  {
    public:
      static bool isAppRunning;
      static App* currentRunningApp;

      static void launchApp(App &app);
      static void closeApp();

    private:
      static bool readyToClose;

      static void runAppDone();
      static void runApp();
  }
}
