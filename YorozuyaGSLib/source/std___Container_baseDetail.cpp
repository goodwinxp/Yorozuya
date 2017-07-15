#include <common/ATFCore.hpp>
#include <std___Container_baseDetail.hpp>


START_ATF_NAMESPACE
    namespace std
    {
        namespace Detail
        {
            
            Info::std___Container_basector__Container_base1_ptr std___Container_basector__Container_base1_next(nullptr);
            Info::std___Container_basector__Container_base1_clbk std___Container_basector__Container_base1_user(nullptr);
            
            
            Info::std___Container_basector__Container_base2_ptr std___Container_basector__Container_base2_next(nullptr);
            Info::std___Container_basector__Container_base2_clbk std___Container_basector__Container_base2_user(nullptr);
            
            
            int64_t std___Container_basector__Container_base1_wrapper(struct std::_Container_base* _this, struct std::_Container_base* arg_0)
            {
               return std___Container_basector__Container_base1_user(_this, arg_0, std___Container_basector__Container_base1_next);
            };
            
            int64_t std___Container_basector__Container_base2_wrapper(struct std::_Container_base* _this)
            {
               return std___Container_basector__Container_base2_user(_this, std___Container_basector__Container_base2_next);
            };
            
            ::std::array<hook_record, 2> _Container_base_functions = 
            {
                _hook_record {
                    (LPVOID)0x1404dbb32L,
                    (LPVOID *)&std___Container_basector__Container_base1_user,
                    (LPVOID *)&std___Container_basector__Container_base1_next,
                    (LPVOID)cast_pointer_function(std___Container_basector__Container_base1_wrapper),
                    (LPVOID)cast_pointer_function((int64_t(std::_Container_base::*)(struct std::_Container_base*))&std::_Container_base::ctor__Container_base)
                },
                _hook_record {
                    (LPVOID)0x1404dbad8L,
                    (LPVOID *)&std___Container_basector__Container_base2_user,
                    (LPVOID *)&std___Container_basector__Container_base2_next,
                    (LPVOID)cast_pointer_function(std___Container_basector__Container_base2_wrapper),
                    (LPVOID)cast_pointer_function((int64_t(std::_Container_base::*)())&std::_Container_base::ctor__Container_base)
                },
            };
        }; // end namespace Detail
    }; // end namespace std
END_ATF_NAMESPACE
