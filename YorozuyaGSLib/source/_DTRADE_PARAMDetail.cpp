#include <_DTRADE_PARAMDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_DTRADE_PARAMInit2_ptr _DTRADE_PARAMInit2_next(nullptr);
        Info::_DTRADE_PARAMInit2_clbk _DTRADE_PARAMInit2_user(nullptr);
        
        Info::_DTRADE_PARAMSetDTradeStart4_ptr _DTRADE_PARAMSetDTradeStart4_next(nullptr);
        Info::_DTRADE_PARAMSetDTradeStart4_clbk _DTRADE_PARAMSetDTradeStart4_user(nullptr);
        
        
        Info::_DTRADE_PARAMctor__DTRADE_PARAM6_ptr _DTRADE_PARAMctor__DTRADE_PARAM6_next(nullptr);
        Info::_DTRADE_PARAMctor__DTRADE_PARAM6_clbk _DTRADE_PARAMctor__DTRADE_PARAM6_user(nullptr);
        
        void _DTRADE_PARAMInit2_wrapper(struct _DTRADE_PARAM* _this)
        {
           _DTRADE_PARAMInit2_user(_this, _DTRADE_PARAMInit2_next);
        };
        void _DTRADE_PARAMSetDTradeStart4_wrapper(struct _DTRADE_PARAM* _this, uint16_t pl_dwDstIndex, unsigned int pl_dwDstSerial, int pl_mEmptyInvenNum, unsigned int* pl_dwKey)
        {
           _DTRADE_PARAMSetDTradeStart4_user(_this, pl_dwDstIndex, pl_dwDstSerial, pl_mEmptyInvenNum, pl_dwKey, _DTRADE_PARAMSetDTradeStart4_next);
        };
        
        void _DTRADE_PARAMctor__DTRADE_PARAM6_wrapper(struct _DTRADE_PARAM* _this)
        {
           _DTRADE_PARAMctor__DTRADE_PARAM6_user(_this, _DTRADE_PARAMctor__DTRADE_PARAM6_next);
        };
        
        ::std::array<hook_record, 3> _DTRADE_PARAM_functions = 
        {
            _hook_record {
                (LPVOID)0x140072c10L,
                (LPVOID *)&_DTRADE_PARAMInit2_user,
                (LPVOID *)&_DTRADE_PARAMInit2_next,
                (LPVOID)cast_pointer_function(_DTRADE_PARAMInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_DTRADE_PARAM::*)())&_DTRADE_PARAM::Init)
            },
            _hook_record {
                (LPVOID)0x1400f78b0L,
                (LPVOID *)&_DTRADE_PARAMSetDTradeStart4_user,
                (LPVOID *)&_DTRADE_PARAMSetDTradeStart4_next,
                (LPVOID)cast_pointer_function(_DTRADE_PARAMSetDTradeStart4_wrapper),
                (LPVOID)cast_pointer_function((void(_DTRADE_PARAM::*)(uint16_t, unsigned int, int, unsigned int*))&_DTRADE_PARAM::SetDTradeStart)
            },
            _hook_record {
                (LPVOID)0x140072bc0L,
                (LPVOID *)&_DTRADE_PARAMctor__DTRADE_PARAM6_user,
                (LPVOID *)&_DTRADE_PARAMctor__DTRADE_PARAM6_next,
                (LPVOID)cast_pointer_function(_DTRADE_PARAMctor__DTRADE_PARAM6_wrapper),
                (LPVOID)cast_pointer_function((void(_DTRADE_PARAM::*)())&_DTRADE_PARAM::ctor__DTRADE_PARAM)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
