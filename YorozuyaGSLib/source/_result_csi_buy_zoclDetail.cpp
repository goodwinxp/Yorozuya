#include <_result_csi_buy_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_result_csi_buy_zoclctor__result_csi_buy_zocl2_ptr _result_csi_buy_zoclctor__result_csi_buy_zocl2_next(nullptr);
        Info::_result_csi_buy_zoclctor__result_csi_buy_zocl2_clbk _result_csi_buy_zoclctor__result_csi_buy_zocl2_user(nullptr);
        
        Info::_result_csi_buy_zoclsize4_ptr _result_csi_buy_zoclsize4_next(nullptr);
        Info::_result_csi_buy_zoclsize4_clbk _result_csi_buy_zoclsize4_user(nullptr);
        
        
        void _result_csi_buy_zoclctor__result_csi_buy_zocl2_wrapper(struct _result_csi_buy_zocl* _this)
        {
           _result_csi_buy_zoclctor__result_csi_buy_zocl2_user(_this, _result_csi_buy_zoclctor__result_csi_buy_zocl2_next);
        };
        int _result_csi_buy_zoclsize4_wrapper(struct _result_csi_buy_zocl* _this)
        {
           return _result_csi_buy_zoclsize4_user(_this, _result_csi_buy_zoclsize4_next);
        };
        
        ::std::array<hook_record, 2> _result_csi_buy_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1402f2fb0L,
                (LPVOID *)&_result_csi_buy_zoclctor__result_csi_buy_zocl2_user,
                (LPVOID *)&_result_csi_buy_zoclctor__result_csi_buy_zocl2_next,
                (LPVOID)cast_pointer_function(_result_csi_buy_zoclctor__result_csi_buy_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_result_csi_buy_zocl::*)())&_result_csi_buy_zocl::ctor__result_csi_buy_zocl)
            },
            _hook_record {
                (LPVOID)0x1402f2fe0L,
                (LPVOID *)&_result_csi_buy_zoclsize4_user,
                (LPVOID *)&_result_csi_buy_zoclsize4_next,
                (LPVOID)cast_pointer_function(_result_csi_buy_zoclsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_result_csi_buy_zocl::*)())&_result_csi_buy_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
