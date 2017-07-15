#include <CNationSettingFactoryJPDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CNationSettingFactoryJPctor_CNationSettingFactoryJP2_ptr CNationSettingFactoryJPctor_CNationSettingFactoryJP2_next(nullptr);
        Info::CNationSettingFactoryJPctor_CNationSettingFactoryJP2_clbk CNationSettingFactoryJPctor_CNationSettingFactoryJP2_user(nullptr);
        
        Info::CNationSettingFactoryJPCreate4_ptr CNationSettingFactoryJPCreate4_next(nullptr);
        Info::CNationSettingFactoryJPCreate4_clbk CNationSettingFactoryJPCreate4_user(nullptr);
        
        
        void CNationSettingFactoryJPctor_CNationSettingFactoryJP2_wrapper(struct CNationSettingFactoryJP* _this)
        {
           CNationSettingFactoryJPctor_CNationSettingFactoryJP2_user(_this, CNationSettingFactoryJPctor_CNationSettingFactoryJP2_next);
        };
        struct CNationSettingData* CNationSettingFactoryJPCreate4_wrapper(struct CNationSettingFactoryJP* _this, int iNationCode, char* szNationCodeStr, bool bServiceMode)
        {
           return CNationSettingFactoryJPCreate4_user(_this, iNationCode, szNationCodeStr, bServiceMode, CNationSettingFactoryJPCreate4_next);
        };
        
        ::std::array<hook_record, 2> CNationSettingFactoryJP_functions = 
        {
            _hook_record {
                (LPVOID)0x1402195e0L,
                (LPVOID *)&CNationSettingFactoryJPctor_CNationSettingFactoryJP2_user,
                (LPVOID *)&CNationSettingFactoryJPctor_CNationSettingFactoryJP2_next,
                (LPVOID)cast_pointer_function(CNationSettingFactoryJPctor_CNationSettingFactoryJP2_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingFactoryJP::*)())&CNationSettingFactoryJP::ctor_CNationSettingFactoryJP)
            },
            _hook_record {
                (LPVOID)0x14022cf00L,
                (LPVOID *)&CNationSettingFactoryJPCreate4_user,
                (LPVOID *)&CNationSettingFactoryJPCreate4_next,
                (LPVOID)cast_pointer_function(CNationSettingFactoryJPCreate4_wrapper),
                (LPVOID)cast_pointer_function((struct CNationSettingData*(CNationSettingFactoryJP::*)(int, char*, bool))&CNationSettingFactoryJP::Create)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
