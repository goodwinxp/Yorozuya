#include <CMyCriticalSectionDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CMyCriticalSectionctor_CMyCriticalSection2_ptr CMyCriticalSectionctor_CMyCriticalSection2_next(nullptr);
        Info::CMyCriticalSectionctor_CMyCriticalSection2_clbk CMyCriticalSectionctor_CMyCriticalSection2_user(nullptr);
        
        Info::CMyCriticalSectionLock4_ptr CMyCriticalSectionLock4_next(nullptr);
        Info::CMyCriticalSectionLock4_clbk CMyCriticalSectionLock4_user(nullptr);
        
        Info::CMyCriticalSectionUnlock6_ptr CMyCriticalSectionUnlock6_next(nullptr);
        Info::CMyCriticalSectionUnlock6_clbk CMyCriticalSectionUnlock6_user(nullptr);
        
        
        Info::CMyCriticalSectiondtor_CMyCriticalSection11_ptr CMyCriticalSectiondtor_CMyCriticalSection11_next(nullptr);
        Info::CMyCriticalSectiondtor_CMyCriticalSection11_clbk CMyCriticalSectiondtor_CMyCriticalSection11_user(nullptr);
        
        
        void CMyCriticalSectionctor_CMyCriticalSection2_wrapper(struct CMyCriticalSection* _this)
        {
           CMyCriticalSectionctor_CMyCriticalSection2_user(_this, CMyCriticalSectionctor_CMyCriticalSection2_next);
        };
        void CMyCriticalSectionLock4_wrapper(struct CMyCriticalSection* _this)
        {
           CMyCriticalSectionLock4_user(_this, CMyCriticalSectionLock4_next);
        };
        void CMyCriticalSectionUnlock6_wrapper(struct CMyCriticalSection* _this)
        {
           CMyCriticalSectionUnlock6_user(_this, CMyCriticalSectionUnlock6_next);
        };
        
        void CMyCriticalSectiondtor_CMyCriticalSection11_wrapper(struct CMyCriticalSection* _this)
        {
           CMyCriticalSectiondtor_CMyCriticalSection11_user(_this, CMyCriticalSectiondtor_CMyCriticalSection11_next);
        };
        
        ::std::array<hook_record, 4> CMyCriticalSection_functions = 
        {
            _hook_record {
                (LPVOID)0x140438c30L,
                (LPVOID *)&CMyCriticalSectionctor_CMyCriticalSection2_user,
                (LPVOID *)&CMyCriticalSectionctor_CMyCriticalSection2_next,
                (LPVOID)cast_pointer_function(CMyCriticalSectionctor_CMyCriticalSection2_wrapper),
                (LPVOID)cast_pointer_function((void(CMyCriticalSection::*)())&CMyCriticalSection::ctor_CMyCriticalSection)
            },
            _hook_record {
                (LPVOID)0x140438ce0L,
                (LPVOID *)&CMyCriticalSectionLock4_user,
                (LPVOID *)&CMyCriticalSectionLock4_next,
                (LPVOID)cast_pointer_function(CMyCriticalSectionLock4_wrapper),
                (LPVOID)cast_pointer_function((void(CMyCriticalSection::*)())&CMyCriticalSection::Lock)
            },
            _hook_record {
                (LPVOID)0x140438d30L,
                (LPVOID *)&CMyCriticalSectionUnlock6_user,
                (LPVOID *)&CMyCriticalSectionUnlock6_next,
                (LPVOID)cast_pointer_function(CMyCriticalSectionUnlock6_wrapper),
                (LPVOID)cast_pointer_function((void(CMyCriticalSection::*)())&CMyCriticalSection::Unlock)
            },
            _hook_record {
                (LPVOID)0x140438c90L,
                (LPVOID *)&CMyCriticalSectiondtor_CMyCriticalSection11_user,
                (LPVOID *)&CMyCriticalSectiondtor_CMyCriticalSection11_next,
                (LPVOID)cast_pointer_function(CMyCriticalSectiondtor_CMyCriticalSection11_wrapper),
                (LPVOID)cast_pointer_function((void(CMyCriticalSection::*)())&CMyCriticalSection::dtor_CMyCriticalSection)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
