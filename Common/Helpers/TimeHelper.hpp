#pragma once

#include <chrono>

namespace TimeHelper
{
    class CTimer
    {
    public:
        CTimer()
        {
            abort();
        }

        inline void abort()
        {
            tmEnd = ::std::chrono::steady_clock::now();
        }

        template<typename _interval>
        inline void begin(_interval term)
        {
            tmEnd = ::std::chrono::steady_clock::now() + term;
        }

        inline bool is_end() const
        {
            return ::std::chrono::steady_clock::now() > tmEnd;
        }

    private:
        ::std::chrono::time_point<std::chrono::steady_clock> tmEnd;
    };
}
