#include <CEventLootTableDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CEventLootTableAddRecord2_ptr CEventLootTableAddRecord2_next(nullptr);
        Info::CEventLootTableAddRecord2_clbk CEventLootTableAddRecord2_user(nullptr);
        
        
        Info::CEventLootTablector_CEventLootTable4_ptr CEventLootTablector_CEventLootTable4_next(nullptr);
        Info::CEventLootTablector_CEventLootTable4_clbk CEventLootTablector_CEventLootTable4_user(nullptr);
        
        Info::CEventLootTableGetRecord6_ptr CEventLootTableGetRecord6_next(nullptr);
        Info::CEventLootTableGetRecord6_clbk CEventLootTableGetRecord6_user(nullptr);
        
        Info::CEventLootTableReadRecord8_ptr CEventLootTableReadRecord8_next(nullptr);
        Info::CEventLootTableReadRecord8_clbk CEventLootTableReadRecord8_user(nullptr);
        
        
        Info::CEventLootTabledtor_CEventLootTable13_ptr CEventLootTabledtor_CEventLootTable13_next(nullptr);
        Info::CEventLootTabledtor_CEventLootTable13_clbk CEventLootTabledtor_CEventLootTable13_user(nullptr);
        
        void CEventLootTableAddRecord2_wrapper(struct CEventLootTable* _this, struct CEventLootTable::_event_drop* pEventDrop)
        {
           CEventLootTableAddRecord2_user(_this, pEventDrop, CEventLootTableAddRecord2_next);
        };
        
        void CEventLootTablector_CEventLootTable4_wrapper(struct CEventLootTable* _this)
        {
           CEventLootTablector_CEventLootTable4_user(_this, CEventLootTablector_CEventLootTable4_next);
        };
        struct CEventLootTable::_event_drop* CEventLootTableGetRecord6_wrapper(struct CEventLootTable* _this, char* szRecordCode)
        {
           return CEventLootTableGetRecord6_user(_this, szRecordCode, CEventLootTableGetRecord6_next);
        };
        bool CEventLootTableReadRecord8_wrapper(struct CEventLootTable* _this)
        {
           return CEventLootTableReadRecord8_user(_this, CEventLootTableReadRecord8_next);
        };
        
        void CEventLootTabledtor_CEventLootTable13_wrapper(struct CEventLootTable* _this)
        {
           CEventLootTabledtor_CEventLootTable13_user(_this, CEventLootTabledtor_CEventLootTable13_next);
        };
        
        ::std::array<hook_record, 5> CEventLootTable_functions = 
        {
            _hook_record {
                (LPVOID)0x140203e70L,
                (LPVOID *)&CEventLootTableAddRecord2_user,
                (LPVOID *)&CEventLootTableAddRecord2_next,
                (LPVOID)cast_pointer_function(CEventLootTableAddRecord2_wrapper),
                (LPVOID)cast_pointer_function((void(CEventLootTable::*)(struct CEventLootTable::_event_drop*))&CEventLootTable::AddRecord)
            },
            _hook_record {
                (LPVOID)0x140202640L,
                (LPVOID *)&CEventLootTablector_CEventLootTable4_user,
                (LPVOID *)&CEventLootTablector_CEventLootTable4_next,
                (LPVOID)cast_pointer_function(CEventLootTablector_CEventLootTable4_wrapper),
                (LPVOID)cast_pointer_function((void(CEventLootTable::*)())&CEventLootTable::ctor_CEventLootTable)
            },
            _hook_record {
                (LPVOID)0x140136c80L,
                (LPVOID *)&CEventLootTableGetRecord6_user,
                (LPVOID *)&CEventLootTableGetRecord6_next,
                (LPVOID)cast_pointer_function(CEventLootTableGetRecord6_wrapper),
                (LPVOID)cast_pointer_function((struct CEventLootTable::_event_drop*(CEventLootTable::*)(char*))&CEventLootTable::GetRecord)
            },
            _hook_record {
                (LPVOID)0x140203ac0L,
                (LPVOID *)&CEventLootTableReadRecord8_user,
                (LPVOID *)&CEventLootTableReadRecord8_next,
                (LPVOID)cast_pointer_function(CEventLootTableReadRecord8_wrapper),
                (LPVOID)cast_pointer_function((bool(CEventLootTable::*)())&CEventLootTable::ReadRecord)
            },
            _hook_record {
                (LPVOID)0x1402026f0L,
                (LPVOID *)&CEventLootTabledtor_CEventLootTable13_user,
                (LPVOID *)&CEventLootTabledtor_CEventLootTable13_next,
                (LPVOID)cast_pointer_function(CEventLootTabledtor_CEventLootTable13_wrapper),
                (LPVOID)cast_pointer_function((void(CEventLootTable::*)())&CEventLootTable::dtor_CEventLootTable)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
