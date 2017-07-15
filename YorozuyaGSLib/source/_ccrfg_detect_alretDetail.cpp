#include <_ccrfg_detect_alretDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_ccrfg_detect_alretsize2_ptr _ccrfg_detect_alretsize2_next(nullptr);
        Info::_ccrfg_detect_alretsize2_clbk _ccrfg_detect_alretsize2_user(nullptr);
        
        int _ccrfg_detect_alretsize2_wrapper(struct _ccrfg_detect_alret* _this)
        {
           return _ccrfg_detect_alretsize2_user(_this, _ccrfg_detect_alretsize2_next);
        };
        
        ::std::array<hook_record, 1> _ccrfg_detect_alret_functions = 
        {
            _hook_record {
                (LPVOID)0x1401e13e0L,
                (LPVOID *)&_ccrfg_detect_alretsize2_user,
                (LPVOID *)&_ccrfg_detect_alretsize2_next,
                (LPVOID)cast_pointer_function(_ccrfg_detect_alretsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_ccrfg_detect_alret::*)())&_ccrfg_detect_alret::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
