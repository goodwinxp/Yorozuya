#include <CNationSettingFactoryIDDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CNationSettingFactoryIDctor_CNationSettingFactoryID2_ptr CNationSettingFactoryIDctor_CNationSettingFactoryID2_next(nullptr);
        Info::CNationSettingFactoryIDctor_CNationSettingFactoryID2_clbk CNationSettingFactoryIDctor_CNationSettingFactoryID2_user(nullptr);
        
        Info::CNationSettingFactoryIDCreate4_ptr CNationSettingFactoryIDCreate4_next(nullptr);
        Info::CNationSettingFactoryIDCreate4_clbk CNationSettingFactoryIDCreate4_user(nullptr);
        
        
        void CNationSettingFactoryIDctor_CNationSettingFactoryID2_wrapper(struct CNationSettingFactoryID* _this)
        {
           CNationSettingFactoryIDctor_CNationSettingFactoryID2_user(_this, CNationSettingFactoryIDctor_CNationSettingFactoryID2_next);
        };
        struct CNationSettingData* CNationSettingFactoryIDCreate4_wrapper(struct CNationSettingFactoryID* _this, int iNationCode, char* szNationCodeStr, bool bServiceMode)
        {
           return CNationSettingFactoryIDCreate4_user(_this, iNationCode, szNationCodeStr, bServiceMode, CNationSettingFactoryIDCreate4_next);
        };
        
        ::std::array<hook_record, 2> CNationSettingFactoryID_functions = 
        {
            _hook_record {
                (LPVOID)0x140219580L,
                (LPVOID *)&CNationSettingFactoryIDctor_CNationSettingFactoryID2_user,
                (LPVOID *)&CNationSettingFactoryIDctor_CNationSettingFactoryID2_next,
                (LPVOID)cast_pointer_function(CNationSettingFactoryIDctor_CNationSettingFactoryID2_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingFactoryID::*)())&CNationSettingFactoryID::ctor_CNationSettingFactoryID)
            },
            _hook_record {
                (LPVOID)0x14022c590L,
                (LPVOID *)&CNationSettingFactoryIDCreate4_user,
                (LPVOID *)&CNationSettingFactoryIDCreate4_next,
                (LPVOID)cast_pointer_function(CNationSettingFactoryIDCreate4_wrapper),
                (LPVOID)cast_pointer_function((struct CNationSettingData*(CNationSettingFactoryID::*)(int, char*, bool))&CNationSettingFactoryID::Create)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
