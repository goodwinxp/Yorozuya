#include <_qry_case_in_guildbattlerewardmoneyDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_qry_case_in_guildbattlerewardmoneysize2_ptr _qry_case_in_guildbattlerewardmoneysize2_next(nullptr);
        Info::_qry_case_in_guildbattlerewardmoneysize2_clbk _qry_case_in_guildbattlerewardmoneysize2_user(nullptr);
        
        int _qry_case_in_guildbattlerewardmoneysize2_wrapper(struct _qry_case_in_guildbattlerewardmoney* _this)
        {
           return _qry_case_in_guildbattlerewardmoneysize2_user(_this, _qry_case_in_guildbattlerewardmoneysize2_next);
        };
        
        ::std::array<hook_record, 1> _qry_case_in_guildbattlerewardmoney_functions = 
        {
            _hook_record {
                (LPVOID)0x14025d5e0L,
                (LPVOID *)&_qry_case_in_guildbattlerewardmoneysize2_user,
                (LPVOID *)&_qry_case_in_guildbattlerewardmoneysize2_next,
                (LPVOID)cast_pointer_function(_qry_case_in_guildbattlerewardmoneysize2_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_in_guildbattlerewardmoney::*)())&_qry_case_in_guildbattlerewardmoney::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
