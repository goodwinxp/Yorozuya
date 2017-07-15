#include <CNationSettingFactoryBRDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CNationSettingFactoryBRctor_CNationSettingFactoryBR2_ptr CNationSettingFactoryBRctor_CNationSettingFactoryBR2_next(nullptr);
        Info::CNationSettingFactoryBRctor_CNationSettingFactoryBR2_clbk CNationSettingFactoryBRctor_CNationSettingFactoryBR2_user(nullptr);
        
        Info::CNationSettingFactoryBRCreate4_ptr CNationSettingFactoryBRCreate4_next(nullptr);
        Info::CNationSettingFactoryBRCreate4_clbk CNationSettingFactoryBRCreate4_user(nullptr);
        
        
        void CNationSettingFactoryBRctor_CNationSettingFactoryBR2_wrapper(struct CNationSettingFactoryBR* _this)
        {
           CNationSettingFactoryBRctor_CNationSettingFactoryBR2_user(_this, CNationSettingFactoryBRctor_CNationSettingFactoryBR2_next);
        };
        struct CNationSettingData* CNationSettingFactoryBRCreate4_wrapper(struct CNationSettingFactoryBR* _this, int iNationCode, char* szNationCodeStr, bool bServiceMode)
        {
           return CNationSettingFactoryBRCreate4_user(_this, iNationCode, szNationCodeStr, bServiceMode, CNationSettingFactoryBRCreate4_next);
        };
        
        ::std::array<hook_record, 2> CNationSettingFactoryBR_functions = 
        {
            _hook_record {
                (LPVOID)0x140219700L,
                (LPVOID *)&CNationSettingFactoryBRctor_CNationSettingFactoryBR2_user,
                (LPVOID *)&CNationSettingFactoryBRctor_CNationSettingFactoryBR2_next,
                (LPVOID)cast_pointer_function(CNationSettingFactoryBRctor_CNationSettingFactoryBR2_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingFactoryBR::*)())&CNationSettingFactoryBR::ctor_CNationSettingFactoryBR)
            },
            _hook_record {
                (LPVOID)0x14022f4f0L,
                (LPVOID *)&CNationSettingFactoryBRCreate4_user,
                (LPVOID *)&CNationSettingFactoryBRCreate4_next,
                (LPVOID)cast_pointer_function(CNationSettingFactoryBRCreate4_wrapper),
                (LPVOID)cast_pointer_function((struct CNationSettingData*(CNationSettingFactoryBR::*)(int, char*, bool))&CNationSettingFactoryBR::Create)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
