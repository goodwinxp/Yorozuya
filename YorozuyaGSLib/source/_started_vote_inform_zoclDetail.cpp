#include <_started_vote_inform_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_started_vote_inform_zoclctor__started_vote_inform_zocl2_ptr _started_vote_inform_zoclctor__started_vote_inform_zocl2_next(nullptr);
        Info::_started_vote_inform_zoclctor__started_vote_inform_zocl2_clbk _started_vote_inform_zoclctor__started_vote_inform_zocl2_user(nullptr);
        
        Info::_started_vote_inform_zoclsize4_ptr _started_vote_inform_zoclsize4_next(nullptr);
        Info::_started_vote_inform_zoclsize4_clbk _started_vote_inform_zoclsize4_user(nullptr);
        
        
        void _started_vote_inform_zoclctor__started_vote_inform_zocl2_wrapper(struct _started_vote_inform_zocl* _this)
        {
           _started_vote_inform_zoclctor__started_vote_inform_zocl2_user(_this, _started_vote_inform_zoclctor__started_vote_inform_zocl2_next);
        };
        int _started_vote_inform_zoclsize4_wrapper(struct _started_vote_inform_zocl* _this)
        {
           return _started_vote_inform_zoclsize4_user(_this, _started_vote_inform_zoclsize4_next);
        };
        
        ::std::array<hook_record, 2> _started_vote_inform_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1402b0eb0L,
                (LPVOID *)&_started_vote_inform_zoclctor__started_vote_inform_zocl2_user,
                (LPVOID *)&_started_vote_inform_zoclctor__started_vote_inform_zocl2_next,
                (LPVOID)cast_pointer_function(_started_vote_inform_zoclctor__started_vote_inform_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_started_vote_inform_zocl::*)())&_started_vote_inform_zocl::ctor__started_vote_inform_zocl)
            },
            _hook_record {
                (LPVOID)0x1402b0f70L,
                (LPVOID *)&_started_vote_inform_zoclsize4_user,
                (LPVOID *)&_started_vote_inform_zoclsize4_next,
                (LPVOID)cast_pointer_function(_started_vote_inform_zoclsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_started_vote_inform_zocl::*)())&_started_vote_inform_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
