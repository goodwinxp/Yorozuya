#include <_STORAGE_LISTDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_STORAGE_LISTAlterCurDur2_ptr _STORAGE_LISTAlterCurDur2_next(nullptr);
        Info::_STORAGE_LISTAlterCurDur2_clbk _STORAGE_LISTAlterCurDur2_user(nullptr);
        
        Info::_STORAGE_LISTEmptyCon4_ptr _STORAGE_LISTEmptyCon4_next(nullptr);
        Info::_STORAGE_LISTEmptyCon4_clbk _STORAGE_LISTEmptyCon4_user(nullptr);
        
        Info::_STORAGE_LISTGetIndexEmptyCon6_ptr _STORAGE_LISTGetIndexEmptyCon6_next(nullptr);
        Info::_STORAGE_LISTGetIndexEmptyCon6_clbk _STORAGE_LISTGetIndexEmptyCon6_user(nullptr);
        
        Info::_STORAGE_LISTGetIndexFromSerial8_ptr _STORAGE_LISTGetIndexFromSerial8_next(nullptr);
        Info::_STORAGE_LISTGetIndexFromSerial8_clbk _STORAGE_LISTGetIndexFromSerial8_user(nullptr);
        
        Info::_STORAGE_LISTGetNumEmptyCon10_ptr _STORAGE_LISTGetNumEmptyCon10_next(nullptr);
        Info::_STORAGE_LISTGetNumEmptyCon10_clbk _STORAGE_LISTGetNumEmptyCon10_user(nullptr);
        
        Info::_STORAGE_LISTGetNumUseCon12_ptr _STORAGE_LISTGetNumUseCon12_next(nullptr);
        Info::_STORAGE_LISTGetNumUseCon12_clbk _STORAGE_LISTGetNumUseCon12_user(nullptr);
        
        Info::_STORAGE_LISTGetPtrFromItemCode14_ptr _STORAGE_LISTGetPtrFromItemCode14_next(nullptr);
        Info::_STORAGE_LISTGetPtrFromItemCode14_clbk _STORAGE_LISTGetPtrFromItemCode14_user(nullptr);
        
        Info::_STORAGE_LISTGetPtrFromItemInfo16_ptr _STORAGE_LISTGetPtrFromItemInfo16_next(nullptr);
        Info::_STORAGE_LISTGetPtrFromItemInfo16_clbk _STORAGE_LISTGetPtrFromItemInfo16_user(nullptr);
        
        Info::_STORAGE_LISTGetPtrFromSerial18_ptr _STORAGE_LISTGetPtrFromSerial18_next(nullptr);
        Info::_STORAGE_LISTGetPtrFromSerial18_clbk _STORAGE_LISTGetPtrFromSerial18_user(nullptr);
        
        Info::_STORAGE_LISTGetRemainLendTime20_ptr _STORAGE_LISTGetRemainLendTime20_next(nullptr);
        Info::_STORAGE_LISTGetRemainLendTime20_clbk _STORAGE_LISTGetRemainLendTime20_user(nullptr);
        
        Info::_STORAGE_LISTGradeDown22_ptr _STORAGE_LISTGradeDown22_next(nullptr);
        Info::_STORAGE_LISTGradeDown22_clbk _STORAGE_LISTGradeDown22_user(nullptr);
        
        Info::_STORAGE_LISTGradeUp24_ptr _STORAGE_LISTGradeUp24_next(nullptr);
        Info::_STORAGE_LISTGradeUp24_clbk _STORAGE_LISTGradeUp24_user(nullptr);
        
        Info::_STORAGE_LISTSetAllEmpty26_ptr _STORAGE_LISTSetAllEmpty26_next(nullptr);
        Info::_STORAGE_LISTSetAllEmpty26_clbk _STORAGE_LISTSetAllEmpty26_user(nullptr);
        
        Info::_STORAGE_LISTSetClientIndexFromSerial28_ptr _STORAGE_LISTSetClientIndexFromSerial28_next(nullptr);
        Info::_STORAGE_LISTSetClientIndexFromSerial28_clbk _STORAGE_LISTSetClientIndexFromSerial28_user(nullptr);
        
        Info::_STORAGE_LISTSetGrade30_ptr _STORAGE_LISTSetGrade30_next(nullptr);
        Info::_STORAGE_LISTSetGrade30_clbk _STORAGE_LISTSetGrade30_user(nullptr);
        
        Info::_STORAGE_LISTSetLimCurDur32_ptr _STORAGE_LISTSetLimCurDur32_next(nullptr);
        Info::_STORAGE_LISTSetLimCurDur32_clbk _STORAGE_LISTSetLimCurDur32_user(nullptr);
        
        Info::_STORAGE_LISTSetLock34_ptr _STORAGE_LISTSetLock34_next(nullptr);
        Info::_STORAGE_LISTSetLock34_clbk _STORAGE_LISTSetLock34_user(nullptr);
        
        Info::_STORAGE_LISTSetMemory36_ptr _STORAGE_LISTSetMemory36_next(nullptr);
        Info::_STORAGE_LISTSetMemory36_clbk _STORAGE_LISTSetMemory36_user(nullptr);
        
        Info::_STORAGE_LISTSetUseListNum38_ptr _STORAGE_LISTSetUseListNum38_next(nullptr);
        Info::_STORAGE_LISTSetUseListNum38_clbk _STORAGE_LISTSetUseListNum38_user(nullptr);
        
        Info::_STORAGE_LISTTransInCon40_ptr _STORAGE_LISTTransInCon40_next(nullptr);
        Info::_STORAGE_LISTTransInCon40_clbk _STORAGE_LISTTransInCon40_user(nullptr);
        
        Info::_STORAGE_LISTUpdateCurDur42_ptr _STORAGE_LISTUpdateCurDur42_next(nullptr);
        Info::_STORAGE_LISTUpdateCurDur42_clbk _STORAGE_LISTUpdateCurDur42_user(nullptr);
        
        
        Info::_STORAGE_LISTctor__STORAGE_LIST44_ptr _STORAGE_LISTctor__STORAGE_LIST44_next(nullptr);
        Info::_STORAGE_LISTctor__STORAGE_LIST44_clbk _STORAGE_LISTctor__STORAGE_LIST44_user(nullptr);
        
        bool _STORAGE_LISTAlterCurDur2_wrapper(struct _STORAGE_LIST* _this, int n, int nAlter, uint64_t* pdwLeftDur)
        {
           return _STORAGE_LISTAlterCurDur2_user(_this, n, nAlter, pdwLeftDur, _STORAGE_LISTAlterCurDur2_next);
        };
        bool _STORAGE_LISTEmptyCon4_wrapper(struct _STORAGE_LIST* _this, int n)
        {
           return _STORAGE_LISTEmptyCon4_user(_this, n, _STORAGE_LISTEmptyCon4_next);
        };
        int _STORAGE_LISTGetIndexEmptyCon6_wrapper(struct _STORAGE_LIST* _this)
        {
           return _STORAGE_LISTGetIndexEmptyCon6_user(_this, _STORAGE_LISTGetIndexEmptyCon6_next);
        };
        int _STORAGE_LISTGetIndexFromSerial8_wrapper(struct _STORAGE_LIST* _this, uint16_t wSerial)
        {
           return _STORAGE_LISTGetIndexFromSerial8_user(_this, wSerial, _STORAGE_LISTGetIndexFromSerial8_next);
        };
        int _STORAGE_LISTGetNumEmptyCon10_wrapper(struct _STORAGE_LIST* _this)
        {
           return _STORAGE_LISTGetNumEmptyCon10_user(_this, _STORAGE_LISTGetNumEmptyCon10_next);
        };
        int _STORAGE_LISTGetNumUseCon12_wrapper(struct _STORAGE_LIST* _this)
        {
           return _STORAGE_LISTGetNumUseCon12_user(_this, _STORAGE_LISTGetNumUseCon12_next);
        };
        struct _STORAGE_LIST::_db_con* _STORAGE_LISTGetPtrFromItemCode14_wrapper(struct _STORAGE_LIST* _this, char* pwszItemCode)
        {
           return _STORAGE_LISTGetPtrFromItemCode14_user(_this, pwszItemCode, _STORAGE_LISTGetPtrFromItemCode14_next);
        };
        struct _STORAGE_LIST::_db_con* _STORAGE_LISTGetPtrFromItemInfo16_wrapper(struct _STORAGE_LIST* _this, char byTableCode, uint16_t ItemIndex)
        {
           return _STORAGE_LISTGetPtrFromItemInfo16_user(_this, byTableCode, ItemIndex, _STORAGE_LISTGetPtrFromItemInfo16_next);
        };
        struct _STORAGE_LIST::_db_con* _STORAGE_LISTGetPtrFromSerial18_wrapper(struct _STORAGE_LIST* _this, uint16_t wSerial)
        {
           return _STORAGE_LISTGetPtrFromSerial18_user(_this, wSerial, _STORAGE_LISTGetPtrFromSerial18_next);
        };
        unsigned int _STORAGE_LISTGetRemainLendTime20_wrapper(struct _STORAGE_LIST* _this, int n, int tmCur)
        {
           return _STORAGE_LISTGetRemainLendTime20_user(_this, n, tmCur, _STORAGE_LISTGetRemainLendTime20_next);
        };
        bool _STORAGE_LISTGradeDown22_wrapper(struct _STORAGE_LIST* _this, int n, unsigned int dwUptInfo)
        {
           return _STORAGE_LISTGradeDown22_user(_this, n, dwUptInfo, _STORAGE_LISTGradeDown22_next);
        };
        bool _STORAGE_LISTGradeUp24_wrapper(struct _STORAGE_LIST* _this, int n, unsigned int dwUptInfo)
        {
           return _STORAGE_LISTGradeUp24_user(_this, n, dwUptInfo, _STORAGE_LISTGradeUp24_next);
        };
        void _STORAGE_LISTSetAllEmpty26_wrapper(struct _STORAGE_LIST* _this)
        {
           _STORAGE_LISTSetAllEmpty26_user(_this, _STORAGE_LISTSetAllEmpty26_next);
        };
        char _STORAGE_LISTSetClientIndexFromSerial28_wrapper(struct _STORAGE_LIST* _this, uint16_t wSerial, char byClientIndex, char* pbyoutOldClientIndex)
        {
           return _STORAGE_LISTSetClientIndexFromSerial28_user(_this, wSerial, byClientIndex, pbyoutOldClientIndex, _STORAGE_LISTSetClientIndexFromSerial28_next);
        };
        bool _STORAGE_LISTSetGrade30_wrapper(struct _STORAGE_LIST* _this, int n, char byLv, unsigned int dwUptInfo)
        {
           return _STORAGE_LISTSetGrade30_user(_this, n, byLv, dwUptInfo, _STORAGE_LISTSetGrade30_next);
        };
        void _STORAGE_LISTSetLimCurDur32_wrapper(struct _STORAGE_LIST* _this, int n, unsigned int dwSetDur)
        {
           _STORAGE_LISTSetLimCurDur32_user(_this, n, dwSetDur, _STORAGE_LISTSetLimCurDur32_next);
        };
        void _STORAGE_LISTSetLock34_wrapper(struct _STORAGE_LIST* _this, int n, bool bLock)
        {
           _STORAGE_LISTSetLock34_user(_this, n, bLock, _STORAGE_LISTSetLock34_next);
        };
        void _STORAGE_LISTSetMemory36_wrapper(struct _STORAGE_LIST* _this, struct _STORAGE_LIST::_db_con* pList, int nListName, int nListNum, int nUsedNum)
        {
           _STORAGE_LISTSetMemory36_user(_this, pList, nListName, nListNum, nUsedNum, _STORAGE_LISTSetMemory36_next);
        };
        bool _STORAGE_LISTSetUseListNum38_wrapper(struct _STORAGE_LIST* _this, int nUsedNum)
        {
           return _STORAGE_LISTSetUseListNum38_user(_this, nUsedNum, _STORAGE_LISTSetUseListNum38_next);
        };
        unsigned int _STORAGE_LISTTransInCon40_wrapper(struct _STORAGE_LIST* _this, struct _STORAGE_LIST::_storage_con* pCon)
        {
           return _STORAGE_LISTTransInCon40_user(_this, pCon, _STORAGE_LISTTransInCon40_next);
        };
        bool _STORAGE_LISTUpdateCurDur42_wrapper(struct _STORAGE_LIST* _this, int n, int nUpdate)
        {
           return _STORAGE_LISTUpdateCurDur42_user(_this, n, nUpdate, _STORAGE_LISTUpdateCurDur42_next);
        };
        
        void _STORAGE_LISTctor__STORAGE_LIST44_wrapper(struct _STORAGE_LIST* _this)
        {
           _STORAGE_LISTctor__STORAGE_LIST44_user(_this, _STORAGE_LISTctor__STORAGE_LIST44_next);
        };
        
        ::std::array<hook_record, 22> _STORAGE_LIST_functions = 
        {
            _hook_record {
                (LPVOID)0x14010f090L,
                (LPVOID *)&_STORAGE_LISTAlterCurDur2_user,
                (LPVOID *)&_STORAGE_LISTAlterCurDur2_next,
                (LPVOID)cast_pointer_function(_STORAGE_LISTAlterCurDur2_wrapper),
                (LPVOID)cast_pointer_function((bool(_STORAGE_LIST::*)(int, int, uint64_t*))&_STORAGE_LIST::AlterCurDur)
            },
            _hook_record {
                (LPVOID)0x14010eeb0L,
                (LPVOID *)&_STORAGE_LISTEmptyCon4_user,
                (LPVOID *)&_STORAGE_LISTEmptyCon4_next,
                (LPVOID)cast_pointer_function(_STORAGE_LISTEmptyCon4_wrapper),
                (LPVOID)cast_pointer_function((bool(_STORAGE_LIST::*)(int))&_STORAGE_LIST::EmptyCon)
            },
            _hook_record {
                (LPVOID)0x14010ecf0L,
                (LPVOID *)&_STORAGE_LISTGetIndexEmptyCon6_user,
                (LPVOID *)&_STORAGE_LISTGetIndexEmptyCon6_next,
                (LPVOID)cast_pointer_function(_STORAGE_LISTGetIndexEmptyCon6_wrapper),
                (LPVOID)cast_pointer_function((int(_STORAGE_LIST::*)())&_STORAGE_LIST::GetIndexEmptyCon)
            },
            _hook_record {
                (LPVOID)0x14010ed70L,
                (LPVOID *)&_STORAGE_LISTGetIndexFromSerial8_user,
                (LPVOID *)&_STORAGE_LISTGetIndexFromSerial8_next,
                (LPVOID)cast_pointer_function(_STORAGE_LISTGetIndexFromSerial8_wrapper),
                (LPVOID)cast_pointer_function((int(_STORAGE_LIST::*)(uint16_t))&_STORAGE_LIST::GetIndexFromSerial)
            },
            _hook_record {
                (LPVOID)0x14010ebd0L,
                (LPVOID *)&_STORAGE_LISTGetNumEmptyCon10_user,
                (LPVOID *)&_STORAGE_LISTGetNumEmptyCon10_next,
                (LPVOID)cast_pointer_function(_STORAGE_LISTGetNumEmptyCon10_wrapper),
                (LPVOID)cast_pointer_function((int(_STORAGE_LIST::*)())&_STORAGE_LIST::GetNumEmptyCon)
            },
            _hook_record {
                (LPVOID)0x14010ec60L,
                (LPVOID *)&_STORAGE_LISTGetNumUseCon12_user,
                (LPVOID *)&_STORAGE_LISTGetNumUseCon12_next,
                (LPVOID)cast_pointer_function(_STORAGE_LISTGetNumUseCon12_wrapper),
                (LPVOID)cast_pointer_function((int(_STORAGE_LIST::*)())&_STORAGE_LIST::GetNumUseCon)
            },
            _hook_record {
                (LPVOID)0x14010f6d0L,
                (LPVOID *)&_STORAGE_LISTGetPtrFromItemCode14_user,
                (LPVOID *)&_STORAGE_LISTGetPtrFromItemCode14_next,
                (LPVOID)cast_pointer_function(_STORAGE_LISTGetPtrFromItemCode14_wrapper),
                (LPVOID)cast_pointer_function((struct _STORAGE_LIST::_db_con*(_STORAGE_LIST::*)(char*))&_STORAGE_LIST::GetPtrFromItemCode)
            },
            _hook_record {
                (LPVOID)0x14010f530L,
                (LPVOID *)&_STORAGE_LISTGetPtrFromItemInfo16_user,
                (LPVOID *)&_STORAGE_LISTGetPtrFromItemInfo16_next,
                (LPVOID)cast_pointer_function(_STORAGE_LISTGetPtrFromItemInfo16_wrapper),
                (LPVOID)cast_pointer_function((struct _STORAGE_LIST::_db_con*(_STORAGE_LIST::*)(char, uint16_t))&_STORAGE_LIST::GetPtrFromItemInfo)
            },
            _hook_record {
                (LPVOID)0x14010ee40L,
                (LPVOID *)&_STORAGE_LISTGetPtrFromSerial18_user,
                (LPVOID *)&_STORAGE_LISTGetPtrFromSerial18_next,
                (LPVOID)cast_pointer_function(_STORAGE_LISTGetPtrFromSerial18_wrapper),
                (LPVOID)cast_pointer_function((struct _STORAGE_LIST::_db_con*(_STORAGE_LIST::*)(uint16_t))&_STORAGE_LIST::GetPtrFromSerial)
            },
            _hook_record {
                (LPVOID)0x14010f640L,
                (LPVOID *)&_STORAGE_LISTGetRemainLendTime20_user,
                (LPVOID *)&_STORAGE_LISTGetRemainLendTime20_next,
                (LPVOID)cast_pointer_function(_STORAGE_LISTGetRemainLendTime20_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(_STORAGE_LIST::*)(int, int))&_STORAGE_LIST::GetRemainLendTime)
            },
            _hook_record {
                (LPVOID)0x14010f310L,
                (LPVOID *)&_STORAGE_LISTGradeDown22_user,
                (LPVOID *)&_STORAGE_LISTGradeDown22_next,
                (LPVOID)cast_pointer_function(_STORAGE_LISTGradeDown22_wrapper),
                (LPVOID)cast_pointer_function((bool(_STORAGE_LIST::*)(int, unsigned int))&_STORAGE_LIST::GradeDown)
            },
            _hook_record {
                (LPVOID)0x14010f2d0L,
                (LPVOID *)&_STORAGE_LISTGradeUp24_user,
                (LPVOID *)&_STORAGE_LISTGradeUp24_next,
                (LPVOID)cast_pointer_function(_STORAGE_LISTGradeUp24_wrapper),
                (LPVOID)cast_pointer_function((bool(_STORAGE_LIST::*)(int, unsigned int))&_STORAGE_LIST::GradeUp)
            },
            _hook_record {
                (LPVOID)0x14010eb60L,
                (LPVOID *)&_STORAGE_LISTSetAllEmpty26_user,
                (LPVOID *)&_STORAGE_LISTSetAllEmpty26_next,
                (LPVOID)cast_pointer_function(_STORAGE_LISTSetAllEmpty26_wrapper),
                (LPVOID)cast_pointer_function((void(_STORAGE_LIST::*)())&_STORAGE_LIST::SetAllEmpty)
            },
            _hook_record {
                (LPVOID)0x14010f3f0L,
                (LPVOID *)&_STORAGE_LISTSetClientIndexFromSerial28_user,
                (LPVOID *)&_STORAGE_LISTSetClientIndexFromSerial28_next,
                (LPVOID)cast_pointer_function(_STORAGE_LISTSetClientIndexFromSerial28_wrapper),
                (LPVOID)cast_pointer_function((char(_STORAGE_LIST::*)(uint16_t, char, char*))&_STORAGE_LIST::SetClientIndexFromSerial)
            },
            _hook_record {
                (LPVOID)0x14010f350L,
                (LPVOID *)&_STORAGE_LISTSetGrade30_user,
                (LPVOID *)&_STORAGE_LISTSetGrade30_next,
                (LPVOID)cast_pointer_function(_STORAGE_LISTSetGrade30_wrapper),
                (LPVOID)cast_pointer_function((bool(_STORAGE_LIST::*)(int, char, unsigned int))&_STORAGE_LIST::SetGrade)
            },
            _hook_record {
                (LPVOID)0x14010f290L,
                (LPVOID *)&_STORAGE_LISTSetLimCurDur32_user,
                (LPVOID *)&_STORAGE_LISTSetLimCurDur32_next,
                (LPVOID)cast_pointer_function(_STORAGE_LISTSetLimCurDur32_wrapper),
                (LPVOID)cast_pointer_function((void(_STORAGE_LIST::*)(int, unsigned int))&_STORAGE_LIST::SetLimCurDur)
            },
            _hook_record {
                (LPVOID)0x14010f390L,
                (LPVOID *)&_STORAGE_LISTSetLock34_user,
                (LPVOID *)&_STORAGE_LISTSetLock34_next,
                (LPVOID)cast_pointer_function(_STORAGE_LISTSetLock34_wrapper),
                (LPVOID)cast_pointer_function((void(_STORAGE_LIST::*)(int, bool))&_STORAGE_LIST::SetLock)
            },
            _hook_record {
                (LPVOID)0x14010ea40L,
                (LPVOID *)&_STORAGE_LISTSetMemory36_user,
                (LPVOID *)&_STORAGE_LISTSetMemory36_next,
                (LPVOID)cast_pointer_function(_STORAGE_LISTSetMemory36_wrapper),
                (LPVOID)cast_pointer_function((void(_STORAGE_LIST::*)(struct _STORAGE_LIST::_db_con*, int, int, int))&_STORAGE_LIST::SetMemory)
            },
            _hook_record {
                (LPVOID)0x14010eb20L,
                (LPVOID *)&_STORAGE_LISTSetUseListNum38_user,
                (LPVOID *)&_STORAGE_LISTSetUseListNum38_next,
                (LPVOID)cast_pointer_function(_STORAGE_LISTSetUseListNum38_wrapper),
                (LPVOID)cast_pointer_function((bool(_STORAGE_LIST::*)(int))&_STORAGE_LIST::SetUseListNum)
            },
            _hook_record {
                (LPVOID)0x14010ef40L,
                (LPVOID *)&_STORAGE_LISTTransInCon40_user,
                (LPVOID *)&_STORAGE_LISTTransInCon40_next,
                (LPVOID)cast_pointer_function(_STORAGE_LISTTransInCon40_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(_STORAGE_LIST::*)(struct _STORAGE_LIST::_storage_con*))&_STORAGE_LIST::TransInCon)
            },
            _hook_record {
                (LPVOID)0x14010f4c0L,
                (LPVOID *)&_STORAGE_LISTUpdateCurDur42_user,
                (LPVOID *)&_STORAGE_LISTUpdateCurDur42_next,
                (LPVOID)cast_pointer_function(_STORAGE_LISTUpdateCurDur42_wrapper),
                (LPVOID)cast_pointer_function((bool(_STORAGE_LIST::*)(int, int))&_STORAGE_LIST::UpdateCurDur)
            },
            _hook_record {
                (LPVOID)0x14010ea10L,
                (LPVOID *)&_STORAGE_LISTctor__STORAGE_LIST44_user,
                (LPVOID *)&_STORAGE_LISTctor__STORAGE_LIST44_next,
                (LPVOID)cast_pointer_function(_STORAGE_LISTctor__STORAGE_LIST44_wrapper),
                (LPVOID)cast_pointer_function((void(_STORAGE_LIST::*)())&_STORAGE_LIST::ctor__STORAGE_LIST)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
