#pragma once
#include <logger.hpp>
#include "window.hpp"


namespace tst::zg {
    class Game {
    public:
        Game(Settings);
        ~Game();

        void Start();
        void Stop();

    private:
        void Update(float);
        void ListenInput();
        void ProcessEvent();

        Settings m_settings;
        Window m_window;
    };
}