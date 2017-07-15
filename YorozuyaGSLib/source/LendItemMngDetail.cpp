#include <LendItemMngDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::LendItemMngDeleteLink2_ptr LendItemMngDeleteLink2_next(nullptr);
        Info::LendItemMngDeleteLink2_clbk LendItemMngDeleteLink2_user(nullptr);
        
        Info::LendItemMngGetSheet4_ptr LendItemMngGetSheet4_next(nullptr);
        Info::LendItemMngGetSheet4_clbk LendItemMngGetSheet4_user(nullptr);
        
        Info::LendItemMngInitialize6_ptr LendItemMngInitialize6_next(nullptr);
        Info::LendItemMngInitialize6_clbk LendItemMngInitialize6_user(nullptr);
        
        Info::LendItemMngInsertLink8_ptr LendItemMngInsertLink8_next(nullptr);
        Info::LendItemMngInsertLink8_clbk LendItemMngInsertLink8_user(nullptr);
        
        Info::LendItemMngInstance10_ptr LendItemMngInstance10_next(nullptr);
        Info::LendItemMngInstance10_clbk LendItemMngInstance10_user(nullptr);
        
        
        Info::LendItemMngctor_LendItemMng12_ptr LendItemMngctor_LendItemMng12_next(nullptr);
        Info::LendItemMngctor_LendItemMng12_clbk LendItemMngctor_LendItemMng12_user(nullptr);
        
        Info::LendItemMngRelease14_ptr LendItemMngRelease14_next(nullptr);
        Info::LendItemMngRelease14_clbk LendItemMngRelease14_user(nullptr);
        
        Info::LendItemMngReleaseAll16_ptr LendItemMngReleaseAll16_next(nullptr);
        Info::LendItemMngReleaseAll16_clbk LendItemMngReleaseAll16_user(nullptr);
        
        
        Info::LendItemMngdtor_LendItemMng20_ptr LendItemMngdtor_LendItemMng20_next(nullptr);
        Info::LendItemMngdtor_LendItemMng20_clbk LendItemMngdtor_LendItemMng20_user(nullptr);
        
        bool LendItemMngDeleteLink2_wrapper(struct LendItemMng* _this, uint16_t wIdx, char byStorageCode, struct _STORAGE_LIST::_db_con* pkItem)
        {
           return LendItemMngDeleteLink2_user(_this, wIdx, byStorageCode, pkItem, LendItemMngDeleteLink2_next);
        };
        struct LendItemSheet* LendItemMngGetSheet4_wrapper(struct LendItemMng* _this, uint16_t wIdx)
        {
           return LendItemMngGetSheet4_user(_this, wIdx, LendItemMngGetSheet4_next);
        };
        bool LendItemMngInitialize6_wrapper(struct LendItemMng* _this)
        {
           return LendItemMngInitialize6_user(_this, LendItemMngInitialize6_next);
        };
        bool LendItemMngInsertLink8_wrapper(struct LendItemMng* _this, uint16_t wIdx, char byStorageCode, struct _STORAGE_LIST::_db_con* pkItem)
        {
           return LendItemMngInsertLink8_user(_this, wIdx, byStorageCode, pkItem, LendItemMngInsertLink8_next);
        };
        struct LendItemMng* LendItemMngInstance10_wrapper()
        {
           return LendItemMngInstance10_user(LendItemMngInstance10_next);
        };
        
        void LendItemMngctor_LendItemMng12_wrapper(struct LendItemMng* _this)
        {
           LendItemMngctor_LendItemMng12_user(_this, LendItemMngctor_LendItemMng12_next);
        };
        void LendItemMngRelease14_wrapper(struct LendItemMng* _this, uint16_t wIdx)
        {
           LendItemMngRelease14_user(_this, wIdx, LendItemMngRelease14_next);
        };
        void LendItemMngReleaseAll16_wrapper(struct LendItemMng* _this)
        {
           LendItemMngReleaseAll16_user(_this, LendItemMngReleaseAll16_next);
        };
        
        void LendItemMngdtor_LendItemMng20_wrapper(struct LendItemMng* _this)
        {
           LendItemMngdtor_LendItemMng20_user(_this, LendItemMngdtor_LendItemMng20_next);
        };
        
        ::std::array<hook_record, 9> LendItemMng_functions = 
        {
            _hook_record {
                (LPVOID)0x14030dd80L,
                (LPVOID *)&LendItemMngDeleteLink2_user,
                (LPVOID *)&LendItemMngDeleteLink2_next,
                (LPVOID)cast_pointer_function(LendItemMngDeleteLink2_wrapper),
                (LPVOID)cast_pointer_function((bool(LendItemMng::*)(uint16_t, char, struct _STORAGE_LIST::_db_con*))&LendItemMng::DeleteLink)
            },
            _hook_record {
                (LPVOID)0x14007b9c0L,
                (LPVOID *)&LendItemMngGetSheet4_user,
                (LPVOID *)&LendItemMngGetSheet4_next,
                (LPVOID)cast_pointer_function(LendItemMngGetSheet4_wrapper),
                (LPVOID)cast_pointer_function((struct LendItemSheet*(LendItemMng::*)(uint16_t))&LendItemMng::GetSheet)
            },
            _hook_record {
                (LPVOID)0x14030da20L,
                (LPVOID *)&LendItemMngInitialize6_user,
                (LPVOID *)&LendItemMngInitialize6_next,
                (LPVOID)cast_pointer_function(LendItemMngInitialize6_wrapper),
                (LPVOID)cast_pointer_function((bool(LendItemMng::*)())&LendItemMng::Initialize)
            },
            _hook_record {
                (LPVOID)0x14030dc70L,
                (LPVOID *)&LendItemMngInsertLink8_user,
                (LPVOID *)&LendItemMngInsertLink8_next,
                (LPVOID)cast_pointer_function(LendItemMngInsertLink8_wrapper),
                (LPVOID)cast_pointer_function((bool(LendItemMng::*)(uint16_t, char, struct _STORAGE_LIST::_db_con*))&LendItemMng::InsertLink)
            },
            _hook_record {
                (LPVOID)0x140074ec0L,
                (LPVOID *)&LendItemMngInstance10_user,
                (LPVOID *)&LendItemMngInstance10_next,
                (LPVOID)cast_pointer_function(LendItemMngInstance10_wrapper),
                (LPVOID)cast_pointer_function((struct LendItemMng*(*)())&LendItemMng::Instance)
            },
            _hook_record {
                (LPVOID)0x140074fa0L,
                (LPVOID *)&LendItemMngctor_LendItemMng12_user,
                (LPVOID *)&LendItemMngctor_LendItemMng12_next,
                (LPVOID)cast_pointer_function(LendItemMngctor_LendItemMng12_wrapper),
                (LPVOID)cast_pointer_function((void(LendItemMng::*)())&LendItemMng::ctor_LendItemMng)
            },
            _hook_record {
                (LPVOID)0x14030def0L,
                (LPVOID *)&LendItemMngRelease14_user,
                (LPVOID *)&LendItemMngRelease14_next,
                (LPVOID)cast_pointer_function(LendItemMngRelease14_wrapper),
                (LPVOID)cast_pointer_function((void(LendItemMng::*)(uint16_t))&LendItemMng::Release)
            },
            _hook_record {
                (LPVOID)0x14030df50L,
                (LPVOID *)&LendItemMngReleaseAll16_user,
                (LPVOID *)&LendItemMngReleaseAll16_next,
                (LPVOID)cast_pointer_function(LendItemMngReleaseAll16_wrapper),
                (LPVOID)cast_pointer_function((void(LendItemMng::*)())&LendItemMng::ReleaseAll)
            },
            _hook_record {
                (LPVOID)0x14030f390L,
                (LPVOID *)&LendItemMngdtor_LendItemMng20_user,
                (LPVOID *)&LendItemMngdtor_LendItemMng20_next,
                (LPVOID)cast_pointer_function(LendItemMngdtor_LendItemMng20_wrapper),
                (LPVOID)cast_pointer_function((void(LendItemMng::*)())&LendItemMng::dtor_LendItemMng)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
