#include <RFEventBaseDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::RFEventBaseDoEvent2_ptr RFEventBaseDoEvent2_next(nullptr);
        Info::RFEventBaseDoEvent2_clbk RFEventBaseDoEvent2_user(nullptr);
        
        Info::RFEventBaseGetPlayerState4_ptr RFEventBaseGetPlayerState4_next(nullptr);
        Info::RFEventBaseGetPlayerState4_clbk RFEventBaseGetPlayerState4_user(nullptr);
        
        Info::RFEventBaseInitialzie6_ptr RFEventBaseInitialzie6_next(nullptr);
        Info::RFEventBaseInitialzie6_clbk RFEventBaseInitialzie6_user(nullptr);
        
        Info::RFEventBaseIsDbUpdate8_ptr RFEventBaseIsDbUpdate8_next(nullptr);
        Info::RFEventBaseIsDbUpdate8_clbk RFEventBaseIsDbUpdate8_user(nullptr);
        
        Info::RFEventBaseIsEnable10_ptr RFEventBaseIsEnable10_next(nullptr);
        Info::RFEventBaseIsEnable10_clbk RFEventBaseIsEnable10_user(nullptr);
        
        Info::RFEventBaseLoop12_ptr RFEventBaseLoop12_next(nullptr);
        Info::RFEventBaseLoop12_clbk RFEventBaseLoop12_user(nullptr);
        
        
        Info::RFEventBasector_RFEventBase14_ptr RFEventBasector_RFEventBase14_next(nullptr);
        Info::RFEventBasector_RFEventBase14_clbk RFEventBasector_RFEventBase14_user(nullptr);
        
        Info::RFEventBaseSetEvent16_ptr RFEventBaseSetEvent16_next(nullptr);
        Info::RFEventBaseSetEvent16_clbk RFEventBaseSetEvent16_user(nullptr);
        
        Info::RFEventBaseSetPlayerState18_ptr RFEventBaseSetPlayerState18_next(nullptr);
        Info::RFEventBaseSetPlayerState18_clbk RFEventBaseSetPlayerState18_user(nullptr);
        
        
        Info::RFEventBasedtor_RFEventBase23_ptr RFEventBasedtor_RFEventBase23_next(nullptr);
        Info::RFEventBasedtor_RFEventBase23_clbk RFEventBasedtor_RFEventBase23_user(nullptr);
        
        int RFEventBaseDoEvent2_wrapper(struct RFEventBase* _this, struct CPlayer* pOne)
        {
           return RFEventBaseDoEvent2_user(_this, pOne, RFEventBaseDoEvent2_next);
        };
        char* RFEventBaseGetPlayerState4_wrapper(struct RFEventBase* _this, unsigned int nIdx, unsigned int nAvator)
        {
           return RFEventBaseGetPlayerState4_user(_this, nIdx, nAvator, RFEventBaseGetPlayerState4_next);
        };
        bool RFEventBaseInitialzie6_wrapper(struct RFEventBase* _this)
        {
           return RFEventBaseInitialzie6_user(_this, RFEventBaseInitialzie6_next);
        };
        bool RFEventBaseIsDbUpdate8_wrapper(struct RFEventBase* _this, unsigned int nIdx)
        {
           return RFEventBaseIsDbUpdate8_user(_this, nIdx, RFEventBaseIsDbUpdate8_next);
        };
        bool RFEventBaseIsEnable10_wrapper(struct RFEventBase* _this)
        {
           return RFEventBaseIsEnable10_user(_this, RFEventBaseIsEnable10_next);
        };
        void RFEventBaseLoop12_wrapper(struct RFEventBase* _this)
        {
           RFEventBaseLoop12_user(_this, RFEventBaseLoop12_next);
        };
        
        void RFEventBasector_RFEventBase14_wrapper(struct RFEventBase* _this)
        {
           RFEventBasector_RFEventBase14_user(_this, RFEventBasector_RFEventBase14_next);
        };
        bool RFEventBaseSetEvent16_wrapper(struct RFEventBase* _this, char* p, int size, bool bInit)
        {
           return RFEventBaseSetEvent16_user(_this, p, size, bInit, RFEventBaseSetEvent16_next);
        };
        bool RFEventBaseSetPlayerState18_wrapper(struct RFEventBase* _this, void* p, int size)
        {
           return RFEventBaseSetPlayerState18_user(_this, p, size, RFEventBaseSetPlayerState18_next);
        };
        
        void RFEventBasedtor_RFEventBase23_wrapper(struct RFEventBase* _this)
        {
           RFEventBasedtor_RFEventBase23_user(_this, RFEventBasedtor_RFEventBase23_next);
        };
        
        ::std::array<hook_record, 10> RFEventBase_functions = 
        {
            _hook_record {
                (LPVOID)0x1403294d0L,
                (LPVOID *)&RFEventBaseDoEvent2_user,
                (LPVOID *)&RFEventBaseDoEvent2_next,
                (LPVOID)cast_pointer_function(RFEventBaseDoEvent2_wrapper),
                (LPVOID)cast_pointer_function((int(RFEventBase::*)(struct CPlayer*))&RFEventBase::DoEvent)
            },
            _hook_record {
                (LPVOID)0x140329550L,
                (LPVOID *)&RFEventBaseGetPlayerState4_user,
                (LPVOID *)&RFEventBaseGetPlayerState4_next,
                (LPVOID)cast_pointer_function(RFEventBaseGetPlayerState4_wrapper),
                (LPVOID)cast_pointer_function((char*(RFEventBase::*)(unsigned int, unsigned int))&RFEventBase::GetPlayerState)
            },
            _hook_record {
                (LPVOID)0x1403294a0L,
                (LPVOID *)&RFEventBaseInitialzie6_user,
                (LPVOID *)&RFEventBaseInitialzie6_next,
                (LPVOID)cast_pointer_function(RFEventBaseInitialzie6_wrapper),
                (LPVOID)cast_pointer_function((bool(RFEventBase::*)())&RFEventBase::Initialzie)
            },
            _hook_record {
                (LPVOID)0x140329500L,
                (LPVOID *)&RFEventBaseIsDbUpdate8_user,
                (LPVOID *)&RFEventBaseIsDbUpdate8_next,
                (LPVOID)cast_pointer_function(RFEventBaseIsDbUpdate8_wrapper),
                (LPVOID)cast_pointer_function((bool(RFEventBase::*)(unsigned int))&RFEventBase::IsDbUpdate)
            },
            _hook_record {
                (LPVOID)0x1403294f0L,
                (LPVOID *)&RFEventBaseIsEnable10_user,
                (LPVOID *)&RFEventBaseIsEnable10_next,
                (LPVOID)cast_pointer_function(RFEventBaseIsEnable10_wrapper),
                (LPVOID)cast_pointer_function((bool(RFEventBase::*)())&RFEventBase::IsEnable)
            },
            _hook_record {
                (LPVOID)0x140329520L,
                (LPVOID *)&RFEventBaseLoop12_user,
                (LPVOID *)&RFEventBaseLoop12_next,
                (LPVOID)cast_pointer_function(RFEventBaseLoop12_wrapper),
                (LPVOID)cast_pointer_function((void(RFEventBase::*)())&RFEventBase::Loop)
            },
            _hook_record {
                (LPVOID)0x140329450L,
                (LPVOID *)&RFEventBasector_RFEventBase14_user,
                (LPVOID *)&RFEventBasector_RFEventBase14_next,
                (LPVOID)cast_pointer_function(RFEventBasector_RFEventBase14_wrapper),
                (LPVOID)cast_pointer_function((void(RFEventBase::*)())&RFEventBase::ctor_RFEventBase)
            },
            _hook_record {
                (LPVOID)0x1403294b0L,
                (LPVOID *)&RFEventBaseSetEvent16_user,
                (LPVOID *)&RFEventBaseSetEvent16_next,
                (LPVOID)cast_pointer_function(RFEventBaseSetEvent16_wrapper),
                (LPVOID)cast_pointer_function((bool(RFEventBase::*)(char*, int, bool))&RFEventBase::SetEvent)
            },
            _hook_record {
                (LPVOID)0x140329530L,
                (LPVOID *)&RFEventBaseSetPlayerState18_user,
                (LPVOID *)&RFEventBaseSetPlayerState18_next,
                (LPVOID)cast_pointer_function(RFEventBaseSetPlayerState18_wrapper),
                (LPVOID)cast_pointer_function((bool(RFEventBase::*)(void*, int))&RFEventBase::SetPlayerState)
            },
            _hook_record {
                (LPVOID)0x140329480L,
                (LPVOID *)&RFEventBasedtor_RFEventBase23_user,
                (LPVOID *)&RFEventBasedtor_RFEventBase23_next,
                (LPVOID)cast_pointer_function(RFEventBasedtor_RFEventBase23_wrapper),
                (LPVOID)cast_pointer_function((void(RFEventBase::*)())&RFEventBase::dtor_RFEventBase)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
