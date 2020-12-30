#include "AppManager.h"

namespace BitOS
{
  void AppManager::launchApp(App &app)
  {
    currentRunningApp = &app;
    launch_new_fiber(runApp, runAppDone);
  }

  void AppManager::closeApp()
  {
    readyToClose = true;
  }

  void AppManager::runAppDone()
  {
    delete currentRunningApp;
    currentRunningApp = nullptr;
    readyToClose = false;
  }

  void AppManager::runApp()
  {
    while (!readyToClose)
    {
      currentRunningApp->update();
    }
  }
}
