#include <CNationSettingFactoryGroupDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CNationSettingFactoryGroupctor_CNationSettingFactoryGroup2_ptr CNationSettingFactoryGroupctor_CNationSettingFactoryGroup2_next(nullptr);
        Info::CNationSettingFactoryGroupctor_CNationSettingFactoryGroup2_clbk CNationSettingFactoryGroupctor_CNationSettingFactoryGroup2_user(nullptr);
        
        Info::CNationSettingFactoryGroupCreate4_ptr CNationSettingFactoryGroupCreate4_next(nullptr);
        Info::CNationSettingFactoryGroupCreate4_clbk CNationSettingFactoryGroupCreate4_user(nullptr);
        
        Info::CNationSettingFactoryGroupInit6_ptr CNationSettingFactoryGroupInit6_next(nullptr);
        Info::CNationSettingFactoryGroupInit6_clbk CNationSettingFactoryGroupInit6_user(nullptr);
        
        
        Info::CNationSettingFactoryGroupdtor_CNationSettingFactoryGroup8_ptr CNationSettingFactoryGroupdtor_CNationSettingFactoryGroup8_next(nullptr);
        Info::CNationSettingFactoryGroupdtor_CNationSettingFactoryGroup8_clbk CNationSettingFactoryGroupdtor_CNationSettingFactoryGroup8_user(nullptr);
        
        
        void CNationSettingFactoryGroupctor_CNationSettingFactoryGroup2_wrapper(struct CNationSettingFactoryGroup* _this)
        {
           CNationSettingFactoryGroupctor_CNationSettingFactoryGroup2_user(_this, CNationSettingFactoryGroupctor_CNationSettingFactoryGroup2_next);
        };
        struct CNationSettingData* CNationSettingFactoryGroupCreate4_wrapper(struct CNationSettingFactoryGroup* _this, int iNationCode, char* szNationCodeStr, bool bServiceMode)
        {
           return CNationSettingFactoryGroupCreate4_user(_this, iNationCode, szNationCodeStr, bServiceMode, CNationSettingFactoryGroupCreate4_next);
        };
        int CNationSettingFactoryGroupInit6_wrapper(struct CNationSettingFactoryGroup* _this)
        {
           return CNationSettingFactoryGroupInit6_user(_this, CNationSettingFactoryGroupInit6_next);
        };
        
        void CNationSettingFactoryGroupdtor_CNationSettingFactoryGroup8_wrapper(struct CNationSettingFactoryGroup* _this)
        {
           CNationSettingFactoryGroupdtor_CNationSettingFactoryGroup8_user(_this, CNationSettingFactoryGroupdtor_CNationSettingFactoryGroup8_next);
        };
        
        ::std::array<hook_record, 4> CNationSettingFactoryGroup_functions = 
        {
            _hook_record {
                (LPVOID)0x140229810L,
                (LPVOID *)&CNationSettingFactoryGroupctor_CNationSettingFactoryGroup2_user,
                (LPVOID *)&CNationSettingFactoryGroupctor_CNationSettingFactoryGroup2_next,
                (LPVOID)cast_pointer_function(CNationSettingFactoryGroupctor_CNationSettingFactoryGroup2_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingFactoryGroup::*)())&CNationSettingFactoryGroup::ctor_CNationSettingFactoryGroup)
            },
            _hook_record {
                (LPVOID)0x140229750L,
                (LPVOID *)&CNationSettingFactoryGroupCreate4_user,
                (LPVOID *)&CNationSettingFactoryGroupCreate4_next,
                (LPVOID)cast_pointer_function(CNationSettingFactoryGroupCreate4_wrapper),
                (LPVOID)cast_pointer_function((struct CNationSettingData*(CNationSettingFactoryGroup::*)(int, char*, bool))&CNationSettingFactoryGroup::Create)
            },
            _hook_record {
                (LPVOID)0x1402178a0L,
                (LPVOID *)&CNationSettingFactoryGroupInit6_user,
                (LPVOID *)&CNationSettingFactoryGroupInit6_next,
                (LPVOID)cast_pointer_function(CNationSettingFactoryGroupInit6_wrapper),
                (LPVOID)cast_pointer_function((int(CNationSettingFactoryGroup::*)())&CNationSettingFactoryGroup::Init)
            },
            _hook_record {
                (LPVOID)0x140229860L,
                (LPVOID *)&CNationSettingFactoryGroupdtor_CNationSettingFactoryGroup8_user,
                (LPVOID *)&CNationSettingFactoryGroupdtor_CNationSettingFactoryGroup8_next,
                (LPVOID)cast_pointer_function(CNationSettingFactoryGroupdtor_CNationSettingFactoryGroup8_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingFactoryGroup::*)())&CNationSettingFactoryGroup::dtor_CNationSettingFactoryGroup)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
