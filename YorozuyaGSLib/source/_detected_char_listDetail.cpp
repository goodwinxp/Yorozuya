#include <_detected_char_listDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_detected_char_listAddCharInfo2_ptr _detected_char_listAddCharInfo2_next(nullptr);
        Info::_detected_char_listAddCharInfo2_clbk _detected_char_listAddCharInfo2_user(nullptr);
        
        
        Info::_detected_char_listctor__detected_char_list4_ptr _detected_char_listctor__detected_char_list4_next(nullptr);
        Info::_detected_char_listctor__detected_char_list4_clbk _detected_char_listctor__detected_char_list4_user(nullptr);
        
        Info::_detected_char_listinit6_ptr _detected_char_listinit6_next(nullptr);
        Info::_detected_char_listinit6_clbk _detected_char_listinit6_user(nullptr);
        
        int _detected_char_listAddCharInfo2_wrapper(struct _detected_char_list* _this, char byCharType, float* fPos)
        {
           return _detected_char_listAddCharInfo2_user(_this, byCharType, fPos, _detected_char_listAddCharInfo2_next);
        };
        
        void _detected_char_listctor__detected_char_list4_wrapper(struct _detected_char_list* _this)
        {
           _detected_char_listctor__detected_char_list4_user(_this, _detected_char_listctor__detected_char_list4_next);
        };
        void _detected_char_listinit6_wrapper(struct _detected_char_list* _this)
        {
           _detected_char_listinit6_user(_this, _detected_char_listinit6_next);
        };
        
        ::std::array<hook_record, 3> _detected_char_list_functions = 
        {
            _hook_record {
                (LPVOID)0x1402e5860L,
                (LPVOID *)&_detected_char_listAddCharInfo2_user,
                (LPVOID *)&_detected_char_listAddCharInfo2_next,
                (LPVOID)cast_pointer_function(_detected_char_listAddCharInfo2_wrapper),
                (LPVOID)cast_pointer_function((int(_detected_char_list::*)(char, float*))&_detected_char_list::AddCharInfo)
            },
            _hook_record {
                (LPVOID)0x1402e57c0L,
                (LPVOID *)&_detected_char_listctor__detected_char_list4_user,
                (LPVOID *)&_detected_char_listctor__detected_char_list4_next,
                (LPVOID)cast_pointer_function(_detected_char_listctor__detected_char_list4_wrapper),
                (LPVOID)cast_pointer_function((void(_detected_char_list::*)())&_detected_char_list::ctor__detected_char_list)
            },
            _hook_record {
                (LPVOID)0x1402e5810L,
                (LPVOID *)&_detected_char_listinit6_user,
                (LPVOID *)&_detected_char_listinit6_next,
                (LPVOID)cast_pointer_function(_detected_char_listinit6_wrapper),
                (LPVOID)cast_pointer_function((void(_detected_char_list::*)())&_detected_char_list::init)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
