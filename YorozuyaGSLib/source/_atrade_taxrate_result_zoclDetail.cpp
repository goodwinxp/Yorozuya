#include <_atrade_taxrate_result_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_atrade_taxrate_result_zoclsize2_ptr _atrade_taxrate_result_zoclsize2_next(nullptr);
        Info::_atrade_taxrate_result_zoclsize2_clbk _atrade_taxrate_result_zoclsize2_user(nullptr);
        
        int _atrade_taxrate_result_zoclsize2_wrapper(struct _atrade_taxrate_result_zocl* _this)
        {
           return _atrade_taxrate_result_zoclsize2_user(_this, _atrade_taxrate_result_zoclsize2_next);
        };
        
        ::std::array<hook_record, 1> _atrade_taxrate_result_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1402d9990L,
                (LPVOID *)&_atrade_taxrate_result_zoclsize2_user,
                (LPVOID *)&_atrade_taxrate_result_zoclsize2_next,
                (LPVOID)cast_pointer_function(_atrade_taxrate_result_zoclsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_atrade_taxrate_result_zocl::*)())&_atrade_taxrate_result_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
