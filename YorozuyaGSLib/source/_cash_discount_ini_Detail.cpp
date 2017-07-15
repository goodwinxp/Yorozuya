#include <_cash_discount_ini_Detail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_cash_discount_ini_ctor__cash_discount_ini_2_ptr _cash_discount_ini_ctor__cash_discount_ini_2_next(nullptr);
        Info::_cash_discount_ini_ctor__cash_discount_ini_2_clbk _cash_discount_ini_ctor__cash_discount_ini_2_user(nullptr);
        
        
        void _cash_discount_ini_ctor__cash_discount_ini_2_wrapper(struct _cash_discount_ini_* _this)
        {
           _cash_discount_ini_ctor__cash_discount_ini_2_user(_this, _cash_discount_ini_ctor__cash_discount_ini_2_next);
        };
        
        ::std::array<hook_record, 1> _cash_discount_ini__functions = 
        {
            _hook_record {
                (LPVOID)0x1403044f0L,
                (LPVOID *)&_cash_discount_ini_ctor__cash_discount_ini_2_user,
                (LPVOID *)&_cash_discount_ini_ctor__cash_discount_ini_2_next,
                (LPVOID)cast_pointer_function(_cash_discount_ini_ctor__cash_discount_ini_2_wrapper),
                (LPVOID)cast_pointer_function((void(_cash_discount_ini_::*)())&_cash_discount_ini_::ctor__cash_discount_ini_)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
