#include <CMapDataTableDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CMapDataTablector_CMapDataTable2_ptr CMapDataTablector_CMapDataTable2_next(nullptr);
        Info::CMapDataTablector_CMapDataTable2_clbk CMapDataTablector_CMapDataTable2_user(nullptr);
        
        Info::CMapDataTableGetRecord4_ptr CMapDataTableGetRecord4_next(nullptr);
        Info::CMapDataTableGetRecord4_clbk CMapDataTableGetRecord4_user(nullptr);
        
        Info::CMapDataTableGetRecordNum6_ptr CMapDataTableGetRecordNum6_next(nullptr);
        Info::CMapDataTableGetRecordNum6_clbk CMapDataTableGetRecordNum6_user(nullptr);
        
        Info::CMapDataTableReadScript8_ptr CMapDataTableReadScript8_next(nullptr);
        Info::CMapDataTableReadScript8_clbk CMapDataTableReadScript8_user(nullptr);
        
        
        Info::CMapDataTabledtor_CMapDataTable13_ptr CMapDataTabledtor_CMapDataTable13_next(nullptr);
        Info::CMapDataTabledtor_CMapDataTable13_clbk CMapDataTabledtor_CMapDataTable13_user(nullptr);
        
        
        void CMapDataTablector_CMapDataTable2_wrapper(struct CMapDataTable* _this)
        {
           CMapDataTablector_CMapDataTable2_user(_this, CMapDataTablector_CMapDataTable2_next);
        };
        struct _map_fld* CMapDataTableGetRecord4_wrapper(struct CMapDataTable* _this, unsigned int dwIndex)
        {
           return CMapDataTableGetRecord4_user(_this, dwIndex, CMapDataTableGetRecord4_next);
        };
        int CMapDataTableGetRecordNum6_wrapper(struct CMapDataTable* _this)
        {
           return CMapDataTableGetRecordNum6_user(_this, CMapDataTableGetRecordNum6_next);
        };
        bool CMapDataTableReadScript8_wrapper(struct CMapDataTable* _this, char* szFileName)
        {
           return CMapDataTableReadScript8_user(_this, szFileName, CMapDataTableReadScript8_next);
        };
        
        void CMapDataTabledtor_CMapDataTable13_wrapper(struct CMapDataTable* _this)
        {
           CMapDataTabledtor_CMapDataTable13_user(_this, CMapDataTabledtor_CMapDataTable13_next);
        };
        
        ::std::array<hook_record, 5> CMapDataTable_functions = 
        {
            _hook_record {
                (LPVOID)0x140198740L,
                (LPVOID *)&CMapDataTablector_CMapDataTable2_user,
                (LPVOID *)&CMapDataTablector_CMapDataTable2_next,
                (LPVOID)cast_pointer_function(CMapDataTablector_CMapDataTable2_wrapper),
                (LPVOID)cast_pointer_function((void(CMapDataTable::*)())&CMapDataTable::ctor_CMapDataTable)
            },
            _hook_record {
                (LPVOID)0x1400ef2d0L,
                (LPVOID *)&CMapDataTableGetRecord4_user,
                (LPVOID *)&CMapDataTableGetRecord4_next,
                (LPVOID)cast_pointer_function(CMapDataTableGetRecord4_wrapper),
                (LPVOID)cast_pointer_function((struct _map_fld*(CMapDataTable::*)(unsigned int))&CMapDataTable::GetRecord)
            },
            _hook_record {
                (LPVOID)0x140199050L,
                (LPVOID *)&CMapDataTableGetRecordNum6_user,
                (LPVOID *)&CMapDataTableGetRecordNum6_next,
                (LPVOID)cast_pointer_function(CMapDataTableGetRecordNum6_wrapper),
                (LPVOID)cast_pointer_function((int(CMapDataTable::*)())&CMapDataTable::GetRecordNum)
            },
            _hook_record {
                (LPVOID)0x140198900L,
                (LPVOID *)&CMapDataTableReadScript8_user,
                (LPVOID *)&CMapDataTableReadScript8_next,
                (LPVOID)cast_pointer_function(CMapDataTableReadScript8_wrapper),
                (LPVOID)cast_pointer_function((bool(CMapDataTable::*)(char*))&CMapDataTable::ReadScript)
            },
            _hook_record {
                (LPVOID)0x140198790L,
                (LPVOID *)&CMapDataTabledtor_CMapDataTable13_user,
                (LPVOID *)&CMapDataTabledtor_CMapDataTable13_next,
                (LPVOID)cast_pointer_function(CMapDataTabledtor_CMapDataTable13_wrapper),
                (LPVOID)cast_pointer_function((void(CMapDataTable::*)())&CMapDataTable::dtor_CMapDataTable)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
