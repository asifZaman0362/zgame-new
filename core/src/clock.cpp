#include "clock.hpp"

namespace tst::zg
{
    Clock::Clock() {}
    void Clock::tick() {
        m_timeElapsed++;
    }
    time_t Clock::Elapsed() { return m_timeElapsed; }
} // namespace tst::zg
