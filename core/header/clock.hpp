#pragma once
#include <time.h>
#include <thread>


namespace tst::zg
{
    class Clock {
    public:
        Clock();
        void Start();
        time_t Elapsed();
    
    private:
        void tick();
        time_t m_timeElapsed;
    };
} // namespace tst::zg
