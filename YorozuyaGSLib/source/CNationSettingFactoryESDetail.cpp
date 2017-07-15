#include <CNationSettingFactoryESDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CNationSettingFactoryESctor_CNationSettingFactoryES2_ptr CNationSettingFactoryESctor_CNationSettingFactoryES2_next(nullptr);
        Info::CNationSettingFactoryESctor_CNationSettingFactoryES2_clbk CNationSettingFactoryESctor_CNationSettingFactoryES2_user(nullptr);
        
        Info::CNationSettingFactoryESCreate4_ptr CNationSettingFactoryESCreate4_next(nullptr);
        Info::CNationSettingFactoryESCreate4_clbk CNationSettingFactoryESCreate4_user(nullptr);
        
        
        void CNationSettingFactoryESctor_CNationSettingFactoryES2_wrapper(struct CNationSettingFactoryES* _this)
        {
           CNationSettingFactoryESctor_CNationSettingFactoryES2_user(_this, CNationSettingFactoryESctor_CNationSettingFactoryES2_next);
        };
        struct CNationSettingData* CNationSettingFactoryESCreate4_wrapper(struct CNationSettingFactoryES* _this, int iNationCode, char* szNationCodeStr, bool bServiceMode)
        {
           return CNationSettingFactoryESCreate4_user(_this, iNationCode, szNationCodeStr, bServiceMode, CNationSettingFactoryESCreate4_next);
        };
        
        ::std::array<hook_record, 2> CNationSettingFactoryES_functions = 
        {
            _hook_record {
                (LPVOID)0x140219880L,
                (LPVOID *)&CNationSettingFactoryESctor_CNationSettingFactoryES2_user,
                (LPVOID *)&CNationSettingFactoryESctor_CNationSettingFactoryES2_next,
                (LPVOID)cast_pointer_function(CNationSettingFactoryESctor_CNationSettingFactoryES2_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingFactoryES::*)())&CNationSettingFactoryES::ctor_CNationSettingFactoryES)
            },
            _hook_record {
                (LPVOID)0x140231c30L,
                (LPVOID *)&CNationSettingFactoryESCreate4_user,
                (LPVOID *)&CNationSettingFactoryESCreate4_next,
                (LPVOID)cast_pointer_function(CNationSettingFactoryESCreate4_wrapper),
                (LPVOID)cast_pointer_function((struct CNationSettingData*(CNationSettingFactoryES::*)(int, char*, bool))&CNationSettingFactoryES::Create)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
