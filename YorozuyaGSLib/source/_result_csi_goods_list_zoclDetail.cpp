#include <_result_csi_goods_list_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_result_csi_goods_list_zoclsize2_ptr _result_csi_goods_list_zoclsize2_next(nullptr);
        Info::_result_csi_goods_list_zoclsize2_clbk _result_csi_goods_list_zoclsize2_user(nullptr);
        
        int _result_csi_goods_list_zoclsize2_wrapper(struct _result_csi_goods_list_zocl* _this)
        {
           return _result_csi_goods_list_zoclsize2_user(_this, _result_csi_goods_list_zoclsize2_next);
        };
        
        ::std::array<hook_record, 1> _result_csi_goods_list_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x140304dd0L,
                (LPVOID *)&_result_csi_goods_list_zoclsize2_user,
                (LPVOID *)&_result_csi_goods_list_zoclsize2_next,
                (LPVOID)cast_pointer_function(_result_csi_goods_list_zoclsize2_wrapper),
                (LPVOID)cast_pointer_function((int(_result_csi_goods_list_zocl::*)())&_result_csi_goods_list_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
