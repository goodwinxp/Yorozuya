#include <common/ATFCore.hpp>
#include <std__out_of_rangeDetail.hpp>


START_ATF_NAMESPACE
    namespace std
    {
        namespace Detail
        {
            
            Info::std__out_of_rangector_out_of_range5_ptr std__out_of_rangector_out_of_range5_next(nullptr);
            Info::std__out_of_rangector_out_of_range5_clbk std__out_of_rangector_out_of_range5_user(nullptr);
            
            
            Info::std__out_of_rangector_out_of_range7_ptr std__out_of_rangector_out_of_range7_next(nullptr);
            Info::std__out_of_rangector_out_of_range7_clbk std__out_of_rangector_out_of_range7_user(nullptr);
            
            
            Info::std__out_of_rangedtor_out_of_range9_ptr std__out_of_rangedtor_out_of_range9_next(nullptr);
            Info::std__out_of_rangedtor_out_of_range9_clbk std__out_of_rangedtor_out_of_range9_user(nullptr);
            
            
            void std__out_of_rangector_out_of_range5_wrapper(struct std::out_of_range* _this, std::basic_string<char>* _Message)
            {
               std__out_of_rangector_out_of_range5_user(_this, _Message, std__out_of_rangector_out_of_range5_next);
            };
            
            void std__out_of_rangector_out_of_range7_wrapper(struct std::out_of_range* _this, struct std::out_of_range* __that)
            {
               std__out_of_rangector_out_of_range7_user(_this, __that, std__out_of_rangector_out_of_range7_next);
            };
            
            void std__out_of_rangedtor_out_of_range9_wrapper(struct std::out_of_range* _this)
            {
               std__out_of_rangedtor_out_of_range9_user(_this, std__out_of_rangedtor_out_of_range9_next);
            };
            
            ::std::array<hook_record, 3> out_of_range_functions = 
            {
                _hook_record {
                    (LPVOID)0x140195740L,
                    (LPVOID *)&std__out_of_rangector_out_of_range5_user,
                    (LPVOID *)&std__out_of_rangector_out_of_range5_next,
                    (LPVOID)cast_pointer_function(std__out_of_rangector_out_of_range5_wrapper),
                    (LPVOID)cast_pointer_function((void(std::out_of_range::*)(std::basic_string<char>*))&std::out_of_range::ctor_out_of_range)
                },
                _hook_record {
                    (LPVOID)0x140195880L,
                    (LPVOID *)&std__out_of_rangector_out_of_range7_user,
                    (LPVOID *)&std__out_of_rangector_out_of_range7_next,
                    (LPVOID)cast_pointer_function(std__out_of_rangector_out_of_range7_wrapper),
                    (LPVOID)cast_pointer_function((void(std::out_of_range::*)(struct std::out_of_range*))&std::out_of_range::ctor_out_of_range)
                },
                _hook_record {
                    (LPVOID)0x1401957b0L,
                    (LPVOID *)&std__out_of_rangedtor_out_of_range9_user,
                    (LPVOID *)&std__out_of_rangedtor_out_of_range9_next,
                    (LPVOID)cast_pointer_function(std__out_of_rangedtor_out_of_range9_wrapper),
                    (LPVOID)cast_pointer_function((void(std::out_of_range::*)())&std::out_of_range::dtor_out_of_range)
                },
            };
        }; // end namespace Detail
    }; // end namespace std
END_ATF_NAMESPACE
