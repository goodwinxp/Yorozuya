#include <_unmannedtrader_Regist_item_inform_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_unmannedtrader_Regist_item_inform_zoclctor__unmannedtrader_Regist_item_inform_zocl2_ptr _unmannedtrader_Regist_item_inform_zoclctor__unmannedtrader_Regist_item_inform_zocl2_next(nullptr);
        Info::_unmannedtrader_Regist_item_inform_zoclctor__unmannedtrader_Regist_item_inform_zocl2_clbk _unmannedtrader_Regist_item_inform_zoclctor__unmannedtrader_Regist_item_inform_zocl2_user(nullptr);
        
        Info::_unmannedtrader_Regist_item_inform_zoclsize4_ptr _unmannedtrader_Regist_item_inform_zoclsize4_next(nullptr);
        Info::_unmannedtrader_Regist_item_inform_zoclsize4_clbk _unmannedtrader_Regist_item_inform_zoclsize4_user(nullptr);
        
        
        void _unmannedtrader_Regist_item_inform_zoclctor__unmannedtrader_Regist_item_inform_zocl2_wrapper(struct _unmannedtrader_Regist_item_inform_zocl* _this)
        {
           _unmannedtrader_Regist_item_inform_zoclctor__unmannedtrader_Regist_item_inform_zocl2_user(_this, _unmannedtrader_Regist_item_inform_zoclctor__unmannedtrader_Regist_item_inform_zocl2_next);
        };
        int _unmannedtrader_Regist_item_inform_zoclsize4_wrapper(struct _unmannedtrader_Regist_item_inform_zocl* _this)
        {
           return _unmannedtrader_Regist_item_inform_zoclsize4_user(_this, _unmannedtrader_Regist_item_inform_zoclsize4_next);
        };
        
        ::std::array<hook_record, 2> _unmannedtrader_Regist_item_inform_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x140360050L,
                (LPVOID *)&_unmannedtrader_Regist_item_inform_zoclctor__unmannedtrader_Regist_item_inform_zocl2_user,
                (LPVOID *)&_unmannedtrader_Regist_item_inform_zoclctor__unmannedtrader_Regist_item_inform_zocl2_next,
                (LPVOID)cast_pointer_function(_unmannedtrader_Regist_item_inform_zoclctor__unmannedtrader_Regist_item_inform_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_unmannedtrader_Regist_item_inform_zocl::*)())&_unmannedtrader_Regist_item_inform_zocl::ctor__unmannedtrader_Regist_item_inform_zocl)
            },
            _hook_record {
                (LPVOID)0x140360070L,
                (LPVOID *)&_unmannedtrader_Regist_item_inform_zoclsize4_user,
                (LPVOID *)&_unmannedtrader_Regist_item_inform_zoclsize4_next,
                (LPVOID)cast_pointer_function(_unmannedtrader_Regist_item_inform_zoclsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_unmannedtrader_Regist_item_inform_zocl::*)())&_unmannedtrader_Regist_item_inform_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
