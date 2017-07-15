#include <_max_pointDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_max_pointctor__max_point2_ptr _max_pointctor__max_point2_next(nullptr);
        Info::_max_pointctor__max_point2_clbk _max_pointctor__max_point2_user(nullptr);
        
        Info::_max_pointinit4_ptr _max_pointinit4_next(nullptr);
        Info::_max_pointinit4_clbk _max_pointinit4_user(nullptr);
        
        Info::_max_pointsize6_ptr _max_pointsize6_next(nullptr);
        Info::_max_pointsize6_clbk _max_pointsize6_user(nullptr);
        
        
        void _max_pointctor__max_point2_wrapper(struct _max_point* _this)
        {
           _max_pointctor__max_point2_user(_this, _max_pointctor__max_point2_next);
        };
        void _max_pointinit4_wrapper(struct _max_point* _this)
        {
           _max_pointinit4_user(_this, _max_pointinit4_next);
        };
        int _max_pointsize6_wrapper(struct _max_point* _this)
        {
           return _max_pointsize6_user(_this, _max_pointsize6_next);
        };
        
        ::std::array<hook_record, 3> _max_point_functions = 
        {
            _hook_record {
                (LPVOID)0x1403f7040L,
                (LPVOID *)&_max_pointctor__max_point2_user,
                (LPVOID *)&_max_pointctor__max_point2_next,
                (LPVOID)cast_pointer_function(_max_pointctor__max_point2_wrapper),
                (LPVOID)cast_pointer_function((void(_max_point::*)())&_max_point::ctor__max_point)
            },
            _hook_record {
                (LPVOID)0x1403f7090L,
                (LPVOID *)&_max_pointinit4_user,
                (LPVOID *)&_max_pointinit4_next,
                (LPVOID)cast_pointer_function(_max_pointinit4_wrapper),
                (LPVOID)cast_pointer_function((void(_max_point::*)())&_max_point::init)
            },
            _hook_record {
                (LPVOID)0x1403f70f0L,
                (LPVOID *)&_max_pointsize6_user,
                (LPVOID *)&_max_pointsize6_next,
                (LPVOID)cast_pointer_function(_max_pointsize6_wrapper),
                (LPVOID)cast_pointer_function((int(_max_point::*)())&_max_point::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
