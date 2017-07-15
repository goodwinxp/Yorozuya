#include <common/ATFCore.hpp>
#include <std__length_errorDetail.hpp>


START_ATF_NAMESPACE
    namespace std
    {
        namespace Detail
        {
            
            Info::std__length_errorctor_length_error5_ptr std__length_errorctor_length_error5_next(nullptr);
            Info::std__length_errorctor_length_error5_clbk std__length_errorctor_length_error5_user(nullptr);
            
            
            Info::std__length_errorctor_length_error7_ptr std__length_errorctor_length_error7_next(nullptr);
            Info::std__length_errorctor_length_error7_clbk std__length_errorctor_length_error7_user(nullptr);
            
            
            Info::std__length_errordtor_length_error9_ptr std__length_errordtor_length_error9_next(nullptr);
            Info::std__length_errordtor_length_error9_clbk std__length_errordtor_length_error9_user(nullptr);
            
            
            void std__length_errorctor_length_error5_wrapper(struct std::length_error* _this, std::basic_string<char>* _Message)
            {
               std__length_errorctor_length_error5_user(_this, _Message, std__length_errorctor_length_error5_next);
            };
            
            void std__length_errorctor_length_error7_wrapper(struct std::length_error* _this, struct std::length_error* __that)
            {
               std__length_errorctor_length_error7_user(_this, __that, std__length_errorctor_length_error7_next);
            };
            
            void std__length_errordtor_length_error9_wrapper(struct std::length_error* _this)
            {
               std__length_errordtor_length_error9_user(_this, std__length_errordtor_length_error9_next);
            };
            
            ::std::array<hook_record, 3> length_error_functions = 
            {
                _hook_record {
                    (LPVOID)0x14007e780L,
                    (LPVOID *)&std__length_errorctor_length_error5_user,
                    (LPVOID *)&std__length_errorctor_length_error5_next,
                    (LPVOID)cast_pointer_function(std__length_errorctor_length_error5_wrapper),
                    (LPVOID)cast_pointer_function((void(std::length_error::*)(std::basic_string<char>*))&std::length_error::ctor_length_error)
                },
                _hook_record {
                    (LPVOID)0x14007eb70L,
                    (LPVOID *)&std__length_errorctor_length_error7_user,
                    (LPVOID *)&std__length_errorctor_length_error7_next,
                    (LPVOID)cast_pointer_function(std__length_errorctor_length_error7_wrapper),
                    (LPVOID)cast_pointer_function((void(std::length_error::*)(struct std::length_error*))&std::length_error::ctor_length_error)
                },
                _hook_record {
                    (LPVOID)0x14007e9e0L,
                    (LPVOID *)&std__length_errordtor_length_error9_user,
                    (LPVOID *)&std__length_errordtor_length_error9_next,
                    (LPVOID)cast_pointer_function(std__length_errordtor_length_error9_wrapper),
                    (LPVOID)cast_pointer_function((void(std::length_error::*)())&std::length_error::dtor_length_error)
                },
            };
        }; // end namespace Detail
    }; // end namespace std
END_ATF_NAMESPACE
