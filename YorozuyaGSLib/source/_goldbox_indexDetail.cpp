#include <_goldbox_indexDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_goldbox_indexctor__goldbox_index2_ptr _goldbox_indexctor__goldbox_index2_next(nullptr);
        Info::_goldbox_indexctor__goldbox_index2_clbk _goldbox_indexctor__goldbox_index2_user(nullptr);
        
        
        void _goldbox_indexctor__goldbox_index2_wrapper(struct _goldbox_index* _this)
        {
           _goldbox_indexctor__goldbox_index2_user(_this, _goldbox_indexctor__goldbox_index2_next);
        };
        
        ::std::array<hook_record, 1> _goldbox_index_functions = 
        {
            _hook_record {
                (LPVOID)0x140416c60L,
                (LPVOID *)&_goldbox_indexctor__goldbox_index2_user,
                (LPVOID *)&_goldbox_indexctor__goldbox_index2_next,
                (LPVOID)cast_pointer_function(_goldbox_indexctor__goldbox_index2_wrapper),
                (LPVOID)cast_pointer_function((void(_goldbox_index::*)())&_goldbox_index::ctor__goldbox_index)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
