#include <__inner_checkDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::__inner_checkctor___inner_check2_ptr __inner_checkctor___inner_check2_next(nullptr);
        Info::__inner_checkctor___inner_check2_clbk __inner_checkctor___inner_check2_user(nullptr);
        
        
        Info::__inner_checkdtor___inner_check6_ptr __inner_checkdtor___inner_check6_next(nullptr);
        Info::__inner_checkdtor___inner_check6_clbk __inner_checkdtor___inner_check6_user(nullptr);
        
        
        void __inner_checkctor___inner_check2_wrapper(struct __inner_check* _this)
        {
           __inner_checkctor___inner_check2_user(_this, __inner_checkctor___inner_check2_next);
        };
        
        void __inner_checkdtor___inner_check6_wrapper(struct __inner_check* _this)
        {
           __inner_checkdtor___inner_check6_user(_this, __inner_checkdtor___inner_check6_next);
        };
        
        ::std::array<hook_record, 2> __inner_check_functions = 
        {
            _hook_record {
                (LPVOID)0x14027a500L,
                (LPVOID *)&__inner_checkctor___inner_check2_user,
                (LPVOID *)&__inner_checkctor___inner_check2_next,
                (LPVOID)cast_pointer_function(__inner_checkctor___inner_check2_wrapper),
                (LPVOID)cast_pointer_function((void(__inner_check::*)())&__inner_check::ctor___inner_check)
            },
            _hook_record {
                (LPVOID)0x140272f60L,
                (LPVOID *)&__inner_checkdtor___inner_check6_user,
                (LPVOID *)&__inner_checkdtor___inner_check6_next,
                (LPVOID)cast_pointer_function(__inner_checkdtor___inner_check6_wrapper),
                (LPVOID)cast_pointer_function((void(__inner_check::*)())&__inner_check::dtor___inner_check)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
