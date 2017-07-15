#include <CLuaCommandDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CLuaCommandctor_CLuaCommand2_ptr CLuaCommandctor_CLuaCommand2_next(nullptr);
        Info::CLuaCommandctor_CLuaCommand2_clbk CLuaCommandctor_CLuaCommand2_user(nullptr);
        
        Info::CLuaCommandGetBuffer4_ptr CLuaCommandGetBuffer4_next(nullptr);
        Info::CLuaCommandGetBuffer4_clbk CLuaCommandGetBuffer4_user(nullptr);
        
        Info::CLuaCommandGetType6_ptr CLuaCommandGetType6_next(nullptr);
        Info::CLuaCommandGetType6_clbk CLuaCommandGetType6_user(nullptr);
        
        Info::CLuaCommandInit8_ptr CLuaCommandInit8_next(nullptr);
        Info::CLuaCommandInit8_clbk CLuaCommandInit8_user(nullptr);
        
        Info::CLuaCommandSetCmd10_ptr CLuaCommandSetCmd10_next(nullptr);
        Info::CLuaCommandSetCmd10_clbk CLuaCommandSetCmd10_user(nullptr);
        
        
        Info::CLuaCommanddtor_CLuaCommand15_ptr CLuaCommanddtor_CLuaCommand15_next(nullptr);
        Info::CLuaCommanddtor_CLuaCommand15_clbk CLuaCommanddtor_CLuaCommand15_user(nullptr);
        
        
        void CLuaCommandctor_CLuaCommand2_wrapper(struct CLuaCommand* _this)
        {
           CLuaCommandctor_CLuaCommand2_user(_this, CLuaCommandctor_CLuaCommand2_next);
        };
        char* CLuaCommandGetBuffer4_wrapper(struct CLuaCommand* _this)
        {
           return CLuaCommandGetBuffer4_user(_this, CLuaCommandGetBuffer4_next);
        };
        char CLuaCommandGetType6_wrapper(struct CLuaCommand* _this)
        {
           return CLuaCommandGetType6_user(_this, CLuaCommandGetType6_next);
        };
        void CLuaCommandInit8_wrapper(struct CLuaCommand* _this)
        {
           CLuaCommandInit8_user(_this, CLuaCommandInit8_next);
        };
        void CLuaCommandSetCmd10_wrapper(struct CLuaCommand* _this, char byType, char* strName)
        {
           CLuaCommandSetCmd10_user(_this, byType, strName, CLuaCommandSetCmd10_next);
        };
        
        void CLuaCommanddtor_CLuaCommand15_wrapper(struct CLuaCommand* _this)
        {
           CLuaCommanddtor_CLuaCommand15_user(_this, CLuaCommanddtor_CLuaCommand15_next);
        };
        
        ::std::array<hook_record, 6> CLuaCommand_functions = 
        {
            _hook_record {
                (LPVOID)0x14029d880L,
                (LPVOID *)&CLuaCommandctor_CLuaCommand2_user,
                (LPVOID *)&CLuaCommandctor_CLuaCommand2_next,
                (LPVOID)cast_pointer_function(CLuaCommandctor_CLuaCommand2_wrapper),
                (LPVOID)cast_pointer_function((void(CLuaCommand::*)())&CLuaCommand::ctor_CLuaCommand)
            },
            _hook_record {
                (LPVOID)0x140400fd0L,
                (LPVOID *)&CLuaCommandGetBuffer4_user,
                (LPVOID *)&CLuaCommandGetBuffer4_next,
                (LPVOID)cast_pointer_function(CLuaCommandGetBuffer4_wrapper),
                (LPVOID)cast_pointer_function((char*(CLuaCommand::*)())&CLuaCommand::GetBuffer)
            },
            _hook_record {
                (LPVOID)0x140400fb0L,
                (LPVOID *)&CLuaCommandGetType6_user,
                (LPVOID *)&CLuaCommandGetType6_next,
                (LPVOID)cast_pointer_function(CLuaCommandGetType6_wrapper),
                (LPVOID)cast_pointer_function((char(CLuaCommand::*)())&CLuaCommand::GetType)
            },
            _hook_record {
                (LPVOID)0x14029d910L,
                (LPVOID *)&CLuaCommandInit8_user,
                (LPVOID *)&CLuaCommandInit8_next,
                (LPVOID)cast_pointer_function(CLuaCommandInit8_wrapper),
                (LPVOID)cast_pointer_function((void(CLuaCommand::*)())&CLuaCommand::Init)
            },
            _hook_record {
                (LPVOID)0x14029d930L,
                (LPVOID *)&CLuaCommandSetCmd10_user,
                (LPVOID *)&CLuaCommandSetCmd10_next,
                (LPVOID)cast_pointer_function(CLuaCommandSetCmd10_wrapper),
                (LPVOID)cast_pointer_function((void(CLuaCommand::*)(char, char*))&CLuaCommand::SetCmd)
            },
            _hook_record {
                (LPVOID)0x14029d8f0L,
                (LPVOID *)&CLuaCommanddtor_CLuaCommand15_user,
                (LPVOID *)&CLuaCommanddtor_CLuaCommand15_next,
                (LPVOID)cast_pointer_function(CLuaCommanddtor_CLuaCommand15_wrapper),
                (LPVOID)cast_pointer_function((void(CLuaCommand::*)())&CLuaCommand::dtor_CLuaCommand)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
