#include <_record_bin_headerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_record_bin_headerctor__record_bin_header2_ptr _record_bin_headerctor__record_bin_header2_next(nullptr);
        Info::_record_bin_headerctor__record_bin_header2_clbk _record_bin_headerctor__record_bin_header2_user(nullptr);
        
        
        void _record_bin_headerctor__record_bin_header2_wrapper(struct _record_bin_header* _this)
        {
           _record_bin_headerctor__record_bin_header2_user(_this, _record_bin_headerctor__record_bin_header2_next);
        };
        
        ::std::array<hook_record, 1> _record_bin_header_functions = 
        {
            _hook_record {
                (LPVOID)0x140044720L,
                (LPVOID *)&_record_bin_headerctor__record_bin_header2_user,
                (LPVOID *)&_record_bin_headerctor__record_bin_header2_next,
                (LPVOID)cast_pointer_function(_record_bin_headerctor__record_bin_header2_wrapper),
                (LPVOID)cast_pointer_function((void(_record_bin_header::*)())&_record_bin_header::ctor__record_bin_header)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
