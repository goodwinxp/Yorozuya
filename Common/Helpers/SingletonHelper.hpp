#pragma once

#include <mutex>
#include <memory>

namespace SingletonHelper
{
    template<typename _Ty>
    class CSingleton
    {
    public:
        using InstancePtr =  std::shared_ptr<_Ty>;

        CSingleton() = default;

        static InstancePtr get_instance()
        {
            static std::mutex m_mtx;
            std::lock_guard<decltype(m_mtx)> lock(m_mtx);
            static InstancePtr instance(new _Ty());

            return instance;
        }

    private:
        CSingleton(const CSingleton&) = delete;
        CSingleton & operator=(const CSingleton&) = delete;
    };
}
