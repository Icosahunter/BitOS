#include "AppManager.h"

namespace BitOS
{
  void AppManager::launchApp(int index)
  {
    currentRunningApp = &(apps[index]->CreateApp());
    launch_new_fiber(runApp, runAppDone);
  }

  void AppManager::launchApp(string name)
  {
    for (const auto & app : apps)
    {
      if (app->name == name)
      {
        currentRunningApp = &(app->CreateApp());
      }
    }
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
