#pragma once
#include "App.h"
#include "AppFactory.h"
#include "core/MicroBitFiber.h"
#include <list>

namespace BitOS
{
  class AppManager
  {
    public:
      static bool isAppRunning;
      static App* currentRunningApp;
      static AppFactory*[] apps;

      static void launchApp(int index);
      static void launchApp(string name);
      static void closeApp();

    private:
      static bool readyToClose;

      static void runAppDone();
      static void runApp();
  }
}
