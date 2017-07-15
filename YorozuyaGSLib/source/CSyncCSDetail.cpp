#include <CSyncCSDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CSyncCSctor_CSyncCS2_ptr CSyncCSctor_CSyncCS2_next(nullptr);
        Info::CSyncCSctor_CSyncCS2_clbk CSyncCSctor_CSyncCS2_user(nullptr);
        
        Info::CSyncCSIsUse4_ptr CSyncCSIsUse4_next(nullptr);
        Info::CSyncCSIsUse4_clbk CSyncCSIsUse4_user(nullptr);
        
        Info::CSyncCSLock6_ptr CSyncCSLock6_next(nullptr);
        Info::CSyncCSLock6_clbk CSyncCSLock6_user(nullptr);
        
        Info::CSyncCSSetUse8_ptr CSyncCSSetUse8_next(nullptr);
        Info::CSyncCSSetUse8_clbk CSyncCSSetUse8_user(nullptr);
        
        Info::CSyncCSUnlock10_ptr CSyncCSUnlock10_next(nullptr);
        Info::CSyncCSUnlock10_clbk CSyncCSUnlock10_user(nullptr);
        
        
        Info::CSyncCSdtor_CSyncCS15_ptr CSyncCSdtor_CSyncCS15_next(nullptr);
        Info::CSyncCSdtor_CSyncCS15_clbk CSyncCSdtor_CSyncCS15_user(nullptr);
        
        
        void CSyncCSctor_CSyncCS2_wrapper(struct CSyncCS* _this)
        {
           CSyncCSctor_CSyncCS2_user(_this, CSyncCSctor_CSyncCS2_next);
        };
        bool CSyncCSIsUse4_wrapper(struct CSyncCS* _this)
        {
           return CSyncCSIsUse4_user(_this, CSyncCSIsUse4_next);
        };
        void CSyncCSLock6_wrapper(struct CSyncCS* _this)
        {
           CSyncCSLock6_user(_this, CSyncCSLock6_next);
        };
        void CSyncCSSetUse8_wrapper(struct CSyncCS* _this, bool bUse)
        {
           CSyncCSSetUse8_user(_this, bUse, CSyncCSSetUse8_next);
        };
        void CSyncCSUnlock10_wrapper(struct CSyncCS* _this)
        {
           CSyncCSUnlock10_user(_this, CSyncCSUnlock10_next);
        };
        
        void CSyncCSdtor_CSyncCS15_wrapper(struct CSyncCS* _this)
        {
           CSyncCSdtor_CSyncCS15_user(_this, CSyncCSdtor_CSyncCS15_next);
        };
        
        ::std::array<hook_record, 6> CSyncCS_functions = 
        {
            _hook_record {
                (LPVOID)0x140439140L,
                (LPVOID *)&CSyncCSctor_CSyncCS2_user,
                (LPVOID *)&CSyncCSctor_CSyncCS2_next,
                (LPVOID)cast_pointer_function(CSyncCSctor_CSyncCS2_wrapper),
                (LPVOID)cast_pointer_function((void(CSyncCS::*)())&CSyncCS::ctor_CSyncCS)
            },
            _hook_record {
                (LPVOID)0x14043abc0L,
                (LPVOID *)&CSyncCSIsUse4_user,
                (LPVOID *)&CSyncCSIsUse4_next,
                (LPVOID)cast_pointer_function(CSyncCSIsUse4_wrapper),
                (LPVOID)cast_pointer_function((bool(CSyncCS::*)())&CSyncCS::IsUse)
            },
            _hook_record {
                (LPVOID)0x140439250L,
                (LPVOID *)&CSyncCSLock6_user,
                (LPVOID *)&CSyncCSLock6_next,
                (LPVOID)cast_pointer_function(CSyncCSLock6_wrapper),
                (LPVOID)cast_pointer_function((void(CSyncCS::*)())&CSyncCS::Lock)
            },
            _hook_record {
                (LPVOID)0x1404391d0L,
                (LPVOID *)&CSyncCSSetUse8_user,
                (LPVOID *)&CSyncCSSetUse8_next,
                (LPVOID)cast_pointer_function(CSyncCSSetUse8_wrapper),
                (LPVOID)cast_pointer_function((void(CSyncCS::*)(bool))&CSyncCS::SetUse)
            },
            _hook_record {
                (LPVOID)0x1404392a0L,
                (LPVOID *)&CSyncCSUnlock10_user,
                (LPVOID *)&CSyncCSUnlock10_next,
                (LPVOID)cast_pointer_function(CSyncCSUnlock10_wrapper),
                (LPVOID)cast_pointer_function((void(CSyncCS::*)())&CSyncCS::Unlock)
            },
            _hook_record {
                (LPVOID)0x140439170L,
                (LPVOID *)&CSyncCSdtor_CSyncCS15_user,
                (LPVOID *)&CSyncCSdtor_CSyncCS15_next,
                (LPVOID)cast_pointer_function(CSyncCSdtor_CSyncCS15_wrapper),
                (LPVOID)cast_pointer_function((void(CSyncCS::*)())&CSyncCS::dtor_CSyncCS)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
