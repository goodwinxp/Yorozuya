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
            tmEnd = _STD chrono::steady_clock::now();
        }

        template<typename _interval>
        inline void begin(_interval term)
        {
            tmEnd = _STD chrono::steady_clock::now() + term;
        }

        inline bool is_end() const
        {
            return _STD chrono::steady_clock::now() > tmEnd;
        }

    private:
        _STD chrono::time_point<std::chrono::steady_clock> tmEnd;
    };
}
