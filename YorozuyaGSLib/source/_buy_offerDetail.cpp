#include <_buy_offerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_buy_offerctor__buy_offer2_ptr _buy_offerctor__buy_offer2_next(nullptr);
        Info::_buy_offerctor__buy_offer2_clbk _buy_offerctor__buy_offer2_user(nullptr);
        
        
        void _buy_offerctor__buy_offer2_wrapper(struct _buy_offer* _this)
        {
           _buy_offerctor__buy_offer2_user(_this, _buy_offerctor__buy_offer2_next);
        };
        
        ::std::array<hook_record, 1> _buy_offer_functions = 
        {
            _hook_record {
                (LPVOID)0x1400f7820L,
                (LPVOID *)&_buy_offerctor__buy_offer2_user,
                (LPVOID *)&_buy_offerctor__buy_offer2_next,
                (LPVOID)cast_pointer_function(_buy_offerctor__buy_offer2_wrapper),
                (LPVOID)cast_pointer_function((void(_buy_offer::*)())&_buy_offer::ctor__buy_offer)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
