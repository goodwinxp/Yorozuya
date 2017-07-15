#include <_BUDDY_LISTDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_BUDDY_LISTGetBuddyNum2_ptr _BUDDY_LISTGetBuddyNum2_next(nullptr);
        Info::_BUDDY_LISTGetBuddyNum2_clbk _BUDDY_LISTGetBuddyNum2_user(nullptr);
        
        Info::_BUDDY_LISTGetEmptyData4_ptr _BUDDY_LISTGetEmptyData4_next(nullptr);
        Info::_BUDDY_LISTGetEmptyData4_clbk _BUDDY_LISTGetEmptyData4_user(nullptr);
        
        Info::_BUDDY_LISTInit6_ptr _BUDDY_LISTInit6_next(nullptr);
        Info::_BUDDY_LISTInit6_clbk _BUDDY_LISTInit6_user(nullptr);
        
        Info::_BUDDY_LISTIsBuddy8_ptr _BUDDY_LISTIsBuddy8_next(nullptr);
        Info::_BUDDY_LISTIsBuddy8_clbk _BUDDY_LISTIsBuddy8_user(nullptr);
        
        Info::_BUDDY_LISTIsPushLastApply10_ptr _BUDDY_LISTIsPushLastApply10_next(nullptr);
        Info::_BUDDY_LISTIsPushLastApply10_clbk _BUDDY_LISTIsPushLastApply10_user(nullptr);
        
        Info::_BUDDY_LISTPopBuddy12_ptr _BUDDY_LISTPopBuddy12_next(nullptr);
        Info::_BUDDY_LISTPopBuddy12_clbk _BUDDY_LISTPopBuddy12_user(nullptr);
        
        Info::_BUDDY_LISTPopLastApplyTemp14_ptr _BUDDY_LISTPopLastApplyTemp14_next(nullptr);
        Info::_BUDDY_LISTPopLastApplyTemp14_clbk _BUDDY_LISTPopLastApplyTemp14_user(nullptr);
        
        Info::_BUDDY_LISTPushBuddy16_ptr _BUDDY_LISTPushBuddy16_next(nullptr);
        Info::_BUDDY_LISTPushBuddy16_clbk _BUDDY_LISTPushBuddy16_user(nullptr);
        
        Info::_BUDDY_LISTPushLastApplyTemp18_ptr _BUDDY_LISTPushLastApplyTemp18_next(nullptr);
        Info::_BUDDY_LISTPushLastApplyTemp18_clbk _BUDDY_LISTPushLastApplyTemp18_user(nullptr);
        
        Info::_BUDDY_LISTSearchBuddyLogin20_ptr _BUDDY_LISTSearchBuddyLogin20_next(nullptr);
        Info::_BUDDY_LISTSearchBuddyLogin20_clbk _BUDDY_LISTSearchBuddyLogin20_user(nullptr);
        
        Info::_BUDDY_LISTSearchBuddyLogoff22_ptr _BUDDY_LISTSearchBuddyLogoff22_next(nullptr);
        Info::_BUDDY_LISTSearchBuddyLogoff22_clbk _BUDDY_LISTSearchBuddyLogoff22_user(nullptr);
        
        
        Info::_BUDDY_LISTctor__BUDDY_LIST24_ptr _BUDDY_LISTctor__BUDDY_LIST24_next(nullptr);
        Info::_BUDDY_LISTctor__BUDDY_LIST24_clbk _BUDDY_LISTctor__BUDDY_LIST24_user(nullptr);
        
        
        Info::_BUDDY_LISTdtor__BUDDY_LIST26_ptr _BUDDY_LISTdtor__BUDDY_LIST26_next(nullptr);
        Info::_BUDDY_LISTdtor__BUDDY_LIST26_clbk _BUDDY_LISTdtor__BUDDY_LIST26_user(nullptr);
        
        int _BUDDY_LISTGetBuddyNum2_wrapper(struct _BUDDY_LIST* _this)
        {
           return _BUDDY_LISTGetBuddyNum2_user(_this, _BUDDY_LISTGetBuddyNum2_next);
        };
        struct _BUDDY_LIST::__list* _BUDDY_LISTGetEmptyData4_wrapper(struct _BUDDY_LIST* _this)
        {
           return _BUDDY_LISTGetEmptyData4_user(_this, _BUDDY_LISTGetEmptyData4_next);
        };
        void _BUDDY_LISTInit6_wrapper(struct _BUDDY_LIST* _this)
        {
           _BUDDY_LISTInit6_user(_this, _BUDDY_LISTInit6_next);
        };
        bool _BUDDY_LISTIsBuddy8_wrapper(struct _BUDDY_LIST* _this, unsigned int dwSerial)
        {
           return _BUDDY_LISTIsBuddy8_user(_this, dwSerial, _BUDDY_LISTIsBuddy8_next);
        };
        bool _BUDDY_LISTIsPushLastApply10_wrapper(struct _BUDDY_LIST* _this, unsigned int dwDstSerial)
        {
           return _BUDDY_LISTIsPushLastApply10_user(_this, dwDstSerial, _BUDDY_LISTIsPushLastApply10_next);
        };
        int _BUDDY_LISTPopBuddy12_wrapper(struct _BUDDY_LIST* _this, unsigned int dwSerial, struct CPlayer** ppPoper)
        {
           return _BUDDY_LISTPopBuddy12_user(_this, dwSerial, ppPoper, _BUDDY_LISTPopBuddy12_next);
        };
        void _BUDDY_LISTPopLastApplyTemp14_wrapper(struct _BUDDY_LIST* _this, unsigned int dwDstSerial)
        {
           _BUDDY_LISTPopLastApplyTemp14_user(_this, dwDstSerial, _BUDDY_LISTPopLastApplyTemp14_next);
        };
        int _BUDDY_LISTPushBuddy16_wrapper(struct _BUDDY_LIST* _this, unsigned int dwSerial, char* pwszName, struct CPlayer* pPtr)
        {
           return _BUDDY_LISTPushBuddy16_user(_this, dwSerial, pwszName, pPtr, _BUDDY_LISTPushBuddy16_next);
        };
        void _BUDDY_LISTPushLastApplyTemp18_wrapper(struct _BUDDY_LIST* _this, unsigned int dwDstSerial)
        {
           _BUDDY_LISTPushLastApplyTemp18_user(_this, dwDstSerial, _BUDDY_LISTPushLastApplyTemp18_next);
        };
        bool _BUDDY_LISTSearchBuddyLogin20_wrapper(struct _BUDDY_LIST* _this, struct CPlayer* pLoger, unsigned int dwSerial, char* pwszName)
        {
           return _BUDDY_LISTSearchBuddyLogin20_user(_this, pLoger, dwSerial, pwszName, _BUDDY_LISTSearchBuddyLogin20_next);
        };
        bool _BUDDY_LISTSearchBuddyLogoff22_wrapper(struct _BUDDY_LIST* _this, unsigned int dwSerial)
        {
           return _BUDDY_LISTSearchBuddyLogoff22_user(_this, dwSerial, _BUDDY_LISTSearchBuddyLogoff22_next);
        };
        
        void _BUDDY_LISTctor__BUDDY_LIST24_wrapper(struct _BUDDY_LIST* _this)
        {
           _BUDDY_LISTctor__BUDDY_LIST24_user(_this, _BUDDY_LISTctor__BUDDY_LIST24_next);
        };
        
        void _BUDDY_LISTdtor__BUDDY_LIST26_wrapper(struct _BUDDY_LIST* _this)
        {
           _BUDDY_LISTdtor__BUDDY_LIST26_user(_this, _BUDDY_LISTdtor__BUDDY_LIST26_next);
        };
        
        ::std::array<hook_record, 13> _BUDDY_LIST_functions = 
        {
            _hook_record {
                (LPVOID)0x140090a50L,
                (LPVOID *)&_BUDDY_LISTGetBuddyNum2_user,
                (LPVOID *)&_BUDDY_LISTGetBuddyNum2_next,
                (LPVOID)cast_pointer_function(_BUDDY_LISTGetBuddyNum2_wrapper),
                (LPVOID)cast_pointer_function((int(_BUDDY_LIST::*)())&_BUDDY_LIST::GetBuddyNum)
            },
            _hook_record {
                (LPVOID)0x140090340L,
                (LPVOID *)&_BUDDY_LISTGetEmptyData4_user,
                (LPVOID *)&_BUDDY_LISTGetEmptyData4_next,
                (LPVOID)cast_pointer_function(_BUDDY_LISTGetEmptyData4_wrapper),
                (LPVOID)cast_pointer_function((struct _BUDDY_LIST::__list*(_BUDDY_LIST::*)())&_BUDDY_LIST::GetEmptyData)
            },
            _hook_record {
                (LPVOID)0x140073660L,
                (LPVOID *)&_BUDDY_LISTInit6_user,
                (LPVOID *)&_BUDDY_LISTInit6_next,
                (LPVOID)cast_pointer_function(_BUDDY_LISTInit6_wrapper),
                (LPVOID)cast_pointer_function((void(_BUDDY_LIST::*)())&_BUDDY_LIST::Init)
            },
            _hook_record {
                (LPVOID)0x1400794b0L,
                (LPVOID *)&_BUDDY_LISTIsBuddy8_user,
                (LPVOID *)&_BUDDY_LISTIsBuddy8_next,
                (LPVOID)cast_pointer_function(_BUDDY_LISTIsBuddy8_wrapper),
                (LPVOID)cast_pointer_function((bool(_BUDDY_LIST::*)(unsigned int))&_BUDDY_LIST::IsBuddy)
            },
            _hook_record {
                (LPVOID)0x140090670L,
                (LPVOID *)&_BUDDY_LISTIsPushLastApply10_user,
                (LPVOID *)&_BUDDY_LISTIsPushLastApply10_next,
                (LPVOID)cast_pointer_function(_BUDDY_LISTIsPushLastApply10_wrapper),
                (LPVOID)cast_pointer_function((bool(_BUDDY_LIST::*)(unsigned int))&_BUDDY_LIST::IsPushLastApply)
            },
            _hook_record {
                (LPVOID)0x1400908e0L,
                (LPVOID *)&_BUDDY_LISTPopBuddy12_user,
                (LPVOID *)&_BUDDY_LISTPopBuddy12_next,
                (LPVOID)cast_pointer_function(_BUDDY_LISTPopBuddy12_wrapper),
                (LPVOID)cast_pointer_function((int(_BUDDY_LIST::*)(unsigned int, struct CPlayer**))&_BUDDY_LIST::PopBuddy)
            },
            _hook_record {
                (LPVOID)0x1400906d0L,
                (LPVOID *)&_BUDDY_LISTPopLastApplyTemp14_user,
                (LPVOID *)&_BUDDY_LISTPopLastApplyTemp14_next,
                (LPVOID)cast_pointer_function(_BUDDY_LISTPopLastApplyTemp14_wrapper),
                (LPVOID)cast_pointer_function((void(_BUDDY_LIST::*)(unsigned int))&_BUDDY_LIST::PopLastApplyTemp)
            },
            _hook_record {
                (LPVOID)0x1400904c0L,
                (LPVOID *)&_BUDDY_LISTPushBuddy16_user,
                (LPVOID *)&_BUDDY_LISTPushBuddy16_next,
                (LPVOID)cast_pointer_function(_BUDDY_LISTPushBuddy16_wrapper),
                (LPVOID)cast_pointer_function((int(_BUDDY_LIST::*)(unsigned int, char*, struct CPlayer*))&_BUDDY_LIST::PushBuddy)
            },
            _hook_record {
                (LPVOID)0x1400903f0L,
                (LPVOID *)&_BUDDY_LISTPushLastApplyTemp18_user,
                (LPVOID *)&_BUDDY_LISTPushLastApplyTemp18_next,
                (LPVOID)cast_pointer_function(_BUDDY_LISTPushLastApplyTemp18_wrapper),
                (LPVOID)cast_pointer_function((void(_BUDDY_LIST::*)(unsigned int))&_BUDDY_LIST::PushLastApplyTemp)
            },
            _hook_record {
                (LPVOID)0x1400793a0L,
                (LPVOID *)&_BUDDY_LISTSearchBuddyLogin20_user,
                (LPVOID *)&_BUDDY_LISTSearchBuddyLogin20_next,
                (LPVOID)cast_pointer_function(_BUDDY_LISTSearchBuddyLogin20_wrapper),
                (LPVOID)cast_pointer_function((bool(_BUDDY_LIST::*)(struct CPlayer*, unsigned int, char*))&_BUDDY_LIST::SearchBuddyLogin)
            },
            _hook_record {
                (LPVOID)0x140079f40L,
                (LPVOID *)&_BUDDY_LISTSearchBuddyLogoff22_user,
                (LPVOID *)&_BUDDY_LISTSearchBuddyLogoff22_next,
                (LPVOID)cast_pointer_function(_BUDDY_LISTSearchBuddyLogoff22_wrapper),
                (LPVOID)cast_pointer_function((bool(_BUDDY_LIST::*)(unsigned int))&_BUDDY_LIST::SearchBuddyLogoff)
            },
            _hook_record {
                (LPVOID)0x140072fb0L,
                (LPVOID *)&_BUDDY_LISTctor__BUDDY_LIST24_user,
                (LPVOID *)&_BUDDY_LISTctor__BUDDY_LIST24_next,
                (LPVOID)cast_pointer_function(_BUDDY_LISTctor__BUDDY_LIST24_wrapper),
                (LPVOID)cast_pointer_function((void(_BUDDY_LIST::*)())&_BUDDY_LIST::ctor__BUDDY_LIST)
            },
            _hook_record {
                (LPVOID)0x140074700L,
                (LPVOID *)&_BUDDY_LISTdtor__BUDDY_LIST26_user,
                (LPVOID *)&_BUDDY_LISTdtor__BUDDY_LIST26_next,
                (LPVOID)cast_pointer_function(_BUDDY_LISTdtor__BUDDY_LIST26_wrapper),
                (LPVOID)cast_pointer_function((void(_BUDDY_LIST::*)())&_BUDDY_LIST::dtor__BUDDY_LIST)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
