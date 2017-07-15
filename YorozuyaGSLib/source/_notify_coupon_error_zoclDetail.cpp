#include <_notify_coupon_error_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_notify_coupon_error_zoclsize2_ptr _notify_coupon_error_zoclsize2_next(nullptr);
        Info::_notify_coupon_error_zoclsize2_clbk _notify_coupon_error_zoclsize2_user(nullptr);
        
        int _notify_coupon_error_zoclsize2_wrapper(struct _notify_coupon_error_zocl* _this)
        {
           return _notify_coupon_error_zoclsize2_user(_this, _notify_coupon_error_zoclsize2_next);
        };
        
        ::std::array<hook_record, 1> _notify_coupon_error_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1403fea10L,
                (LPVOID *)&_notify_coupon_error_zoclsize2_user,
                (LPVOID *)&_notify_coupon_error_zoclsize2_next,
                (LPVOID)cast_pointer_function(_notify_coupon_error_zoclsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_notify_coupon_error_zocl::*)())&_notify_coupon_error_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
