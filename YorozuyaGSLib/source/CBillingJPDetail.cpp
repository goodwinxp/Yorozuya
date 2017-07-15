#include <CBillingJPDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CBillingJPAlive2_ptr CBillingJPAlive2_next(nullptr);
        Info::CBillingJPAlive2_clbk CBillingJPAlive2_user(nullptr);
        
        
        Info::CBillingJPctor_CBillingJP4_ptr CBillingJPctor_CBillingJP4_next(nullptr);
        Info::CBillingJPctor_CBillingJP4_clbk CBillingJPctor_CBillingJP4_user(nullptr);
        
        Info::CBillingJPLogin6_ptr CBillingJPLogin6_next(nullptr);
        Info::CBillingJPLogin6_clbk CBillingJPLogin6_user(nullptr);
        
        Info::CBillingJPLogout8_ptr CBillingJPLogout8_next(nullptr);
        Info::CBillingJPLogout8_clbk CBillingJPLogout8_user(nullptr);
        
        Info::CBillingJPSendMsg_Login10_ptr CBillingJPSendMsg_Login10_next(nullptr);
        Info::CBillingJPSendMsg_Login10_clbk CBillingJPSendMsg_Login10_user(nullptr);
        
        
        Info::CBillingJPdtor_CBillingJP15_ptr CBillingJPdtor_CBillingJP15_next(nullptr);
        Info::CBillingJPdtor_CBillingJP15_clbk CBillingJPdtor_CBillingJP15_user(nullptr);
        
        void CBillingJPAlive2_wrapper(struct CBillingJP* _this, struct CUserDB* pUserDB)
        {
           CBillingJPAlive2_user(_this, pUserDB, CBillingJPAlive2_next);
        };
        
        void CBillingJPctor_CBillingJP4_wrapper(struct CBillingJP* _this)
        {
           CBillingJPctor_CBillingJP4_user(_this, CBillingJPctor_CBillingJP4_next);
        };
        void CBillingJPLogin6_wrapper(struct CBillingJP* _this, struct CUserDB* pUserDB)
        {
           CBillingJPLogin6_user(_this, pUserDB, CBillingJPLogin6_next);
        };
        void CBillingJPLogout8_wrapper(struct CBillingJP* _this, struct CUserDB* pUserDB)
        {
           CBillingJPLogout8_user(_this, pUserDB, CBillingJPLogout8_next);
        };
        bool CBillingJPSendMsg_Login10_wrapper(struct CBillingJP* _this, char* szID, char* szIP, char* szCMS, int16_t iType, struct _SYSTEMTIME* pstEndDate, int lRemainTime)
        {
           return CBillingJPSendMsg_Login10_user(_this, szID, szIP, szCMS, iType, pstEndDate, lRemainTime, CBillingJPSendMsg_Login10_next);
        };
        
        void CBillingJPdtor_CBillingJP15_wrapper(struct CBillingJP* _this)
        {
           CBillingJPdtor_CBillingJP15_user(_this, CBillingJPdtor_CBillingJP15_next);
        };
        
        ::std::array<hook_record, 6> CBillingJP_functions = 
        {
            _hook_record {
                (LPVOID)0x14028ea00L,
                (LPVOID *)&CBillingJPAlive2_user,
                (LPVOID *)&CBillingJPAlive2_next,
                (LPVOID)cast_pointer_function(CBillingJPAlive2_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingJP::*)(struct CUserDB*))&CBillingJP::Alive)
            },
            _hook_record {
                (LPVOID)0x14022d760L,
                (LPVOID *)&CBillingJPctor_CBillingJP4_user,
                (LPVOID *)&CBillingJPctor_CBillingJP4_next,
                (LPVOID)cast_pointer_function(CBillingJPctor_CBillingJP4_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingJP::*)())&CBillingJP::ctor_CBillingJP)
            },
            _hook_record {
                (LPVOID)0x14028e910L,
                (LPVOID *)&CBillingJPLogin6_user,
                (LPVOID *)&CBillingJPLogin6_next,
                (LPVOID)cast_pointer_function(CBillingJPLogin6_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingJP::*)(struct CUserDB*))&CBillingJP::Login)
            },
            _hook_record {
                (LPVOID)0x14028eb70L,
                (LPVOID *)&CBillingJPLogout8_user,
                (LPVOID *)&CBillingJPLogout8_next,
                (LPVOID)cast_pointer_function(CBillingJPLogout8_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingJP::*)(struct CUserDB*))&CBillingJP::Logout)
            },
            _hook_record {
                (LPVOID)0x14028ecc0L,
                (LPVOID *)&CBillingJPSendMsg_Login10_user,
                (LPVOID *)&CBillingJPSendMsg_Login10_next,
                (LPVOID)cast_pointer_function(CBillingJPSendMsg_Login10_wrapper),
                (LPVOID)cast_pointer_function((bool(CBillingJP::*)(char*, char*, char*, int16_t, struct _SYSTEMTIME*, int))&CBillingJP::SendMsg_Login)
            },
            _hook_record {
                (LPVOID)0x14022d830L,
                (LPVOID *)&CBillingJPdtor_CBillingJP15_user,
                (LPVOID *)&CBillingJPdtor_CBillingJP15_next,
                (LPVOID)cast_pointer_function(CBillingJPdtor_CBillingJP15_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingJP::*)())&CBillingJP::dtor_CBillingJP)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
