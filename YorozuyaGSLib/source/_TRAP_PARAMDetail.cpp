#include <_TRAP_PARAMDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_TRAP_PARAMGetNum2_ptr _TRAP_PARAMGetNum2_next(nullptr);
        Info::_TRAP_PARAMGetNum2_clbk _TRAP_PARAMGetNum2_user(nullptr);
        
        Info::_TRAP_PARAMInit4_ptr _TRAP_PARAMInit4_next(nullptr);
        Info::_TRAP_PARAMInit4_clbk _TRAP_PARAMInit4_user(nullptr);
        
        Info::_TRAP_PARAMPopItem6_ptr _TRAP_PARAMPopItem6_next(nullptr);
        Info::_TRAP_PARAMPopItem6_clbk _TRAP_PARAMPopItem6_user(nullptr);
        
        Info::_TRAP_PARAMPushItem8_ptr _TRAP_PARAMPushItem8_next(nullptr);
        Info::_TRAP_PARAMPushItem8_clbk _TRAP_PARAMPushItem8_user(nullptr);
        
        
        Info::_TRAP_PARAMctor__TRAP_PARAM10_ptr _TRAP_PARAMctor__TRAP_PARAM10_next(nullptr);
        Info::_TRAP_PARAMctor__TRAP_PARAM10_clbk _TRAP_PARAMctor__TRAP_PARAM10_user(nullptr);
        
        int _TRAP_PARAMGetNum2_wrapper(struct _TRAP_PARAM* _this)
        {
           return _TRAP_PARAMGetNum2_user(_this, _TRAP_PARAMGetNum2_next);
        };
        void _TRAP_PARAMInit4_wrapper(struct _TRAP_PARAM* _this)
        {
           _TRAP_PARAMInit4_user(_this, _TRAP_PARAMInit4_next);
        };
        bool _TRAP_PARAMPopItem6_wrapper(struct _TRAP_PARAM* _this, unsigned int dwTrapSerial)
        {
           return _TRAP_PARAMPopItem6_user(_this, dwTrapSerial, _TRAP_PARAMPopItem6_next);
        };
        bool _TRAP_PARAMPushItem8_wrapper(struct _TRAP_PARAM* _this, struct CTrap* pTrap, unsigned int dwTrapSerial)
        {
           return _TRAP_PARAMPushItem8_user(_this, pTrap, dwTrapSerial, _TRAP_PARAMPushItem8_next);
        };
        
        void _TRAP_PARAMctor__TRAP_PARAM10_wrapper(struct _TRAP_PARAM* _this)
        {
           _TRAP_PARAMctor__TRAP_PARAM10_user(_this, _TRAP_PARAMctor__TRAP_PARAM10_next);
        };
        
        ::std::array<hook_record, 5> _TRAP_PARAM_functions = 
        {
            _hook_record {
                (LPVOID)0x1400a6a20L,
                (LPVOID *)&_TRAP_PARAMGetNum2_user,
                (LPVOID *)&_TRAP_PARAMGetNum2_next,
                (LPVOID)cast_pointer_function(_TRAP_PARAMGetNum2_wrapper),
                (LPVOID)cast_pointer_function((int(_TRAP_PARAM::*)())&_TRAP_PARAM::GetNum)
            },
            _hook_record {
                (LPVOID)0x140072cd0L,
                (LPVOID *)&_TRAP_PARAMInit4_user,
                (LPVOID *)&_TRAP_PARAMInit4_next,
                (LPVOID)cast_pointer_function(_TRAP_PARAMInit4_wrapper),
                (LPVOID)cast_pointer_function((void(_TRAP_PARAM::*)())&_TRAP_PARAM::Init)
            },
            _hook_record {
                (LPVOID)0x1400a6aa0L,
                (LPVOID *)&_TRAP_PARAMPopItem6_user,
                (LPVOID *)&_TRAP_PARAMPopItem6_next,
                (LPVOID)cast_pointer_function(_TRAP_PARAMPopItem6_wrapper),
                (LPVOID)cast_pointer_function((bool(_TRAP_PARAM::*)(unsigned int))&_TRAP_PARAM::PopItem)
            },
            _hook_record {
                (LPVOID)0x1400791f0L,
                (LPVOID *)&_TRAP_PARAMPushItem8_user,
                (LPVOID *)&_TRAP_PARAMPushItem8_next,
                (LPVOID)cast_pointer_function(_TRAP_PARAMPushItem8_wrapper),
                (LPVOID)cast_pointer_function((bool(_TRAP_PARAM::*)(struct CTrap*, unsigned int))&_TRAP_PARAM::PushItem)
            },
            _hook_record {
                (LPVOID)0x140072c40L,
                (LPVOID *)&_TRAP_PARAMctor__TRAP_PARAM10_user,
                (LPVOID *)&_TRAP_PARAMctor__TRAP_PARAM10_next,
                (LPVOID)cast_pointer_function(_TRAP_PARAMctor__TRAP_PARAM10_wrapper),
                (LPVOID)cast_pointer_function((void(_TRAP_PARAM::*)())&_TRAP_PARAM::ctor__TRAP_PARAM)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
