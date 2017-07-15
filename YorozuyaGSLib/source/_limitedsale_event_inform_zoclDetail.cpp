#include <_limitedsale_event_inform_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_limitedsale_event_inform_zoclsize2_ptr _limitedsale_event_inform_zoclsize2_next(nullptr);
        Info::_limitedsale_event_inform_zoclsize2_clbk _limitedsale_event_inform_zoclsize2_user(nullptr);
        
        int _limitedsale_event_inform_zoclsize2_wrapper(struct _limitedsale_event_inform_zocl* _this)
        {
           return _limitedsale_event_inform_zoclsize2_user(_this, _limitedsale_event_inform_zoclsize2_next);
        };
        
        ::std::array<hook_record, 1> _limitedsale_event_inform_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x14030d780L,
                (LPVOID *)&_limitedsale_event_inform_zoclsize2_user,
                (LPVOID *)&_limitedsale_event_inform_zoclsize2_next,
                (LPVOID)cast_pointer_function(_limitedsale_event_inform_zoclsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_limitedsale_event_inform_zocl::*)())&_limitedsale_event_inform_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
