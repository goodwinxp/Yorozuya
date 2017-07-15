#include <_party_join_joiner_result_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_party_join_joiner_result_zoclctor__party_join_joiner_result_zocl2_ptr _party_join_joiner_result_zoclctor__party_join_joiner_result_zocl2_next(nullptr);
        Info::_party_join_joiner_result_zoclctor__party_join_joiner_result_zocl2_clbk _party_join_joiner_result_zoclctor__party_join_joiner_result_zocl2_user(nullptr);
        
        Info::_party_join_joiner_result_zoclsize4_ptr _party_join_joiner_result_zoclsize4_next(nullptr);
        Info::_party_join_joiner_result_zoclsize4_clbk _party_join_joiner_result_zoclsize4_user(nullptr);
        
        
        void _party_join_joiner_result_zoclctor__party_join_joiner_result_zocl2_wrapper(struct _party_join_joiner_result_zocl* _this)
        {
           _party_join_joiner_result_zoclctor__party_join_joiner_result_zocl2_user(_this, _party_join_joiner_result_zoclctor__party_join_joiner_result_zocl2_next);
        };
        int _party_join_joiner_result_zoclsize4_wrapper(struct _party_join_joiner_result_zocl* _this)
        {
           return _party_join_joiner_result_zoclsize4_user(_this, _party_join_joiner_result_zoclsize4_next);
        };
        
        ::std::array<hook_record, 2> _party_join_joiner_result_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400efad0L,
                (LPVOID *)&_party_join_joiner_result_zoclctor__party_join_joiner_result_zocl2_user,
                (LPVOID *)&_party_join_joiner_result_zoclctor__party_join_joiner_result_zocl2_next,
                (LPVOID)cast_pointer_function(_party_join_joiner_result_zoclctor__party_join_joiner_result_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_party_join_joiner_result_zocl::*)())&_party_join_joiner_result_zocl::ctor__party_join_joiner_result_zocl)
            },
            _hook_record {
                (LPVOID)0x1400efaf0L,
                (LPVOID *)&_party_join_joiner_result_zoclsize4_user,
                (LPVOID *)&_party_join_joiner_result_zoclsize4_next,
                (LPVOID)cast_pointer_function(_party_join_joiner_result_zoclsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_party_join_joiner_result_zocl::*)())&_party_join_joiner_result_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
