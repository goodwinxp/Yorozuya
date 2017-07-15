#include <_quick_linkDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_quick_linkctor__quick_link2_ptr _quick_linkctor__quick_link2_next(nullptr);
        Info::_quick_linkctor__quick_link2_clbk _quick_linkctor__quick_link2_user(nullptr);
        
        Info::_quick_linkinit4_ptr _quick_linkinit4_next(nullptr);
        Info::_quick_linkinit4_clbk _quick_linkinit4_user(nullptr);
        
        
        void _quick_linkctor__quick_link2_wrapper(struct _quick_link* _this)
        {
           _quick_linkctor__quick_link2_user(_this, _quick_linkctor__quick_link2_next);
        };
        void _quick_linkinit4_wrapper(struct _quick_link* _this)
        {
           _quick_linkinit4_user(_this, _quick_linkinit4_next);
        };
        
        ::std::array<hook_record, 2> _quick_link_functions = 
        {
            _hook_record {
                (LPVOID)0x14010e060L,
                (LPVOID *)&_quick_linkctor__quick_link2_user,
                (LPVOID *)&_quick_linkctor__quick_link2_next,
                (LPVOID)cast_pointer_function(_quick_linkctor__quick_link2_wrapper),
                (LPVOID)cast_pointer_function((void(_quick_link::*)())&_quick_link::ctor__quick_link)
            },
            _hook_record {
                (LPVOID)0x14010e0b0L,
                (LPVOID *)&_quick_linkinit4_user,
                (LPVOID *)&_quick_linkinit4_next,
                (LPVOID)cast_pointer_function(_quick_linkinit4_wrapper),
                (LPVOID)cast_pointer_function((void(_quick_link::*)())&_quick_link::init)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
