#pragma once
#include "windowSettings.hpp"

namespace tst::zg
{
    class Window {
    public:
        Window();
        Window(Settings);
        ~Window();

        void create(Settings);
        bool isOpen();
    };
}