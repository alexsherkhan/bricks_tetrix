//
//  Generated file. Do not edit.
//
#include <flutter/flutter_aurora.h>
#include <audioplayers_aurora/audioplayers_aurora_plugin.h>
#include <path_provider_aurora/path_provider_aurora_plugin.h>

#include "generated_plugin_registrant.h"

namespace aurora {
void RegisterPlugins() {
  flutter::PluginRegistrar* registrar = GetPluginRegistrar();
  AudioplayersAuroraPlugin::RegisterWithRegistrar(registrar);
  PathProviderAuroraPlugin::RegisterWithRegistrar(registrar);
}
}