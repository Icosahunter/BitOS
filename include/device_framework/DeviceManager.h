#include "device_framework/DeviceFactory.h"

namespace BitOS
{
  class DeviceManager
  {
    public:
      static DeviceFactory*[] drivers;
      static Device* devices;

      static Device*[] FindDeviceByName(string name);
      static Device*[] FindDeviceByType(string type);
      static Device*[] FindDeviceByInputs(string name);
      static VectorInput*[] FindVectorInputByName(string name);
      static VectorInput*[] FindVectorInputByType(string type);
      static StringInput*[] FindStringInputByName(string name);
      static StringInput*[] FindStringInputByType(string type);
      static ButtonInput*[] FindButtonInputByName(string name);
      static ButtonInput*[] FindButtonInputByType(string type);

    private:

  }
}
