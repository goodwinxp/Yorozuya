#include <COreCuttingTableDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::COreCuttingTablector_COreCuttingTable2_ptr COreCuttingTablector_COreCuttingTable2_next(nullptr);
        Info::COreCuttingTablector_COreCuttingTable2_clbk COreCuttingTablector_COreCuttingTable2_user(nullptr);
        
        Info::COreCuttingTableGetOreIndexFromRate4_ptr COreCuttingTableGetOreIndexFromRate4_next(nullptr);
        Info::COreCuttingTableGetOreIndexFromRate4_clbk COreCuttingTableGetOreIndexFromRate4_user(nullptr);
        
        Info::COreCuttingTableIndexing6_ptr COreCuttingTableIndexing6_next(nullptr);
        Info::COreCuttingTableIndexing6_clbk COreCuttingTableIndexing6_user(nullptr);
        
        Info::COreCuttingTableReadRecord8_ptr COreCuttingTableReadRecord8_next(nullptr);
        Info::COreCuttingTableReadRecord8_clbk COreCuttingTableReadRecord8_user(nullptr);
        
        
        Info::COreCuttingTabledtor_COreCuttingTable13_ptr COreCuttingTabledtor_COreCuttingTable13_next(nullptr);
        Info::COreCuttingTabledtor_COreCuttingTable13_clbk COreCuttingTabledtor_COreCuttingTable13_user(nullptr);
        
        
        void COreCuttingTablector_COreCuttingTable2_wrapper(struct COreCuttingTable* _this)
        {
           COreCuttingTablector_COreCuttingTable2_user(_this, COreCuttingTablector_COreCuttingTable2_next);
        };
        unsigned int COreCuttingTableGetOreIndexFromRate4_wrapper(struct COreCuttingTable* _this, unsigned int dwOreIndex, unsigned int dwRate)
        {
           return COreCuttingTableGetOreIndexFromRate4_user(_this, dwOreIndex, dwRate, COreCuttingTableGetOreIndexFromRate4_next);
        };
        bool COreCuttingTableIndexing6_wrapper(struct COreCuttingTable* _this, struct CRecordData* pOreRec, struct CRecordData* pResRec, char* pszErrMsg)
        {
           return COreCuttingTableIndexing6_user(_this, pOreRec, pResRec, pszErrMsg, COreCuttingTableIndexing6_next);
        };
        bool COreCuttingTableReadRecord8_wrapper(struct COreCuttingTable* _this, char* szFile, struct CRecordData* pOreRec, struct CRecordData* pResRec, char* pszErrMsg)
        {
           return COreCuttingTableReadRecord8_user(_this, szFile, pOreRec, pResRec, pszErrMsg, COreCuttingTableReadRecord8_next);
        };
        
        void COreCuttingTabledtor_COreCuttingTable13_wrapper(struct COreCuttingTable* _this)
        {
           COreCuttingTabledtor_COreCuttingTable13_user(_this, COreCuttingTabledtor_COreCuttingTable13_next);
        };
        
        ::std::array<hook_record, 5> COreCuttingTable_functions = 
        {
            _hook_record {
                (LPVOID)0x140202a10L,
                (LPVOID *)&COreCuttingTablector_COreCuttingTable2_user,
                (LPVOID *)&COreCuttingTablector_COreCuttingTable2_next,
                (LPVOID)cast_pointer_function(COreCuttingTablector_COreCuttingTable2_wrapper),
                (LPVOID)cast_pointer_function((void(COreCuttingTable::*)())&COreCuttingTable::ctor_COreCuttingTable)
            },
            _hook_record {
                (LPVOID)0x1400d3f50L,
                (LPVOID *)&COreCuttingTableGetOreIndexFromRate4_user,
                (LPVOID *)&COreCuttingTableGetOreIndexFromRate4_next,
                (LPVOID)cast_pointer_function(COreCuttingTableGetOreIndexFromRate4_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(COreCuttingTable::*)(unsigned int, unsigned int))&COreCuttingTable::GetOreIndexFromRate)
            },
            _hook_record {
                (LPVOID)0x140204580L,
                (LPVOID *)&COreCuttingTableIndexing6_user,
                (LPVOID *)&COreCuttingTableIndexing6_next,
                (LPVOID)cast_pointer_function(COreCuttingTableIndexing6_wrapper),
                (LPVOID)cast_pointer_function((bool(COreCuttingTable::*)(struct CRecordData*, struct CRecordData*, char*))&COreCuttingTable::Indexing)
            },
            _hook_record {
                (LPVOID)0x140204360L,
                (LPVOID *)&COreCuttingTableReadRecord8_user,
                (LPVOID *)&COreCuttingTableReadRecord8_next,
                (LPVOID)cast_pointer_function(COreCuttingTableReadRecord8_wrapper),
                (LPVOID)cast_pointer_function((bool(COreCuttingTable::*)(char*, struct CRecordData*, struct CRecordData*, char*))&COreCuttingTable::ReadRecord)
            },
            _hook_record {
                (LPVOID)0x140202aa0L,
                (LPVOID *)&COreCuttingTabledtor_COreCuttingTable13_user,
                (LPVOID *)&COreCuttingTabledtor_COreCuttingTable13_next,
                (LPVOID)cast_pointer_function(COreCuttingTabledtor_COreCuttingTable13_wrapper),
                (LPVOID)cast_pointer_function((void(COreCuttingTable::*)())&COreCuttingTable::dtor_COreCuttingTable)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
