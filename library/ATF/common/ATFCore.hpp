#pragma once

#include "./common.h"

#include <unordered_map>
#include <MinHook.h>

START_ATF_NAMESPACE
    template<typename T>
    LPVOID cast_pointer_function(T function)
    {
        union
        {
            T val0;
            LPVOID val1;
        } rec;
        rec.val0 = function;

        return rec.val1;
    }

    #pragma pack(push, 8)
    class CATFCore
    {
    public:
        CATFCore() {
            MH_Initialize();
        }

        CATFCore(const CATFCore&) = default;

    public:
        ~CATFCore() {
            cleanup();
            MH_Uninitialize();
        }

        static CATFCore& get_instance() {
            static CATFCore instance;
            return instance;
        }

    public:
        void cleanup() {
            _STD unique_lock<_STD recursive_mutex> lock(m_mtx);
            for (auto& r : m_mapFunctions)
                MH_DisableHook(r.second.pTrgAppOrig);
            m_mapFunctions.clear();
        }

        void reg_wrapper(LPVOID fnTarget, _hook_record& rec)
        {
            _STD unique_lock<_STD recursive_mutex> lock(m_mtx);
            m_mapFunctions[fnTarget] = rec;
        }

        void unreg_wrapper(
            LPVOID fnTarget)
        {
            _STD unique_lock<_STD recursive_mutex> lock(m_mtx);
            if (m_mapFunctions.find(fnTarget) == m_mapFunctions.end())
                return;

            m_mapFunctions.erase(fnTarget);
        }

        template <typename T1, typename T2>
        bool set_hook(T1 pTarget, T2 pDetour)
        {
            bool result = false;
            MH_STATUS status = MH_UNKNOWN;
            _STD unique_lock<_STD recursive_mutex> lock(m_mtx);
            do
            {
                LPVOID key = cast_pointer_function(pTarget);

                auto it_find = m_mapFunctions.find(key);
                if (it_find == m_mapFunctions.end())
                    break;

                auto& rec = it_find->second;
                *rec.ppOrig = cast_pointer_function(pDetour);

                status = MH_CreateHook(
                    rec.pTrgAppOrig,
                    reinterpret_cast<LPVOID>(rec.pWrapper),
                    reinterpret_cast<LPVOID*>(rec.ppTramp));

                if (status != MH_OK)
                    break;

                status = MH_EnableHook(rec.pTrgAppOrig);
                if (status != MH_OK)
                    break;

                result = true;
            } while (false);

            return result;
        }

        template <typename T1>
        bool unset_hook(T1 pTarget)
        {
            bool result = false;
            MH_STATUS status = MH_UNKNOWN;
            _STD unique_lock<_STD recursive_mutex> lock(m_mtx);
            do
            {
                LPVOID key = cast_pointer_function(pTarget);
                auto it = m_mapFunctions.find(key);
                if (it == m_mapFunctions.end())
                    break;

                status = MH_DisableHook(it->second.pTrgAppOrig);
                if (status != MH_OK)
                    break;

                result = true;
            } while (false);

            return result;
        }
    private:
        _STD recursive_mutex m_mtx;
        _STD unordered_map<LPVOID, _hook_record> m_mapFunctions;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
