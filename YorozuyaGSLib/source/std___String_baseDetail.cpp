#include <common/ATFCore.hpp>
#include <std___String_baseDetail.hpp>


START_ATF_NAMESPACE
    namespace std
    {
        namespace Detail
        {
            
            Info::std___String_basector__String_base1_ptr std___String_basector__String_base1_next(nullptr);
            Info::std___String_basector__String_base1_clbk std___String_basector__String_base1_user(nullptr);
            
            
            int64_t std___String_basector__String_base1_wrapper(struct std::_String_base* _this, struct std::_String_base* arg_0)
            {
               return std___String_basector__String_base1_user(_this, arg_0, std___String_basector__String_base1_next);
            };
            
            ::std::array<hook_record, 1> _String_base_functions = 
            {
                _hook_record {
                    (LPVOID)0x1404dbb2cL,
                    (LPVOID *)&std___String_basector__String_base1_user,
                    (LPVOID *)&std___String_basector__String_base1_next,
                    (LPVOID)cast_pointer_function(std___String_basector__String_base1_wrapper),
                    (LPVOID)cast_pointer_function((int64_t(std::_String_base::*)(struct std::_String_base*))&std::_String_base::ctor__String_base)
                },
            };
        }; // end namespace Detail
    }; // end namespace std
END_ATF_NAMESPACE
