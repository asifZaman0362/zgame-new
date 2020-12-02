#pragma once
#include <string>


namespace tst::zg {
    struct Settings {
        ushort windowHeight;
        ushort windowWidth;
        ushort vsync;
        ushort fpsLimit;
        ushort fullscreen;
        std::string windowLabel;

        Settings() {
            windowHeight = 480;
            windowWidth = 800;
            vsync = 1;
            fpsLimit = 60;
            fullscreen = 0;
            windowLabel = "Window";
        }

        Settings(ushort pwindowHeight, ushort pwindowWidth, ushort pvsync, ushort pfpsLimit, ushort pfullscreen, std::string pwindowLabel) 
            : windowHeight(pwindowHeight), windowWidth(pwindowWidth), vsync(pvsync), fpsLimit(pfpsLimit), fullscreen(pfullscreen), windowLabel(pwindowLabel) {}
    };
}
