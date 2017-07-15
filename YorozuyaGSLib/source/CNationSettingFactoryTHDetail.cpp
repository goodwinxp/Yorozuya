#include <CNationSettingFactoryTHDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CNationSettingFactoryTHctor_CNationSettingFactoryTH2_ptr CNationSettingFactoryTHctor_CNationSettingFactoryTH2_next(nullptr);
        Info::CNationSettingFactoryTHctor_CNationSettingFactoryTH2_clbk CNationSettingFactoryTHctor_CNationSettingFactoryTH2_user(nullptr);
        
        Info::CNationSettingFactoryTHCreate4_ptr CNationSettingFactoryTHCreate4_next(nullptr);
        Info::CNationSettingFactoryTHCreate4_clbk CNationSettingFactoryTHCreate4_user(nullptr);
        
        
        void CNationSettingFactoryTHctor_CNationSettingFactoryTH2_wrapper(struct CNationSettingFactoryTH* _this)
        {
           CNationSettingFactoryTHctor_CNationSettingFactoryTH2_user(_this, CNationSettingFactoryTHctor_CNationSettingFactoryTH2_next);
        };
        struct CNationSettingData* CNationSettingFactoryTHCreate4_wrapper(struct CNationSettingFactoryTH* _this, int iNationCode, char* szNationCodeStr, bool bServiceMode)
        {
           return CNationSettingFactoryTHCreate4_user(_this, iNationCode, szNationCodeStr, bServiceMode, CNationSettingFactoryTHCreate4_next);
        };
        
        ::std::array<hook_record, 2> CNationSettingFactoryTH_functions = 
        {
            _hook_record {
                (LPVOID)0x1402198e0L,
                (LPVOID *)&CNationSettingFactoryTHctor_CNationSettingFactoryTH2_user,
                (LPVOID *)&CNationSettingFactoryTHctor_CNationSettingFactoryTH2_next,
                (LPVOID)cast_pointer_function(CNationSettingFactoryTHctor_CNationSettingFactoryTH2_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingFactoryTH::*)())&CNationSettingFactoryTH::ctor_CNationSettingFactoryTH)
            },
            _hook_record {
                (LPVOID)0x140231e40L,
                (LPVOID *)&CNationSettingFactoryTHCreate4_user,
                (LPVOID *)&CNationSettingFactoryTHCreate4_next,
                (LPVOID)cast_pointer_function(CNationSettingFactoryTHCreate4_wrapper),
                (LPVOID)cast_pointer_function((struct CNationSettingData*(CNationSettingFactoryTH::*)(int, char*, bool))&CNationSettingFactoryTH::Create)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
