#include <CNationCodeStrTableDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CNationCodeStrTablector_CNationCodeStrTable2_ptr CNationCodeStrTablector_CNationCodeStrTable2_next(nullptr);
        Info::CNationCodeStrTablector_CNationCodeStrTable2_clbk CNationCodeStrTablector_CNationCodeStrTable2_user(nullptr);
        
        Info::CNationCodeStrTableGetCode4_ptr CNationCodeStrTableGetCode4_next(nullptr);
        Info::CNationCodeStrTableGetCode4_clbk CNationCodeStrTableGetCode4_user(nullptr);
        
        Info::CNationCodeStrTableGetStr6_ptr CNationCodeStrTableGetStr6_next(nullptr);
        Info::CNationCodeStrTableGetStr6_clbk CNationCodeStrTableGetStr6_user(nullptr);
        
        Info::CNationCodeStrTableInit8_ptr CNationCodeStrTableInit8_next(nullptr);
        Info::CNationCodeStrTableInit8_clbk CNationCodeStrTableInit8_user(nullptr);
        
        Info::CNationCodeStrTableRegistCode10_ptr CNationCodeStrTableRegistCode10_next(nullptr);
        Info::CNationCodeStrTableRegistCode10_clbk CNationCodeStrTableRegistCode10_user(nullptr);
        
        
        Info::CNationCodeStrTabledtor_CNationCodeStrTable12_ptr CNationCodeStrTabledtor_CNationCodeStrTable12_next(nullptr);
        Info::CNationCodeStrTabledtor_CNationCodeStrTable12_clbk CNationCodeStrTabledtor_CNationCodeStrTable12_user(nullptr);
        
        
        void CNationCodeStrTablector_CNationCodeStrTable2_wrapper(struct CNationCodeStrTable* _this)
        {
           CNationCodeStrTablector_CNationCodeStrTable2_user(_this, CNationCodeStrTablector_CNationCodeStrTable2_next);
        };
        int CNationCodeStrTableGetCode4_wrapper(struct CNationCodeStrTable* _this, char* szCodeStr)
        {
           return CNationCodeStrTableGetCode4_user(_this, szCodeStr, CNationCodeStrTableGetCode4_next);
        };
        char* CNationCodeStrTableGetStr6_wrapper(struct CNationCodeStrTable* _this, int iType)
        {
           return CNationCodeStrTableGetStr6_user(_this, iType, CNationCodeStrTableGetStr6_next);
        };
        bool CNationCodeStrTableInit8_wrapper(struct CNationCodeStrTable* _this)
        {
           return CNationCodeStrTableInit8_user(_this, CNationCodeStrTableInit8_next);
        };
        int CNationCodeStrTableRegistCode10_wrapper(struct CNationCodeStrTable* _this)
        {
           return CNationCodeStrTableRegistCode10_user(_this, CNationCodeStrTableRegistCode10_next);
        };
        
        void CNationCodeStrTabledtor_CNationCodeStrTable12_wrapper(struct CNationCodeStrTable* _this)
        {
           CNationCodeStrTabledtor_CNationCodeStrTable12_user(_this, CNationCodeStrTabledtor_CNationCodeStrTable12_next);
        };
        
        ::std::array<hook_record, 6> CNationCodeStrTable_functions = 
        {
            _hook_record {
                (LPVOID)0x140204ad0L,
                (LPVOID *)&CNationCodeStrTablector_CNationCodeStrTable2_user,
                (LPVOID *)&CNationCodeStrTablector_CNationCodeStrTable2_next,
                (LPVOID)cast_pointer_function(CNationCodeStrTablector_CNationCodeStrTable2_wrapper),
                (LPVOID)cast_pointer_function((void(CNationCodeStrTable::*)())&CNationCodeStrTable::ctor_CNationCodeStrTable)
            },
            _hook_record {
                (LPVOID)0x14020aca0L,
                (LPVOID *)&CNationCodeStrTableGetCode4_user,
                (LPVOID *)&CNationCodeStrTableGetCode4_next,
                (LPVOID)cast_pointer_function(CNationCodeStrTableGetCode4_wrapper),
                (LPVOID)cast_pointer_function((int(CNationCodeStrTable::*)(char*))&CNationCodeStrTable::GetCode)
            },
            _hook_record {
                (LPVOID)0x14020adb0L,
                (LPVOID *)&CNationCodeStrTableGetStr6_user,
                (LPVOID *)&CNationCodeStrTableGetStr6_next,
                (LPVOID)cast_pointer_function(CNationCodeStrTableGetStr6_wrapper),
                (LPVOID)cast_pointer_function((char*(CNationCodeStrTable::*)(int))&CNationCodeStrTable::GetStr)
            },
            _hook_record {
                (LPVOID)0x14020ac40L,
                (LPVOID *)&CNationCodeStrTableInit8_user,
                (LPVOID *)&CNationCodeStrTableInit8_next,
                (LPVOID)cast_pointer_function(CNationCodeStrTableInit8_wrapper),
                (LPVOID)cast_pointer_function((bool(CNationCodeStrTable::*)())&CNationCodeStrTable::Init)
            },
            _hook_record {
                (LPVOID)0x14020ae30L,
                (LPVOID *)&CNationCodeStrTableRegistCode10_user,
                (LPVOID *)&CNationCodeStrTableRegistCode10_next,
                (LPVOID)cast_pointer_function(CNationCodeStrTableRegistCode10_wrapper),
                (LPVOID)cast_pointer_function((int(CNationCodeStrTable::*)())&CNationCodeStrTable::RegistCode)
            },
            _hook_record {
                (LPVOID)0x140204b20L,
                (LPVOID *)&CNationCodeStrTabledtor_CNationCodeStrTable12_user,
                (LPVOID *)&CNationCodeStrTabledtor_CNationCodeStrTable12_next,
                (LPVOID)cast_pointer_function(CNationCodeStrTabledtor_CNationCodeStrTable12_wrapper),
                (LPVOID)cast_pointer_function((void(CNationCodeStrTable::*)())&CNationCodeStrTable::dtor_CNationCodeStrTable)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
