#ifndef __PLUGINTEMPLATE__
#define __PLUGINTEMPLATE__

#include "IPlug_include_in_plug_hdr.h"

class PluginTemplate : public IPlug
{
public:
  PluginTemplate(IPlugInstanceInfo instanceInfo);
  ~PluginTemplate();

  void Reset();
  void OnParamChange(int paramIdx);
  void ProcessDoubleReplacing(double** inputs, double** outputs, int nFrames);

private:
  double gain_;
};

#endif // __PLUGINTEMPLATE__
