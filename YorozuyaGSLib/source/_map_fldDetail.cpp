#include <_map_fldDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_map_fldctor__map_fld2_ptr _map_fldctor__map_fld2_next(nullptr);
        Info::_map_fldctor__map_fld2_clbk _map_fldctor__map_fld2_user(nullptr);
        
        
        void _map_fldctor__map_fld2_wrapper(struct _map_fld* _this)
        {
           _map_fldctor__map_fld2_user(_this, _map_fldctor__map_fld2_next);
        };
        
        ::std::array<hook_record, 1> _map_fld_functions = 
        {
            _hook_record {
                (LPVOID)0x140198ff0L,
                (LPVOID *)&_map_fldctor__map_fld2_user,
                (LPVOID *)&_map_fldctor__map_fld2_next,
                (LPVOID)cast_pointer_function(_map_fldctor__map_fld2_wrapper),
                (LPVOID)cast_pointer_function((void(_map_fld::*)())&_map_fld::ctor__map_fld)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
