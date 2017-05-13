#pragma once

#include <mutex>
#include <memory>

namespace SingletonHelper
{
    template<typename _Ty>
    class CSingleton
    {
    public:
        using InstancePtr =  std::unique_ptr<_Ty>;

        CSingleton() = default;

        static _Ty& get_instance()
        {
            std::call_once(CSingleton<_Ty>::m_onceFlag, []() {
                CSingleton<_Ty>::m_upInstance.reset(new _Ty());
            });
            return *m_upInstance;
        }

    private:
        CSingleton(const CSingleton&) = delete;
        CSingleton & operator=(const CSingleton&) = delete;

    private:
        static std::once_flag m_onceFlag;
        static InstancePtr m_upInstance;
    };

    template<typename _Ty>
    typename CSingleton<_Ty>::InstancePtr  CSingleton<_Ty>::m_upInstance;

    template<typename _Ty>
    std::once_flag CSingleton<_Ty>::m_onceFlag;
}
