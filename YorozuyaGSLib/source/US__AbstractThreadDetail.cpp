#include <US__AbstractThreadDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace US
    {
        namespace Detail
        {
            
            Info::US__AbstractThreadctor_AbstractThread2_ptr US__AbstractThreadctor_AbstractThread2_next(nullptr);
            Info::US__AbstractThreadctor_AbstractThread2_clbk US__AbstractThreadctor_AbstractThread2_user(nullptr);
            
            
            Info::US__AbstractThreaddtor_AbstractThread7_ptr US__AbstractThreaddtor_AbstractThread7_next(nullptr);
            Info::US__AbstractThreaddtor_AbstractThread7_clbk US__AbstractThreaddtor_AbstractThread7_user(nullptr);
            
            
            void US__AbstractThreadctor_AbstractThread2_wrapper(struct US::AbstractThread* _this)
            {
               US__AbstractThreadctor_AbstractThread2_user(_this, US__AbstractThreadctor_AbstractThread2_next);
            };
            
            void US__AbstractThreaddtor_AbstractThread7_wrapper(struct US::AbstractThread* _this)
            {
               US__AbstractThreaddtor_AbstractThread7_user(_this, US__AbstractThreaddtor_AbstractThread7_next);
            };
            
            ::std::array<hook_record, 2> AbstractThread_functions = 
            {
                _hook_record {
                    (LPVOID)0x14041d660L,
                    (LPVOID *)&US__AbstractThreadctor_AbstractThread2_user,
                    (LPVOID *)&US__AbstractThreadctor_AbstractThread2_next,
                    (LPVOID)cast_pointer_function(US__AbstractThreadctor_AbstractThread2_wrapper),
                    (LPVOID)cast_pointer_function((void(US::AbstractThread::*)())&US::AbstractThread::ctor_AbstractThread)
                },
                _hook_record {
                    (LPVOID)0x14041d6e0L,
                    (LPVOID *)&US__AbstractThreaddtor_AbstractThread7_user,
                    (LPVOID *)&US__AbstractThreaddtor_AbstractThread7_next,
                    (LPVOID)cast_pointer_function(US__AbstractThreaddtor_AbstractThread7_wrapper),
                    (LPVOID)cast_pointer_function((void(US::AbstractThread::*)())&US::AbstractThread::dtor_AbstractThread)
                },
            };
        }; // end namespace Detail
    }; // end namespace US
END_ATF_NAMESPACE
