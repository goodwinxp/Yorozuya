#include <CNationSettingFactoryCNDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CNationSettingFactoryCNctor_CNationSettingFactoryCN2_ptr CNationSettingFactoryCNctor_CNationSettingFactoryCN2_next(nullptr);
        Info::CNationSettingFactoryCNctor_CNationSettingFactoryCN2_clbk CNationSettingFactoryCNctor_CNationSettingFactoryCN2_user(nullptr);
        
        Info::CNationSettingFactoryCNCreate4_ptr CNationSettingFactoryCNCreate4_next(nullptr);
        Info::CNationSettingFactoryCNCreate4_clbk CNationSettingFactoryCNCreate4_user(nullptr);
        
        
        void CNationSettingFactoryCNctor_CNationSettingFactoryCN2_wrapper(struct CNationSettingFactoryCN* _this)
        {
           CNationSettingFactoryCNctor_CNationSettingFactoryCN2_user(_this, CNationSettingFactoryCNctor_CNationSettingFactoryCN2_next);
        };
        struct CNationSettingData* CNationSettingFactoryCNCreate4_wrapper(struct CNationSettingFactoryCN* _this, int iNationCode, char* szNationCodeStr, bool bServiceMode)
        {
           return CNationSettingFactoryCNCreate4_user(_this, iNationCode, szNationCodeStr, bServiceMode, CNationSettingFactoryCNCreate4_next);
        };
        
        ::std::array<hook_record, 2> CNationSettingFactoryCN_functions = 
        {
            _hook_record {
                (LPVOID)0x1402197c0L,
                (LPVOID *)&CNationSettingFactoryCNctor_CNationSettingFactoryCN2_user,
                (LPVOID *)&CNationSettingFactoryCNctor_CNationSettingFactoryCN2_next,
                (LPVOID)cast_pointer_function(CNationSettingFactoryCNctor_CNationSettingFactoryCN2_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingFactoryCN::*)())&CNationSettingFactoryCN::ctor_CNationSettingFactoryCN)
            },
            _hook_record {
                (LPVOID)0x140230e10L,
                (LPVOID *)&CNationSettingFactoryCNCreate4_user,
                (LPVOID *)&CNationSettingFactoryCNCreate4_next,
                (LPVOID)cast_pointer_function(CNationSettingFactoryCNCreate4_wrapper),
                (LPVOID)cast_pointer_function((struct CNationSettingData*(CNationSettingFactoryCN::*)(int, char*, bool))&CNationSettingFactoryCN::Create)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
