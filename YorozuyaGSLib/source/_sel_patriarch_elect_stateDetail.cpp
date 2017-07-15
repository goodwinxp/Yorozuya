#include <_sel_patriarch_elect_stateDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_sel_patriarch_elect_statector__sel_patriarch_elect_state2_ptr _sel_patriarch_elect_statector__sel_patriarch_elect_state2_next(nullptr);
        Info::_sel_patriarch_elect_statector__sel_patriarch_elect_state2_clbk _sel_patriarch_elect_statector__sel_patriarch_elect_state2_user(nullptr);
        
        
        void _sel_patriarch_elect_statector__sel_patriarch_elect_state2_wrapper(struct _sel_patriarch_elect_state* _this)
        {
           _sel_patriarch_elect_statector__sel_patriarch_elect_state2_user(_this, _sel_patriarch_elect_statector__sel_patriarch_elect_state2_next);
        };
        
        ::std::array<hook_record, 1> _sel_patriarch_elect_state_functions = 
        {
            _hook_record {
                (LPVOID)0x1402bd610L,
                (LPVOID *)&_sel_patriarch_elect_statector__sel_patriarch_elect_state2_user,
                (LPVOID *)&_sel_patriarch_elect_statector__sel_patriarch_elect_state2_next,
                (LPVOID)cast_pointer_function(_sel_patriarch_elect_statector__sel_patriarch_elect_state2_wrapper),
                (LPVOID)cast_pointer_function((void(_sel_patriarch_elect_state::*)())&_sel_patriarch_elect_state::ctor__sel_patriarch_elect_state)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
