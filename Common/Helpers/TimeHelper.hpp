#pragma once

#include <chrono>

namespace TimeHelper
{
    using Clocks_t = ::std::chrono::system_clock;

    inline Clocks_t::time_point GetLoopTimeInChrono()
    {
        return Clocks_t::from_time_t(ATF::Global::GetLoopTime());
    }

    class CTimer
    {
    public:
        CTimer()
        {
            abort();
        }

        inline void abort()
        {
            tmEnd = Clocks_t::from_time_t(0);
        }

        template<typename _interval>
        inline void begin(_interval term)
        {
            tmEnd = GetLoopTimeInChrono() + term;
        }

        inline bool is_end() const
        {
            return GetLoopTimeInChrono() > tmEnd;
        }

    private:
        Clocks_t::time_point tmEnd;
    };
}
