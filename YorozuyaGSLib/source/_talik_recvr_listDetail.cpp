#include <_talik_recvr_listDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_talik_recvr_listctor__talik_recvr_list2_ptr _talik_recvr_listctor__talik_recvr_list2_next(nullptr);
        Info::_talik_recvr_listctor__talik_recvr_list2_clbk _talik_recvr_listctor__talik_recvr_list2_user(nullptr);
        
        Info::_talik_recvr_listsize4_ptr _talik_recvr_listsize4_next(nullptr);
        Info::_talik_recvr_listsize4_clbk _talik_recvr_listsize4_user(nullptr);
        
        
        void _talik_recvr_listctor__talik_recvr_list2_wrapper(struct _talik_recvr_list* _this)
        {
           _talik_recvr_listctor__talik_recvr_list2_user(_this, _talik_recvr_listctor__talik_recvr_list2_next);
        };
        int _talik_recvr_listsize4_wrapper(struct _talik_recvr_list* _this)
        {
           return _talik_recvr_listsize4_user(_this, _talik_recvr_listsize4_next);
        };
        
        ::std::array<hook_record, 2> _talik_recvr_list_functions = 
        {
            _hook_record {
                (LPVOID)0x1403f6ed0L,
                (LPVOID *)&_talik_recvr_listctor__talik_recvr_list2_user,
                (LPVOID *)&_talik_recvr_listctor__talik_recvr_list2_next,
                (LPVOID)cast_pointer_function(_talik_recvr_listctor__talik_recvr_list2_wrapper),
                (LPVOID)cast_pointer_function((void(_talik_recvr_list::*)())&_talik_recvr_list::ctor__talik_recvr_list)
            },
            _hook_record {
                (LPVOID)0x1403f6f30L,
                (LPVOID *)&_talik_recvr_listsize4_user,
                (LPVOID *)&_talik_recvr_listsize4_next,
                (LPVOID)cast_pointer_function(_talik_recvr_listsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_talik_recvr_list::*)())&_talik_recvr_list::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
