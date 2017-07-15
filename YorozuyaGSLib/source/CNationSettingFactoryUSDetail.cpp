#include <CNationSettingFactoryUSDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CNationSettingFactoryUSctor_CNationSettingFactoryUS2_ptr CNationSettingFactoryUSctor_CNationSettingFactoryUS2_next(nullptr);
        Info::CNationSettingFactoryUSctor_CNationSettingFactoryUS2_clbk CNationSettingFactoryUSctor_CNationSettingFactoryUS2_user(nullptr);
        
        Info::CNationSettingFactoryUSCreate4_ptr CNationSettingFactoryUSCreate4_next(nullptr);
        Info::CNationSettingFactoryUSCreate4_clbk CNationSettingFactoryUSCreate4_user(nullptr);
        
        
        void CNationSettingFactoryUSctor_CNationSettingFactoryUS2_wrapper(struct CNationSettingFactoryUS* _this)
        {
           CNationSettingFactoryUSctor_CNationSettingFactoryUS2_user(_this, CNationSettingFactoryUSctor_CNationSettingFactoryUS2_next);
        };
        struct CNationSettingData* CNationSettingFactoryUSCreate4_wrapper(struct CNationSettingFactoryUS* _this, int iNationCode, char* szNationCodeStr, bool bServiceMode)
        {
           return CNationSettingFactoryUSCreate4_user(_this, iNationCode, szNationCodeStr, bServiceMode, CNationSettingFactoryUSCreate4_next);
        };
        
        ::std::array<hook_record, 2> CNationSettingFactoryUS_functions = 
        {
            _hook_record {
                (LPVOID)0x140219820L,
                (LPVOID *)&CNationSettingFactoryUSctor_CNationSettingFactoryUS2_user,
                (LPVOID *)&CNationSettingFactoryUSctor_CNationSettingFactoryUS2_next,
                (LPVOID)cast_pointer_function(CNationSettingFactoryUSctor_CNationSettingFactoryUS2_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingFactoryUS::*)())&CNationSettingFactoryUS::ctor_CNationSettingFactoryUS)
            },
            _hook_record {
                (LPVOID)0x140231020L,
                (LPVOID *)&CNationSettingFactoryUSCreate4_user,
                (LPVOID *)&CNationSettingFactoryUSCreate4_next,
                (LPVOID)cast_pointer_function(CNationSettingFactoryUSCreate4_wrapper),
                (LPVOID)cast_pointer_function((struct CNationSettingData*(CNationSettingFactoryUS::*)(int, char*, bool))&CNationSettingFactoryUS::Create)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
