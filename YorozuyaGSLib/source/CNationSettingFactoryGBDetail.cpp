#include <CNationSettingFactoryGBDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CNationSettingFactoryGBctor_CNationSettingFactoryGB2_ptr CNationSettingFactoryGBctor_CNationSettingFactoryGB2_next(nullptr);
        Info::CNationSettingFactoryGBctor_CNationSettingFactoryGB2_clbk CNationSettingFactoryGBctor_CNationSettingFactoryGB2_user(nullptr);
        
        Info::CNationSettingFactoryGBCreate4_ptr CNationSettingFactoryGBCreate4_next(nullptr);
        Info::CNationSettingFactoryGBCreate4_clbk CNationSettingFactoryGBCreate4_user(nullptr);
        
        
        void CNationSettingFactoryGBctor_CNationSettingFactoryGB2_wrapper(struct CNationSettingFactoryGB* _this)
        {
           CNationSettingFactoryGBctor_CNationSettingFactoryGB2_user(_this, CNationSettingFactoryGBctor_CNationSettingFactoryGB2_next);
        };
        struct CNationSettingData* CNationSettingFactoryGBCreate4_wrapper(struct CNationSettingFactoryGB* _this, int iNationCode, char* szNationCodeStr, bool bServiceMode)
        {
           return CNationSettingFactoryGBCreate4_user(_this, iNationCode, szNationCodeStr, bServiceMode, CNationSettingFactoryGBCreate4_next);
        };
        
        ::std::array<hook_record, 2> CNationSettingFactoryGB_functions = 
        {
            _hook_record {
                (LPVOID)0x140219520L,
                (LPVOID *)&CNationSettingFactoryGBctor_CNationSettingFactoryGB2_user,
                (LPVOID *)&CNationSettingFactoryGBctor_CNationSettingFactoryGB2_next,
                (LPVOID)cast_pointer_function(CNationSettingFactoryGBctor_CNationSettingFactoryGB2_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingFactoryGB::*)())&CNationSettingFactoryGB::ctor_CNationSettingFactoryGB)
            },
            _hook_record {
                (LPVOID)0x14022bc60L,
                (LPVOID *)&CNationSettingFactoryGBCreate4_user,
                (LPVOID *)&CNationSettingFactoryGBCreate4_next,
                (LPVOID)cast_pointer_function(CNationSettingFactoryGBCreate4_wrapper),
                (LPVOID)cast_pointer_function((struct CNationSettingData*(CNationSettingFactoryGB::*)(int, char*, bool))&CNationSettingFactoryGB::Create)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
