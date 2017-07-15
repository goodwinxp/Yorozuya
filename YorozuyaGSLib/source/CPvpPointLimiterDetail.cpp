#include <CPvpPointLimiterDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CPvpPointLimiterctor_CPvpPointLimiter2_ptr CPvpPointLimiterctor_CPvpPointLimiter2_next(nullptr);
        Info::CPvpPointLimiterctor_CPvpPointLimiter2_clbk CPvpPointLimiterctor_CPvpPointLimiter2_user(nullptr);
        
        Info::CPvpPointLimiterCheatUpdate4_ptr CPvpPointLimiterCheatUpdate4_next(nullptr);
        Info::CPvpPointLimiterCheatUpdate4_clbk CPvpPointLimiterCheatUpdate4_user(nullptr);
        
        Info::CPvpPointLimiterClear6_ptr CPvpPointLimiterClear6_next(nullptr);
        Info::CPvpPointLimiterClear6_clbk CPvpPointLimiterClear6_user(nullptr);
        
        Info::CPvpPointLimiterSet8_ptr CPvpPointLimiterSet8_next(nullptr);
        Info::CPvpPointLimiterSet8_clbk CPvpPointLimiterSet8_user(nullptr);
        
        Info::CPvpPointLimiterTakePvpPoint10_ptr CPvpPointLimiterTakePvpPoint10_next(nullptr);
        Info::CPvpPointLimiterTakePvpPoint10_clbk CPvpPointLimiterTakePvpPoint10_user(nullptr);
        
        Info::CPvpPointLimiterUpdate12_ptr CPvpPointLimiterUpdate12_next(nullptr);
        Info::CPvpPointLimiterUpdate12_clbk CPvpPointLimiterUpdate12_user(nullptr);
        
        
        Info::CPvpPointLimiterdtor_CPvpPointLimiter14_ptr CPvpPointLimiterdtor_CPvpPointLimiter14_next(nullptr);
        Info::CPvpPointLimiterdtor_CPvpPointLimiter14_clbk CPvpPointLimiterdtor_CPvpPointLimiter14_user(nullptr);
        
        
        void CPvpPointLimiterctor_CPvpPointLimiter2_wrapper(struct CPvpPointLimiter* _this)
        {
           CPvpPointLimiterctor_CPvpPointLimiter2_user(_this, CPvpPointLimiterctor_CPvpPointLimiter2_next);
        };
        void CPvpPointLimiterCheatUpdate4_wrapper(struct CPvpPointLimiter* _this, long double dOriginalPvpPoint)
        {
           CPvpPointLimiterCheatUpdate4_user(_this, dOriginalPvpPoint, CPvpPointLimiterCheatUpdate4_next);
        };
        void CPvpPointLimiterClear6_wrapper(struct CPvpPointLimiter* _this, int64_t tUpdateTime, long double dOriginalPvpPoint, struct CPlayer* pkSelf)
        {
           CPvpPointLimiterClear6_user(_this, tUpdateTime, dOriginalPvpPoint, pkSelf, CPvpPointLimiterClear6_next);
        };
        bool CPvpPointLimiterSet8_wrapper(struct CPvpPointLimiter* _this, long double dOriginalPvpPoint, struct _PVPPOINT_LIMIT_DB_BASE* pkInfo)
        {
           return CPvpPointLimiterSet8_user(_this, dOriginalPvpPoint, pkInfo, CPvpPointLimiterSet8_next);
        };
        bool CPvpPointLimiterTakePvpPoint10_wrapper(struct CPvpPointLimiter* _this, long double* dPvpPoint, struct CPlayer* pkSelf, struct CPlayer* pkDest)
        {
           return CPvpPointLimiterTakePvpPoint10_user(_this, dPvpPoint, pkSelf, pkDest, CPvpPointLimiterTakePvpPoint10_next);
        };
        void CPvpPointLimiterUpdate12_wrapper(struct CPvpPointLimiter* _this, int64_t tUpdateTime, long double dOriginalPvpPoint, long double dUsePoint, bool bUseUp)
        {
           CPvpPointLimiterUpdate12_user(_this, tUpdateTime, dOriginalPvpPoint, dUsePoint, bUseUp, CPvpPointLimiterUpdate12_next);
        };
        
        void CPvpPointLimiterdtor_CPvpPointLimiter14_wrapper(struct CPvpPointLimiter* _this)
        {
           CPvpPointLimiterdtor_CPvpPointLimiter14_user(_this, CPvpPointLimiterdtor_CPvpPointLimiter14_next);
        };
        
        ::std::array<hook_record, 7> CPvpPointLimiter_functions = 
        {
            _hook_record {
                (LPVOID)0x1401250f0L,
                (LPVOID *)&CPvpPointLimiterctor_CPvpPointLimiter2_user,
                (LPVOID *)&CPvpPointLimiterctor_CPvpPointLimiter2_next,
                (LPVOID)cast_pointer_function(CPvpPointLimiterctor_CPvpPointLimiter2_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpPointLimiter::*)())&CPvpPointLimiter::ctor_CPvpPointLimiter)
            },
            _hook_record {
                (LPVOID)0x140125b60L,
                (LPVOID *)&CPvpPointLimiterCheatUpdate4_user,
                (LPVOID *)&CPvpPointLimiterCheatUpdate4_next,
                (LPVOID)cast_pointer_function(CPvpPointLimiterCheatUpdate4_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpPointLimiter::*)(long double))&CPvpPointLimiter::CheatUpdate)
            },
            _hook_record {
                (LPVOID)0x140125850L,
                (LPVOID *)&CPvpPointLimiterClear6_user,
                (LPVOID *)&CPvpPointLimiterClear6_next,
                (LPVOID)cast_pointer_function(CPvpPointLimiterClear6_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpPointLimiter::*)(int64_t, long double, struct CPlayer*))&CPvpPointLimiter::Clear)
            },
            _hook_record {
                (LPVOID)0x140125120L,
                (LPVOID *)&CPvpPointLimiterSet8_user,
                (LPVOID *)&CPvpPointLimiterSet8_next,
                (LPVOID)cast_pointer_function(CPvpPointLimiterSet8_wrapper),
                (LPVOID)cast_pointer_function((bool(CPvpPointLimiter::*)(long double, struct _PVPPOINT_LIMIT_DB_BASE*))&CPvpPointLimiter::Set)
            },
            _hook_record {
                (LPVOID)0x140125300L,
                (LPVOID *)&CPvpPointLimiterTakePvpPoint10_user,
                (LPVOID *)&CPvpPointLimiterTakePvpPoint10_next,
                (LPVOID)cast_pointer_function(CPvpPointLimiterTakePvpPoint10_wrapper),
                (LPVOID)cast_pointer_function((bool(CPvpPointLimiter::*)(long double*, struct CPlayer*, struct CPlayer*))&CPvpPointLimiter::TakePvpPoint)
            },
            _hook_record {
                (LPVOID)0x140125a10L,
                (LPVOID *)&CPvpPointLimiterUpdate12_user,
                (LPVOID *)&CPvpPointLimiterUpdate12_next,
                (LPVOID)cast_pointer_function(CPvpPointLimiterUpdate12_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpPointLimiter::*)(int64_t, long double, long double, bool))&CPvpPointLimiter::Update)
            },
            _hook_record {
                (LPVOID)0x140125110L,
                (LPVOID *)&CPvpPointLimiterdtor_CPvpPointLimiter14_user,
                (LPVOID *)&CPvpPointLimiterdtor_CPvpPointLimiter14_next,
                (LPVOID)cast_pointer_function(CPvpPointLimiterdtor_CPvpPointLimiter14_wrapper),
                (LPVOID)cast_pointer_function((void(CPvpPointLimiter::*)())&CPvpPointLimiter::dtor_CPvpPointLimiter)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
