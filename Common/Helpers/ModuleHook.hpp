#pragma once

#include <Windows.h>
#include <exception>
#include <unordered_set>
#include <ATF.hpp>

namespace GameServer
{
    class CModuleHook
    {
    protected:
        template <typename T1, typename T2>
        inline void enable_hook(T1 pTarget, T2 pDetour)
        {
            auto& core = ATF::CATFCore::get_instance();
            bool result = core.set_hook(pTarget, pDetour);
            if (result)
                m_setEnabledHook.insert(ATF::cast_pointer_function(pTarget));
            else
                throw std::runtime_error("enable_hook");
        }

        void cleanup_all_hook() const
        {
            auto& core = ATF::CATFCore::get_instance();
            for (auto& p : m_setEnabledHook)
            {
                core.unset_hook(p);
            }
        }
    private:
        ::std::unordered_set<LPVOID> m_setEnabledHook;
    };
};
