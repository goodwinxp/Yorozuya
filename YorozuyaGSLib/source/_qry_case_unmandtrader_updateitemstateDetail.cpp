#include <_qry_case_unmandtrader_updateitemstateDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_qry_case_unmandtrader_updateitemstatesize2_ptr _qry_case_unmandtrader_updateitemstatesize2_next(nullptr);
        Info::_qry_case_unmandtrader_updateitemstatesize2_clbk _qry_case_unmandtrader_updateitemstatesize2_user(nullptr);
        
        int _qry_case_unmandtrader_updateitemstatesize2_wrapper(struct _qry_case_unmandtrader_updateitemstate* _this)
        {
           return _qry_case_unmandtrader_updateitemstatesize2_user(_this, _qry_case_unmandtrader_updateitemstatesize2_next);
        };
        
        ::std::array<hook_record, 1> _qry_case_unmandtrader_updateitemstate_functions = 
        {
            _hook_record {
                (LPVOID)0x140351d90L,
                (LPVOID *)&_qry_case_unmandtrader_updateitemstatesize2_user,
                (LPVOID *)&_qry_case_unmandtrader_updateitemstatesize2_next,
                (LPVOID)cast_pointer_function(_qry_case_unmandtrader_updateitemstatesize2_wrapper),
                (LPVOID)cast_pointer_function((int(_qry_case_unmandtrader_updateitemstate::*)())&_qry_case_unmandtrader_updateitemstate::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
