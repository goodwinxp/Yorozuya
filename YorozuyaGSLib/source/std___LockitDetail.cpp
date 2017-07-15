#include <common/ATFCore.hpp>
#include <std___LockitDetail.hpp>


START_ATF_NAMESPACE
    namespace std
    {
        namespace Detail
        {
            
            Info::std___Lockitctor__Lockit1_ptr std___Lockitctor__Lockit1_next(nullptr);
            Info::std___Lockitctor__Lockit1_clbk std___Lockitctor__Lockit1_user(nullptr);
            
            
            Info::std___Lockitdtor__Lockit2_ptr std___Lockitdtor__Lockit2_next(nullptr);
            Info::std___Lockitdtor__Lockit2_clbk std___Lockitdtor__Lockit2_user(nullptr);
            
            
            int64_t std___Lockitctor__Lockit1_wrapper(struct std::_Lockit* _this, int arg_0)
            {
               return std___Lockitctor__Lockit1_user(_this, arg_0, std___Lockitctor__Lockit1_next);
            };
            
            int64_t std___Lockitdtor__Lockit2_wrapper(struct std::_Lockit* _this)
            {
               return std___Lockitdtor__Lockit2_user(_this, std___Lockitdtor__Lockit2_next);
            };
            
            ::std::array<hook_record, 2> _Lockit_functions = 
            {
                _hook_record {
                    (LPVOID)0x1404dbafcL,
                    (LPVOID *)&std___Lockitctor__Lockit1_user,
                    (LPVOID *)&std___Lockitctor__Lockit1_next,
                    (LPVOID)cast_pointer_function(std___Lockitctor__Lockit1_wrapper),
                    (LPVOID)cast_pointer_function((int64_t(std::_Lockit::*)(int))&std::_Lockit::ctor__Lockit)
                },
                _hook_record {
                    (LPVOID)0x1404dbaf6L,
                    (LPVOID *)&std___Lockitdtor__Lockit2_user,
                    (LPVOID *)&std___Lockitdtor__Lockit2_next,
                    (LPVOID)cast_pointer_function(std___Lockitdtor__Lockit2_wrapper),
                    (LPVOID)cast_pointer_function((int64_t(std::_Lockit::*)())&std::_Lockit::dtor__Lockit)
                },
            };
        }; // end namespace Detail
    }; // end namespace std
END_ATF_NAMESPACE
