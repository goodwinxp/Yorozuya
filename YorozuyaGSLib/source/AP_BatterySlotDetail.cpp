#include <AP_BatterySlotDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::AP_BatterySlotctor_AP_BatterySlot2_ptr AP_BatterySlotctor_AP_BatterySlot2_next(nullptr);
        Info::AP_BatterySlotctor_AP_BatterySlot2_clbk AP_BatterySlotctor_AP_BatterySlot2_user(nullptr);
        
        Info::AP_BatterySlotclear6_ptr AP_BatterySlotclear6_next(nullptr);
        Info::AP_BatterySlotclear6_clbk AP_BatterySlotclear6_user(nullptr);
        
        Info::AP_BatterySlotextract8_ptr AP_BatterySlotextract8_next(nullptr);
        Info::AP_BatterySlotextract8_clbk AP_BatterySlotextract8_user(nullptr);
        
        Info::AP_BatterySlotget_battery10_ptr AP_BatterySlotget_battery10_next(nullptr);
        Info::AP_BatterySlotget_battery10_clbk AP_BatterySlotget_battery10_user(nullptr);
        
        Info::AP_BatterySlotget_dur12_ptr AP_BatterySlotget_dur12_next(nullptr);
        Info::AP_BatterySlotget_dur12_clbk AP_BatterySlotget_dur12_user(nullptr);
        
        Info::AP_BatterySlotinsert14_ptr AP_BatterySlotinsert14_next(nullptr);
        Info::AP_BatterySlotinsert14_clbk AP_BatterySlotinsert14_user(nullptr);
        
        Info::AP_BatterySlotis_private_item16_ptr AP_BatterySlotis_private_item16_next(nullptr);
        Info::AP_BatterySlotis_private_item16_clbk AP_BatterySlotis_private_item16_user(nullptr);
        
        Info::AP_BatterySlotsub_dur18_ptr AP_BatterySlotsub_dur18_next(nullptr);
        Info::AP_BatterySlotsub_dur18_clbk AP_BatterySlotsub_dur18_user(nullptr);
        
        
        Info::AP_BatterySlotdtor_AP_BatterySlot20_ptr AP_BatterySlotdtor_AP_BatterySlot20_next(nullptr);
        Info::AP_BatterySlotdtor_AP_BatterySlot20_clbk AP_BatterySlotdtor_AP_BatterySlot20_user(nullptr);
        
        
        void AP_BatterySlotctor_AP_BatterySlot2_wrapper(struct AP_BatterySlot* _this)
        {
           AP_BatterySlotctor_AP_BatterySlot2_user(_this, AP_BatterySlotctor_AP_BatterySlot2_next);
        };
        void AP_BatterySlotclear6_wrapper(struct AP_BatterySlot* _this)
        {
           AP_BatterySlotclear6_user(_this, AP_BatterySlotclear6_next);
        };
        bool AP_BatterySlotextract8_wrapper(struct AP_BatterySlot* _this, struct _STORAGE_LIST::_db_con* pout_item)
        {
           return AP_BatterySlotextract8_user(_this, pout_item, AP_BatterySlotextract8_next);
        };
        struct _STORAGE_LIST::_db_con* AP_BatterySlotget_battery10_wrapper(struct AP_BatterySlot* _this)
        {
           return AP_BatterySlotget_battery10_user(_this, AP_BatterySlotget_battery10_next);
        };
        unsigned int AP_BatterySlotget_dur12_wrapper(struct AP_BatterySlot* _this)
        {
           return AP_BatterySlotget_dur12_user(_this, AP_BatterySlotget_dur12_next);
        };
        int AP_BatterySlotinsert14_wrapper(struct AP_BatterySlot* _this, struct _STORAGE_LIST::_db_con* pItem)
        {
           return AP_BatterySlotinsert14_user(_this, pItem, AP_BatterySlotinsert14_next);
        };
        bool AP_BatterySlotis_private_item16_wrapper(struct AP_BatterySlot* _this, struct _STORAGE_LIST::_db_con* pItem)
        {
           return AP_BatterySlotis_private_item16_user(_this, pItem, AP_BatterySlotis_private_item16_next);
        };
        unsigned int AP_BatterySlotsub_dur18_wrapper(struct AP_BatterySlot* _this, unsigned int dwSub)
        {
           return AP_BatterySlotsub_dur18_user(_this, dwSub, AP_BatterySlotsub_dur18_next);
        };
        
        void AP_BatterySlotdtor_AP_BatterySlot20_wrapper(struct AP_BatterySlot* _this)
        {
           AP_BatterySlotdtor_AP_BatterySlot20_user(_this, AP_BatterySlotdtor_AP_BatterySlot20_next);
        };
        
        ::std::array<hook_record, 9> AP_BatterySlot_functions = 
        {
            _hook_record {
                (LPVOID)0x1402d9c10L,
                (LPVOID *)&AP_BatterySlotctor_AP_BatterySlot2_user,
                (LPVOID *)&AP_BatterySlotctor_AP_BatterySlot2_next,
                (LPVOID)cast_pointer_function(AP_BatterySlotctor_AP_BatterySlot2_wrapper),
                (LPVOID)cast_pointer_function((void(AP_BatterySlot::*)())&AP_BatterySlot::ctor_AP_BatterySlot)
            },
            _hook_record {
                (LPVOID)0x1402d9f80L,
                (LPVOID *)&AP_BatterySlotclear6_user,
                (LPVOID *)&AP_BatterySlotclear6_next,
                (LPVOID)cast_pointer_function(AP_BatterySlotclear6_wrapper),
                (LPVOID)cast_pointer_function((void(AP_BatterySlot::*)())&AP_BatterySlot::clear)
            },
            _hook_record {
                (LPVOID)0x1402d9e20L,
                (LPVOID *)&AP_BatterySlotextract8_user,
                (LPVOID *)&AP_BatterySlotextract8_next,
                (LPVOID)cast_pointer_function(AP_BatterySlotextract8_wrapper),
                (LPVOID)cast_pointer_function((bool(AP_BatterySlot::*)(struct _STORAGE_LIST::_db_con*))&AP_BatterySlot::extract)
            },
            _hook_record {
                (LPVOID)0x1402dde60L,
                (LPVOID *)&AP_BatterySlotget_battery10_user,
                (LPVOID *)&AP_BatterySlotget_battery10_next,
                (LPVOID)cast_pointer_function(AP_BatterySlotget_battery10_wrapper),
                (LPVOID)cast_pointer_function((struct _STORAGE_LIST::_db_con*(AP_BatterySlot::*)())&AP_BatterySlot::get_battery)
            },
            _hook_record {
                (LPVOID)0x1402d9f50L,
                (LPVOID *)&AP_BatterySlotget_dur12_user,
                (LPVOID *)&AP_BatterySlotget_dur12_next,
                (LPVOID)cast_pointer_function(AP_BatterySlotget_dur12_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(AP_BatterySlot::*)())&AP_BatterySlot::get_dur)
            },
            _hook_record {
                (LPVOID)0x1402d9d70L,
                (LPVOID *)&AP_BatterySlotinsert14_user,
                (LPVOID *)&AP_BatterySlotinsert14_next,
                (LPVOID)cast_pointer_function(AP_BatterySlotinsert14_wrapper),
                (LPVOID)cast_pointer_function((int(AP_BatterySlot::*)(struct _STORAGE_LIST::_db_con*))&AP_BatterySlot::insert)
            },
            _hook_record {
                (LPVOID)0x1402d9c70L,
                (LPVOID *)&AP_BatterySlotis_private_item16_user,
                (LPVOID *)&AP_BatterySlotis_private_item16_next,
                (LPVOID)cast_pointer_function(AP_BatterySlotis_private_item16_wrapper),
                (LPVOID)cast_pointer_function((bool(AP_BatterySlot::*)(struct _STORAGE_LIST::_db_con*))&AP_BatterySlot::is_private_item)
            },
            _hook_record {
                (LPVOID)0x1402d9ea0L,
                (LPVOID *)&AP_BatterySlotsub_dur18_user,
                (LPVOID *)&AP_BatterySlotsub_dur18_next,
                (LPVOID)cast_pointer_function(AP_BatterySlotsub_dur18_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(AP_BatterySlot::*)(unsigned int))&AP_BatterySlot::sub_dur)
            },
            _hook_record {
                (LPVOID)0x1402d9c60L,
                (LPVOID *)&AP_BatterySlotdtor_AP_BatterySlot20_user,
                (LPVOID *)&AP_BatterySlotdtor_AP_BatterySlot20_next,
                (LPVOID)cast_pointer_function(AP_BatterySlotdtor_AP_BatterySlot20_wrapper),
                (LPVOID)cast_pointer_function((void(AP_BatterySlot::*)())&AP_BatterySlot::dtor_AP_BatterySlot)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
