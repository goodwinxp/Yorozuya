#include <ScheduleMSGDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::ScheduleMSGInit2_ptr ScheduleMSGInit2_next(nullptr);
        Info::ScheduleMSGInit2_clbk ScheduleMSGInit2_user(nullptr);
        
        
        Info::ScheduleMSGctor_ScheduleMSG4_ptr ScheduleMSGctor_ScheduleMSG4_next(nullptr);
        Info::ScheduleMSGctor_ScheduleMSG4_clbk ScheduleMSGctor_ScheduleMSG4_user(nullptr);
        
        void ScheduleMSGInit2_wrapper(struct ScheduleMSG* _this)
        {
           ScheduleMSGInit2_user(_this, ScheduleMSGInit2_next);
        };
        
        void ScheduleMSGctor_ScheduleMSG4_wrapper(struct ScheduleMSG* _this)
        {
           ScheduleMSGctor_ScheduleMSG4_user(_this, ScheduleMSGctor_ScheduleMSG4_next);
        };
        
        ::std::array<hook_record, 2> ScheduleMSG_functions = 
        {
            _hook_record {
                (LPVOID)0x14041b8b0L,
                (LPVOID *)&ScheduleMSGInit2_user,
                (LPVOID *)&ScheduleMSGInit2_next,
                (LPVOID)cast_pointer_function(ScheduleMSGInit2_wrapper),
                (LPVOID)cast_pointer_function((void(ScheduleMSG::*)())&ScheduleMSG::Init)
            },
            _hook_record {
                (LPVOID)0x14041ec70L,
                (LPVOID *)&ScheduleMSGctor_ScheduleMSG4_user,
                (LPVOID *)&ScheduleMSGctor_ScheduleMSG4_next,
                (LPVOID)cast_pointer_function(ScheduleMSGctor_ScheduleMSG4_wrapper),
                (LPVOID)cast_pointer_function((void(ScheduleMSG::*)())&ScheduleMSG::ctor_ScheduleMSG)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
