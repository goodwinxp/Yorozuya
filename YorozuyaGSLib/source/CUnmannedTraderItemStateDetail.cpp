#include <CUnmannedTraderItemStateDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CUnmannedTraderItemStatector_CUnmannedTraderItemState2_ptr CUnmannedTraderItemStatector_CUnmannedTraderItemState2_next(nullptr);
        Info::CUnmannedTraderItemStatector_CUnmannedTraderItemState2_clbk CUnmannedTraderItemStatector_CUnmannedTraderItemState2_user(nullptr);
        
        Info::CUnmannedTraderItemStateClear4_ptr CUnmannedTraderItemStateClear4_next(nullptr);
        Info::CUnmannedTraderItemStateClear4_clbk CUnmannedTraderItemStateClear4_user(nullptr);
        
        Info::CUnmannedTraderItemStateGetMaxStateCnt6_ptr CUnmannedTraderItemStateGetMaxStateCnt6_next(nullptr);
        Info::CUnmannedTraderItemStateGetMaxStateCnt6_clbk CUnmannedTraderItemStateGetMaxStateCnt6_user(nullptr);
        
        Info::CUnmannedTraderItemStateGetState8_ptr CUnmannedTraderItemStateGetState8_next(nullptr);
        Info::CUnmannedTraderItemStateGetState8_clbk CUnmannedTraderItemStateGetState8_user(nullptr);
        
        Info::CUnmannedTraderItemStateGetStateStrList10_ptr CUnmannedTraderItemStateGetStateStrList10_next(nullptr);
        Info::CUnmannedTraderItemStateGetStateStrList10_clbk CUnmannedTraderItemStateGetStateStrList10_user(nullptr);
        
        Info::CUnmannedTraderItemStateGetStateStrW12_ptr CUnmannedTraderItemStateGetStateStrW12_next(nullptr);
        Info::CUnmannedTraderItemStateGetStateStrW12_clbk CUnmannedTraderItemStateGetStateStrW12_user(nullptr);
        
        Info::CUnmannedTraderItemStatePushUpdateState14_ptr CUnmannedTraderItemStatePushUpdateState14_next(nullptr);
        Info::CUnmannedTraderItemStatePushUpdateState14_clbk CUnmannedTraderItemStatePushUpdateState14_user(nullptr);
        
        Info::CUnmannedTraderItemStateSet16_ptr CUnmannedTraderItemStateSet16_next(nullptr);
        Info::CUnmannedTraderItemStateSet16_clbk CUnmannedTraderItemStateSet16_user(nullptr);
        
        
        Info::CUnmannedTraderItemStatedtor_CUnmannedTraderItemState18_ptr CUnmannedTraderItemStatedtor_CUnmannedTraderItemState18_next(nullptr);
        Info::CUnmannedTraderItemStatedtor_CUnmannedTraderItemState18_clbk CUnmannedTraderItemStatedtor_CUnmannedTraderItemState18_user(nullptr);
        
        
        void CUnmannedTraderItemStatector_CUnmannedTraderItemState2_wrapper(struct CUnmannedTraderItemState* _this)
        {
           CUnmannedTraderItemStatector_CUnmannedTraderItemState2_user(_this, CUnmannedTraderItemStatector_CUnmannedTraderItemState2_next);
        };
        void CUnmannedTraderItemStateClear4_wrapper(struct CUnmannedTraderItemState* _this)
        {
           CUnmannedTraderItemStateClear4_user(_this, CUnmannedTraderItemStateClear4_next);
        };
        unsigned int CUnmannedTraderItemStateGetMaxStateCnt6_wrapper()
        {
           return CUnmannedTraderItemStateGetMaxStateCnt6_user(CUnmannedTraderItemStateGetMaxStateCnt6_next);
        };
        CUnmannedTraderItemState::STATE CUnmannedTraderItemStateGetState8_wrapper(struct CUnmannedTraderItemState* _this)
        {
           return CUnmannedTraderItemStateGetState8_user(_this, CUnmannedTraderItemStateGetState8_next);
        };
        wchar_t** CUnmannedTraderItemStateGetStateStrList10_wrapper()
        {
           return CUnmannedTraderItemStateGetStateStrList10_user(CUnmannedTraderItemStateGetStateStrList10_next);
        };
        wchar_t* CUnmannedTraderItemStateGetStateStrW12_wrapper(unsigned int uiInx)
        {
           return CUnmannedTraderItemStateGetStateStrW12_user(uiInx, CUnmannedTraderItemStateGetStateStrW12_next);
        };
        bool CUnmannedTraderItemStatePushUpdateState14_wrapper(char byType, unsigned int dwRegistSerial, char byState, unsigned int dwOwnerSerial, uint16_t wItemSerial, char byItemTableCode, uint16_t wItemTableIndex)
        {
           return CUnmannedTraderItemStatePushUpdateState14_user(byType, dwRegistSerial, byState, dwOwnerSerial, wItemSerial, byItemTableCode, wItemTableIndex, CUnmannedTraderItemStatePushUpdateState14_next);
        };
        bool CUnmannedTraderItemStateSet16_wrapper(struct CUnmannedTraderItemState* _this, char byState)
        {
           return CUnmannedTraderItemStateSet16_user(_this, byState, CUnmannedTraderItemStateSet16_next);
        };
        
        void CUnmannedTraderItemStatedtor_CUnmannedTraderItemState18_wrapper(struct CUnmannedTraderItemState* _this)
        {
           CUnmannedTraderItemStatedtor_CUnmannedTraderItemState18_user(_this, CUnmannedTraderItemStatedtor_CUnmannedTraderItemState18_next);
        };
        
        ::std::array<hook_record, 9> CUnmannedTraderItemState_functions = 
        {
            _hook_record {
                (LPVOID)0x140352d90L,
                (LPVOID *)&CUnmannedTraderItemStatector_CUnmannedTraderItemState2_user,
                (LPVOID *)&CUnmannedTraderItemStatector_CUnmannedTraderItemState2_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderItemStatector_CUnmannedTraderItemState2_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderItemState::*)())&CUnmannedTraderItemState::ctor_CUnmannedTraderItemState)
            },
            _hook_record {
                (LPVOID)0x140352e30L,
                (LPVOID *)&CUnmannedTraderItemStateClear4_user,
                (LPVOID *)&CUnmannedTraderItemStateClear4_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderItemStateClear4_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderItemState::*)())&CUnmannedTraderItemState::Clear)
            },
            _hook_record {
                (LPVOID)0x140351b70L,
                (LPVOID *)&CUnmannedTraderItemStateGetMaxStateCnt6_user,
                (LPVOID *)&CUnmannedTraderItemStateGetMaxStateCnt6_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderItemStateGetMaxStateCnt6_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(*)())&CUnmannedTraderItemState::GetMaxStateCnt)
            },
            _hook_record {
                (LPVOID)0x140243cb0L,
                (LPVOID *)&CUnmannedTraderItemStateGetState8_user,
                (LPVOID *)&CUnmannedTraderItemStateGetState8_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderItemStateGetState8_wrapper),
                (LPVOID)cast_pointer_function((CUnmannedTraderItemState::STATE(CUnmannedTraderItemState::*)())&CUnmannedTraderItemState::GetState)
            },
            _hook_record {
                (LPVOID)0x140351b80L,
                (LPVOID *)&CUnmannedTraderItemStateGetStateStrList10_user,
                (LPVOID *)&CUnmannedTraderItemStateGetStateStrList10_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderItemStateGetStateStrList10_wrapper),
                (LPVOID)cast_pointer_function((wchar_t**(*)())&CUnmannedTraderItemState::GetStateStrList)
            },
            _hook_record {
                (LPVOID)0x140351b90L,
                (LPVOID *)&CUnmannedTraderItemStateGetStateStrW12_user,
                (LPVOID *)&CUnmannedTraderItemStateGetStateStrW12_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderItemStateGetStateStrW12_wrapper),
                (LPVOID)cast_pointer_function((wchar_t*(*)(unsigned int))&CUnmannedTraderItemState::GetStateStrW)
            },
            _hook_record {
                (LPVOID)0x140351c70L,
                (LPVOID *)&CUnmannedTraderItemStatePushUpdateState14_user,
                (LPVOID *)&CUnmannedTraderItemStatePushUpdateState14_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderItemStatePushUpdateState14_wrapper),
                (LPVOID)cast_pointer_function((bool(*)(char, unsigned int, char, unsigned int, uint16_t, char, uint16_t))&CUnmannedTraderItemState::PushUpdateState)
            },
            _hook_record {
                (LPVOID)0x140352f80L,
                (LPVOID *)&CUnmannedTraderItemStateSet16_user,
                (LPVOID *)&CUnmannedTraderItemStateSet16_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderItemStateSet16_wrapper),
                (LPVOID)cast_pointer_function((bool(CUnmannedTraderItemState::*)(char))&CUnmannedTraderItemState::Set)
            },
            _hook_record {
                (LPVOID)0x140352df0L,
                (LPVOID *)&CUnmannedTraderItemStatedtor_CUnmannedTraderItemState18_user,
                (LPVOID *)&CUnmannedTraderItemStatedtor_CUnmannedTraderItemState18_next,
                (LPVOID)cast_pointer_function(CUnmannedTraderItemStatedtor_CUnmannedTraderItemState18_wrapper),
                (LPVOID)cast_pointer_function((void(CUnmannedTraderItemState::*)())&CUnmannedTraderItemState::dtor_CUnmannedTraderItemState)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
