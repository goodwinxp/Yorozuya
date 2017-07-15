#include <CBillingDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CBillingAlive2_ptr CBillingAlive2_next(nullptr);
        Info::CBillingAlive2_clbk CBillingAlive2_user(nullptr);
        
        Info::CBillingBillingClose4_ptr CBillingBillingClose4_next(nullptr);
        Info::CBillingBillingClose4_clbk CBillingBillingClose4_user(nullptr);
        
        
        Info::CBillingctor_CBilling6_ptr CBillingctor_CBilling6_next(nullptr);
        Info::CBillingctor_CBilling6_clbk CBillingctor_CBilling6_user(nullptr);
        
        Info::CBillingChange_BillingType8_ptr CBillingChange_BillingType8_next(nullptr);
        Info::CBillingChange_BillingType8_clbk CBillingChange_BillingType8_user(nullptr);
        
        Info::CBillingChange_Primium10_ptr CBillingChange_Primium10_next(nullptr);
        Info::CBillingChange_Primium10_clbk CBillingChange_Primium10_user(nullptr);
        
        Info::CBillingExpire_IPOverflow12_ptr CBillingExpire_IPOverflow12_next(nullptr);
        Info::CBillingExpire_IPOverflow12_clbk CBillingExpire_IPOverflow12_user(nullptr);
        
        Info::CBillingExpire_PCBang14_ptr CBillingExpire_PCBang14_next(nullptr);
        Info::CBillingExpire_PCBang14_clbk CBillingExpire_PCBang14_user(nullptr);
        
        Info::CBillingExpire_Personal16_ptr CBillingExpire_Personal16_next(nullptr);
        Info::CBillingExpire_Personal16_clbk CBillingExpire_Personal16_user(nullptr);
        
        Info::CBillingLogin18_ptr CBillingLogin18_next(nullptr);
        Info::CBillingLogin18_clbk CBillingLogin18_user(nullptr);
        
        Info::CBillingLogout20_ptr CBillingLogout20_next(nullptr);
        Info::CBillingLogout20_clbk CBillingLogout20_user(nullptr);
        
        Info::CBillingRemaintime_PCBang22_ptr CBillingRemaintime_PCBang22_next(nullptr);
        Info::CBillingRemaintime_PCBang22_clbk CBillingRemaintime_PCBang22_user(nullptr);
        
        Info::CBillingRemaintime_Personal24_ptr CBillingRemaintime_Personal24_next(nullptr);
        Info::CBillingRemaintime_Personal24_clbk CBillingRemaintime_Personal24_user(nullptr);
        
        Info::CBillingSendMsg_CurAllUserLogin26_ptr CBillingSendMsg_CurAllUserLogin26_next(nullptr);
        Info::CBillingSendMsg_CurAllUserLogin26_clbk CBillingSendMsg_CurAllUserLogin26_user(nullptr);
        
        Info::CBillingSendMsg_Login28_ptr CBillingSendMsg_Login28_next(nullptr);
        Info::CBillingSendMsg_Login28_clbk CBillingSendMsg_Login28_user(nullptr);
        
        Info::CBillingSendMsg_StartBilling30_ptr CBillingSendMsg_StartBilling30_next(nullptr);
        Info::CBillingSendMsg_StartBilling30_clbk CBillingSendMsg_StartBilling30_user(nullptr);
        
        Info::CBillingSendMsg_ZoneAliveCheck32_ptr CBillingSendMsg_ZoneAliveCheck32_next(nullptr);
        Info::CBillingSendMsg_ZoneAliveCheck32_clbk CBillingSendMsg_ZoneAliveCheck32_user(nullptr);
        
        Info::CBillingSetOper34_ptr CBillingSetOper34_next(nullptr);
        Info::CBillingSetOper34_clbk CBillingSetOper34_user(nullptr);
        
        Info::CBillingStart36_ptr CBillingStart36_next(nullptr);
        Info::CBillingStart36_clbk CBillingStart36_user(nullptr);
        
        
        Info::CBillingdtor_CBilling41_ptr CBillingdtor_CBilling41_next(nullptr);
        Info::CBillingdtor_CBilling41_clbk CBillingdtor_CBilling41_user(nullptr);
        
        void CBillingAlive2_wrapper(struct CBilling* _this, struct CUserDB* pUserDB)
        {
           CBillingAlive2_user(_this, pUserDB, CBillingAlive2_next);
        };
        void CBillingBillingClose4_wrapper(struct CBilling* _this, char* szID)
        {
           CBillingBillingClose4_user(_this, szID, CBillingBillingClose4_next);
        };
        
        void CBillingctor_CBilling6_wrapper(struct CBilling* _this)
        {
           CBillingctor_CBilling6_user(_this, CBillingctor_CBilling6_next);
        };
        void CBillingChange_BillingType8_wrapper(struct CBilling* _this, char* szID, char* szCMSCode, int16_t iType, int lRemainTime, struct _SYSTEMTIME* pstEndDate, char byReason)
        {
           CBillingChange_BillingType8_user(_this, szID, szCMSCode, iType, lRemainTime, pstEndDate, byReason, CBillingChange_BillingType8_next);
        };
        void CBillingChange_Primium10_wrapper(struct CBilling* _this, char* szID, bool bResult)
        {
           CBillingChange_Primium10_user(_this, szID, bResult, CBillingChange_Primium10_next);
        };
        void CBillingExpire_IPOverflow12_wrapper(struct CBilling* _this, char* szID)
        {
           CBillingExpire_IPOverflow12_user(_this, szID, CBillingExpire_IPOverflow12_next);
        };
        void CBillingExpire_PCBang14_wrapper(struct CBilling* _this, char* szCMS)
        {
           CBillingExpire_PCBang14_user(_this, szCMS, CBillingExpire_PCBang14_next);
        };
        void CBillingExpire_Personal16_wrapper(struct CBilling* _this, char* szID)
        {
           CBillingExpire_Personal16_user(_this, szID, CBillingExpire_Personal16_next);
        };
        void CBillingLogin18_wrapper(struct CBilling* _this, struct CUserDB* pUserDB)
        {
           CBillingLogin18_user(_this, pUserDB, CBillingLogin18_next);
        };
        void CBillingLogout20_wrapper(struct CBilling* _this, struct CUserDB* pUserDB)
        {
           CBillingLogout20_user(_this, pUserDB, CBillingLogout20_next);
        };
        void CBillingRemaintime_PCBang22_wrapper(struct CBilling* _this, char* szCMSCode, int16_t iType, int lRemaintime, struct _SYSTEMTIME* pstEndDate)
        {
           CBillingRemaintime_PCBang22_user(_this, szCMSCode, iType, lRemaintime, pstEndDate, CBillingRemaintime_PCBang22_next);
        };
        void CBillingRemaintime_Personal24_wrapper(struct CBilling* _this, char* szID, int16_t iType, int lRemaintime, struct _SYSTEMTIME* pstEndDate)
        {
           CBillingRemaintime_Personal24_user(_this, szID, iType, lRemaintime, pstEndDate, CBillingRemaintime_Personal24_next);
        };
        void CBillingSendMsg_CurAllUserLogin26_wrapper(struct CBilling* _this)
        {
           CBillingSendMsg_CurAllUserLogin26_user(_this, CBillingSendMsg_CurAllUserLogin26_next);
        };
        bool CBillingSendMsg_Login28_wrapper(struct CBilling* _this, char* szID, char* szIP, char* szCMS, int16_t iType, struct _SYSTEMTIME* pstEndDate, int lRemainTime)
        {
           return CBillingSendMsg_Login28_user(_this, szID, szIP, szCMS, iType, pstEndDate, lRemainTime, CBillingSendMsg_Login28_next);
        };
        void CBillingSendMsg_StartBilling30_wrapper(struct CBilling* _this)
        {
           CBillingSendMsg_StartBilling30_user(_this, CBillingSendMsg_StartBilling30_next);
        };
        void CBillingSendMsg_ZoneAliveCheck32_wrapper(struct CBilling* _this, unsigned int dwData)
        {
           CBillingSendMsg_ZoneAliveCheck32_user(_this, dwData, CBillingSendMsg_ZoneAliveCheck32_next);
        };
        void CBillingSetOper34_wrapper(struct CBilling* _this, bool bOper)
        {
           CBillingSetOper34_user(_this, bOper, CBillingSetOper34_next);
        };
        void CBillingStart36_wrapper(struct CBilling* _this)
        {
           CBillingStart36_user(_this, CBillingStart36_next);
        };
        
        void CBillingdtor_CBilling41_wrapper(struct CBilling* _this)
        {
           CBillingdtor_CBilling41_user(_this, CBillingdtor_CBilling41_next);
        };
        
        ::std::array<hook_record, 19> CBilling_functions = 
        {
            _hook_record {
                (LPVOID)0x14028cba0L,
                (LPVOID *)&CBillingAlive2_user,
                (LPVOID *)&CBillingAlive2_next,
                (LPVOID)cast_pointer_function(CBillingAlive2_wrapper),
                (LPVOID)cast_pointer_function((void(CBilling::*)(struct CUserDB*))&CBilling::Alive)
            },
            _hook_record {
                (LPVOID)0x14028cea0L,
                (LPVOID *)&CBillingBillingClose4_user,
                (LPVOID *)&CBillingBillingClose4_next,
                (LPVOID)cast_pointer_function(CBillingBillingClose4_wrapper),
                (LPVOID)cast_pointer_function((void(CBilling::*)(char*))&CBilling::BillingClose)
            },
            _hook_record {
                (LPVOID)0x14022bad0L,
                (LPVOID *)&CBillingctor_CBilling6_user,
                (LPVOID *)&CBillingctor_CBilling6_next,
                (LPVOID)cast_pointer_function(CBillingctor_CBilling6_wrapper),
                (LPVOID)cast_pointer_function((void(CBilling::*)())&CBilling::ctor_CBilling)
            },
            _hook_record {
                (LPVOID)0x14028d170L,
                (LPVOID *)&CBillingChange_BillingType8_user,
                (LPVOID *)&CBillingChange_BillingType8_next,
                (LPVOID)cast_pointer_function(CBillingChange_BillingType8_wrapper),
                (LPVOID)cast_pointer_function((void(CBilling::*)(char*, char*, int16_t, int, struct _SYSTEMTIME*, char))&CBilling::Change_BillingType)
            },
            _hook_record {
                (LPVOID)0x1401c4370L,
                (LPVOID *)&CBillingChange_Primium10_user,
                (LPVOID *)&CBillingChange_Primium10_next,
                (LPVOID)cast_pointer_function(CBillingChange_Primium10_wrapper),
                (LPVOID)cast_pointer_function((void(CBilling::*)(char*, bool))&CBilling::Change_Primium)
            },
            _hook_record {
                (LPVOID)0x1401c42b0L,
                (LPVOID *)&CBillingExpire_IPOverflow12_user,
                (LPVOID *)&CBillingExpire_IPOverflow12_next,
                (LPVOID)cast_pointer_function(CBillingExpire_IPOverflow12_wrapper),
                (LPVOID)cast_pointer_function((void(CBilling::*)(char*))&CBilling::Expire_IPOverflow)
            },
            _hook_record {
                (LPVOID)0x14028d2b0L,
                (LPVOID *)&CBillingExpire_PCBang14_user,
                (LPVOID *)&CBillingExpire_PCBang14_next,
                (LPVOID)cast_pointer_function(CBillingExpire_PCBang14_wrapper),
                (LPVOID)cast_pointer_function((void(CBilling::*)(char*))&CBilling::Expire_PCBang)
            },
            _hook_record {
                (LPVOID)0x1401c41e0L,
                (LPVOID *)&CBillingExpire_Personal16_user,
                (LPVOID *)&CBillingExpire_Personal16_next,
                (LPVOID)cast_pointer_function(CBillingExpire_Personal16_wrapper),
                (LPVOID)cast_pointer_function((void(CBilling::*)(char*))&CBilling::Expire_Personal)
            },
            _hook_record {
                (LPVOID)0x14028cac0L,
                (LPVOID *)&CBillingLogin18_user,
                (LPVOID *)&CBillingLogin18_next,
                (LPVOID)cast_pointer_function(CBillingLogin18_wrapper),
                (LPVOID)cast_pointer_function((void(CBilling::*)(struct CUserDB*))&CBilling::Login)
            },
            _hook_record {
                (LPVOID)0x14028cd20L,
                (LPVOID *)&CBillingLogout20_user,
                (LPVOID *)&CBillingLogout20_next,
                (LPVOID)cast_pointer_function(CBillingLogout20_wrapper),
                (LPVOID)cast_pointer_function((void(CBilling::*)(struct CUserDB*))&CBilling::Logout)
            },
            _hook_record {
                (LPVOID)0x14028d040L,
                (LPVOID *)&CBillingRemaintime_PCBang22_user,
                (LPVOID *)&CBillingRemaintime_PCBang22_next,
                (LPVOID)cast_pointer_function(CBillingRemaintime_PCBang22_wrapper),
                (LPVOID)cast_pointer_function((void(CBilling::*)(char*, int16_t, int, struct _SYSTEMTIME*))&CBilling::Remaintime_PCBang)
            },
            _hook_record {
                (LPVOID)0x14028cf50L,
                (LPVOID *)&CBillingRemaintime_Personal24_user,
                (LPVOID *)&CBillingRemaintime_Personal24_next,
                (LPVOID)cast_pointer_function(CBillingRemaintime_Personal24_wrapper),
                (LPVOID)cast_pointer_function((void(CBilling::*)(char*, int16_t, int, struct _SYSTEMTIME*))&CBilling::Remaintime_Personal)
            },
            _hook_record {
                (LPVOID)0x14028d610L,
                (LPVOID *)&CBillingSendMsg_CurAllUserLogin26_user,
                (LPVOID *)&CBillingSendMsg_CurAllUserLogin26_next,
                (LPVOID)cast_pointer_function(CBillingSendMsg_CurAllUserLogin26_wrapper),
                (LPVOID)cast_pointer_function((void(CBilling::*)())&CBilling::SendMsg_CurAllUserLogin)
            },
            _hook_record {
                (LPVOID)0x14028d3c0L,
                (LPVOID *)&CBillingSendMsg_Login28_user,
                (LPVOID *)&CBillingSendMsg_Login28_next,
                (LPVOID)cast_pointer_function(CBillingSendMsg_Login28_wrapper),
                (LPVOID)cast_pointer_function((bool(CBilling::*)(char*, char*, char*, int16_t, struct _SYSTEMTIME*, int))&CBilling::SendMsg_Login)
            },
            _hook_record {
                (LPVOID)0x14028d550L,
                (LPVOID *)&CBillingSendMsg_StartBilling30_user,
                (LPVOID *)&CBillingSendMsg_StartBilling30_next,
                (LPVOID)cast_pointer_function(CBillingSendMsg_StartBilling30_wrapper),
                (LPVOID)cast_pointer_function((void(CBilling::*)())&CBilling::SendMsg_StartBilling)
            },
            _hook_record {
                (LPVOID)0x14028d760L,
                (LPVOID *)&CBillingSendMsg_ZoneAliveCheck32_user,
                (LPVOID *)&CBillingSendMsg_ZoneAliveCheck32_next,
                (LPVOID)cast_pointer_function(CBillingSendMsg_ZoneAliveCheck32_wrapper),
                (LPVOID)cast_pointer_function((void(CBilling::*)(unsigned int))&CBilling::SendMsg_ZoneAliveCheck)
            },
            _hook_record {
                (LPVOID)0x14028ca50L,
                (LPVOID *)&CBillingSetOper34_user,
                (LPVOID *)&CBillingSetOper34_next,
                (LPVOID)cast_pointer_function(CBillingSetOper34_wrapper),
                (LPVOID)cast_pointer_function((void(CBilling::*)(bool))&CBilling::SetOper)
            },
            _hook_record {
                (LPVOID)0x14028ca70L,
                (LPVOID *)&CBillingStart36_user,
                (LPVOID *)&CBillingStart36_next,
                (LPVOID)cast_pointer_function(CBillingStart36_wrapper),
                (LPVOID)cast_pointer_function((void(CBilling::*)())&CBilling::Start)
            },
            _hook_record {
                (LPVOID)0x14022bb70L,
                (LPVOID *)&CBillingdtor_CBilling41_user,
                (LPVOID *)&CBillingdtor_CBilling41_next,
                (LPVOID)cast_pointer_function(CBillingdtor_CBilling41_wrapper),
                (LPVOID)cast_pointer_function((void(CBilling::*)())&CBilling::dtor_CBilling)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
