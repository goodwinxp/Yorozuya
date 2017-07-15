#include <common/ATFCore.hpp>
#include <std___Iterator_baseDetail.hpp>


START_ATF_NAMESPACE
    namespace std
    {
        namespace Detail
        {
            Info::std___Iterator_base_Clean_up_iter_debug2_ptr std___Iterator_base_Clean_up_iter_debug2_next(nullptr);
            Info::std___Iterator_base_Clean_up_iter_debug2_clbk std___Iterator_base_Clean_up_iter_debug2_user(nullptr);
            
            
            Info::std___Iterator_basector__Iterator_base4_ptr std___Iterator_basector__Iterator_base4_next(nullptr);
            Info::std___Iterator_basector__Iterator_base4_clbk std___Iterator_basector__Iterator_base4_user(nullptr);
            
            
            Info::std___Iterator_basector__Iterator_base6_ptr std___Iterator_basector__Iterator_base6_next(nullptr);
            Info::std___Iterator_basector__Iterator_base6_clbk std___Iterator_basector__Iterator_base6_user(nullptr);
            
            
            Info::std___Iterator_basedtor__Iterator_base10_ptr std___Iterator_basedtor__Iterator_base10_next(nullptr);
            Info::std___Iterator_basedtor__Iterator_base10_clbk std___Iterator_basedtor__Iterator_base10_user(nullptr);
            
            void std___Iterator_base_Clean_up_iter_debug2_wrapper(struct std::_Iterator_base* _this)
            {
               std___Iterator_base_Clean_up_iter_debug2_user(_this, std___Iterator_base_Clean_up_iter_debug2_next);
            };
            
            void std___Iterator_basector__Iterator_base4_wrapper(struct std::_Iterator_base* _this, struct std::_Iterator_base* _Right)
            {
               std___Iterator_basector__Iterator_base4_user(_this, _Right, std___Iterator_basector__Iterator_base4_next);
            };
            
            void std___Iterator_basector__Iterator_base6_wrapper(struct std::_Iterator_base* _this)
            {
               std___Iterator_basector__Iterator_base6_user(_this, std___Iterator_basector__Iterator_base6_next);
            };
            
            void std___Iterator_basedtor__Iterator_base10_wrapper(struct std::_Iterator_base* _this)
            {
               std___Iterator_basedtor__Iterator_base10_user(_this, std___Iterator_basedtor__Iterator_base10_next);
            };
            
            ::std::array<hook_record, 4> _Iterator_base_functions = 
            {
                _hook_record {
                    (LPVOID)0x1401234a0L,
                    (LPVOID *)&std___Iterator_base_Clean_up_iter_debug2_user,
                    (LPVOID *)&std___Iterator_base_Clean_up_iter_debug2_next,
                    (LPVOID)cast_pointer_function(std___Iterator_base_Clean_up_iter_debug2_wrapper),
                    (LPVOID)cast_pointer_function((void(std::_Iterator_base::*)())&std::_Iterator_base::_Clean_up_iter_debug)
                },
                _hook_record {
                    (LPVOID)0x140123b90L,
                    (LPVOID *)&std___Iterator_basector__Iterator_base4_user,
                    (LPVOID *)&std___Iterator_basector__Iterator_base4_next,
                    (LPVOID)cast_pointer_function(std___Iterator_basector__Iterator_base4_wrapper),
                    (LPVOID)cast_pointer_function((void(std::_Iterator_base::*)(struct std::_Iterator_base*))&std::_Iterator_base::ctor__Iterator_base)
                },
                _hook_record {
                    (LPVOID)0x140123a90L,
                    (LPVOID *)&std___Iterator_basector__Iterator_base6_user,
                    (LPVOID *)&std___Iterator_basector__Iterator_base6_next,
                    (LPVOID)cast_pointer_function(std___Iterator_basector__Iterator_base6_wrapper),
                    (LPVOID)cast_pointer_function((void(std::_Iterator_base::*)())&std::_Iterator_base::ctor__Iterator_base)
                },
                _hook_record {
                    (LPVOID)0x140123420L,
                    (LPVOID *)&std___Iterator_basedtor__Iterator_base10_user,
                    (LPVOID *)&std___Iterator_basedtor__Iterator_base10_next,
                    (LPVOID)cast_pointer_function(std___Iterator_basedtor__Iterator_base10_wrapper),
                    (LPVOID)cast_pointer_function((void(std::_Iterator_base::*)())&std::_Iterator_base::dtor__Iterator_base)
                },
            };
        }; // end namespace Detail
    }; // end namespace std
END_ATF_NAMESPACE
