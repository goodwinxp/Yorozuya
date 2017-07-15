#include <_check_queryDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_check_querysize2_ptr _check_querysize2_next(nullptr);
        Info::_check_querysize2_clbk _check_querysize2_user(nullptr);
        
        int _check_querysize2_wrapper(struct _check_query* _this)
        {
           return _check_querysize2_user(_this, _check_querysize2_next);
        };
        
        ::std::array<hook_record, 1> _check_query_functions = 
        {
            _hook_record {
                (LPVOID)0x14047db10L,
                (LPVOID *)&_check_querysize2_user,
                (LPVOID *)&_check_querysize2_next,
                (LPVOID)cast_pointer_function(_check_querysize2_wrapper),
                (LPVOID)cast_pointer_function((int(_check_query::*)())&_check_query::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
