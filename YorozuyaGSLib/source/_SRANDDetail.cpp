#include <_SRANDDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_SRANDctor__SRAND2_ptr _SRANDctor__SRAND2_next(nullptr);
        Info::_SRANDctor__SRAND2_clbk _SRANDctor__SRAND2_user(nullptr);
        
        
        void _SRANDctor__SRAND2_wrapper(struct _SRAND* _this)
        {
           _SRANDctor__SRAND2_user(_this, _SRANDctor__SRAND2_next);
        };
        
        ::std::array<hook_record, 1> _SRAND_functions = 
        {
            _hook_record {
                (LPVOID)0x140202390L,
                (LPVOID *)&_SRANDctor__SRAND2_user,
                (LPVOID *)&_SRANDctor__SRAND2_next,
                (LPVOID)cast_pointer_function(_SRANDctor__SRAND2_wrapper),
                (LPVOID)cast_pointer_function((void(_SRAND::*)())&_SRAND::ctor__SRAND)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
