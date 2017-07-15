#include <CNationSettingFactoryPHDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CNationSettingFactoryPHctor_CNationSettingFactoryPH2_ptr CNationSettingFactoryPHctor_CNationSettingFactoryPH2_next(nullptr);
        Info::CNationSettingFactoryPHctor_CNationSettingFactoryPH2_clbk CNationSettingFactoryPHctor_CNationSettingFactoryPH2_user(nullptr);
        
        Info::CNationSettingFactoryPHCreate4_ptr CNationSettingFactoryPHCreate4_next(nullptr);
        Info::CNationSettingFactoryPHCreate4_clbk CNationSettingFactoryPHCreate4_user(nullptr);
        
        
        void CNationSettingFactoryPHctor_CNationSettingFactoryPH2_wrapper(struct CNationSettingFactoryPH* _this)
        {
           CNationSettingFactoryPHctor_CNationSettingFactoryPH2_user(_this, CNationSettingFactoryPHctor_CNationSettingFactoryPH2_next);
        };
        struct CNationSettingData* CNationSettingFactoryPHCreate4_wrapper(struct CNationSettingFactoryPH* _this, int iNationCode, char* szNationCodeStr, bool bServiceMode)
        {
           return CNationSettingFactoryPHCreate4_user(_this, iNationCode, szNationCodeStr, bServiceMode, CNationSettingFactoryPHCreate4_next);
        };
        
        ::std::array<hook_record, 2> CNationSettingFactoryPH_functions = 
        {
            _hook_record {
                (LPVOID)0x140219640L,
                (LPVOID *)&CNationSettingFactoryPHctor_CNationSettingFactoryPH2_user,
                (LPVOID *)&CNationSettingFactoryPHctor_CNationSettingFactoryPH2_next,
                (LPVOID)cast_pointer_function(CNationSettingFactoryPHctor_CNationSettingFactoryPH2_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingFactoryPH::*)())&CNationSettingFactoryPH::ctor_CNationSettingFactoryPH)
            },
            _hook_record {
                (LPVOID)0x14022d890L,
                (LPVOID *)&CNationSettingFactoryPHCreate4_user,
                (LPVOID *)&CNationSettingFactoryPHCreate4_next,
                (LPVOID)cast_pointer_function(CNationSettingFactoryPHCreate4_wrapper),
                (LPVOID)cast_pointer_function((struct CNationSettingData*(CNationSettingFactoryPH::*)(int, char*, bool))&CNationSettingFactoryPH::Create)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
