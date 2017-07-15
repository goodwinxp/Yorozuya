#include <CBillingNULLDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CBillingNULLAlive2_ptr CBillingNULLAlive2_next(nullptr);
        Info::CBillingNULLAlive2_clbk CBillingNULLAlive2_user(nullptr);
        
        Info::CBillingNULLBillingClose4_ptr CBillingNULLBillingClose4_next(nullptr);
        Info::CBillingNULLBillingClose4_clbk CBillingNULLBillingClose4_user(nullptr);
        
        
        Info::CBillingNULLctor_CBillingNULL6_ptr CBillingNULLctor_CBillingNULL6_next(nullptr);
        Info::CBillingNULLctor_CBillingNULL6_clbk CBillingNULLctor_CBillingNULL6_user(nullptr);
        
        Info::CBillingNULLLogin8_ptr CBillingNULLLogin8_next(nullptr);
        Info::CBillingNULLLogin8_clbk CBillingNULLLogin8_user(nullptr);
        
        Info::CBillingNULLLogout10_ptr CBillingNULLLogout10_next(nullptr);
        Info::CBillingNULLLogout10_clbk CBillingNULLLogout10_user(nullptr);
        
        Info::CBillingNULLSendMsg_Login12_ptr CBillingNULLSendMsg_Login12_next(nullptr);
        Info::CBillingNULLSendMsg_Login12_clbk CBillingNULLSendMsg_Login12_user(nullptr);
        
        
        Info::CBillingNULLdtor_CBillingNULL17_ptr CBillingNULLdtor_CBillingNULL17_next(nullptr);
        Info::CBillingNULLdtor_CBillingNULL17_clbk CBillingNULLdtor_CBillingNULL17_user(nullptr);
        
        void CBillingNULLAlive2_wrapper(struct CBillingNULL* _this, struct CUserDB* pUserDB)
        {
           CBillingNULLAlive2_user(_this, pUserDB, CBillingNULLAlive2_next);
        };
        void CBillingNULLBillingClose4_wrapper(struct CBillingNULL* _this, char* szID)
        {
           CBillingNULLBillingClose4_user(_this, szID, CBillingNULLBillingClose4_next);
        };
        
        void CBillingNULLctor_CBillingNULL6_wrapper(struct CBillingNULL* _this)
        {
           CBillingNULLctor_CBillingNULL6_user(_this, CBillingNULLctor_CBillingNULL6_next);
        };
        void CBillingNULLLogin8_wrapper(struct CBillingNULL* _this, struct CUserDB* pUserDB)
        {
           CBillingNULLLogin8_user(_this, pUserDB, CBillingNULLLogin8_next);
        };
        void CBillingNULLLogout10_wrapper(struct CBillingNULL* _this, struct CUserDB* pUserDB)
        {
           CBillingNULLLogout10_user(_this, pUserDB, CBillingNULLLogout10_next);
        };
        bool CBillingNULLSendMsg_Login12_wrapper(struct CBillingNULL* _this, char* szID, char* szIP, char* szCMS, int16_t iType, struct _SYSTEMTIME* pstEndDate, int lRemainTime)
        {
           return CBillingNULLSendMsg_Login12_user(_this, szID, szIP, szCMS, iType, pstEndDate, lRemainTime, CBillingNULLSendMsg_Login12_next);
        };
        
        void CBillingNULLdtor_CBillingNULL17_wrapper(struct CBillingNULL* _this)
        {
           CBillingNULLdtor_CBillingNULL17_user(_this, CBillingNULLdtor_CBillingNULL17_next);
        };
        
        ::std::array<hook_record, 7> CBillingNULL_functions = 
        {
            _hook_record {
                (LPVOID)0x14028dbe0L,
                (LPVOID *)&CBillingNULLAlive2_user,
                (LPVOID *)&CBillingNULLAlive2_next,
                (LPVOID)cast_pointer_function(CBillingNULLAlive2_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingNULL::*)(struct CUserDB*))&CBillingNULL::Alive)
            },
            _hook_record {
                (LPVOID)0x14028dc00L,
                (LPVOID *)&CBillingNULLBillingClose4_user,
                (LPVOID *)&CBillingNULLBillingClose4_next,
                (LPVOID)cast_pointer_function(CBillingNULLBillingClose4_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingNULL::*)(char*))&CBillingNULL::BillingClose)
            },
            _hook_record {
                (LPVOID)0x14028db70L,
                (LPVOID *)&CBillingNULLctor_CBillingNULL6_user,
                (LPVOID *)&CBillingNULLctor_CBillingNULL6_next,
                (LPVOID)cast_pointer_function(CBillingNULLctor_CBillingNULL6_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingNULL::*)())&CBillingNULL::ctor_CBillingNULL)
            },
            _hook_record {
                (LPVOID)0x14028dbd0L,
                (LPVOID *)&CBillingNULLLogin8_user,
                (LPVOID *)&CBillingNULLLogin8_next,
                (LPVOID)cast_pointer_function(CBillingNULLLogin8_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingNULL::*)(struct CUserDB*))&CBillingNULL::Login)
            },
            _hook_record {
                (LPVOID)0x14028dbf0L,
                (LPVOID *)&CBillingNULLLogout10_user,
                (LPVOID *)&CBillingNULLLogout10_next,
                (LPVOID)cast_pointer_function(CBillingNULLLogout10_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingNULL::*)(struct CUserDB*))&CBillingNULL::Logout)
            },
            _hook_record {
                (LPVOID)0x14028dc10L,
                (LPVOID *)&CBillingNULLSendMsg_Login12_user,
                (LPVOID *)&CBillingNULLSendMsg_Login12_next,
                (LPVOID)cast_pointer_function(CBillingNULLSendMsg_Login12_wrapper),
                (LPVOID)cast_pointer_function((bool(CBillingNULL::*)(char*, char*, char*, int16_t, struct _SYSTEMTIME*, int))&CBillingNULL::SendMsg_Login)
            },
            _hook_record {
                (LPVOID)0x14028dca0L,
                (LPVOID *)&CBillingNULLdtor_CBillingNULL17_user,
                (LPVOID *)&CBillingNULLdtor_CBillingNULL17_next,
                (LPVOID)cast_pointer_function(CBillingNULLdtor_CBillingNULL17_wrapper),
                (LPVOID)cast_pointer_function((void(CBillingNULL::*)())&CBillingNULL::dtor_CBillingNULL)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
