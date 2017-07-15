#include <_pt_notify_final_decisionDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_pt_notify_final_decisionctor__pt_notify_final_decision2_ptr _pt_notify_final_decisionctor__pt_notify_final_decision2_next(nullptr);
        Info::_pt_notify_final_decisionctor__pt_notify_final_decision2_clbk _pt_notify_final_decisionctor__pt_notify_final_decision2_user(nullptr);
        
        Info::_pt_notify_final_decisionsize4_ptr _pt_notify_final_decisionsize4_next(nullptr);
        Info::_pt_notify_final_decisionsize4_clbk _pt_notify_final_decisionsize4_user(nullptr);
        
        
        void _pt_notify_final_decisionctor__pt_notify_final_decision2_wrapper(struct _pt_notify_final_decision* _this)
        {
           _pt_notify_final_decisionctor__pt_notify_final_decision2_user(_this, _pt_notify_final_decisionctor__pt_notify_final_decision2_next);
        };
        int _pt_notify_final_decisionsize4_wrapper(struct _pt_notify_final_decision* _this)
        {
           return _pt_notify_final_decisionsize4_user(_this, _pt_notify_final_decisionsize4_next);
        };
        
        ::std::array<hook_record, 2> _pt_notify_final_decision_functions = 
        {
            _hook_record {
                (LPVOID)0x1402be420L,
                (LPVOID *)&_pt_notify_final_decisionctor__pt_notify_final_decision2_user,
                (LPVOID *)&_pt_notify_final_decisionctor__pt_notify_final_decision2_next,
                (LPVOID)cast_pointer_function(_pt_notify_final_decisionctor__pt_notify_final_decision2_wrapper),
                (LPVOID)cast_pointer_function((void(_pt_notify_final_decision::*)())&_pt_notify_final_decision::ctor__pt_notify_final_decision)
            },
            _hook_record {
                (LPVOID)0x1402be520L,
                (LPVOID *)&_pt_notify_final_decisionsize4_user,
                (LPVOID *)&_pt_notify_final_decisionsize4_next,
                (LPVOID)cast_pointer_function(_pt_notify_final_decisionsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_pt_notify_final_decision::*)())&_pt_notify_final_decision::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
