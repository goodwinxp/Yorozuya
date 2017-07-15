#include <LendItemSheetDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::LendItemSheetCheckTime2_ptr LendItemSheetCheckTime2_next(nullptr);
        Info::LendItemSheetCheckTime2_clbk LendItemSheetCheckTime2_user(nullptr);
        
        Info::LendItemSheetDeleteLink4_ptr LendItemSheetDeleteLink4_next(nullptr);
        Info::LendItemSheetDeleteLink4_clbk LendItemSheetDeleteLink4_user(nullptr);
        
        Info::LendItemSheetInitialzie6_ptr LendItemSheetInitialzie6_next(nullptr);
        Info::LendItemSheetInitialzie6_clbk LendItemSheetInitialzie6_user(nullptr);
        
        Info::LendItemSheetInsertLink8_ptr LendItemSheetInsertLink8_next(nullptr);
        Info::LendItemSheetInsertLink8_clbk LendItemSheetInsertLink8_user(nullptr);
        
        
        Info::LendItemSheetctor_LendItemSheet10_ptr LendItemSheetctor_LendItemSheet10_next(nullptr);
        Info::LendItemSheetctor_LendItemSheet10_clbk LendItemSheetctor_LendItemSheet10_user(nullptr);
        
        Info::LendItemSheetRelease12_ptr LendItemSheetRelease12_next(nullptr);
        Info::LendItemSheetRelease12_clbk LendItemSheetRelease12_user(nullptr);
        
        
        Info::LendItemSheetdtor_LendItemSheet16_ptr LendItemSheetdtor_LendItemSheet16_next(nullptr);
        Info::LendItemSheetdtor_LendItemSheet16_clbk LendItemSheetdtor_LendItemSheet16_user(nullptr);
        
        int LendItemSheetCheckTime2_wrapper(struct LendItemSheet* _this)
        {
           return LendItemSheetCheckTime2_user(_this, LendItemSheetCheckTime2_next);
        };
        bool LendItemSheetDeleteLink4_wrapper(struct LendItemSheet* _this, char byStorageCode, struct _STORAGE_LIST::_db_con* pItem)
        {
           return LendItemSheetDeleteLink4_user(_this, byStorageCode, pItem, LendItemSheetDeleteLink4_next);
        };
        bool LendItemSheetInitialzie6_wrapper(struct LendItemSheet* _this)
        {
           return LendItemSheetInitialzie6_user(_this, LendItemSheetInitialzie6_next);
        };
        bool LendItemSheetInsertLink8_wrapper(struct LendItemSheet* _this, char byStorageCode, struct _STORAGE_LIST::_db_con* pkItem)
        {
           return LendItemSheetInsertLink8_user(_this, byStorageCode, pkItem, LendItemSheetInsertLink8_next);
        };
        
        void LendItemSheetctor_LendItemSheet10_wrapper(struct LendItemSheet* _this, struct CPlayer* p)
        {
           LendItemSheetctor_LendItemSheet10_user(_this, p, LendItemSheetctor_LendItemSheet10_next);
        };
        void LendItemSheetRelease12_wrapper(struct LendItemSheet* _this)
        {
           LendItemSheetRelease12_user(_this, LendItemSheetRelease12_next);
        };
        
        void LendItemSheetdtor_LendItemSheet16_wrapper(struct LendItemSheet* _this)
        {
           LendItemSheetdtor_LendItemSheet16_user(_this, LendItemSheetdtor_LendItemSheet16_next);
        };
        
        ::std::array<hook_record, 7> LendItemSheet_functions = 
        {
            _hook_record {
                (LPVOID)0x14030d790L,
                (LPVOID *)&LendItemSheetCheckTime2_user,
                (LPVOID *)&LendItemSheetCheckTime2_next,
                (LPVOID)cast_pointer_function(LendItemSheetCheckTime2_wrapper),
                (LPVOID)cast_pointer_function((int(LendItemSheet::*)())&LendItemSheet::CheckTime)
            },
            _hook_record {
                (LPVOID)0x14030f080L,
                (LPVOID *)&LendItemSheetDeleteLink4_user,
                (LPVOID *)&LendItemSheetDeleteLink4_next,
                (LPVOID)cast_pointer_function(LendItemSheetDeleteLink4_wrapper),
                (LPVOID)cast_pointer_function((bool(LendItemSheet::*)(char, struct _STORAGE_LIST::_db_con*))&LendItemSheet::DeleteLink)
            },
            _hook_record {
                (LPVOID)0x14030ee40L,
                (LPVOID *)&LendItemSheetInitialzie6_user,
                (LPVOID *)&LendItemSheetInitialzie6_next,
                (LPVOID)cast_pointer_function(LendItemSheetInitialzie6_wrapper),
                (LPVOID)cast_pointer_function((bool(LendItemSheet::*)())&LendItemSheet::Initialzie)
            },
            _hook_record {
                (LPVOID)0x14030efd0L,
                (LPVOID *)&LendItemSheetInsertLink8_user,
                (LPVOID *)&LendItemSheetInsertLink8_next,
                (LPVOID)cast_pointer_function(LendItemSheetInsertLink8_wrapper),
                (LPVOID)cast_pointer_function((bool(LendItemSheet::*)(char, struct _STORAGE_LIST::_db_con*))&LendItemSheet::InsertLink)
            },
            _hook_record {
                (LPVOID)0x14030edd0L,
                (LPVOID *)&LendItemSheetctor_LendItemSheet10_user,
                (LPVOID *)&LendItemSheetctor_LendItemSheet10_next,
                (LPVOID)cast_pointer_function(LendItemSheetctor_LendItemSheet10_wrapper),
                (LPVOID)cast_pointer_function((void(LendItemSheet::*)(struct CPlayer*))&LendItemSheet::ctor_LendItemSheet)
            },
            _hook_record {
                (LPVOID)0x14030f160L,
                (LPVOID *)&LendItemSheetRelease12_user,
                (LPVOID *)&LendItemSheetRelease12_next,
                (LPVOID)cast_pointer_function(LendItemSheetRelease12_wrapper),
                (LPVOID)cast_pointer_function((void(LendItemSheet::*)())&LendItemSheet::Release)
            },
            _hook_record {
                (LPVOID)0x14030f220L,
                (LPVOID *)&LendItemSheetdtor_LendItemSheet16_user,
                (LPVOID *)&LendItemSheetdtor_LendItemSheet16_next,
                (LPVOID)cast_pointer_function(LendItemSheetdtor_LendItemSheet16_wrapper),
                (LPVOID)cast_pointer_function((void(LendItemSheet::*)())&LendItemSheet::dtor_LendItemSheet)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
