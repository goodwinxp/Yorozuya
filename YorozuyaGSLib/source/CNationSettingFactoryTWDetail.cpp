#include <CNationSettingFactoryTWDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CNationSettingFactoryTWctor_CNationSettingFactoryTW2_ptr CNationSettingFactoryTWctor_CNationSettingFactoryTW2_next(nullptr);
        Info::CNationSettingFactoryTWctor_CNationSettingFactoryTW2_clbk CNationSettingFactoryTWctor_CNationSettingFactoryTW2_user(nullptr);
        
        Info::CNationSettingFactoryTWCreate4_ptr CNationSettingFactoryTWCreate4_next(nullptr);
        Info::CNationSettingFactoryTWCreate4_clbk CNationSettingFactoryTWCreate4_user(nullptr);
        
        
        void CNationSettingFactoryTWctor_CNationSettingFactoryTW2_wrapper(struct CNationSettingFactoryTW* _this)
        {
           CNationSettingFactoryTWctor_CNationSettingFactoryTW2_user(_this, CNationSettingFactoryTWctor_CNationSettingFactoryTW2_next);
        };
        struct CNationSettingData* CNationSettingFactoryTWCreate4_wrapper(struct CNationSettingFactoryTW* _this, int iNationCode, char* szNationCodeStr, bool bServiceMode)
        {
           return CNationSettingFactoryTWCreate4_user(_this, iNationCode, szNationCodeStr, bServiceMode, CNationSettingFactoryTWCreate4_next);
        };
        
        ::std::array<hook_record, 2> CNationSettingFactoryTW_functions = 
        {
            _hook_record {
                (LPVOID)0x140219760L,
                (LPVOID *)&CNationSettingFactoryTWctor_CNationSettingFactoryTW2_user,
                (LPVOID *)&CNationSettingFactoryTWctor_CNationSettingFactoryTW2_next,
                (LPVOID)cast_pointer_function(CNationSettingFactoryTWctor_CNationSettingFactoryTW2_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingFactoryTW::*)())&CNationSettingFactoryTW::ctor_CNationSettingFactoryTW)
            },
            _hook_record {
                (LPVOID)0x14022f700L,
                (LPVOID *)&CNationSettingFactoryTWCreate4_user,
                (LPVOID *)&CNationSettingFactoryTWCreate4_next,
                (LPVOID)cast_pointer_function(CNationSettingFactoryTWCreate4_wrapper),
                (LPVOID)cast_pointer_function((struct CNationSettingData*(CNationSettingFactoryTW::*)(int, char*, bool))&CNationSettingFactoryTW::Create)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
