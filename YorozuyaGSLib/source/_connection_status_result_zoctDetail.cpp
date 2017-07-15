#include <_connection_status_result_zoctDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_connection_status_result_zoctsize2_ptr _connection_status_result_zoctsize2_next(nullptr);
        Info::_connection_status_result_zoctsize2_clbk _connection_status_result_zoctsize2_user(nullptr);
        
        int _connection_status_result_zoctsize2_wrapper(struct _connection_status_result_zoct* _this)
        {
           return _connection_status_result_zoctsize2_user(_this, _connection_status_result_zoctsize2_next);
        };
        
        ::std::array<hook_record, 1> _connection_status_result_zoct_functions = 
        {
            _hook_record {
                (LPVOID)0x1401c7750L,
                (LPVOID *)&_connection_status_result_zoctsize2_user,
                (LPVOID *)&_connection_status_result_zoctsize2_next,
                (LPVOID)cast_pointer_function(_connection_status_result_zoctsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_connection_status_result_zoct::*)())&_connection_status_result_zoct::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
