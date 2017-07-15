#include <CConnNumPHMgrDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CConnNumPHMgrctor_CConnNumPHMgr2_ptr CConnNumPHMgrctor_CConnNumPHMgr2_next(nullptr);
        Info::CConnNumPHMgrctor_CConnNumPHMgr2_clbk CConnNumPHMgrctor_CConnNumPHMgr2_user(nullptr);
        
        Info::CConnNumPHMgrCheck4_ptr CConnNumPHMgrCheck4_next(nullptr);
        Info::CConnNumPHMgrCheck4_clbk CConnNumPHMgrCheck4_user(nullptr);
        
        Info::CConnNumPHMgrGetCurHour6_ptr CConnNumPHMgrGetCurHour6_next(nullptr);
        Info::CConnNumPHMgrGetCurHour6_clbk CConnNumPHMgrGetCurHour6_user(nullptr);
        
        Info::CConnNumPHMgrInit8_ptr CConnNumPHMgrInit8_next(nullptr);
        Info::CConnNumPHMgrInit8_clbk CConnNumPHMgrInit8_user(nullptr);
        
        
        void CConnNumPHMgrctor_CConnNumPHMgr2_wrapper(struct CConnNumPHMgr* _this)
        {
           CConnNumPHMgrctor_CConnNumPHMgr2_user(_this, CConnNumPHMgrctor_CConnNumPHMgr2_next);
        };
        struct _USER_NUM_SHEET* CConnNumPHMgrCheck4_wrapper(struct CConnNumPHMgr* _this, int nLoginNum)
        {
           return CConnNumPHMgrCheck4_user(_this, nLoginNum, CConnNumPHMgrCheck4_next);
        };
        int CConnNumPHMgrGetCurHour6_wrapper(struct CConnNumPHMgr* _this)
        {
           return CConnNumPHMgrGetCurHour6_user(_this, CConnNumPHMgrGetCurHour6_next);
        };
        void CConnNumPHMgrInit8_wrapper(struct CConnNumPHMgr* _this)
        {
           CConnNumPHMgrInit8_user(_this, CConnNumPHMgrInit8_next);
        };
        
        ::std::array<hook_record, 4> CConnNumPHMgr_functions = 
        {
            _hook_record {
                (LPVOID)0x140202d70L,
                (LPVOID *)&CConnNumPHMgrctor_CConnNumPHMgr2_user,
                (LPVOID *)&CConnNumPHMgrctor_CConnNumPHMgr2_next,
                (LPVOID)cast_pointer_function(CConnNumPHMgrctor_CConnNumPHMgr2_wrapper),
                (LPVOID)cast_pointer_function((void(CConnNumPHMgr::*)())&CConnNumPHMgr::ctor_CConnNumPHMgr)
            },
            _hook_record {
                (LPVOID)0x140207e60L,
                (LPVOID *)&CConnNumPHMgrCheck4_user,
                (LPVOID *)&CConnNumPHMgrCheck4_next,
                (LPVOID)cast_pointer_function(CConnNumPHMgrCheck4_wrapper),
                (LPVOID)cast_pointer_function((struct _USER_NUM_SHEET*(CConnNumPHMgr::*)(int))&CConnNumPHMgr::Check)
            },
            _hook_record {
                (LPVOID)0x140202ee0L,
                (LPVOID *)&CConnNumPHMgrGetCurHour6_user,
                (LPVOID *)&CConnNumPHMgrGetCurHour6_next,
                (LPVOID)cast_pointer_function(CConnNumPHMgrGetCurHour6_wrapper),
                (LPVOID)cast_pointer_function((int(CConnNumPHMgr::*)())&CConnNumPHMgr::GetCurHour)
            },
            _hook_record {
                (LPVOID)0x140202e70L,
                (LPVOID *)&CConnNumPHMgrInit8_user,
                (LPVOID *)&CConnNumPHMgrInit8_next,
                (LPVOID)cast_pointer_function(CConnNumPHMgrInit8_wrapper),
                (LPVOID)cast_pointer_function((void(CConnNumPHMgr::*)())&CConnNumPHMgr::Init)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
