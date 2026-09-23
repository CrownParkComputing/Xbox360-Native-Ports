// splitsecond - ReXGlue Recompiled Project
//
// Customize your app by overriding virtual hooks from rex::ReXApp.

#pragma once

#include <rex/rex_app.h>
#include <rex/ui/keybinds.h>

class SplitsecondApp : public rex::ReXApp {
 public:
  using rex::ReXApp::ReXApp;

  static std::unique_ptr<rex::ui::WindowedApp> Create(
      rex::ui::WindowedAppContext& ctx) {
    return std::unique_ptr<SplitsecondApp>(new SplitsecondApp(ctx, "splitsecond",
        PPCImageConfig));
  }

  // The RetroRecomp side rails + FPS are now an SDK feature (SidePanelsDialog,
  // created by ReXApp and driven by the side_panel_* cvars in config); the
  // bespoke copy this port used to carry has been removed. Only the settings
  // bind is dropped here.
  void OnCreateDialogs(rex::ui::ImGuiDrawer* drawer) override {
    rex::ui::UnregisterBind("bind_settings");
  }
};
