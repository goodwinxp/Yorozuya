#include <common/ATFCore.hpp>
#include <std__exceptionDetail.hpp>


START_ATF_NAMESPACE
    namespace std
    {
        namespace Detail
        {
            
            Info::std__exceptionctor_exception1_ptr std__exceptionctor_exception1_next(nullptr);
            Info::std__exceptionctor_exception1_clbk std__exceptionctor_exception1_user(nullptr);
            
            
            Info::std__exceptionctor_exception2_ptr std__exceptionctor_exception2_next(nullptr);
            Info::std__exceptionctor_exception2_clbk std__exceptionctor_exception2_user(nullptr);
            
            
            Info::std__exceptionctor_exception3_ptr std__exceptionctor_exception3_next(nullptr);
            Info::std__exceptionctor_exception3_clbk std__exceptionctor_exception3_user(nullptr);
            
            
            Info::std__exceptionctor_exception4_ptr std__exceptionctor_exception4_next(nullptr);
            Info::std__exceptionctor_exception4_clbk std__exceptionctor_exception4_user(nullptr);
            
            Info::std__exceptionwhat5_ptr std__exceptionwhat5_next(nullptr);
            Info::std__exceptionwhat5_clbk std__exceptionwhat5_user(nullptr);
            
            
            int64_t std__exceptionctor_exception1_wrapper(struct std::exception* _this, char** arg_0)
            {
               return std__exceptionctor_exception1_user(_this, arg_0, std__exceptionctor_exception1_next);
            };
            
            int64_t std__exceptionctor_exception2_wrapper(struct std::exception* _this, char** arg_0, int arg_1)
            {
               return std__exceptionctor_exception2_user(_this, arg_0, arg_1, std__exceptionctor_exception2_next);
            };
            
            int64_t std__exceptionctor_exception3_wrapper(struct std::exception* _this, struct std::exception* arg_0)
            {
               return std__exceptionctor_exception3_user(_this, arg_0, std__exceptionctor_exception3_next);
            };
            
            int64_t std__exceptionctor_exception4_wrapper(struct std::exception* _this)
            {
               return std__exceptionctor_exception4_user(_this, std__exceptionctor_exception4_next);
            };
            char* std__exceptionwhat5_wrapper(struct std::exception* _this)
            {
               return std__exceptionwhat5_user(_this, std__exceptionwhat5_next);
            };
            
            ::std::array<hook_record, 5> exception_functions = 
            {
                _hook_record {
                    (LPVOID)0x1404dcea2L,
                    (LPVOID *)&std__exceptionctor_exception1_user,
                    (LPVOID *)&std__exceptionctor_exception1_next,
                    (LPVOID)cast_pointer_function(std__exceptionctor_exception1_wrapper),
                    (LPVOID)cast_pointer_function((int64_t(std::exception::*)(char**))&std::exception::ctor_exception)
                },
                _hook_record {
                    (LPVOID)0x140676d98L,
                    (LPVOID *)&std__exceptionctor_exception2_user,
                    (LPVOID *)&std__exceptionctor_exception2_next,
                    (LPVOID)cast_pointer_function(std__exceptionctor_exception2_wrapper),
                    (LPVOID)cast_pointer_function((int64_t(std::exception::*)(char**, int))&std::exception::ctor_exception)
                },
                _hook_record {
                    (LPVOID)0x1404dce8aL,
                    (LPVOID *)&std__exceptionctor_exception3_user,
                    (LPVOID *)&std__exceptionctor_exception3_next,
                    (LPVOID)cast_pointer_function(std__exceptionctor_exception3_wrapper),
                    (LPVOID)cast_pointer_function((int64_t(std::exception::*)(struct std::exception*))&std::exception::ctor_exception)
                },
                _hook_record {
                    (LPVOID)0x1404dce96L,
                    (LPVOID *)&std__exceptionctor_exception4_user,
                    (LPVOID *)&std__exceptionctor_exception4_next,
                    (LPVOID)cast_pointer_function(std__exceptionctor_exception4_wrapper),
                    (LPVOID)cast_pointer_function((int64_t(std::exception::*)())&std::exception::ctor_exception)
                },
                _hook_record {
                    (LPVOID)0x1404dcea8L,
                    (LPVOID *)&std__exceptionwhat5_user,
                    (LPVOID *)&std__exceptionwhat5_next,
                    (LPVOID)cast_pointer_function(std__exceptionwhat5_wrapper),
                    (LPVOID)cast_pointer_function((char*(std::exception::*)())&std::exception::what)
                },
            };
        }; // end namespace Detail
    }; // end namespace std
END_ATF_NAMESPACE
