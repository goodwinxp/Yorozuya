#include <_TOWER_PARAMDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_TOWER_PARAMInit2_ptr _TOWER_PARAMInit2_next(nullptr);
        Info::_TOWER_PARAMInit2_clbk _TOWER_PARAMInit2_user(nullptr);
        
        Info::_TOWER_PARAMIsEmpty4_ptr _TOWER_PARAMIsEmpty4_next(nullptr);
        Info::_TOWER_PARAMIsEmpty4_clbk _TOWER_PARAMIsEmpty4_user(nullptr);
        
        Info::_TOWER_PARAMNotifyOwnerAttackInform6_ptr _TOWER_PARAMNotifyOwnerAttackInform6_next(nullptr);
        Info::_TOWER_PARAMNotifyOwnerAttackInform6_clbk _TOWER_PARAMNotifyOwnerAttackInform6_user(nullptr);
        
        Info::_TOWER_PARAMPushList8_ptr _TOWER_PARAMPushList8_next(nullptr);
        Info::_TOWER_PARAMPushList8_clbk _TOWER_PARAMPushList8_user(nullptr);
        
        void _TOWER_PARAMInit2_wrapper(struct _TOWER_PARAM* _this)
        {
           _TOWER_PARAMInit2_user(_this, _TOWER_PARAMInit2_next);
        };
        bool _TOWER_PARAMIsEmpty4_wrapper(struct _TOWER_PARAM* _this)
        {
           return _TOWER_PARAMIsEmpty4_user(_this, _TOWER_PARAMIsEmpty4_next);
        };
        void _TOWER_PARAMNotifyOwnerAttackInform6_wrapper(struct _TOWER_PARAM* _this, struct CCharacter* pDst)
        {
           _TOWER_PARAMNotifyOwnerAttackInform6_user(_this, pDst, _TOWER_PARAMNotifyOwnerAttackInform6_next);
        };
        bool _TOWER_PARAMPushList8_wrapper(struct _TOWER_PARAM* _this, struct _STORAGE_LIST::_db_con* pTowerItem, struct CGuardTower* pTowerObj)
        {
           return _TOWER_PARAMPushList8_user(_this, pTowerItem, pTowerObj, _TOWER_PARAMPushList8_next);
        };
        
        ::std::array<hook_record, 4> _TOWER_PARAM_functions = 
        {
            _hook_record {
                (LPVOID)0x140078110L,
                (LPVOID *)&_TOWER_PARAMInit2_user,
                (LPVOID *)&_TOWER_PARAMInit2_next,
                (LPVOID)cast_pointer_function(_TOWER_PARAMInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_TOWER_PARAM::*)())&_TOWER_PARAM::Init)
            },
            _hook_record {
                (LPVOID)0x1400a69a0L,
                (LPVOID *)&_TOWER_PARAMIsEmpty4_user,
                (LPVOID *)&_TOWER_PARAMIsEmpty4_next,
                (LPVOID)cast_pointer_function(_TOWER_PARAMIsEmpty4_wrapper),
                (LPVOID)cast_pointer_function((bool(_TOWER_PARAM::*)())&_TOWER_PARAM::IsEmpty)
            },
            _hook_record {
                (LPVOID)0x14010e960L,
                (LPVOID *)&_TOWER_PARAMNotifyOwnerAttackInform6_user,
                (LPVOID *)&_TOWER_PARAMNotifyOwnerAttackInform6_next,
                (LPVOID)cast_pointer_function(_TOWER_PARAMNotifyOwnerAttackInform6_wrapper),
                (LPVOID)cast_pointer_function((void(_TOWER_PARAM::*)(struct CCharacter*))&_TOWER_PARAM::NotifyOwnerAttackInform)
            },
            _hook_record {
                (LPVOID)0x140079110L,
                (LPVOID *)&_TOWER_PARAMPushList8_user,
                (LPVOID *)&_TOWER_PARAMPushList8_next,
                (LPVOID)cast_pointer_function(_TOWER_PARAMPushList8_wrapper),
                (LPVOID)cast_pointer_function((bool(_TOWER_PARAM::*)(struct _STORAGE_LIST::_db_con*, struct CGuardTower*))&_TOWER_PARAM::PushList)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
