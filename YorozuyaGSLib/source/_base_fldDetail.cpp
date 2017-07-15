#include <_base_fldDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_base_fldctor__base_fld2_ptr _base_fldctor__base_fld2_next(nullptr);
        Info::_base_fldctor__base_fld2_clbk _base_fldctor__base_fld2_user(nullptr);
        
        
        void _base_fldctor__base_fld2_wrapper(struct _base_fld* _this)
        {
           _base_fldctor__base_fld2_user(_this, _base_fldctor__base_fld2_next);
        };
        
        ::std::array<hook_record, 1> _base_fld_functions = 
        {
            _hook_record {
                (LPVOID)0x140161930L,
                (LPVOID *)&_base_fldctor__base_fld2_user,
                (LPVOID *)&_base_fldctor__base_fld2_next,
                (LPVOID)cast_pointer_function(_base_fldctor__base_fld2_wrapper),
                (LPVOID)cast_pointer_function((void(_base_fld::*)())&_base_fld::ctor__base_fld)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
