#include <CItemLootTableDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CItemLootTablector_CItemLootTable2_ptr CItemLootTablector_CItemLootTable2_next(nullptr);
        Info::CItemLootTablector_CItemLootTable2_clbk CItemLootTablector_CItemLootTable2_user(nullptr);
        
        Info::CItemLootTableIndexing4_ptr CItemLootTableIndexing4_next(nullptr);
        Info::CItemLootTableIndexing4_clbk CItemLootTableIndexing4_user(nullptr);
        
        Info::CItemLootTableReadRecord6_ptr CItemLootTableReadRecord6_next(nullptr);
        Info::CItemLootTableReadRecord6_clbk CItemLootTableReadRecord6_user(nullptr);
        
        
        Info::CItemLootTabledtor_CItemLootTable11_ptr CItemLootTabledtor_CItemLootTable11_next(nullptr);
        Info::CItemLootTabledtor_CItemLootTable11_clbk CItemLootTabledtor_CItemLootTable11_user(nullptr);
        
        
        void CItemLootTablector_CItemLootTable2_wrapper(struct CItemLootTable* _this)
        {
           CItemLootTablector_CItemLootTable2_user(_this, CItemLootTablector_CItemLootTable2_next);
        };
        bool CItemLootTableIndexing4_wrapper(struct CItemLootTable* _this, struct CRecordData* pItemRec, char* pszErrMsg)
        {
           return CItemLootTableIndexing4_user(_this, pItemRec, pszErrMsg, CItemLootTableIndexing4_next);
        };
        bool CItemLootTableReadRecord6_wrapper(struct CItemLootTable* _this, char* szFile, struct CRecordData* pItemRec, char* pszErrMsg)
        {
           return CItemLootTableReadRecord6_user(_this, szFile, pItemRec, pszErrMsg, CItemLootTableReadRecord6_next);
        };
        
        void CItemLootTabledtor_CItemLootTable11_wrapper(struct CItemLootTable* _this)
        {
           CItemLootTabledtor_CItemLootTable11_user(_this, CItemLootTabledtor_CItemLootTable11_next);
        };
        
        ::std::array<hook_record, 4> CItemLootTable_functions = 
        {
            _hook_record {
                (LPVOID)0x1402024d0L,
                (LPVOID *)&CItemLootTablector_CItemLootTable2_user,
                (LPVOID *)&CItemLootTablector_CItemLootTable2_next,
                (LPVOID)cast_pointer_function(CItemLootTablector_CItemLootTable2_wrapper),
                (LPVOID)cast_pointer_function((void(CItemLootTable::*)())&CItemLootTable::ctor_CItemLootTable)
            },
            _hook_record {
                (LPVOID)0x140203f20L,
                (LPVOID *)&CItemLootTableIndexing4_user,
                (LPVOID *)&CItemLootTableIndexing4_next,
                (LPVOID)cast_pointer_function(CItemLootTableIndexing4_wrapper),
                (LPVOID)cast_pointer_function((bool(CItemLootTable::*)(struct CRecordData*, char*))&CItemLootTable::Indexing)
            },
            _hook_record {
                (LPVOID)0x140203900L,
                (LPVOID *)&CItemLootTableReadRecord6_user,
                (LPVOID *)&CItemLootTableReadRecord6_next,
                (LPVOID)cast_pointer_function(CItemLootTableReadRecord6_wrapper),
                (LPVOID)cast_pointer_function((bool(CItemLootTable::*)(char*, struct CRecordData*, char*))&CItemLootTable::ReadRecord)
            },
            _hook_record {
                (LPVOID)0x1402027a0L,
                (LPVOID *)&CItemLootTabledtor_CItemLootTable11_user,
                (LPVOID *)&CItemLootTabledtor_CItemLootTable11_next,
                (LPVOID)cast_pointer_function(CItemLootTabledtor_CItemLootTable11_wrapper),
                (LPVOID)cast_pointer_function((void(CItemLootTable::*)())&CItemLootTable::dtor_CItemLootTable)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
