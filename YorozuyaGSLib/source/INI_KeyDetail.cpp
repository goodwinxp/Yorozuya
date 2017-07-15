#include <INI_KeyDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::INI_Keyctor_INI_Key2_ptr INI_Keyctor_INI_Key2_next(nullptr);
        Info::INI_Keyctor_INI_Key2_clbk INI_Keyctor_INI_Key2_user(nullptr);
        
        
        void INI_Keyctor_INI_Key2_wrapper(struct INI_Key* _this)
        {
           INI_Keyctor_INI_Key2_user(_this, INI_Keyctor_INI_Key2_next);
        };
        
        ::std::array<hook_record, 1> INI_Key_functions = 
        {
            _hook_record {
                (LPVOID)0x1404700b0L,
                (LPVOID *)&INI_Keyctor_INI_Key2_user,
                (LPVOID *)&INI_Keyctor_INI_Key2_next,
                (LPVOID)cast_pointer_function(INI_Keyctor_INI_Key2_wrapper),
                (LPVOID)cast_pointer_function((void(INI_Key::*)())&INI_Key::ctor_INI_Key)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
