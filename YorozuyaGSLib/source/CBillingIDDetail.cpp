#include <CBillingIDDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CBillingIDAlive2_ptr CBillingIDAlive2_next(nullptr);
        Info::CBillingIDAlive2_clbk CBillingIDAlive2_user(nullptr);
        
        Info::CBillingIDBillingClose4_ptr CBillingIDBillingClose4_next(nullptr);
        Info::CBillingIDBillingClose4_clbk CBillingIDBillingClose4_user(nullptr);
        
        
        Info::CBillingIDctor_CBillingID6_ptr CBillingIDctor_CBillingID6_next(nullptr);
        Info::CBillingIDctor_CBillingID6_clbk CBillingIDctor_CBillingID6_user(nullptr);
        
        Info::CBillingIDLogin8_ptr CBillingIDLogin8_next(nullptr);
        Info::CBillingIDLogin8_clbk CBillingIDLogin8_user(nullptr);
        
        Info::CBillingIDLogout10_ptr CBillingIDLogout10_next(nullptr);
        Info::CBillingIDLogout10_clbk CBillingIDLogout10_user(nullptr);
        
        Info::CBillingIDSendMsg_Login12_ptr CBillingIDSendMsg_Login12_next(nullptr);
        Info::CBillingIDSendMsg_Login12_clbk CBillingIDSendMsg_Login12_user(nullptr);
        
        
        Info::CBillingIDdtor_CBillingID17_ptr CBillingIDdtor_CBillingID17_next(nullptr);
        Info::CBillingIDdtor_CBillingID17_clbk CBillingIDdtor_CBillingID17_user(nullptr);
        
        void CBillingIDAlive2_wrapper(struct CBillingID* _this, struct CUserDB* pUserDB)
        {
           CBillingIDAlive2_user(_this, pUserDB, CBillingIDAlive2_next);
        };
        void CBillingIDBillingClose4_wrapper(struct CBillingID* _this, char* szID)
        {
           CBillingIDBillingClose4_user(_this, szID, CBillingIDBillingClose4_next);
        };
        
        void CBillingIDctor_CBillingID6_wrapper(struct CBillingID* _this)
        {
           CBillingIDctor_CBillingID6_user(_this, CBillingIDctor_CBillingID6_next);
        };
        void CBillingIDLogin8_wrapper(struct CBillingID* _this, struct CUserDB* pUserDB)
        {
           CBillingIDLogin8_user(_this, pUserDB, CBillingIDLogin8_next);
        };
        void CBillingIDLogout10_wrapper(struct CBillingID* _this, struct CUserDB* pUserDB)
        {
           CBillingIDLogout10_user(_this, pUserDB, CBillingIDLogout10_next);
        };
        bool CBillingIDSendMsg_Login12_wrapper(struct CBillingID* _this, char* szID, char* szIP, char* szCMS, int16_t iType, struct _SYSTEMTIME* pstEndDate, int lRemainTime)
        {
           return CBillingIDSendMsg_Login12_user(_this, szID, szIP, szCMS, iType, pstEndDate, lRemainTime, CBillingIDSendMsg_Login12_next);
        };
        
        void CBillingIDdtor_CBillingID17_wrapper(struct CBillingID* _this)
        {
           CBillingIDdtor_CBillingID17_user(_this, CBillingIDdtor_CBillingID17_next);
        };
        
        ::std::array<hook_record, 7> CBillingID_functions = 
        {
            _hook_record {
                (LPVOID)0x14028e1e0L,
                (LPVOID *)&CBillingIDAlive2_user,
                (LPVOID *)&CBillingIDAlive2_next,
                (LPVOID)cast_pointer_function(CBillingIDAlive2_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingID::*)(struct CUserDB*))&CBillingID::Alive)
            },
            _hook_record {
                (LPVOID)0x14028e4a0L,
                (LPVOID *)&CBillingIDBillingClose4_user,
                (LPVOID *)&CBillingIDBillingClose4_next,
                (LPVOID)cast_pointer_function(CBillingIDBillingClose4_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingID::*)(char*))&CBillingID::BillingClose)
            },
            _hook_record {
                (LPVOID)0x14022cdd0L,
                (LPVOID *)&CBillingIDctor_CBillingID6_user,
                (LPVOID *)&CBillingIDctor_CBillingID6_next,
                (LPVOID)cast_pointer_function(CBillingIDctor_CBillingID6_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingID::*)())&CBillingID::ctor_CBillingID)
            },
            _hook_record {
                (LPVOID)0x14028e0f0L,
                (LPVOID *)&CBillingIDLogin8_user,
                (LPVOID *)&CBillingIDLogin8_next,
                (LPVOID)cast_pointer_function(CBillingIDLogin8_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingID::*)(struct CUserDB*))&CBillingID::Login)
            },
            _hook_record {
                (LPVOID)0x14028e350L,
                (LPVOID *)&CBillingIDLogout10_user,
                (LPVOID *)&CBillingIDLogout10_next,
                (LPVOID)cast_pointer_function(CBillingIDLogout10_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingID::*)(struct CUserDB*))&CBillingID::Logout)
            },
            _hook_record {
                (LPVOID)0x14028e600L,
                (LPVOID *)&CBillingIDSendMsg_Login12_user,
                (LPVOID *)&CBillingIDSendMsg_Login12_next,
                (LPVOID)cast_pointer_function(CBillingIDSendMsg_Login12_wrapper),
                (LPVOID)cast_pointer_function((bool(CBillingID::*)(char*, char*, char*, int16_t, struct _SYSTEMTIME*, int))&CBillingID::SendMsg_Login)
            },
            _hook_record {
                (LPVOID)0x14022cea0L,
                (LPVOID *)&CBillingIDdtor_CBillingID17_user,
                (LPVOID *)&CBillingIDdtor_CBillingID17_next,
                (LPVOID)cast_pointer_function(CBillingIDdtor_CBillingID17_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingID::*)())&CBillingID::dtor_CBillingID)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
