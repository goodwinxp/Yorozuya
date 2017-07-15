#include <_thread_parameterDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_thread_parameterEndThread2_ptr _thread_parameterEndThread2_next(nullptr);
        Info::_thread_parameterEndThread2_clbk _thread_parameterEndThread2_user(nullptr);
        
        Info::_thread_parameterSetParameter4_ptr _thread_parameterSetParameter4_next(nullptr);
        Info::_thread_parameterSetParameter4_clbk _thread_parameterSetParameter4_user(nullptr);
        
        
        Info::_thread_parameterctor__thread_parameter6_ptr _thread_parameterctor__thread_parameter6_next(nullptr);
        Info::_thread_parameterctor__thread_parameter6_clbk _thread_parameterctor__thread_parameter6_user(nullptr);
        
        void _thread_parameterEndThread2_wrapper(struct _thread_parameter* _this)
        {
           _thread_parameterEndThread2_user(_this, _thread_parameterEndThread2_next);
        };
        void _thread_parameterSetParameter4_wrapper(struct _thread_parameter* _this, int bStart, void* pParam, int nIndex)
        {
           _thread_parameterSetParameter4_user(_this, bStart, pParam, nIndex, _thread_parameterSetParameter4_next);
        };
        
        void _thread_parameterctor__thread_parameter6_wrapper(struct _thread_parameter* _this)
        {
           _thread_parameterctor__thread_parameter6_user(_this, _thread_parameterctor__thread_parameter6_next);
        };
        
        ::std::array<hook_record, 3> _thread_parameter_functions = 
        {
            _hook_record {
                (LPVOID)0x14047d3e0L,
                (LPVOID *)&_thread_parameterEndThread2_user,
                (LPVOID *)&_thread_parameterEndThread2_next,
                (LPVOID)cast_pointer_function(_thread_parameterEndThread2_wrapper),
                (LPVOID)cast_pointer_function((void(_thread_parameter::*)())&_thread_parameter::EndThread)
            },
            _hook_record {
                (LPVOID)0x14047cc80L,
                (LPVOID *)&_thread_parameterSetParameter4_user,
                (LPVOID *)&_thread_parameterSetParameter4_next,
                (LPVOID)cast_pointer_function(_thread_parameterSetParameter4_wrapper),
                (LPVOID)cast_pointer_function((void(_thread_parameter::*)(int, void*, int))&_thread_parameter::SetParameter)
            },
            _hook_record {
                (LPVOID)0x14047c9b0L,
                (LPVOID *)&_thread_parameterctor__thread_parameter6_user,
                (LPVOID *)&_thread_parameterctor__thread_parameter6_next,
                (LPVOID)cast_pointer_function(_thread_parameterctor__thread_parameter6_wrapper),
                (LPVOID)cast_pointer_function((void(_thread_parameter::*)())&_thread_parameter::ctor__thread_parameter)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
