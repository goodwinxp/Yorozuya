#include <_log_change_class_after_init_classDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_log_change_class_after_init_classsize2_ptr _log_change_class_after_init_classsize2_next(nullptr);
        Info::_log_change_class_after_init_classsize2_clbk _log_change_class_after_init_classsize2_user(nullptr);
        
        int _log_change_class_after_init_classsize2_wrapper(struct _log_change_class_after_init_class* _this)
        {
           return _log_change_class_after_init_classsize2_user(_this, _log_change_class_after_init_classsize2_next);
        };
        
        ::std::array<hook_record, 1> _log_change_class_after_init_class_functions = 
        {
            _hook_record {
                (LPVOID)0x140120e20L,
                (LPVOID *)&_log_change_class_after_init_classsize2_user,
                (LPVOID *)&_log_change_class_after_init_classsize2_next,
                (LPVOID)cast_pointer_function(_log_change_class_after_init_classsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_log_change_class_after_init_class::*)())&_log_change_class_after_init_class::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
