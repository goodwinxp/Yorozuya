#include <CUnmannedTraderGroupDivisionVersionInfoDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CUnmannedTraderGroupDivisionVersionInfoctor_CUnmannedTraderGroupDivisionVersionInfo2_ptr CUnmannedTraderGroupDivisionVersionInfoctor_CUnmannedTraderGroupDivisionVersionInfo2_next(nullptr);
        Info::CUnmannedTraderGroupDivisionVersionInfoctor_CUnmannedTraderGroupDivisionVersionInfo2_clbk CUnmannedTraderGroupDivisionVersionInfoctor_CUnmannedTraderGroupDivisionVersionInfo2_user(nullptr);
        
        
        Info::CUnmannedTraderGroupDivisionVersionInfoctor_CUnmannedTraderGroupDivisionVersionInfo4_ptr CUnmannedTraderGroupDivisionVersionInfoctor_CUnmannedTraderGroupDivisionVersionInfo4_next(nullptr);
        Info::CUnmannedTraderGroupDivisionVersionInfoctor_CUnmannedTraderGroupDivisionVersionInfo4_clbk CUnmannedTraderGroupDivisionVersionInfoctor_CUnmannedTraderGroupDivisionVersionInfo4_user(nullptr);
        
        Info::CUnmannedTraderGroupDivisionVersionInfoGetVersion6_ptr CUnmannedTraderGroupDivisionVersionInfoGetVersion6_next(nullptr);
        Info::CUnmannedTraderGroupDivisionVersionInfoGetVersion6_clbk CUnmannedTraderGroupDivisionVersionInfoGetVersion6_user(nullptr);
        
        Info::CUnmannedTraderGroupDivisionVersionInfoIncreaseVersion8_ptr CUnmannedTraderGroupDivisionVersionInfoIncreaseVersion8_next(nullptr);
        Info::CUnmannedTraderGroupDivisionVersionInfoIncreaseVersion8_clbk CUnmannedTraderGroupDivisionVersionInfoIncreaseVersion8_user(nullptr);
        
        Info::CUnmannedTraderGroupDivisionVersionInfoIsEmpty10_ptr CUnmannedTraderGroupDivisionVersionInfoIsEmpty10_next(nullptr);
        Info::CUnmannedTraderGroupDivisionVersionInfoIsEmpty10_clbk CUnmannedTraderGroupDivisionVersionInfoIsEmpty10_user(nullptr);
        
        
        Info::CUnmannedTraderGroupDivisionVersionInfodtor_CUnmannedTraderGroupDivisionVersionInfo16_ptr CUnmannedTraderGroupDivisionVersionInfodtor_CUnmannedTraderGroupDivisionVersionInfo16_next(nullptr);
        Info::CUnmannedTraderGroupDivisionVersionInfodtor_CUnmannedTraderGroupDivisionVersionInfo16_clbk CUnmannedTraderGroupDivisionVersionInfodtor_CUnmannedTraderGroupDivisionVersionInfo16_user(nullptr);
        
        
        void CUnmannedTraderGroupDivisionVersionInfoctor_CUnmannedTraderGroupDivisionVersionInfo2_wrapper(struct CUnmannedTraderGroupDivisionVersionInfo* _this, struct CUnmannedTraderGroupDivisionVersionInfo* lhs)
        {
           CUnmannedTraderGroupDivisionVersionInfoctor_CUnmannedTraderGroupDivisionVersionInfo2_user(_this, lhs, CUnmannedTraderGroupDivisionVersionInfoctor_CUnmannedTraderGroupDivisionVersionInfo2_next);
        };
        
        void CUnmannedTraderGroupDivisionVersionInfoctor_CUnmannedTraderGroupDivisionVersionInfo4_wrapper(struct CUnmannedTraderGroupDivisionVersionInfo* _this, int iType, unsigned int uiMaxCnt)
        {
           CUnmannedTraderGroupDivisionVersionInfoctor_CUnmannedTraderGroupDivisionVersionInfo4_user(_this, iType, uiMaxCnt, CUnmannedTraderGroupDivisionVersionInfoctor_CUnmannedTraderGroupDivisionVersionInfo4_next);
        };
        bool CUnmannedTraderGroupDivisionVersionInfoGetVersion6_wrapper(struct CUnmannedTraderGroupDivisionVersionInfo* _this, char byClass, unsigned int* dwVer)
        {
           return CUnmannedTraderGroupDivisionVersionInfoGetVersion6_user(_this, byClass, dwVer, CUnmannedTraderGroupDivisionVersionInfoGetVersion6_next);
        };
        bool CUnmannedTraderGroupDivisionVersionInfoIncreaseVersion8_wrapper(struct CUnmannedTraderGroupDivisionVersionInfo* _this, char byClass)
        {
           return CUnmannedTraderGroupDivisionVersionInfoIncreaseVersion8_user(_this, byClass, CUnmannedTraderGroupDivisionVersionInfoIncreaseVersion8_next);
        };
        bool CUnmannedTraderGroupDivisionVersionInfoIsEmpty10_wrapper(struct CUnmannedTraderGroupDivisionVersionInfo* _this)
        {
           return CUnmannedTraderGroupDivisionVersionInfoIsEmpty10_user(_this, CUnmannedTraderGroupDivisionVersionInfoIsEmpty10_next);
        };
        
        void CUnmannedTraderGroupDivisionVersionInfodtor_CUnmannedTraderGroupDivisionVersionInfo16_wrapper(struct CUnmannedTraderGroupDivisionVersionInfo* _this)
        {
           CUnmannedTraderGroupDivisionVersionInfodtor_CUnmannedTraderGroupDivisionVersionInfo16_user(_this, CUnmannedTraderGroupDivisionVersionInfodtor_CUnmannedTraderGroupDivisionVersionInfo16_next);
        };
        
        ::std::array<hook_record, 6> CUnmannedTraderGroupDivisionVersionInfo_functions = 
        {
            _hook_record {
                (LPVOID)0x140399520L,
                (LPVOID *)&CUnmannedTraderGroupDivisionVersionInfoctor_CUnmannedTraderGroupDivisionVersionInfo2_user,
                (LPVOID *)&CUnmannedTraderGroupDivisionVersionInfoctor_CUnmannedTraderGroupDivisionVersionInfo2_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderGroupDivisionVersionInfoctor_CUnmannedTraderGroupDivisionVersionInfo2_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderGroupDivisionVersionInfo::*)(struct CUnmannedTraderGroupDivisionVersionInfo*))&CUnmannedTraderGroupDivisionVersionInfo::ctor_CUnmannedTraderGroupDivisionVersionInfo)
            },
            _hook_record {
                (LPVOID)0x140397da0L,
                (LPVOID *)&CUnmannedTraderGroupDivisionVersionInfoctor_CUnmannedTraderGroupDivisionVersionInfo4_user,
                (LPVOID *)&CUnmannedTraderGroupDivisionVersionInfoctor_CUnmannedTraderGroupDivisionVersionInfo4_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderGroupDivisionVersionInfoctor_CUnmannedTraderGroupDivisionVersionInfo4_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderGroupDivisionVersionInfo::*)(int, unsigned int))&CUnmannedTraderGroupDivisionVersionInfo::ctor_CUnmannedTraderGroupDivisionVersionInfo)
            },
            _hook_record {
                (LPVOID)0x140360990L,
                (LPVOID *)&CUnmannedTraderGroupDivisionVersionInfoGetVersion6_user,
                (LPVOID *)&CUnmannedTraderGroupDivisionVersionInfoGetVersion6_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderGroupDivisionVersionInfoGetVersion6_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderGroupDivisionVersionInfo::*)(char, unsigned int*))&CUnmannedTraderGroupDivisionVersionInfo::GetVersion)
            },
            _hook_record {
                (LPVOID)0x14036be20L,
                (LPVOID *)&CUnmannedTraderGroupDivisionVersionInfoIncreaseVersion8_user,
                (LPVOID *)&CUnmannedTraderGroupDivisionVersionInfoIncreaseVersion8_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderGroupDivisionVersionInfoIncreaseVersion8_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderGroupDivisionVersionInfo::*)(char))&CUnmannedTraderGroupDivisionVersionInfo::IncreaseVersion)
            },
            _hook_record {
                (LPVOID)0x140397e20L,
                (LPVOID *)&CUnmannedTraderGroupDivisionVersionInfoIsEmpty10_user,
                (LPVOID *)&CUnmannedTraderGroupDivisionVersionInfoIsEmpty10_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderGroupDivisionVersionInfoIsEmpty10_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderGroupDivisionVersionInfo::*)())&CUnmannedTraderGroupDivisionVersionInfo::IsEmpty)
            },
            _hook_record {
                (LPVOID)0x14036d070L,
                (LPVOID *)&CUnmannedTraderGroupDivisionVersionInfodtor_CUnmannedTraderGroupDivisionVersionInfo16_user,
                (LPVOID *)&CUnmannedTraderGroupDivisionVersionInfodtor_CUnmannedTraderGroupDivisionVersionInfo16_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderGroupDivisionVersionInfodtor_CUnmannedTraderGroupDivisionVersionInfo16_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderGroupDivisionVersionInfo::*)())&CUnmannedTraderGroupDivisionVersionInfo::dtor_CUnmannedTraderGroupDivisionVersionInfo)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
