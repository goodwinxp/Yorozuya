#include <CUnmannedTraderGroupIDInfoDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CUnmannedTraderGroupIDInfoctor_CUnmannedTraderGroupIDInfo2_ptr CUnmannedTraderGroupIDInfoctor_CUnmannedTraderGroupIDInfo2_next(nullptr);
        Info::CUnmannedTraderGroupIDInfoctor_CUnmannedTraderGroupIDInfo2_clbk CUnmannedTraderGroupIDInfoctor_CUnmannedTraderGroupIDInfo2_user(nullptr);
        
        Info::CUnmannedTraderGroupIDInfoCleanUp4_ptr CUnmannedTraderGroupIDInfoCleanUp4_next(nullptr);
        Info::CUnmannedTraderGroupIDInfoCleanUp4_clbk CUnmannedTraderGroupIDInfoCleanUp4_user(nullptr);
        
        Info::CUnmannedTraderGroupIDInfoGetGroupID6_ptr CUnmannedTraderGroupIDInfoGetGroupID6_next(nullptr);
        Info::CUnmannedTraderGroupIDInfoGetGroupID6_clbk CUnmannedTraderGroupIDInfoGetGroupID6_user(nullptr);
        
        Info::CUnmannedTraderGroupIDInfoGetGroupID8_ptr CUnmannedTraderGroupIDInfoGetGroupID8_next(nullptr);
        Info::CUnmannedTraderGroupIDInfoGetGroupID8_clbk CUnmannedTraderGroupIDInfoGetGroupID8_user(nullptr);
        
        Info::CUnmannedTraderGroupIDInfoGetIDInfo10_ptr CUnmannedTraderGroupIDInfoGetIDInfo10_next(nullptr);
        Info::CUnmannedTraderGroupIDInfoGetIDInfo10_clbk CUnmannedTraderGroupIDInfoGetIDInfo10_user(nullptr);
        
        Info::CUnmannedTraderGroupIDInfoGetSortType12_ptr CUnmannedTraderGroupIDInfoGetSortType12_next(nullptr);
        Info::CUnmannedTraderGroupIDInfoGetSortType12_clbk CUnmannedTraderGroupIDInfoGetSortType12_user(nullptr);
        
        Info::CUnmannedTraderGroupIDInfoIsExistGroupID14_ptr CUnmannedTraderGroupIDInfoIsExistGroupID14_next(nullptr);
        Info::CUnmannedTraderGroupIDInfoIsExistGroupID14_clbk CUnmannedTraderGroupIDInfoIsExistGroupID14_user(nullptr);
        
        Info::CUnmannedTraderGroupIDInfoIsExistID16_ptr CUnmannedTraderGroupIDInfoIsExistID16_next(nullptr);
        Info::CUnmannedTraderGroupIDInfoIsExistID16_clbk CUnmannedTraderGroupIDInfoIsExistID16_user(nullptr);
        
        Info::CUnmannedTraderGroupIDInfoLoadXML18_ptr CUnmannedTraderGroupIDInfoLoadXML18_next(nullptr);
        Info::CUnmannedTraderGroupIDInfoLoadXML18_clbk CUnmannedTraderGroupIDInfoLoadXML18_user(nullptr);
        
        Info::CUnmannedTraderGroupIDInfoLog20_ptr CUnmannedTraderGroupIDInfoLog20_next(nullptr);
        Info::CUnmannedTraderGroupIDInfoLog20_clbk CUnmannedTraderGroupIDInfoLog20_user(nullptr);
        
        Info::CUnmannedTraderGroupIDInfoSetLogger22_ptr CUnmannedTraderGroupIDInfoSetLogger22_next(nullptr);
        Info::CUnmannedTraderGroupIDInfoSetLogger22_clbk CUnmannedTraderGroupIDInfoSetLogger22_user(nullptr);
        
        
        Info::CUnmannedTraderGroupIDInfodtor_CUnmannedTraderGroupIDInfo24_ptr CUnmannedTraderGroupIDInfodtor_CUnmannedTraderGroupIDInfo24_next(nullptr);
        Info::CUnmannedTraderGroupIDInfodtor_CUnmannedTraderGroupIDInfo24_clbk CUnmannedTraderGroupIDInfodtor_CUnmannedTraderGroupIDInfo24_user(nullptr);
        
        
        void CUnmannedTraderGroupIDInfoctor_CUnmannedTraderGroupIDInfo2_wrapper(struct CUnmannedTraderGroupIDInfo* _this)
        {
           CUnmannedTraderGroupIDInfoctor_CUnmannedTraderGroupIDInfo2_user(_this, CUnmannedTraderGroupIDInfoctor_CUnmannedTraderGroupIDInfo2_next);
        };
        void CUnmannedTraderGroupIDInfoCleanUp4_wrapper(struct CUnmannedTraderGroupIDInfo* _this)
        {
           CUnmannedTraderGroupIDInfoCleanUp4_user(_this, CUnmannedTraderGroupIDInfoCleanUp4_next);
        };
        bool CUnmannedTraderGroupIDInfoGetGroupID6_wrapper(struct CUnmannedTraderGroupIDInfo* _this, char byTableCode, uint16_t wItemTableIndex, char* byDivision, char* byClass)
        {
           return CUnmannedTraderGroupIDInfoGetGroupID6_user(_this, byTableCode, wItemTableIndex, byDivision, byClass, CUnmannedTraderGroupIDInfoGetGroupID6_next);
        };
        bool CUnmannedTraderGroupIDInfoGetGroupID8_wrapper(struct CUnmannedTraderGroupIDInfo* _this, char byTableCode, uint16_t wItemTableIndex, char* byDivision, char* byClass, char* bySubClass, unsigned int* dwListIndex)
        {
           return CUnmannedTraderGroupIDInfoGetGroupID8_user(_this, byTableCode, wItemTableIndex, byDivision, byClass, bySubClass, dwListIndex, CUnmannedTraderGroupIDInfoGetGroupID8_next);
        };
        bool CUnmannedTraderGroupIDInfoGetIDInfo10_wrapper(struct CUnmannedTraderGroupIDInfo* _this, std::vector<std::pair<unsigned long,unsigned long>>* vecInfo)
        {
           return CUnmannedTraderGroupIDInfoGetIDInfo10_user(_this, vecInfo, CUnmannedTraderGroupIDInfoGetIDInfo10_next);
        };
        struct CUnmannedTraderSortType* CUnmannedTraderGroupIDInfoGetSortType12_wrapper(struct CUnmannedTraderGroupIDInfo* _this, char byDivision, char bySortType)
        {
           return CUnmannedTraderGroupIDInfoGetSortType12_user(_this, byDivision, bySortType, CUnmannedTraderGroupIDInfoGetSortType12_next);
        };
        bool CUnmannedTraderGroupIDInfoIsExistGroupID14_wrapper(struct CUnmannedTraderGroupIDInfo* _this, char byDivision, char byClass, char bySubClass, char bySortType, unsigned int* dwListIndex)
        {
           return CUnmannedTraderGroupIDInfoIsExistGroupID14_user(_this, byDivision, byClass, bySubClass, bySortType, dwListIndex, CUnmannedTraderGroupIDInfoIsExistGroupID14_next);
        };
        bool CUnmannedTraderGroupIDInfoIsExistID16_wrapper(struct CUnmannedTraderGroupIDInfo* _this, unsigned int dwID)
        {
           return CUnmannedTraderGroupIDInfoIsExistID16_user(_this, dwID, CUnmannedTraderGroupIDInfoIsExistID16_next);
        };
        bool CUnmannedTraderGroupIDInfoLoadXML18_wrapper(struct CUnmannedTraderGroupIDInfo* _this, char* szFileName)
        {
           return CUnmannedTraderGroupIDInfoLoadXML18_user(_this, szFileName, CUnmannedTraderGroupIDInfoLoadXML18_next);
        };
        void CUnmannedTraderGroupIDInfoLog20_wrapper(struct CUnmannedTraderGroupIDInfo* _this, char* fmt)
        {
           CUnmannedTraderGroupIDInfoLog20_user(_this, fmt, CUnmannedTraderGroupIDInfoLog20_next);
        };
        void CUnmannedTraderGroupIDInfoSetLogger22_wrapper(struct CUnmannedTraderGroupIDInfo* _this, struct CLogFile* pkLogger)
        {
           CUnmannedTraderGroupIDInfoSetLogger22_user(_this, pkLogger, CUnmannedTraderGroupIDInfoSetLogger22_next);
        };
        
        void CUnmannedTraderGroupIDInfodtor_CUnmannedTraderGroupIDInfo24_wrapper(struct CUnmannedTraderGroupIDInfo* _this)
        {
           CUnmannedTraderGroupIDInfodtor_CUnmannedTraderGroupIDInfo24_user(_this, CUnmannedTraderGroupIDInfodtor_CUnmannedTraderGroupIDInfo24_next);
        };
        
        ::std::array<hook_record, 12> CUnmannedTraderGroupIDInfo_functions = 
        {
            _hook_record {
                (LPVOID)0x140385cd0L,
                (LPVOID *)&CUnmannedTraderGroupIDInfoctor_CUnmannedTraderGroupIDInfo2_user,
                (LPVOID *)&CUnmannedTraderGroupIDInfoctor_CUnmannedTraderGroupIDInfo2_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderGroupIDInfoctor_CUnmannedTraderGroupIDInfo2_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderGroupIDInfo::*)())&CUnmannedTraderGroupIDInfo::ctor_CUnmannedTraderGroupIDInfo)
            },
            _hook_record {
                (LPVOID)0x140386f70L,
                (LPVOID *)&CUnmannedTraderGroupIDInfoCleanUp4_user,
                (LPVOID *)&CUnmannedTraderGroupIDInfoCleanUp4_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderGroupIDInfoCleanUp4_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderGroupIDInfo::*)())&CUnmannedTraderGroupIDInfo::CleanUp)
            },
            _hook_record {
                (LPVOID)0x1403866c0L,
                (LPVOID *)&CUnmannedTraderGroupIDInfoGetGroupID6_user,
                (LPVOID *)&CUnmannedTraderGroupIDInfoGetGroupID6_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderGroupIDInfoGetGroupID6_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderGroupIDInfo::*)(char, uint16_t, char*, char*))&CUnmannedTraderGroupIDInfo::GetGroupID)
            },
            _hook_record {
                (LPVOID)0x1403868b0L,
                (LPVOID *)&CUnmannedTraderGroupIDInfoGetGroupID8_user,
                (LPVOID *)&CUnmannedTraderGroupIDInfoGetGroupID8_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderGroupIDInfoGetGroupID8_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderGroupIDInfo::*)(char, uint16_t, char*, char*, char*, unsigned int*))&CUnmannedTraderGroupIDInfo::GetGroupID)
            },
            _hook_record {
                (LPVOID)0x140386430L,
                (LPVOID *)&CUnmannedTraderGroupIDInfoGetIDInfo10_user,
                (LPVOID *)&CUnmannedTraderGroupIDInfoGetIDInfo10_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderGroupIDInfoGetIDInfo10_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderGroupIDInfo::*)(std::vector<std::pair<unsigned long,unsigned long>>*))&CUnmannedTraderGroupIDInfo::GetIDInfo)
            },
            _hook_record {
                (LPVOID)0x140386d80L,
                (LPVOID *)&CUnmannedTraderGroupIDInfoGetSortType12_user,
                (LPVOID *)&CUnmannedTraderGroupIDInfoGetSortType12_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderGroupIDInfoGetSortType12_wrapper),
                (LPVOID)cast_pointer_function((struct CUnmannedTraderSortType*(CUnmannedTraderGroupIDInfo::*)(char, char))&CUnmannedTraderGroupIDInfo::GetSortType)
            },
            _hook_record {
                (LPVOID)0x140386b30L,
                (LPVOID *)&CUnmannedTraderGroupIDInfoIsExistGroupID14_user,
                (LPVOID *)&CUnmannedTraderGroupIDInfoIsExistGroupID14_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderGroupIDInfoIsExistGroupID14_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderGroupIDInfo::*)(char, char, char, char, unsigned int*))&CUnmannedTraderGroupIDInfo::IsExistGroupID)
            },
            _hook_record {
                (LPVOID)0x140386280L,
                (LPVOID *)&CUnmannedTraderGroupIDInfoIsExistID16_user,
                (LPVOID *)&CUnmannedTraderGroupIDInfoIsExistID16_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderGroupIDInfoIsExistID16_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderGroupIDInfo::*)(unsigned int))&CUnmannedTraderGroupIDInfo::IsExistID)
            },
            _hook_record {
                (LPVOID)0x140385db0L,
                (LPVOID *)&CUnmannedTraderGroupIDInfoLoadXML18_user,
                (LPVOID *)&CUnmannedTraderGroupIDInfoLoadXML18_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderGroupIDInfoLoadXML18_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderGroupIDInfo::*)(char*))&CUnmannedTraderGroupIDInfo::LoadXML)
            },
            _hook_record {
                (LPVOID)0x140387060L,
                (LPVOID *)&CUnmannedTraderGroupIDInfoLog20_user,
                (LPVOID *)&CUnmannedTraderGroupIDInfoLog20_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderGroupIDInfoLog20_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderGroupIDInfo::*)(char*))&CUnmannedTraderGroupIDInfo::Log)
            },
            _hook_record {
                (LPVOID)0x1403519f0L,
                (LPVOID *)&CUnmannedTraderGroupIDInfoSetLogger22_user,
                (LPVOID *)&CUnmannedTraderGroupIDInfoSetLogger22_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderGroupIDInfoSetLogger22_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderGroupIDInfo::*)(struct CLogFile*))&CUnmannedTraderGroupIDInfo::SetLogger)
            },
            _hook_record {
                (LPVOID)0x140385d30L,
                (LPVOID *)&CUnmannedTraderGroupIDInfodtor_CUnmannedTraderGroupIDInfo24_user,
                (LPVOID *)&CUnmannedTraderGroupIDInfodtor_CUnmannedTraderGroupIDInfo24_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderGroupIDInfodtor_CUnmannedTraderGroupIDInfo24_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderGroupIDInfo::*)())&CUnmannedTraderGroupIDInfo::dtor_CUnmannedTraderGroupIDInfo)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
