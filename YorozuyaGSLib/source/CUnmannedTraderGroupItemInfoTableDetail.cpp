#include <CUnmannedTraderGroupItemInfoTableDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CUnmannedTraderGroupItemInfoTablector_CUnmannedTraderGroupItemInfoTable2_ptr CUnmannedTraderGroupItemInfoTablector_CUnmannedTraderGroupItemInfoTable2_next(nullptr);
        Info::CUnmannedTraderGroupItemInfoTablector_CUnmannedTraderGroupItemInfoTable2_clbk CUnmannedTraderGroupItemInfoTablector_CUnmannedTraderGroupItemInfoTable2_user(nullptr);
        
        Info::CUnmannedTraderGroupItemInfoTableDestroy4_ptr CUnmannedTraderGroupItemInfoTableDestroy4_next(nullptr);
        Info::CUnmannedTraderGroupItemInfoTableDestroy4_clbk CUnmannedTraderGroupItemInfoTableDestroy4_user(nullptr);
        
        Info::CUnmannedTraderGroupItemInfoTableGetGroupID6_ptr CUnmannedTraderGroupItemInfoTableGetGroupID6_next(nullptr);
        Info::CUnmannedTraderGroupItemInfoTableGetGroupID6_clbk CUnmannedTraderGroupItemInfoTableGetGroupID6_user(nullptr);
        
        Info::CUnmannedTraderGroupItemInfoTableGetSortType8_ptr CUnmannedTraderGroupItemInfoTableGetSortType8_next(nullptr);
        Info::CUnmannedTraderGroupItemInfoTableGetSortType8_clbk CUnmannedTraderGroupItemInfoTableGetSortType8_user(nullptr);
        
        Info::CUnmannedTraderGroupItemInfoTableGetVersion10_ptr CUnmannedTraderGroupItemInfoTableGetVersion10_next(nullptr);
        Info::CUnmannedTraderGroupItemInfoTableGetVersion10_clbk CUnmannedTraderGroupItemInfoTableGetVersion10_user(nullptr);
        
        Info::CUnmannedTraderGroupItemInfoTableIncreaseVersion12_ptr CUnmannedTraderGroupItemInfoTableIncreaseVersion12_next(nullptr);
        Info::CUnmannedTraderGroupItemInfoTableIncreaseVersion12_clbk CUnmannedTraderGroupItemInfoTableIncreaseVersion12_user(nullptr);
        
        Info::CUnmannedTraderGroupItemInfoTableIncreaseVersion14_ptr CUnmannedTraderGroupItemInfoTableIncreaseVersion14_next(nullptr);
        Info::CUnmannedTraderGroupItemInfoTableIncreaseVersion14_clbk CUnmannedTraderGroupItemInfoTableIncreaseVersion14_user(nullptr);
        
        Info::CUnmannedTraderGroupItemInfoTableIncreaseVersion16_ptr CUnmannedTraderGroupItemInfoTableIncreaseVersion16_next(nullptr);
        Info::CUnmannedTraderGroupItemInfoTableIncreaseVersion16_clbk CUnmannedTraderGroupItemInfoTableIncreaseVersion16_user(nullptr);
        
        Info::CUnmannedTraderGroupItemInfoTableInit18_ptr CUnmannedTraderGroupItemInfoTableInit18_next(nullptr);
        Info::CUnmannedTraderGroupItemInfoTableInit18_clbk CUnmannedTraderGroupItemInfoTableInit18_user(nullptr);
        
        Info::CUnmannedTraderGroupItemInfoTableInstance20_ptr CUnmannedTraderGroupItemInfoTableInstance20_next(nullptr);
        Info::CUnmannedTraderGroupItemInfoTableInstance20_clbk CUnmannedTraderGroupItemInfoTableInstance20_user(nullptr);
        
        Info::CUnmannedTraderGroupItemInfoTableIsExistGroupID22_ptr CUnmannedTraderGroupItemInfoTableIsExistGroupID22_next(nullptr);
        Info::CUnmannedTraderGroupItemInfoTableIsExistGroupID22_clbk CUnmannedTraderGroupItemInfoTableIsExistGroupID22_user(nullptr);
        
        Info::CUnmannedTraderGroupItemInfoTableLog24_ptr CUnmannedTraderGroupItemInfoTableLog24_next(nullptr);
        Info::CUnmannedTraderGroupItemInfoTableLog24_clbk CUnmannedTraderGroupItemInfoTableLog24_user(nullptr);
        
        Info::CUnmannedTraderGroupItemInfoTableSetLogger26_ptr CUnmannedTraderGroupItemInfoTableSetLogger26_next(nullptr);
        Info::CUnmannedTraderGroupItemInfoTableSetLogger26_clbk CUnmannedTraderGroupItemInfoTableSetLogger26_user(nullptr);
        
        
        Info::CUnmannedTraderGroupItemInfoTabledtor_CUnmannedTraderGroupItemInfoTable30_ptr CUnmannedTraderGroupItemInfoTabledtor_CUnmannedTraderGroupItemInfoTable30_next(nullptr);
        Info::CUnmannedTraderGroupItemInfoTabledtor_CUnmannedTraderGroupItemInfoTable30_clbk CUnmannedTraderGroupItemInfoTabledtor_CUnmannedTraderGroupItemInfoTable30_user(nullptr);
        
        
        void CUnmannedTraderGroupItemInfoTablector_CUnmannedTraderGroupItemInfoTable2_wrapper(struct CUnmannedTraderGroupItemInfoTable* _this)
        {
           CUnmannedTraderGroupItemInfoTablector_CUnmannedTraderGroupItemInfoTable2_user(_this, CUnmannedTraderGroupItemInfoTablector_CUnmannedTraderGroupItemInfoTable2_next);
        };
        void CUnmannedTraderGroupItemInfoTableDestroy4_wrapper()
        {
           CUnmannedTraderGroupItemInfoTableDestroy4_user(CUnmannedTraderGroupItemInfoTableDestroy4_next);
        };
        bool CUnmannedTraderGroupItemInfoTableGetGroupID6_wrapper(struct CUnmannedTraderGroupItemInfoTable* _this, char byTableCode, uint16_t wItemTableIndex, char* byDivision, char* byClass, char* bySubClass, unsigned int* dwListIndex)
        {
           return CUnmannedTraderGroupItemInfoTableGetGroupID6_user(_this, byTableCode, wItemTableIndex, byDivision, byClass, bySubClass, dwListIndex, CUnmannedTraderGroupItemInfoTableGetGroupID6_next);
        };
        struct CUnmannedTraderSortType* CUnmannedTraderGroupItemInfoTableGetSortType8_wrapper(struct CUnmannedTraderGroupItemInfoTable* _this, char byDivision, char bySortType)
        {
           return CUnmannedTraderGroupItemInfoTableGetSortType8_user(_this, byDivision, bySortType, CUnmannedTraderGroupItemInfoTableGetSortType8_next);
        };
        bool CUnmannedTraderGroupItemInfoTableGetVersion10_wrapper(struct CUnmannedTraderGroupItemInfoTable* _this, char byDivision, char byClass, unsigned int* dwVer)
        {
           return CUnmannedTraderGroupItemInfoTableGetVersion10_user(_this, byDivision, byClass, dwVer, CUnmannedTraderGroupItemInfoTableGetVersion10_next);
        };
        bool CUnmannedTraderGroupItemInfoTableIncreaseVersion12_wrapper(struct CUnmannedTraderGroupItemInfoTable* _this, char byDivision, char byClass)
        {
           return CUnmannedTraderGroupItemInfoTableIncreaseVersion12_user(_this, byDivision, byClass, CUnmannedTraderGroupItemInfoTableIncreaseVersion12_next);
        };
        bool CUnmannedTraderGroupItemInfoTableIncreaseVersion14_wrapper(struct CUnmannedTraderGroupItemInfoTable* _this, char byTableCode, uint16_t wItemTableIndex)
        {
           return CUnmannedTraderGroupItemInfoTableIncreaseVersion14_user(_this, byTableCode, wItemTableIndex, CUnmannedTraderGroupItemInfoTableIncreaseVersion14_next);
        };
        bool CUnmannedTraderGroupItemInfoTableIncreaseVersion16_wrapper(struct CUnmannedTraderGroupItemInfoTable* _this, char byTableCode, uint16_t wItemTableIndex, char byRegistDivision, char byRegistClass)
        {
           return CUnmannedTraderGroupItemInfoTableIncreaseVersion16_user(_this, byTableCode, wItemTableIndex, byRegistDivision, byRegistClass, CUnmannedTraderGroupItemInfoTableIncreaseVersion16_next);
        };
        bool CUnmannedTraderGroupItemInfoTableInit18_wrapper(struct CUnmannedTraderGroupItemInfoTable* _this)
        {
           return CUnmannedTraderGroupItemInfoTableInit18_user(_this, CUnmannedTraderGroupItemInfoTableInit18_next);
        };
        struct CUnmannedTraderGroupItemInfoTable* CUnmannedTraderGroupItemInfoTableInstance20_wrapper()
        {
           return CUnmannedTraderGroupItemInfoTableInstance20_user(CUnmannedTraderGroupItemInfoTableInstance20_next);
        };
        bool CUnmannedTraderGroupItemInfoTableIsExistGroupID22_wrapper(struct CUnmannedTraderGroupItemInfoTable* _this, char byDivision, char byClass, char bySubClass, char bySortType, unsigned int* dwListIndex)
        {
           return CUnmannedTraderGroupItemInfoTableIsExistGroupID22_user(_this, byDivision, byClass, bySubClass, bySortType, dwListIndex, CUnmannedTraderGroupItemInfoTableIsExistGroupID22_next);
        };
        void CUnmannedTraderGroupItemInfoTableLog24_wrapper(struct CUnmannedTraderGroupItemInfoTable* _this, char* fmt)
        {
           CUnmannedTraderGroupItemInfoTableLog24_user(_this, fmt, CUnmannedTraderGroupItemInfoTableLog24_next);
        };
        void CUnmannedTraderGroupItemInfoTableSetLogger26_wrapper(struct CUnmannedTraderGroupItemInfoTable* _this, struct CLogFile* pkLogger)
        {
           CUnmannedTraderGroupItemInfoTableSetLogger26_user(_this, pkLogger, CUnmannedTraderGroupItemInfoTableSetLogger26_next);
        };
        
        void CUnmannedTraderGroupItemInfoTabledtor_CUnmannedTraderGroupItemInfoTable30_wrapper(struct CUnmannedTraderGroupItemInfoTable* _this)
        {
           CUnmannedTraderGroupItemInfoTabledtor_CUnmannedTraderGroupItemInfoTable30_user(_this, CUnmannedTraderGroupItemInfoTabledtor_CUnmannedTraderGroupItemInfoTable30_next);
        };
        
        ::std::array<hook_record, 14> CUnmannedTraderGroupItemInfoTable_functions = 
        {
            _hook_record {
                (LPVOID)0x14036afc0L,
                (LPVOID *)&CUnmannedTraderGroupItemInfoTablector_CUnmannedTraderGroupItemInfoTable2_user,
                (LPVOID *)&CUnmannedTraderGroupItemInfoTablector_CUnmannedTraderGroupItemInfoTable2_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderGroupItemInfoTablector_CUnmannedTraderGroupItemInfoTable2_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderGroupItemInfoTable::*)())&CUnmannedTraderGroupItemInfoTable::ctor_CUnmannedTraderGroupItemInfoTable)
            },
            _hook_record {
                (LPVOID)0x14036b1b0L,
                (LPVOID *)&CUnmannedTraderGroupItemInfoTableDestroy4_user,
                (LPVOID *)&CUnmannedTraderGroupItemInfoTableDestroy4_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderGroupItemInfoTableDestroy4_wrapper),
                (LPVOID)cast_pointer_function((void(*)())&CUnmannedTraderGroupItemInfoTable::Destroy)
            },
            _hook_record {
                (LPVOID)0x1403600c0L,
                (LPVOID *)&CUnmannedTraderGroupItemInfoTableGetGroupID6_user,
                (LPVOID *)&CUnmannedTraderGroupItemInfoTableGetGroupID6_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderGroupItemInfoTableGetGroupID6_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderGroupItemInfoTable::*)(char, uint16_t, char*, char*, char*, unsigned int*))&CUnmannedTraderGroupItemInfoTable::GetGroupID)
            },
            _hook_record {
                (LPVOID)0x14035f760L,
                (LPVOID *)&CUnmannedTraderGroupItemInfoTableGetSortType8_user,
                (LPVOID *)&CUnmannedTraderGroupItemInfoTableGetSortType8_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderGroupItemInfoTableGetSortType8_wrapper),
                (LPVOID)cast_pointer_function((struct CUnmannedTraderSortType*(CUnmannedTraderGroupItemInfoTable::*)(char, char))&CUnmannedTraderGroupItemInfoTable::GetSortType)
            },
            _hook_record {
                (LPVOID)0x140360890L,
                (LPVOID *)&CUnmannedTraderGroupItemInfoTableGetVersion10_user,
                (LPVOID *)&CUnmannedTraderGroupItemInfoTableGetVersion10_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderGroupItemInfoTableGetVersion10_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderGroupItemInfoTable::*)(char, char, unsigned int*))&CUnmannedTraderGroupItemInfoTable::GetVersion)
            },
            _hook_record {
                (LPVOID)0x14036b8f0L,
                (LPVOID *)&CUnmannedTraderGroupItemInfoTableIncreaseVersion12_user,
                (LPVOID *)&CUnmannedTraderGroupItemInfoTableIncreaseVersion12_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderGroupItemInfoTableIncreaseVersion12_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderGroupItemInfoTable::*)(char, char))&CUnmannedTraderGroupItemInfoTable::IncreaseVersion)
            },
            _hook_record {
                (LPVOID)0x14036b360L,
                (LPVOID *)&CUnmannedTraderGroupItemInfoTableIncreaseVersion14_user,
                (LPVOID *)&CUnmannedTraderGroupItemInfoTableIncreaseVersion14_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderGroupItemInfoTableIncreaseVersion14_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderGroupItemInfoTable::*)(char, uint16_t))&CUnmannedTraderGroupItemInfoTable::IncreaseVersion)
            },
            _hook_record {
                (LPVOID)0x14036b580L,
                (LPVOID *)&CUnmannedTraderGroupItemInfoTableIncreaseVersion16_user,
                (LPVOID *)&CUnmannedTraderGroupItemInfoTableIncreaseVersion16_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderGroupItemInfoTableIncreaseVersion16_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderGroupItemInfoTable::*)(char, uint16_t, char, char))&CUnmannedTraderGroupItemInfoTable::IncreaseVersion)
            },
            _hook_record {
                (LPVOID)0x14036b230L,
                (LPVOID *)&CUnmannedTraderGroupItemInfoTableInit18_user,
                (LPVOID *)&CUnmannedTraderGroupItemInfoTableInit18_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderGroupItemInfoTableInit18_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderGroupItemInfoTable::*)())&CUnmannedTraderGroupItemInfoTable::Init)
            },
            _hook_record {
                (LPVOID)0x14036b0f0L,
                (LPVOID *)&CUnmannedTraderGroupItemInfoTableInstance20_user,
                (LPVOID *)&CUnmannedTraderGroupItemInfoTableInstance20_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderGroupItemInfoTableInstance20_wrapper),
                (LPVOID)cast_pointer_function((struct CUnmannedTraderGroupItemInfoTable*(*)())&CUnmannedTraderGroupItemInfoTable::Instance)
            },
            _hook_record {
                (LPVOID)0x140360a40L,
                (LPVOID *)&CUnmannedTraderGroupItemInfoTableIsExistGroupID22_user,
                (LPVOID *)&CUnmannedTraderGroupItemInfoTableIsExistGroupID22_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderGroupItemInfoTableIsExistGroupID22_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderGroupItemInfoTable::*)(char, char, char, char, unsigned int*))&CUnmannedTraderGroupItemInfoTable::IsExistGroupID)
            },
            _hook_record {
                (LPVOID)0x14036b980L,
                (LPVOID *)&CUnmannedTraderGroupItemInfoTableLog24_user,
                (LPVOID *)&CUnmannedTraderGroupItemInfoTableLog24_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderGroupItemInfoTableLog24_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderGroupItemInfoTable::*)(char*))&CUnmannedTraderGroupItemInfoTable::Log)
            },
            _hook_record {
                (LPVOID)0x140351980L,
                (LPVOID *)&CUnmannedTraderGroupItemInfoTableSetLogger26_user,
                (LPVOID *)&CUnmannedTraderGroupItemInfoTableSetLogger26_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderGroupItemInfoTableSetLogger26_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderGroupItemInfoTable::*)(struct CLogFile*))&CUnmannedTraderGroupItemInfoTable::SetLogger)
            },
            _hook_record {
                (LPVOID)0x14036b060L,
                (LPVOID *)&CUnmannedTraderGroupItemInfoTabledtor_CUnmannedTraderGroupItemInfoTable30_user,
                (LPVOID *)&CUnmannedTraderGroupItemInfoTabledtor_CUnmannedTraderGroupItemInfoTable30_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderGroupItemInfoTabledtor_CUnmannedTraderGroupItemInfoTable30_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderGroupItemInfoTable::*)())&CUnmannedTraderGroupItemInfoTable::dtor_CUnmannedTraderGroupItemInfoTable)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
