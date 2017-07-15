#include <CNationSettingFactoryKRDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CNationSettingFactoryKRctor_CNationSettingFactoryKR2_ptr CNationSettingFactoryKRctor_CNationSettingFactoryKR2_next(nullptr);
        Info::CNationSettingFactoryKRctor_CNationSettingFactoryKR2_clbk CNationSettingFactoryKRctor_CNationSettingFactoryKR2_user(nullptr);
        
        Info::CNationSettingFactoryKRCreate4_ptr CNationSettingFactoryKRCreate4_next(nullptr);
        Info::CNationSettingFactoryKRCreate4_clbk CNationSettingFactoryKRCreate4_user(nullptr);
        
        
        void CNationSettingFactoryKRctor_CNationSettingFactoryKR2_wrapper(struct CNationSettingFactoryKR* _this)
        {
           CNationSettingFactoryKRctor_CNationSettingFactoryKR2_user(_this, CNationSettingFactoryKRctor_CNationSettingFactoryKR2_next);
        };
        struct CNationSettingData* CNationSettingFactoryKRCreate4_wrapper(struct CNationSettingFactoryKR* _this, int iNationCode, char* szNationCodeStr, bool bServiceMode)
        {
           return CNationSettingFactoryKRCreate4_user(_this, iNationCode, szNationCodeStr, bServiceMode, CNationSettingFactoryKRCreate4_next);
        };
        
        ::std::array<hook_record, 2> CNationSettingFactoryKR_functions = 
        {
            _hook_record {
                (LPVOID)0x140219480L,
                (LPVOID *)&CNationSettingFactoryKRctor_CNationSettingFactoryKR2_user,
                (LPVOID *)&CNationSettingFactoryKRctor_CNationSettingFactoryKR2_next,
                (LPVOID)cast_pointer_function(CNationSettingFactoryKRctor_CNationSettingFactoryKR2_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingFactoryKR::*)())&CNationSettingFactoryKR::ctor_CNationSettingFactoryKR)
            },
            _hook_record {
                (LPVOID)0x14022ae30L,
                (LPVOID *)&CNationSettingFactoryKRCreate4_user,
                (LPVOID *)&CNationSettingFactoryKRCreate4_next,
                (LPVOID)cast_pointer_function(CNationSettingFactoryKRCreate4_wrapper),
                (LPVOID)cast_pointer_function((struct CNationSettingData*(CNationSettingFactoryKR::*)(int, char*, bool))&CNationSettingFactoryKR::Create)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
