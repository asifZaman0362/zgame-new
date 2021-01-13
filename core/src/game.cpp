#include "game.hpp"

namespace tst::zg {
    Game::Game(Settings settings) {
        m_window.create(settings);
    }

    void Game::Start() {
        // main loop
        while (m_window.isOpen()) {
            
        }
    }
}