#include <_WAIT_ENTER_ACCOUNTDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_WAIT_ENTER_ACCOUNTRelease2_ptr _WAIT_ENTER_ACCOUNTRelease2_next(nullptr);
        Info::_WAIT_ENTER_ACCOUNTRelease2_clbk _WAIT_ENTER_ACCOUNTRelease2_user(nullptr);
        
        Info::_WAIT_ENTER_ACCOUNTSetAgeLimitFlag4_ptr _WAIT_ENTER_ACCOUNTSetAgeLimitFlag4_next(nullptr);
        Info::_WAIT_ENTER_ACCOUNTSetAgeLimitFlag4_clbk _WAIT_ENTER_ACCOUNTSetAgeLimitFlag4_user(nullptr);
        
        Info::_WAIT_ENTER_ACCOUNTSetBillingInfo6_ptr _WAIT_ENTER_ACCOUNTSetBillingInfo6_next(nullptr);
        Info::_WAIT_ENTER_ACCOUNTSetBillingInfo6_clbk _WAIT_ENTER_ACCOUNTSetBillingInfo6_user(nullptr);
        
        Info::_WAIT_ENTER_ACCOUNTSetData8_ptr _WAIT_ENTER_ACCOUNTSetData8_next(nullptr);
        Info::_WAIT_ENTER_ACCOUNTSetData8_clbk _WAIT_ENTER_ACCOUNTSetData8_user(nullptr);
        
        Info::_WAIT_ENTER_ACCOUNTSetPcBangFlag10_ptr _WAIT_ENTER_ACCOUNTSetPcBangFlag10_next(nullptr);
        Info::_WAIT_ENTER_ACCOUNTSetPcBangFlag10_clbk _WAIT_ENTER_ACCOUNTSetPcBangFlag10_user(nullptr);
        
        Info::_WAIT_ENTER_ACCOUNTSetTransFlag12_ptr _WAIT_ENTER_ACCOUNTSetTransFlag12_next(nullptr);
        Info::_WAIT_ENTER_ACCOUNTSetTransFlag12_clbk _WAIT_ENTER_ACCOUNTSetTransFlag12_user(nullptr);
        
        Info::_WAIT_ENTER_ACCOUNTSetUILock14_ptr _WAIT_ENTER_ACCOUNTSetUILock14_next(nullptr);
        Info::_WAIT_ENTER_ACCOUNTSetUILock14_clbk _WAIT_ENTER_ACCOUNTSetUILock14_user(nullptr);
        
        
        Info::_WAIT_ENTER_ACCOUNTctor__WAIT_ENTER_ACCOUNT16_ptr _WAIT_ENTER_ACCOUNTctor__WAIT_ENTER_ACCOUNT16_next(nullptr);
        Info::_WAIT_ENTER_ACCOUNTctor__WAIT_ENTER_ACCOUNT16_clbk _WAIT_ENTER_ACCOUNTctor__WAIT_ENTER_ACCOUNT16_user(nullptr);
        
        void _WAIT_ENTER_ACCOUNTRelease2_wrapper(struct _WAIT_ENTER_ACCOUNT* _this)
        {
           _WAIT_ENTER_ACCOUNTRelease2_user(_this, _WAIT_ENTER_ACCOUNTRelease2_next);
        };
        void _WAIT_ENTER_ACCOUNTSetAgeLimitFlag4_wrapper(struct _WAIT_ENTER_ACCOUNT* _this, bool bAgeLimit)
        {
           _WAIT_ENTER_ACCOUNTSetAgeLimitFlag4_user(_this, bAgeLimit, _WAIT_ENTER_ACCOUNTSetAgeLimitFlag4_next);
        };
        void _WAIT_ENTER_ACCOUNTSetBillingInfo6_wrapper(struct _WAIT_ENTER_ACCOUNT* _this, int16_t iType, char* szCMS, int lRemainTime, struct _SYSTEMTIME* pstEndDate)
        {
           _WAIT_ENTER_ACCOUNTSetBillingInfo6_user(_this, iType, szCMS, lRemainTime, pstEndDate, _WAIT_ENTER_ACCOUNTSetBillingInfo6_next);
        };
        void _WAIT_ENTER_ACCOUNTSetData8_wrapper(struct _WAIT_ENTER_ACCOUNT* _this, unsigned int dwAccountSerial, char* pszAccountID, char byUserDgr, char bySubDgr, struct _GLBID* pgidGlobal, unsigned int* pdwKey, bool bChatLock)
        {
           _WAIT_ENTER_ACCOUNTSetData8_user(_this, dwAccountSerial, pszAccountID, byUserDgr, bySubDgr, pgidGlobal, pdwKey, bChatLock, _WAIT_ENTER_ACCOUNTSetData8_next);
        };
        void _WAIT_ENTER_ACCOUNTSetPcBangFlag10_wrapper(struct _WAIT_ENTER_ACCOUNT* _this, bool bIsPcBang)
        {
           _WAIT_ENTER_ACCOUNTSetPcBangFlag10_user(_this, bIsPcBang, _WAIT_ENTER_ACCOUNTSetPcBangFlag10_next);
        };
        void _WAIT_ENTER_ACCOUNTSetTransFlag12_wrapper(struct _WAIT_ENTER_ACCOUNT* _this, int nTrans)
        {
           _WAIT_ENTER_ACCOUNTSetTransFlag12_user(_this, nTrans, _WAIT_ENTER_ACCOUNTSetTransFlag12_next);
        };
        void _WAIT_ENTER_ACCOUNTSetUILock14_wrapper(struct _WAIT_ENTER_ACCOUNT* _this, char byUILock, char* szUILockPW, char byUILockFailCnt, char* szAccountPW, char byHintIndex, char* uszHintAnswer, char byUILockFindPassFailCount)
        {
           _WAIT_ENTER_ACCOUNTSetUILock14_user(_this, byUILock, szUILockPW, byUILockFailCnt, szAccountPW, byHintIndex, uszHintAnswer, byUILockFindPassFailCount, _WAIT_ENTER_ACCOUNTSetUILock14_next);
        };
        
        void _WAIT_ENTER_ACCOUNTctor__WAIT_ENTER_ACCOUNT16_wrapper(struct _WAIT_ENTER_ACCOUNT* _this)
        {
           _WAIT_ENTER_ACCOUNTctor__WAIT_ENTER_ACCOUNT16_user(_this, _WAIT_ENTER_ACCOUNTctor__WAIT_ENTER_ACCOUNT16_next);
        };
        
        ::std::array<hook_record, 8> _WAIT_ENTER_ACCOUNT_functions = 
        {
            _hook_record {
                (LPVOID)0x14011f260L,
                (LPVOID *)&_WAIT_ENTER_ACCOUNTRelease2_user,
                (LPVOID *)&_WAIT_ENTER_ACCOUNTRelease2_next,
                (LPVOID)cast_pointer_function(_WAIT_ENTER_ACCOUNTRelease2_wrapper),
                (LPVOID)cast_pointer_function((void(_WAIT_ENTER_ACCOUNT::*)())&_WAIT_ENTER_ACCOUNT::Release)
            },
            _hook_record {
                (LPVOID)0x140207bd0L,
                (LPVOID *)&_WAIT_ENTER_ACCOUNTSetAgeLimitFlag4_user,
                (LPVOID *)&_WAIT_ENTER_ACCOUNTSetAgeLimitFlag4_next,
                (LPVOID)cast_pointer_function(_WAIT_ENTER_ACCOUNTSetAgeLimitFlag4_wrapper),
                (LPVOID)cast_pointer_function((void(_WAIT_ENTER_ACCOUNT::*)(bool))&_WAIT_ENTER_ACCOUNT::SetAgeLimitFlag)
            },
            _hook_record {
                (LPVOID)0x140207ac0L,
                (LPVOID *)&_WAIT_ENTER_ACCOUNTSetBillingInfo6_user,
                (LPVOID *)&_WAIT_ENTER_ACCOUNTSetBillingInfo6_next,
                (LPVOID)cast_pointer_function(_WAIT_ENTER_ACCOUNTSetBillingInfo6_wrapper),
                (LPVOID)cast_pointer_function((void(_WAIT_ENTER_ACCOUNT::*)(int16_t, char*, int, struct _SYSTEMTIME*))&_WAIT_ENTER_ACCOUNT::SetBillingInfo)
            },
            _hook_record {
                (LPVOID)0x1402079b0L,
                (LPVOID *)&_WAIT_ENTER_ACCOUNTSetData8_user,
                (LPVOID *)&_WAIT_ENTER_ACCOUNTSetData8_next,
                (LPVOID)cast_pointer_function(_WAIT_ENTER_ACCOUNTSetData8_wrapper),
                (LPVOID)cast_pointer_function((void(_WAIT_ENTER_ACCOUNT::*)(unsigned int, char*, char, char, struct _GLBID*, unsigned int*, bool))&_WAIT_ENTER_ACCOUNT::SetData)
            },
            _hook_record {
                (LPVOID)0x140207b80L,
                (LPVOID *)&_WAIT_ENTER_ACCOUNTSetPcBangFlag10_user,
                (LPVOID *)&_WAIT_ENTER_ACCOUNTSetPcBangFlag10_next,
                (LPVOID)cast_pointer_function(_WAIT_ENTER_ACCOUNTSetPcBangFlag10_wrapper),
                (LPVOID)cast_pointer_function((void(_WAIT_ENTER_ACCOUNT::*)(bool))&_WAIT_ENTER_ACCOUNT::SetPcBangFlag)
            },
            _hook_record {
                (LPVOID)0x140207bb0L,
                (LPVOID *)&_WAIT_ENTER_ACCOUNTSetTransFlag12_user,
                (LPVOID *)&_WAIT_ENTER_ACCOUNTSetTransFlag12_next,
                (LPVOID)cast_pointer_function(_WAIT_ENTER_ACCOUNTSetTransFlag12_wrapper),
                (LPVOID)cast_pointer_function((void(_WAIT_ENTER_ACCOUNT::*)(int))&_WAIT_ENTER_ACCOUNT::SetTransFlag)
            },
            _hook_record {
                (LPVOID)0x140207c00L,
                (LPVOID *)&_WAIT_ENTER_ACCOUNTSetUILock14_user,
                (LPVOID *)&_WAIT_ENTER_ACCOUNTSetUILock14_next,
                (LPVOID)cast_pointer_function(_WAIT_ENTER_ACCOUNTSetUILock14_wrapper),
                (LPVOID)cast_pointer_function((void(_WAIT_ENTER_ACCOUNT::*)(char, char*, char, char*, char, char*, char))&_WAIT_ENTER_ACCOUNT::SetUILock)
            },
            _hook_record {
                (LPVOID)0x140203000L,
                (LPVOID *)&_WAIT_ENTER_ACCOUNTctor__WAIT_ENTER_ACCOUNT16_user,
                (LPVOID *)&_WAIT_ENTER_ACCOUNTctor__WAIT_ENTER_ACCOUNT16_next,
                (LPVOID)cast_pointer_function(_WAIT_ENTER_ACCOUNTctor__WAIT_ENTER_ACCOUNT16_wrapper),
                (LPVOID)cast_pointer_function((void(_WAIT_ENTER_ACCOUNT::*)())&_WAIT_ENTER_ACCOUNT::ctor__WAIT_ENTER_ACCOUNT)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
