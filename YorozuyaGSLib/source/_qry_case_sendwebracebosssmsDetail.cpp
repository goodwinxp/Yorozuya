#include <_qry_case_sendwebracebosssmsDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_qry_case_sendwebracebosssmssize2_ptr _qry_case_sendwebracebosssmssize2_next(nullptr);
        Info::_qry_case_sendwebracebosssmssize2_clbk _qry_case_sendwebracebosssmssize2_user(nullptr);
        
        int _qry_case_sendwebracebosssmssize2_wrapper(struct _qry_case_sendwebracebosssms* _this)
        {
           return _qry_case_sendwebracebosssmssize2_user(_this, _qry_case_sendwebracebosssmssize2_next);
        };
        
        ::std::array<hook_record, 1> _qry_case_sendwebracebosssms_functions = 
        {
            _hook_record {
                (LPVOID)0x1401dab00L,
                (LPVOID *)&_qry_case_sendwebracebosssmssize2_user,
                (LPVOID *)&_qry_case_sendwebracebosssmssize2_next,
                (LPVOID)cast_pointer_function(_qry_case_sendwebracebosssmssize2_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_sendwebracebosssms::*)())&_qry_case_sendwebracebosssms::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
