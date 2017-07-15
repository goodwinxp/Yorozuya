#include <_cash_discount_Detail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_cash_discount_ctor__cash_discount_2_ptr _cash_discount_ctor__cash_discount_2_next(nullptr);
        Info::_cash_discount_ctor__cash_discount_2_clbk _cash_discount_ctor__cash_discount_2_user(nullptr);
        
        
        Info::_cash_discount_dtor__cash_discount_4_ptr _cash_discount_dtor__cash_discount_4_next(nullptr);
        Info::_cash_discount_dtor__cash_discount_4_clbk _cash_discount_dtor__cash_discount_4_user(nullptr);
        
        
        void _cash_discount_ctor__cash_discount_2_wrapper(struct _cash_discount_* _this)
        {
           _cash_discount_ctor__cash_discount_2_user(_this, _cash_discount_ctor__cash_discount_2_next);
        };
        
        void _cash_discount_dtor__cash_discount_4_wrapper(struct _cash_discount_* _this)
        {
           _cash_discount_dtor__cash_discount_4_user(_this, _cash_discount_dtor__cash_discount_4_next);
        };
        
        ::std::array<hook_record, 2> _cash_discount__functions = 
        {
            _hook_record {
                (LPVOID)0x1403043f0L,
                (LPVOID *)&_cash_discount_ctor__cash_discount_2_user,
                (LPVOID *)&_cash_discount_ctor__cash_discount_2_next,
                (LPVOID)cast_pointer_function(_cash_discount_ctor__cash_discount_2_wrapper),
                (LPVOID)cast_pointer_function((void(_cash_discount_::*)())&_cash_discount_::ctor__cash_discount_)
            },
            _hook_record {
                (LPVOID)0x1403046d0L,
                (LPVOID *)&_cash_discount_dtor__cash_discount_4_user,
                (LPVOID *)&_cash_discount_dtor__cash_discount_4_next,
                (LPVOID)cast_pointer_function(_cash_discount_dtor__cash_discount_4_wrapper),
                (LPVOID)cast_pointer_function((void(_cash_discount_::*)())&_cash_discount_::dtor__cash_discount_)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
