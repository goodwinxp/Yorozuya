#include <_be_damaged_charDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_be_damaged_charctor__be_damaged_char2_ptr _be_damaged_charctor__be_damaged_char2_next(nullptr);
        Info::_be_damaged_charctor__be_damaged_char2_clbk _be_damaged_charctor__be_damaged_char2_user(nullptr);
        
        
        void _be_damaged_charctor__be_damaged_char2_wrapper(struct _be_damaged_char* _this)
        {
           _be_damaged_charctor__be_damaged_char2_user(_this, _be_damaged_charctor__be_damaged_char2_next);
        };
        
        ::std::array<hook_record, 1> _be_damaged_char_functions = 
        {
            _hook_record {
                (LPVOID)0x14013e400L,
                (LPVOID *)&_be_damaged_charctor__be_damaged_char2_user,
                (LPVOID *)&_be_damaged_charctor__be_damaged_char2_next,
                (LPVOID)cast_pointer_function(_be_damaged_charctor__be_damaged_char2_wrapper),
                (LPVOID)cast_pointer_function((void(_be_damaged_char::*)())&_be_damaged_char::ctor__be_damaged_char)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
