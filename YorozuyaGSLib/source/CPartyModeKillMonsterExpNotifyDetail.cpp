#include <CPartyModeKillMonsterExpNotifyDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CPartyModeKillMonsterExpNotifyAdd2_ptr CPartyModeKillMonsterExpNotifyAdd2_next(nullptr);
        Info::CPartyModeKillMonsterExpNotifyAdd2_clbk CPartyModeKillMonsterExpNotifyAdd2_user(nullptr);
        
        
        Info::CPartyModeKillMonsterExpNotifyctor_CPartyModeKillMonsterExpNotify4_ptr CPartyModeKillMonsterExpNotifyctor_CPartyModeKillMonsterExpNotify4_next(nullptr);
        Info::CPartyModeKillMonsterExpNotifyctor_CPartyModeKillMonsterExpNotify4_clbk CPartyModeKillMonsterExpNotifyctor_CPartyModeKillMonsterExpNotify4_user(nullptr);
        
        
        Info::CPartyModeKillMonsterExpNotifyctor_Notify6_ptr CPartyModeKillMonsterExpNotifyctor_Notify6_next(nullptr);
        Info::CPartyModeKillMonsterExpNotifyctor_Notify6_clbk CPartyModeKillMonsterExpNotifyctor_Notify6_user(nullptr);
        
        Info::CPartyModeKillMonsterExpNotifySetKillMonsterFlag8_ptr CPartyModeKillMonsterExpNotifySetKillMonsterFlag8_next(nullptr);
        Info::CPartyModeKillMonsterExpNotifySetKillMonsterFlag8_clbk CPartyModeKillMonsterExpNotifySetKillMonsterFlag8_user(nullptr);
        
        
        Info::CPartyModeKillMonsterExpNotifydtor_CPartyModeKillMonsterExpNotify10_ptr CPartyModeKillMonsterExpNotifydtor_CPartyModeKillMonsterExpNotify10_next(nullptr);
        Info::CPartyModeKillMonsterExpNotifydtor_CPartyModeKillMonsterExpNotify10_clbk CPartyModeKillMonsterExpNotifydtor_CPartyModeKillMonsterExpNotify10_user(nullptr);
        
        bool CPartyModeKillMonsterExpNotifyAdd2_wrapper(struct CPartyModeKillMonsterExpNotify* _this, struct CPlayer* pkMember, float fExp)
        {
           return CPartyModeKillMonsterExpNotifyAdd2_user(_this, pkMember, fExp, CPartyModeKillMonsterExpNotifyAdd2_next);
        };
        
        void CPartyModeKillMonsterExpNotifyctor_CPartyModeKillMonsterExpNotify4_wrapper(struct CPartyModeKillMonsterExpNotify* _this)
        {
           CPartyModeKillMonsterExpNotifyctor_CPartyModeKillMonsterExpNotify4_user(_this, CPartyModeKillMonsterExpNotifyctor_CPartyModeKillMonsterExpNotify4_next);
        };
        
        void CPartyModeKillMonsterExpNotifyctor_Notify6_wrapper(struct CPartyModeKillMonsterExpNotify* _this)
        {
           CPartyModeKillMonsterExpNotifyctor_Notify6_user(_this, CPartyModeKillMonsterExpNotifyctor_Notify6_next);
        };
        void CPartyModeKillMonsterExpNotifySetKillMonsterFlag8_wrapper(struct CPartyModeKillMonsterExpNotify* _this)
        {
           CPartyModeKillMonsterExpNotifySetKillMonsterFlag8_user(_this, CPartyModeKillMonsterExpNotifySetKillMonsterFlag8_next);
        };
        
        void CPartyModeKillMonsterExpNotifydtor_CPartyModeKillMonsterExpNotify10_wrapper(struct CPartyModeKillMonsterExpNotify* _this)
        {
           CPartyModeKillMonsterExpNotifydtor_CPartyModeKillMonsterExpNotify10_user(_this, CPartyModeKillMonsterExpNotifydtor_CPartyModeKillMonsterExpNotify10_next);
        };
        
        ::std::array<hook_record, 5> CPartyModeKillMonsterExpNotify_functions = 
        {
            _hook_record {
                (LPVOID)0x1401692f0L,
                (LPVOID *)&CPartyModeKillMonsterExpNotifyAdd2_user,
                (LPVOID *)&CPartyModeKillMonsterExpNotifyAdd2_next,
                (LPVOID)cast_pointer_function(CPartyModeKillMonsterExpNotifyAdd2_wrapper),
                (LPVOID)cast_pointer_function((bool(CPartyModeKillMonsterExpNotify::*)(struct CPlayer*, float))&CPartyModeKillMonsterExpNotify::Add)
            },
            _hook_record {
                (LPVOID)0x14008e4f0L,
                (LPVOID *)&CPartyModeKillMonsterExpNotifyctor_CPartyModeKillMonsterExpNotify4_user,
                (LPVOID *)&CPartyModeKillMonsterExpNotifyctor_CPartyModeKillMonsterExpNotify4_next,
                (LPVOID)cast_pointer_function(CPartyModeKillMonsterExpNotifyctor_CPartyModeKillMonsterExpNotify4_wrapper),
                (LPVOID)cast_pointer_function((void(CPartyModeKillMonsterExpNotify::*)())&CPartyModeKillMonsterExpNotify::ctor_CPartyModeKillMonsterExpNotify)
            },
            _hook_record {
                (LPVOID)0x14008e620L,
                (LPVOID *)&CPartyModeKillMonsterExpNotifyctor_Notify6_user,
                (LPVOID *)&CPartyModeKillMonsterExpNotifyctor_Notify6_next,
                (LPVOID)cast_pointer_function(CPartyModeKillMonsterExpNotifyctor_Notify6_wrapper),
                (LPVOID)cast_pointer_function((void(CPartyModeKillMonsterExpNotify::*)())&CPartyModeKillMonsterExpNotify::ctor_Notify)
            },
            _hook_record {
                (LPVOID)0x14007d3a0L,
                (LPVOID *)&CPartyModeKillMonsterExpNotifySetKillMonsterFlag8_user,
                (LPVOID *)&CPartyModeKillMonsterExpNotifySetKillMonsterFlag8_next,
                (LPVOID)cast_pointer_function(CPartyModeKillMonsterExpNotifySetKillMonsterFlag8_wrapper),
                (LPVOID)cast_pointer_function((void(CPartyModeKillMonsterExpNotify::*)())&CPartyModeKillMonsterExpNotify::SetKillMonsterFlag)
            },
            _hook_record {
                (LPVOID)0x14008e580L,
                (LPVOID *)&CPartyModeKillMonsterExpNotifydtor_CPartyModeKillMonsterExpNotify10_user,
                (LPVOID *)&CPartyModeKillMonsterExpNotifydtor_CPartyModeKillMonsterExpNotify10_next,
                (LPVOID)cast_pointer_function(CPartyModeKillMonsterExpNotifydtor_CPartyModeKillMonsterExpNotify10_wrapper),
                (LPVOID)cast_pointer_function((void(CPartyModeKillMonsterExpNotify::*)())&CPartyModeKillMonsterExpNotify::dtor_CPartyModeKillMonsterExpNotify)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
