#include <CBillingManagerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CBillingManagerAlive2_ptr CBillingManagerAlive2_next(nullptr);
        Info::CBillingManagerAlive2_clbk CBillingManagerAlive2_user(nullptr);
        
        Info::CBillingManagerBillingClose4_ptr CBillingManagerBillingClose4_next(nullptr);
        Info::CBillingManagerBillingClose4_clbk CBillingManagerBillingClose4_user(nullptr);
        
        
        Info::CBillingManagerctor_CBillingManager6_ptr CBillingManagerctor_CBillingManager6_next(nullptr);
        Info::CBillingManagerctor_CBillingManager6_clbk CBillingManagerctor_CBillingManager6_user(nullptr);
        
        Info::CBillingManagerChange_BillingType8_ptr CBillingManagerChange_BillingType8_next(nullptr);
        Info::CBillingManagerChange_BillingType8_clbk CBillingManagerChange_BillingType8_user(nullptr);
        
        Info::CBillingManagerChange_Primium10_ptr CBillingManagerChange_Primium10_next(nullptr);
        Info::CBillingManagerChange_Primium10_clbk CBillingManagerChange_Primium10_user(nullptr);
        
        Info::CBillingManagerExpire_IPOverflow12_ptr CBillingManagerExpire_IPOverflow12_next(nullptr);
        Info::CBillingManagerExpire_IPOverflow12_clbk CBillingManagerExpire_IPOverflow12_user(nullptr);
        
        Info::CBillingManagerExpire_PCBang14_ptr CBillingManagerExpire_PCBang14_next(nullptr);
        Info::CBillingManagerExpire_PCBang14_clbk CBillingManagerExpire_PCBang14_user(nullptr);
        
        Info::CBillingManagerExpire_Personal16_ptr CBillingManagerExpire_Personal16_next(nullptr);
        Info::CBillingManagerExpire_Personal16_clbk CBillingManagerExpire_Personal16_user(nullptr);
        
        Info::CBillingManagerInit18_ptr CBillingManagerInit18_next(nullptr);
        Info::CBillingManagerInit18_clbk CBillingManagerInit18_user(nullptr);
        
        Info::CBillingManagerIsOperate20_ptr CBillingManagerIsOperate20_next(nullptr);
        Info::CBillingManagerIsOperate20_clbk CBillingManagerIsOperate20_user(nullptr);
        
        Info::CBillingManagerLoadINI22_ptr CBillingManagerLoadINI22_next(nullptr);
        Info::CBillingManagerLoadINI22_clbk CBillingManagerLoadINI22_user(nullptr);
        
        Info::CBillingManagerLogin24_ptr CBillingManagerLogin24_next(nullptr);
        Info::CBillingManagerLogin24_clbk CBillingManagerLogin24_user(nullptr);
        
        Info::CBillingManagerLogout26_ptr CBillingManagerLogout26_next(nullptr);
        Info::CBillingManagerLogout26_clbk CBillingManagerLogout26_user(nullptr);
        
        Info::CBillingManagerRemaintime_PCBang28_ptr CBillingManagerRemaintime_PCBang28_next(nullptr);
        Info::CBillingManagerRemaintime_PCBang28_clbk CBillingManagerRemaintime_PCBang28_user(nullptr);
        
        Info::CBillingManagerRemaintime_Personal30_ptr CBillingManagerRemaintime_Personal30_next(nullptr);
        Info::CBillingManagerRemaintime_Personal30_clbk CBillingManagerRemaintime_Personal30_user(nullptr);
        
        Info::CBillingManagerSendMsg_ZoneAliveCheck32_ptr CBillingManagerSendMsg_ZoneAliveCheck32_next(nullptr);
        Info::CBillingManagerSendMsg_ZoneAliveCheck32_clbk CBillingManagerSendMsg_ZoneAliveCheck32_user(nullptr);
        
        Info::CBillingManagerStart34_ptr CBillingManagerStart34_next(nullptr);
        Info::CBillingManagerStart34_clbk CBillingManagerStart34_user(nullptr);
        
        
        Info::CBillingManagerdtor_CBillingManager39_ptr CBillingManagerdtor_CBillingManager39_next(nullptr);
        Info::CBillingManagerdtor_CBillingManager39_clbk CBillingManagerdtor_CBillingManager39_user(nullptr);
        
        void CBillingManagerAlive2_wrapper(struct CBillingManager* _this, struct CUserDB* pUserDB)
        {
           CBillingManagerAlive2_user(_this, pUserDB, CBillingManagerAlive2_next);
        };
        void CBillingManagerBillingClose4_wrapper(struct CBillingManager* _this, char* szID)
        {
           CBillingManagerBillingClose4_user(_this, szID, CBillingManagerBillingClose4_next);
        };
        
        void CBillingManagerctor_CBillingManager6_wrapper(struct CBillingManager* _this)
        {
           CBillingManagerctor_CBillingManager6_user(_this, CBillingManagerctor_CBillingManager6_next);
        };
        void CBillingManagerChange_BillingType8_wrapper(struct CBillingManager* _this, char* szID, char* szCMSCode, int16_t iType, int lRemainTime, struct _SYSTEMTIME* pstEndDate, char byReason)
        {
           CBillingManagerChange_BillingType8_user(_this, szID, szCMSCode, iType, lRemainTime, pstEndDate, byReason, CBillingManagerChange_BillingType8_next);
        };
        void CBillingManagerChange_Primium10_wrapper(struct CBillingManager* _this, char* szID, bool bResult)
        {
           CBillingManagerChange_Primium10_user(_this, szID, bResult, CBillingManagerChange_Primium10_next);
        };
        void CBillingManagerExpire_IPOverflow12_wrapper(struct CBillingManager* _this, char* szID)
        {
           CBillingManagerExpire_IPOverflow12_user(_this, szID, CBillingManagerExpire_IPOverflow12_next);
        };
        void CBillingManagerExpire_PCBang14_wrapper(struct CBillingManager* _this, char* szCMS)
        {
           CBillingManagerExpire_PCBang14_user(_this, szCMS, CBillingManagerExpire_PCBang14_next);
        };
        void CBillingManagerExpire_Personal16_wrapper(struct CBillingManager* _this, char* szID)
        {
           CBillingManagerExpire_Personal16_user(_this, szID, CBillingManagerExpire_Personal16_next);
        };
        bool CBillingManagerInit18_wrapper(struct CBillingManager* _this)
        {
           return CBillingManagerInit18_user(_this, CBillingManagerInit18_next);
        };
        bool CBillingManagerIsOperate20_wrapper(struct CBillingManager* _this)
        {
           return CBillingManagerIsOperate20_user(_this, CBillingManagerIsOperate20_next);
        };
        bool CBillingManagerLoadINI22_wrapper(struct CBillingManager* _this)
        {
           return CBillingManagerLoadINI22_user(_this, CBillingManagerLoadINI22_next);
        };
        void CBillingManagerLogin24_wrapper(struct CBillingManager* _this, struct CUserDB* pUserDB)
        {
           CBillingManagerLogin24_user(_this, pUserDB, CBillingManagerLogin24_next);
        };
        void CBillingManagerLogout26_wrapper(struct CBillingManager* _this, struct CUserDB* pUserDB)
        {
           CBillingManagerLogout26_user(_this, pUserDB, CBillingManagerLogout26_next);
        };
        void CBillingManagerRemaintime_PCBang28_wrapper(struct CBillingManager* _this, char* szCMSCode, int16_t iType, int lRemaintime, struct _SYSTEMTIME* pstEndDate)
        {
           CBillingManagerRemaintime_PCBang28_user(_this, szCMSCode, iType, lRemaintime, pstEndDate, CBillingManagerRemaintime_PCBang28_next);
        };
        void CBillingManagerRemaintime_Personal30_wrapper(struct CBillingManager* _this, char* szID, int16_t iType, int lRemaintime, struct _SYSTEMTIME* pstEndDate)
        {
           CBillingManagerRemaintime_Personal30_user(_this, szID, iType, lRemaintime, pstEndDate, CBillingManagerRemaintime_Personal30_next);
        };
        void CBillingManagerSendMsg_ZoneAliveCheck32_wrapper(struct CBillingManager* _this, unsigned int dwData)
        {
           CBillingManagerSendMsg_ZoneAliveCheck32_user(_this, dwData, CBillingManagerSendMsg_ZoneAliveCheck32_next);
        };
        void CBillingManagerStart34_wrapper(struct CBillingManager* _this)
        {
           CBillingManagerStart34_user(_this, CBillingManagerStart34_next);
        };
        
        void CBillingManagerdtor_CBillingManager39_wrapper(struct CBillingManager* _this)
        {
           CBillingManagerdtor_CBillingManager39_user(_this, CBillingManagerdtor_CBillingManager39_next);
        };
        
        ::std::array<hook_record, 18> CBillingManager_functions = 
        {
            _hook_record {
                (LPVOID)0x14007c1f0L,
                (LPVOID *)&CBillingManagerAlive2_user,
                (LPVOID *)&CBillingManagerAlive2_next,
                (LPVOID)cast_pointer_function(CBillingManagerAlive2_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingManager::*)(struct CUserDB*))&CBillingManager::Alive)
            },
            _hook_record {
                (LPVOID)0x1401c3f80L,
                (LPVOID *)&CBillingManagerBillingClose4_user,
                (LPVOID *)&CBillingManagerBillingClose4_next,
                (LPVOID)cast_pointer_function(CBillingManagerBillingClose4_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingManager::*)(char*))&CBillingManager::BillingClose)
            },
            _hook_record {
                (LPVOID)0x14028dce0L,
                (LPVOID *)&CBillingManagerctor_CBillingManager6_user,
                (LPVOID *)&CBillingManagerctor_CBillingManager6_next,
                (LPVOID)cast_pointer_function(CBillingManagerctor_CBillingManager6_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingManager::*)())&CBillingManager::ctor_CBillingManager)
            },
            _hook_record {
                (LPVOID)0x1401c40e0L,
                (LPVOID *)&CBillingManagerChange_BillingType8_user,
                (LPVOID *)&CBillingManagerChange_BillingType8_next,
                (LPVOID)cast_pointer_function(CBillingManagerChange_BillingType8_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingManager::*)(char*, char*, int16_t, int, struct _SYSTEMTIME*, char))&CBillingManager::Change_BillingType)
            },
            _hook_record {
                (LPVOID)0x1401c4310L,
                (LPVOID *)&CBillingManagerChange_Primium10_user,
                (LPVOID *)&CBillingManagerChange_Primium10_next,
                (LPVOID)cast_pointer_function(CBillingManagerChange_Primium10_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingManager::*)(char*, bool))&CBillingManager::Change_Primium)
            },
            _hook_record {
                (LPVOID)0x1401c4250L,
                (LPVOID *)&CBillingManagerExpire_IPOverflow12_user,
                (LPVOID *)&CBillingManagerExpire_IPOverflow12_next,
                (LPVOID)cast_pointer_function(CBillingManagerExpire_IPOverflow12_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingManager::*)(char*))&CBillingManager::Expire_IPOverflow)
            },
            _hook_record {
                (LPVOID)0x1401c41f0L,
                (LPVOID *)&CBillingManagerExpire_PCBang14_user,
                (LPVOID *)&CBillingManagerExpire_PCBang14_next,
                (LPVOID)cast_pointer_function(CBillingManagerExpire_PCBang14_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingManager::*)(char*))&CBillingManager::Expire_PCBang)
            },
            _hook_record {
                (LPVOID)0x1401c4180L,
                (LPVOID *)&CBillingManagerExpire_Personal16_user,
                (LPVOID *)&CBillingManagerExpire_Personal16_next,
                (LPVOID)cast_pointer_function(CBillingManagerExpire_Personal16_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingManager::*)(char*))&CBillingManager::Expire_Personal)
            },
            _hook_record {
                (LPVOID)0x14028dd40L,
                (LPVOID *)&CBillingManagerInit18_user,
                (LPVOID *)&CBillingManagerInit18_next,
                (LPVOID)cast_pointer_function(CBillingManagerInit18_wrapper),
                (LPVOID)cast_pointer_function((bool(CBillingManager::*)())&CBillingManager::Init)
            },
            _hook_record {
                (LPVOID)0x140207e30L,
                (LPVOID *)&CBillingManagerIsOperate20_user,
                (LPVOID *)&CBillingManagerIsOperate20_next,
                (LPVOID)cast_pointer_function(CBillingManagerIsOperate20_wrapper),
                (LPVOID)cast_pointer_function((bool(CBillingManager::*)())&CBillingManager::IsOperate)
            },
            _hook_record {
                (LPVOID)0x14028ddd0L,
                (LPVOID *)&CBillingManagerLoadINI22_user,
                (LPVOID *)&CBillingManagerLoadINI22_next,
                (LPVOID)cast_pointer_function(CBillingManagerLoadINI22_wrapper),
                (LPVOID)cast_pointer_function((bool(CBillingManager::*)())&CBillingManager::LoadINI)
            },
            _hook_record {
                (LPVOID)0x140079030L,
                (LPVOID *)&CBillingManagerLogin24_user,
                (LPVOID *)&CBillingManagerLogin24_next,
                (LPVOID)cast_pointer_function(CBillingManagerLogin24_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingManager::*)(struct CUserDB*))&CBillingManager::Login)
            },
            _hook_record {
                (LPVOID)0x14007a400L,
                (LPVOID *)&CBillingManagerLogout26_user,
                (LPVOID *)&CBillingManagerLogout26_next,
                (LPVOID)cast_pointer_function(CBillingManagerLogout26_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingManager::*)(struct CUserDB*))&CBillingManager::Logout)
            },
            _hook_record {
                (LPVOID)0x1401c4060L,
                (LPVOID *)&CBillingManagerRemaintime_PCBang28_user,
                (LPVOID *)&CBillingManagerRemaintime_PCBang28_next,
                (LPVOID)cast_pointer_function(CBillingManagerRemaintime_PCBang28_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingManager::*)(char*, int16_t, int, struct _SYSTEMTIME*))&CBillingManager::Remaintime_PCBang)
            },
            _hook_record {
                (LPVOID)0x1401c3fe0L,
                (LPVOID *)&CBillingManagerRemaintime_Personal30_user,
                (LPVOID *)&CBillingManagerRemaintime_Personal30_next,
                (LPVOID)cast_pointer_function(CBillingManagerRemaintime_Personal30_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingManager::*)(char*, int16_t, int, struct _SYSTEMTIME*))&CBillingManager::Remaintime_Personal)
            },
            _hook_record {
                (LPVOID)0x1401c42c0L,
                (LPVOID *)&CBillingManagerSendMsg_ZoneAliveCheck32_user,
                (LPVOID *)&CBillingManagerSendMsg_ZoneAliveCheck32_next,
                (LPVOID)cast_pointer_function(CBillingManagerSendMsg_ZoneAliveCheck32_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingManager::*)(unsigned int))&CBillingManager::SendMsg_ZoneAliveCheck)
            },
            _hook_record {
                (LPVOID)0x1401e1390L,
                (LPVOID *)&CBillingManagerStart34_user,
                (LPVOID *)&CBillingManagerStart34_next,
                (LPVOID)cast_pointer_function(CBillingManagerStart34_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingManager::*)())&CBillingManager::Start)
            },
            _hook_record {
                (LPVOID)0x14028df70L,
                (LPVOID *)&CBillingManagerdtor_CBillingManager39_user,
                (LPVOID *)&CBillingManagerdtor_CBillingManager39_next,
                (LPVOID)cast_pointer_function(CBillingManagerdtor_CBillingManager39_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingManager::*)())&CBillingManager::dtor_CBillingManager)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
