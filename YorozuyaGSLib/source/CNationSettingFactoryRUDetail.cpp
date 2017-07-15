#include <CNationSettingFactoryRUDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CNationSettingFactoryRUctor_CNationSettingFactoryRU2_ptr CNationSettingFactoryRUctor_CNationSettingFactoryRU2_next(nullptr);
        Info::CNationSettingFactoryRUctor_CNationSettingFactoryRU2_clbk CNationSettingFactoryRUctor_CNationSettingFactoryRU2_user(nullptr);
        
        Info::CNationSettingFactoryRUCreate4_ptr CNationSettingFactoryRUCreate4_next(nullptr);
        Info::CNationSettingFactoryRUCreate4_clbk CNationSettingFactoryRUCreate4_user(nullptr);
        
        
        void CNationSettingFactoryRUctor_CNationSettingFactoryRU2_wrapper(struct CNationSettingFactoryRU* _this)
        {
           CNationSettingFactoryRUctor_CNationSettingFactoryRU2_user(_this, CNationSettingFactoryRUctor_CNationSettingFactoryRU2_next);
        };
        struct CNationSettingData* CNationSettingFactoryRUCreate4_wrapper(struct CNationSettingFactoryRU* _this, int iNationCode, char* szNationCodeStr, bool bServiceMode)
        {
           return CNationSettingFactoryRUCreate4_user(_this, iNationCode, szNationCodeStr, bServiceMode, CNationSettingFactoryRUCreate4_next);
        };
        
        ::std::array<hook_record, 2> CNationSettingFactoryRU_functions = 
        {
            _hook_record {
                (LPVOID)0x1402196a0L,
                (LPVOID *)&CNationSettingFactoryRUctor_CNationSettingFactoryRU2_user,
                (LPVOID *)&CNationSettingFactoryRUctor_CNationSettingFactoryRU2_next,
                (LPVOID)cast_pointer_function(CNationSettingFactoryRUctor_CNationSettingFactoryRU2_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingFactoryRU::*)())&CNationSettingFactoryRU::ctor_CNationSettingFactoryRU)
            },
            _hook_record {
                (LPVOID)0x14022e390L,
                (LPVOID *)&CNationSettingFactoryRUCreate4_user,
                (LPVOID *)&CNationSettingFactoryRUCreate4_next,
                (LPVOID)cast_pointer_function(CNationSettingFactoryRUCreate4_wrapper),
                (LPVOID)cast_pointer_function((struct CNationSettingData*(CNationSettingFactoryRU::*)(int, char*, bool))&CNationSettingFactoryRU::Create)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
