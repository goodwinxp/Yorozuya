#include <_starting_vote_inform_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_starting_vote_inform_zoclctor__starting_vote_inform_zocl2_ptr _starting_vote_inform_zoclctor__starting_vote_inform_zocl2_next(nullptr);
        Info::_starting_vote_inform_zoclctor__starting_vote_inform_zocl2_clbk _starting_vote_inform_zoclctor__starting_vote_inform_zocl2_user(nullptr);
        
        Info::_starting_vote_inform_zoclsize4_ptr _starting_vote_inform_zoclsize4_next(nullptr);
        Info::_starting_vote_inform_zoclsize4_clbk _starting_vote_inform_zoclsize4_user(nullptr);
        
        
        void _starting_vote_inform_zoclctor__starting_vote_inform_zocl2_wrapper(struct _starting_vote_inform_zocl* _this)
        {
           _starting_vote_inform_zoclctor__starting_vote_inform_zocl2_user(_this, _starting_vote_inform_zoclctor__starting_vote_inform_zocl2_next);
        };
        int _starting_vote_inform_zoclsize4_wrapper(struct _starting_vote_inform_zocl* _this)
        {
           return _starting_vote_inform_zoclsize4_user(_this, _starting_vote_inform_zoclsize4_next);
        };
        
        ::std::array<hook_record, 2> _starting_vote_inform_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1402b0ed0L,
                (LPVOID *)&_starting_vote_inform_zoclctor__starting_vote_inform_zocl2_user,
                (LPVOID *)&_starting_vote_inform_zoclctor__starting_vote_inform_zocl2_next,
                (LPVOID)cast_pointer_function(_starting_vote_inform_zoclctor__starting_vote_inform_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_starting_vote_inform_zocl::*)())&_starting_vote_inform_zocl::ctor__starting_vote_inform_zocl)
            },
            _hook_record {
                (LPVOID)0x1402b0ef0L,
                (LPVOID *)&_starting_vote_inform_zoclsize4_user,
                (LPVOID *)&_starting_vote_inform_zoclsize4_next,
                (LPVOID)cast_pointer_function(_starting_vote_inform_zoclsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_starting_vote_inform_zocl::*)())&_starting_vote_inform_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
