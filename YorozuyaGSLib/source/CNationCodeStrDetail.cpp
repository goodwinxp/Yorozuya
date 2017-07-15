#include <CNationCodeStrDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CNationCodeStrctor_CNationCodeStr2_ptr CNationCodeStrctor_CNationCodeStr2_next(nullptr);
        Info::CNationCodeStrctor_CNationCodeStr2_clbk CNationCodeStrctor_CNationCodeStr2_user(nullptr);
        
        Info::CNationCodeStrGetKey4_ptr CNationCodeStrGetKey4_next(nullptr);
        Info::CNationCodeStrGetKey4_clbk CNationCodeStrGetKey4_user(nullptr);
        
        Info::CNationCodeStrGetStr6_ptr CNationCodeStrGetStr6_next(nullptr);
        Info::CNationCodeStrGetStr6_clbk CNationCodeStrGetStr6_user(nullptr);
        
        Info::CNationCodeStrIsNULL8_ptr CNationCodeStrIsNULL8_next(nullptr);
        Info::CNationCodeStrIsNULL8_clbk CNationCodeStrIsNULL8_user(nullptr);
        
        
        Info::CNationCodeStrdtor_CNationCodeStr12_ptr CNationCodeStrdtor_CNationCodeStr12_next(nullptr);
        Info::CNationCodeStrdtor_CNationCodeStr12_clbk CNationCodeStrdtor_CNationCodeStr12_user(nullptr);
        
        
        void CNationCodeStrctor_CNationCodeStr2_wrapper(struct CNationCodeStr* _this, int iCode, char* szCodeStr)
        {
           CNationCodeStrctor_CNationCodeStr2_user(_this, iCode, szCodeStr, CNationCodeStrctor_CNationCodeStr2_next);
        };
        int CNationCodeStrGetKey4_wrapper(struct CNationCodeStr* _this)
        {
           return CNationCodeStrGetKey4_user(_this, CNationCodeStrGetKey4_next);
        };
        char* CNationCodeStrGetStr6_wrapper(struct CNationCodeStr* _this)
        {
           return CNationCodeStrGetStr6_user(_this, CNationCodeStrGetStr6_next);
        };
        bool CNationCodeStrIsNULL8_wrapper(struct CNationCodeStr* _this)
        {
           return CNationCodeStrIsNULL8_user(_this, CNationCodeStrIsNULL8_next);
        };
        
        void CNationCodeStrdtor_CNationCodeStr12_wrapper(struct CNationCodeStr* _this)
        {
           CNationCodeStrdtor_CNationCodeStr12_user(_this, CNationCodeStrdtor_CNationCodeStr12_next);
        };
        
        ::std::array<hook_record, 5> CNationCodeStr_functions = 
        {
            _hook_record {
                (LPVOID)0x14020abe0L,
                (LPVOID *)&CNationCodeStrctor_CNationCodeStr2_user,
                (LPVOID *)&CNationCodeStrctor_CNationCodeStr2_next,
                (LPVOID)cast_pointer_function(CNationCodeStrctor_CNationCodeStr2_wrapper),
                (LPVOID)cast_pointer_function((void(CNationCodeStr::*)(int, char*))&CNationCodeStr::ctor_CNationCodeStr)
            },
            _hook_record {
                (LPVOID)0x14020bc10L,
                (LPVOID *)&CNationCodeStrGetKey4_user,
                (LPVOID *)&CNationCodeStrGetKey4_next,
                (LPVOID)cast_pointer_function(CNationCodeStrGetKey4_wrapper),
                (LPVOID)cast_pointer_function((int(CNationCodeStr::*)())&CNationCodeStr::GetKey)
            },
            _hook_record {
                (LPVOID)0x14020b980L,
                (LPVOID *)&CNationCodeStrGetStr6_user,
                (LPVOID *)&CNationCodeStrGetStr6_next,
                (LPVOID)cast_pointer_function(CNationCodeStrGetStr6_wrapper),
                (LPVOID)cast_pointer_function((char*(CNationCodeStr::*)())&CNationCodeStr::GetStr)
            },
            _hook_record {
                (LPVOID)0x14020bc30L,
                (LPVOID *)&CNationCodeStrIsNULL8_user,
                (LPVOID *)&CNationCodeStrIsNULL8_next,
                (LPVOID)cast_pointer_function(CNationCodeStrIsNULL8_wrapper),
                (LPVOID)cast_pointer_function((bool(CNationCodeStr::*)())&CNationCodeStr::IsNULL)
            },
            _hook_record {
                (LPVOID)0x14020a350L,
                (LPVOID *)&CNationCodeStrdtor_CNationCodeStr12_user,
                (LPVOID *)&CNationCodeStrdtor_CNationCodeStr12_next,
                (LPVOID)cast_pointer_function(CNationCodeStrdtor_CNationCodeStr12_wrapper),
                (LPVOID)cast_pointer_function((void(CNationCodeStr::*)())&CNationCodeStr::dtor_CNationCodeStr)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
