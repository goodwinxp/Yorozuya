#include <common/ATFCore.hpp>
#include <std__bad_allocDetail.hpp>


START_ATF_NAMESPACE
    namespace std
    {
        namespace Detail
        {
            
            Info::std__bad_allocctor_bad_alloc5_ptr std__bad_allocctor_bad_alloc5_next(nullptr);
            Info::std__bad_allocctor_bad_alloc5_clbk std__bad_allocctor_bad_alloc5_user(nullptr);
            
            
            Info::std__bad_allocctor_bad_alloc7_ptr std__bad_allocctor_bad_alloc7_next(nullptr);
            Info::std__bad_allocctor_bad_alloc7_clbk std__bad_allocctor_bad_alloc7_user(nullptr);
            
            
            Info::std__bad_allocctor_bad_alloc8_ptr std__bad_allocctor_bad_alloc8_next(nullptr);
            Info::std__bad_allocctor_bad_alloc8_clbk std__bad_allocctor_bad_alloc8_user(nullptr);
            
            
            Info::std__bad_allocdtor_bad_alloc10_ptr std__bad_allocdtor_bad_alloc10_next(nullptr);
            Info::std__bad_allocdtor_bad_alloc10_clbk std__bad_allocdtor_bad_alloc10_user(nullptr);
            
            
            void std__bad_allocctor_bad_alloc5_wrapper(struct std::bad_alloc* _this, char* _Message)
            {
               std__bad_allocctor_bad_alloc5_user(_this, _Message, std__bad_allocctor_bad_alloc5_next);
            };
            
            void std__bad_allocctor_bad_alloc7_wrapper(struct std::bad_alloc* _this, struct std::bad_alloc* __that)
            {
               std__bad_allocctor_bad_alloc7_user(_this, __that, std__bad_allocctor_bad_alloc7_next);
            };
            
            int64_t std__bad_allocctor_bad_alloc8_wrapper(struct std::bad_alloc* _this)
            {
               return std__bad_allocctor_bad_alloc8_user(_this, std__bad_allocctor_bad_alloc8_next);
            };
            
            void std__bad_allocdtor_bad_alloc10_wrapper(struct std::bad_alloc* _this)
            {
               std__bad_allocdtor_bad_alloc10_user(_this, std__bad_allocdtor_bad_alloc10_next);
            };
            
            ::std::array<hook_record, 4> bad_alloc_functions = 
            {
                _hook_record {
                    (LPVOID)0x14007efb0L,
                    (LPVOID *)&std__bad_allocctor_bad_alloc5_user,
                    (LPVOID *)&std__bad_allocctor_bad_alloc5_next,
                    (LPVOID)cast_pointer_function(std__bad_allocctor_bad_alloc5_wrapper),
                    (LPVOID)cast_pointer_function((void(std::bad_alloc::*)(char*))&std::bad_alloc::ctor_bad_alloc)
                },
                _hook_record {
                    (LPVOID)0x14007f0f0L,
                    (LPVOID *)&std__bad_allocctor_bad_alloc7_user,
                    (LPVOID *)&std__bad_allocctor_bad_alloc7_next,
                    (LPVOID)cast_pointer_function(std__bad_allocctor_bad_alloc7_wrapper),
                    (LPVOID)cast_pointer_function((void(std::bad_alloc::*)(struct std::bad_alloc*))&std::bad_alloc::ctor_bad_alloc)
                },
                _hook_record {
                    (LPVOID)0x14061f760L,
                    (LPVOID *)&std__bad_allocctor_bad_alloc8_user,
                    (LPVOID *)&std__bad_allocctor_bad_alloc8_next,
                    (LPVOID)cast_pointer_function(std__bad_allocctor_bad_alloc8_wrapper),
                    (LPVOID)cast_pointer_function((int64_t(std::bad_alloc::*)())&std::bad_alloc::ctor_bad_alloc)
                },
                _hook_record {
                    (LPVOID)0x14007f020L,
                    (LPVOID *)&std__bad_allocdtor_bad_alloc10_user,
                    (LPVOID *)&std__bad_allocdtor_bad_alloc10_next,
                    (LPVOID)cast_pointer_function(std__bad_allocdtor_bad_alloc10_wrapper),
                    (LPVOID)cast_pointer_function((void(std::bad_alloc::*)())&std::bad_alloc::dtor_bad_alloc)
                },
            };
        }; // end namespace Detail
    }; // end namespace std
END_ATF_NAMESPACE
