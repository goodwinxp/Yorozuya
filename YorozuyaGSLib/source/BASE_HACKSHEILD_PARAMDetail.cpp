#include <BASE_HACKSHEILD_PARAMDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::BASE_HACKSHEILD_PARAMctor_BASE_HACKSHEILD_PARAM2_ptr BASE_HACKSHEILD_PARAMctor_BASE_HACKSHEILD_PARAM2_next(nullptr);
        Info::BASE_HACKSHEILD_PARAMctor_BASE_HACKSHEILD_PARAM2_clbk BASE_HACKSHEILD_PARAMctor_BASE_HACKSHEILD_PARAM2_user(nullptr);
        
        
        void BASE_HACKSHEILD_PARAMctor_BASE_HACKSHEILD_PARAM2_wrapper(struct BASE_HACKSHEILD_PARAM* _this)
        {
           BASE_HACKSHEILD_PARAMctor_BASE_HACKSHEILD_PARAM2_user(_this, BASE_HACKSHEILD_PARAMctor_BASE_HACKSHEILD_PARAM2_next);
        };
        
        ::std::array<hook_record, 1> BASE_HACKSHEILD_PARAM_functions = 
        {
            _hook_record {
                (LPVOID)0x140417930L,
                (LPVOID *)&BASE_HACKSHEILD_PARAMctor_BASE_HACKSHEILD_PARAM2_user,
                (LPVOID *)&BASE_HACKSHEILD_PARAMctor_BASE_HACKSHEILD_PARAM2_next,
                (LPVOID)cast_pointer_function(BASE_HACKSHEILD_PARAMctor_BASE_HACKSHEILD_PARAM2_wrapper),
                (LPVOID)cast_pointer_function((void(BASE_HACKSHEILD_PARAM::*)())&BASE_HACKSHEILD_PARAM::ctor_BASE_HACKSHEILD_PARAM)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
