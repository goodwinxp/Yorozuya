#include <_WEAPON_PARAMDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_WEAPON_PARAMFixUnit2_ptr _WEAPON_PARAMFixUnit2_next(nullptr);
        Info::_WEAPON_PARAMFixUnit2_clbk _WEAPON_PARAMFixUnit2_user(nullptr);
        
        Info::_WEAPON_PARAMFixWeapon4_ptr _WEAPON_PARAMFixWeapon4_next(nullptr);
        Info::_WEAPON_PARAMFixWeapon4_clbk _WEAPON_PARAMFixWeapon4_user(nullptr);
        
        Info::_WEAPON_PARAMGetAttackDelay6_ptr _WEAPON_PARAMGetAttackDelay6_next(nullptr);
        Info::_WEAPON_PARAMGetAttackDelay6_clbk _WEAPON_PARAMGetAttackDelay6_user(nullptr);
        
        Info::_WEAPON_PARAMGetAttackToolType8_ptr _WEAPON_PARAMGetAttackToolType8_next(nullptr);
        Info::_WEAPON_PARAMGetAttackToolType8_clbk _WEAPON_PARAMGetAttackToolType8_user(nullptr);
        
        Info::_WEAPON_PARAMGetWeaponTolType10_ptr _WEAPON_PARAMGetWeaponTolType10_next(nullptr);
        Info::_WEAPON_PARAMGetWeaponTolType10_clbk _WEAPON_PARAMGetWeaponTolType10_user(nullptr);
        
        Info::_WEAPON_PARAMInit12_ptr _WEAPON_PARAMInit12_next(nullptr);
        Info::_WEAPON_PARAMInit12_clbk _WEAPON_PARAMInit12_user(nullptr);
        
        Info::_WEAPON_PARAMSetStaticMember14_ptr _WEAPON_PARAMSetStaticMember14_next(nullptr);
        Info::_WEAPON_PARAMSetStaticMember14_clbk _WEAPON_PARAMSetStaticMember14_user(nullptr);
        
        void _WEAPON_PARAMFixUnit2_wrapper(struct _WEAPON_PARAM* _this, struct _UNIT_DB_BASE::_LIST* pUnit)
        {
           _WEAPON_PARAMFixUnit2_user(_this, pUnit, _WEAPON_PARAMFixUnit2_next);
        };
        void _WEAPON_PARAMFixWeapon4_wrapper(struct _WEAPON_PARAM* _this, struct _STORAGE_LIST::_db_con* pWeapon)
        {
           _WEAPON_PARAMFixWeapon4_user(_this, pWeapon, _WEAPON_PARAMFixWeapon4_next);
        };
        unsigned int _WEAPON_PARAMGetAttackDelay6_wrapper(struct _WEAPON_PARAM* _this, int nLv, int nAddDelay)
        {
           return _WEAPON_PARAMGetAttackDelay6_user(_this, nLv, nAddDelay, _WEAPON_PARAMGetAttackDelay6_next);
        };
        int _WEAPON_PARAMGetAttackToolType8_wrapper(struct _WEAPON_PARAM* _this)
        {
           return _WEAPON_PARAMGetAttackToolType8_user(_this, _WEAPON_PARAMGetAttackToolType8_next);
        };
        int _WEAPON_PARAMGetWeaponTolType10_wrapper(struct _WEAPON_PARAM* _this, struct _STORAGE_LIST::_db_con* pItem)
        {
           return _WEAPON_PARAMGetWeaponTolType10_user(_this, pItem, _WEAPON_PARAMGetWeaponTolType10_next);
        };
        void _WEAPON_PARAMInit12_wrapper(struct _WEAPON_PARAM* _this)
        {
           _WEAPON_PARAMInit12_user(_this, _WEAPON_PARAMInit12_next);
        };
        void _WEAPON_PARAMSetStaticMember14_wrapper(struct CRecordData* pWeaponData)
        {
           _WEAPON_PARAMSetStaticMember14_user(pWeaponData, _WEAPON_PARAMSetStaticMember14_next);
        };
        
        ::std::array<hook_record, 7> _WEAPON_PARAM_functions = 
        {
            _hook_record {
                (LPVOID)0x14007d2a0L,
                (LPVOID *)&_WEAPON_PARAMFixUnit2_user,
                (LPVOID *)&_WEAPON_PARAMFixUnit2_next,
                (LPVOID)cast_pointer_function(_WEAPON_PARAMFixUnit2_wrapper),
                (LPVOID)cast_pointer_function((void(_WEAPON_PARAM::*)(struct _UNIT_DB_BASE::_LIST*))&_WEAPON_PARAM::FixUnit)
            },
            _hook_record {
                (LPVOID)0x14007ba30L,
                (LPVOID *)&_WEAPON_PARAMFixWeapon4_user,
                (LPVOID *)&_WEAPON_PARAMFixWeapon4_next,
                (LPVOID)cast_pointer_function(_WEAPON_PARAMFixWeapon4_wrapper),
                (LPVOID)cast_pointer_function((void(_WEAPON_PARAM::*)(struct _STORAGE_LIST::_db_con*))&_WEAPON_PARAM::FixWeapon)
            },
            _hook_record {
                (LPVOID)0x14008e730L,
                (LPVOID *)&_WEAPON_PARAMGetAttackDelay6_user,
                (LPVOID *)&_WEAPON_PARAMGetAttackDelay6_next,
                (LPVOID)cast_pointer_function(_WEAPON_PARAMGetAttackDelay6_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(_WEAPON_PARAM::*)(int, int))&_WEAPON_PARAM::GetAttackDelay)
            },
            _hook_record {
                (LPVOID)0x1400349b0L,
                (LPVOID *)&_WEAPON_PARAMGetAttackToolType8_user,
                (LPVOID *)&_WEAPON_PARAMGetAttackToolType8_next,
                (LPVOID)cast_pointer_function(_WEAPON_PARAMGetAttackToolType8_wrapper),
                (LPVOID)cast_pointer_function((int(_WEAPON_PARAM::*)())&_WEAPON_PARAM::GetAttackToolType)
            },
            _hook_record {
                (LPVOID)0x14007bd10L,
                (LPVOID *)&_WEAPON_PARAMGetWeaponTolType10_user,
                (LPVOID *)&_WEAPON_PARAMGetWeaponTolType10_next,
                (LPVOID)cast_pointer_function(_WEAPON_PARAMGetWeaponTolType10_wrapper),
                (LPVOID)cast_pointer_function((int(_WEAPON_PARAM::*)(struct _STORAGE_LIST::_db_con*))&_WEAPON_PARAM::GetWeaponTolType)
            },
            _hook_record {
                (LPVOID)0x140077fb0L,
                (LPVOID *)&_WEAPON_PARAMInit12_user,
                (LPVOID *)&_WEAPON_PARAMInit12_next,
                (LPVOID)cast_pointer_function(_WEAPON_PARAMInit12_wrapper),
                (LPVOID)cast_pointer_function((void(_WEAPON_PARAM::*)())&_WEAPON_PARAM::Init)
            },
            _hook_record {
                (LPVOID)0x140204db0L,
                (LPVOID *)&_WEAPON_PARAMSetStaticMember14_user,
                (LPVOID *)&_WEAPON_PARAMSetStaticMember14_next,
                (LPVOID)cast_pointer_function(_WEAPON_PARAMSetStaticMember14_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct CRecordData*))&_WEAPON_PARAM::SetStaticMember)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
