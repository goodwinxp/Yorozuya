#include <CNetCriticalSectionDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CNetCriticalSectionctor_CNetCriticalSection2_ptr CNetCriticalSectionctor_CNetCriticalSection2_next(nullptr);
        Info::CNetCriticalSectionctor_CNetCriticalSection2_clbk CNetCriticalSectionctor_CNetCriticalSection2_user(nullptr);
        
        Info::CNetCriticalSectionLock4_ptr CNetCriticalSectionLock4_next(nullptr);
        Info::CNetCriticalSectionLock4_clbk CNetCriticalSectionLock4_user(nullptr);
        
        Info::CNetCriticalSectionUnlock6_ptr CNetCriticalSectionUnlock6_next(nullptr);
        Info::CNetCriticalSectionUnlock6_clbk CNetCriticalSectionUnlock6_user(nullptr);
        
        
        Info::CNetCriticalSectiondtor_CNetCriticalSection10_ptr CNetCriticalSectiondtor_CNetCriticalSection10_next(nullptr);
        Info::CNetCriticalSectiondtor_CNetCriticalSection10_clbk CNetCriticalSectiondtor_CNetCriticalSection10_user(nullptr);
        
        
        void CNetCriticalSectionctor_CNetCriticalSection2_wrapper(struct CNetCriticalSection* _this)
        {
           CNetCriticalSectionctor_CNetCriticalSection2_user(_this, CNetCriticalSectionctor_CNetCriticalSection2_next);
        };
        void CNetCriticalSectionLock4_wrapper(struct CNetCriticalSection* _this)
        {
           CNetCriticalSectionLock4_user(_this, CNetCriticalSectionLock4_next);
        };
        void CNetCriticalSectionUnlock6_wrapper(struct CNetCriticalSection* _this)
        {
           CNetCriticalSectionUnlock6_user(_this, CNetCriticalSectionUnlock6_next);
        };
        
        void CNetCriticalSectiondtor_CNetCriticalSection10_wrapper(struct CNetCriticalSection* _this)
        {
           CNetCriticalSectiondtor_CNetCriticalSection10_user(_this, CNetCriticalSectiondtor_CNetCriticalSection10_next);
        };
        
        ::std::array<hook_record, 4> CNetCriticalSection_functions = 
        {
            _hook_record {
                (LPVOID)0x140073230L,
                (LPVOID *)&CNetCriticalSectionctor_CNetCriticalSection2_user,
                (LPVOID *)&CNetCriticalSectionctor_CNetCriticalSection2_next,
                (LPVOID)cast_pointer_function(CNetCriticalSectionctor_CNetCriticalSection2_wrapper),
                (LPVOID)cast_pointer_function((void(CNetCriticalSection::*)())&CNetCriticalSection::ctor_CNetCriticalSection)
            },
            _hook_record {
                (LPVOID)0x140073900L,
                (LPVOID *)&CNetCriticalSectionLock4_user,
                (LPVOID *)&CNetCriticalSectionLock4_next,
                (LPVOID)cast_pointer_function(CNetCriticalSectionLock4_wrapper),
                (LPVOID)cast_pointer_function((void(CNetCriticalSection::*)())&CNetCriticalSection::Lock)
            },
            _hook_record {
                (LPVOID)0x140073950L,
                (LPVOID *)&CNetCriticalSectionUnlock6_user,
                (LPVOID *)&CNetCriticalSectionUnlock6_next,
                (LPVOID)cast_pointer_function(CNetCriticalSectionUnlock6_wrapper),
                (LPVOID)cast_pointer_function((void(CNetCriticalSection::*)())&CNetCriticalSection::Unlock)
            },
            _hook_record {
                (LPVOID)0x140073340L,
                (LPVOID *)&CNetCriticalSectiondtor_CNetCriticalSection10_user,
                (LPVOID *)&CNetCriticalSectiondtor_CNetCriticalSection10_next,
                (LPVOID)cast_pointer_function(CNetCriticalSectiondtor_CNetCriticalSection10_wrapper),
                (LPVOID)cast_pointer_function((void(CNetCriticalSection::*)())&CNetCriticalSection::dtor_CNetCriticalSection)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
