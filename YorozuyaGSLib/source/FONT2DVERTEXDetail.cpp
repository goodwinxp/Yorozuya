#include <FONT2DVERTEXDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::FONT2DVERTEXctor_FONT2DVERTEX1_ptr FONT2DVERTEXctor_FONT2DVERTEX1_next(nullptr);
        Info::FONT2DVERTEXctor_FONT2DVERTEX1_clbk FONT2DVERTEXctor_FONT2DVERTEX1_user(nullptr);
        
        
        int64_t FONT2DVERTEXctor_FONT2DVERTEX1_wrapper(struct FONT2DVERTEX* _this)
        {
           return FONT2DVERTEXctor_FONT2DVERTEX1_user(_this, FONT2DVERTEXctor_FONT2DVERTEX1_next);
        };
        
        ::std::array<hook_record, 1> FONT2DVERTEX_functions = 
        {
            _hook_record {
                (LPVOID)0x140526bb0L,
                (LPVOID *)&FONT2DVERTEXctor_FONT2DVERTEX1_user,
                (LPVOID *)&FONT2DVERTEXctor_FONT2DVERTEX1_next,
                (LPVOID)cast_pointer_function(FONT2DVERTEXctor_FONT2DVERTEX1_wrapper),
                (LPVOID)cast_pointer_function((int64_t(FONT2DVERTEX::*)())&FONT2DVERTEX::ctor_FONT2DVERTEX)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
