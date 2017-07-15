#include <_qry_case_in_guildbattlecostDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_qry_case_in_guildbattlecostsize2_ptr _qry_case_in_guildbattlecostsize2_next(nullptr);
        Info::_qry_case_in_guildbattlecostsize2_clbk _qry_case_in_guildbattlecostsize2_user(nullptr);
        
        int _qry_case_in_guildbattlecostsize2_wrapper(struct _qry_case_in_guildbattlecost* _this)
        {
           return _qry_case_in_guildbattlecostsize2_user(_this, _qry_case_in_guildbattlecostsize2_next);
        };
        
        ::std::array<hook_record, 1> _qry_case_in_guildbattlecost_functions = 
        {
            _hook_record {
                (LPVOID)0x14025d5b0L,
                (LPVOID *)&_qry_case_in_guildbattlecostsize2_user,
                (LPVOID *)&_qry_case_in_guildbattlecostsize2_next,
                (LPVOID)cast_pointer_function(_qry_case_in_guildbattlecostsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_in_guildbattlecost::*)())&_qry_case_in_guildbattlecost::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
