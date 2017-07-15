#include <common/ATFCore.hpp>
#include <std__logic_errorDetail.hpp>


START_ATF_NAMESPACE
    namespace std
    {
        namespace Detail
        {
            
            Info::std__logic_errorctor_logic_error5_ptr std__logic_errorctor_logic_error5_next(nullptr);
            Info::std__logic_errorctor_logic_error5_clbk std__logic_errorctor_logic_error5_user(nullptr);
            
            
            Info::std__logic_errorctor_logic_error7_ptr std__logic_errorctor_logic_error7_next(nullptr);
            Info::std__logic_errorctor_logic_error7_clbk std__logic_errorctor_logic_error7_user(nullptr);
            
            Info::std__logic_errorwhat9_ptr std__logic_errorwhat9_next(nullptr);
            Info::std__logic_errorwhat9_clbk std__logic_errorwhat9_user(nullptr);
            
            
            Info::std__logic_errordtor_logic_error11_ptr std__logic_errordtor_logic_error11_next(nullptr);
            Info::std__logic_errordtor_logic_error11_clbk std__logic_errordtor_logic_error11_user(nullptr);
            
            
            void std__logic_errorctor_logic_error5_wrapper(struct std::logic_error* _this, std::basic_string<char>* _Message)
            {
               std__logic_errorctor_logic_error5_user(_this, _Message, std__logic_errorctor_logic_error5_next);
            };
            
            void std__logic_errorctor_logic_error7_wrapper(struct std::logic_error* _this, struct std::logic_error* __that)
            {
               std__logic_errorctor_logic_error7_user(_this, __that, std__logic_errorctor_logic_error7_next);
            };
            char* std__logic_errorwhat9_wrapper(struct std::logic_error* _this)
            {
               return std__logic_errorwhat9_user(_this, std__logic_errorwhat9_next);
            };
            
            void std__logic_errordtor_logic_error11_wrapper(struct std::logic_error* _this)
            {
               std__logic_errordtor_logic_error11_user(_this, std__logic_errordtor_logic_error11_next);
            };
            
            ::std::array<hook_record, 4> logic_error_functions = 
            {
                _hook_record {
                    (LPVOID)0x14007e7f0L,
                    (LPVOID *)&std__logic_errorctor_logic_error5_user,
                    (LPVOID *)&std__logic_errorctor_logic_error5_next,
                    (LPVOID)cast_pointer_function(std__logic_errorctor_logic_error5_wrapper),
                    (LPVOID)cast_pointer_function((void(std::logic_error::*)(std::basic_string<char>*))&std::logic_error::ctor_logic_error)
                },
                _hook_record {
                    (LPVOID)0x14007ebe0L,
                    (LPVOID *)&std__logic_errorctor_logic_error7_user,
                    (LPVOID *)&std__logic_errorctor_logic_error7_next,
                    (LPVOID)cast_pointer_function(std__logic_errorctor_logic_error7_wrapper),
                    (LPVOID)cast_pointer_function((void(std::logic_error::*)(struct std::logic_error*))&std::logic_error::ctor_logic_error)
                },
                _hook_record {
                    (LPVOID)0x14007e8b0L,
                    (LPVOID *)&std__logic_errorwhat9_user,
                    (LPVOID *)&std__logic_errorwhat9_next,
                    (LPVOID)cast_pointer_function(std__logic_errorwhat9_wrapper),
                    (LPVOID)cast_pointer_function((char*(std::logic_error::*)())&std::logic_error::what)
                },
                _hook_record {
                    (LPVOID)0x14007e970L,
                    (LPVOID *)&std__logic_errordtor_logic_error11_user,
                    (LPVOID *)&std__logic_errordtor_logic_error11_next,
                    (LPVOID)cast_pointer_function(std__logic_errordtor_logic_error11_wrapper),
                    (LPVOID)cast_pointer_function((void(std::logic_error::*)())&std::logic_error::dtor_logic_error)
                },
            };
        }; // end namespace Detail
    }; // end namespace std
END_ATF_NAMESPACE
