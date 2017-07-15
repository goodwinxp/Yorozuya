#include <ClassOrderProcessorDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::ClassOrderProcessorctor_ClassOrderProcessor2_ptr ClassOrderProcessorctor_ClassOrderProcessor2_next(nullptr);
        Info::ClassOrderProcessorctor_ClassOrderProcessor2_clbk ClassOrderProcessorctor_ClassOrderProcessor2_user(nullptr);
        
        Info::ClassOrderProcessorDoit4_ptr ClassOrderProcessorDoit4_next(nullptr);
        Info::ClassOrderProcessorDoit4_clbk ClassOrderProcessorDoit4_user(nullptr);
        
        Info::ClassOrderProcessorInitialize6_ptr ClassOrderProcessorInitialize6_next(nullptr);
        Info::ClassOrderProcessorInitialize6_clbk ClassOrderProcessorInitialize6_user(nullptr);
        
        Info::ClassOrderProcessorInstance8_ptr ClassOrderProcessorInstance8_next(nullptr);
        Info::ClassOrderProcessorInstance8_clbk ClassOrderProcessorInstance8_user(nullptr);
        
        Info::ClassOrderProcessorSendMsg_PatriarchInform10_ptr ClassOrderProcessorSendMsg_PatriarchInform10_next(nullptr);
        Info::ClassOrderProcessorSendMsg_PatriarchInform10_clbk ClassOrderProcessorSendMsg_PatriarchInform10_user(nullptr);
        
        Info::ClassOrderProcessorSendMsg_QueryAppointResult12_ptr ClassOrderProcessorSendMsg_QueryAppointResult12_next(nullptr);
        Info::ClassOrderProcessorSendMsg_QueryAppointResult12_clbk ClassOrderProcessorSendMsg_QueryAppointResult12_user(nullptr);
        
        Info::ClassOrderProcessorUpdatePacket14_ptr ClassOrderProcessorUpdatePacket14_next(nullptr);
        Info::ClassOrderProcessorUpdatePacket14_clbk ClassOrderProcessorUpdatePacket14_user(nullptr);
        
        Info::ClassOrderProcessor_CheckUserInfo16_ptr ClassOrderProcessor_CheckUserInfo16_next(nullptr);
        Info::ClassOrderProcessor_CheckUserInfo16_clbk ClassOrderProcessor_CheckUserInfo16_user(nullptr);
        
        Info::ClassOrderProcessor_QueryAppoint18_ptr ClassOrderProcessor_QueryAppoint18_next(nullptr);
        Info::ClassOrderProcessor_QueryAppoint18_clbk ClassOrderProcessor_QueryAppoint18_user(nullptr);
        
        Info::ClassOrderProcessor_RequestAppoint20_ptr ClassOrderProcessor_RequestAppoint20_next(nullptr);
        Info::ClassOrderProcessor_RequestAppoint20_clbk ClassOrderProcessor_RequestAppoint20_user(nullptr);
        
        Info::ClassOrderProcessor_RequestDischarge22_ptr ClassOrderProcessor_RequestDischarge22_next(nullptr);
        Info::ClassOrderProcessor_RequestDischarge22_clbk ClassOrderProcessor_RequestDischarge22_user(nullptr);
        
        Info::ClassOrderProcessor_ResponseAppoint24_ptr ClassOrderProcessor_ResponseAppoint24_next(nullptr);
        Info::ClassOrderProcessor_ResponseAppoint24_clbk ClassOrderProcessor_ResponseAppoint24_user(nullptr);
        
        
        Info::ClassOrderProcessordtor_ClassOrderProcessor29_ptr ClassOrderProcessordtor_ClassOrderProcessor29_next(nullptr);
        Info::ClassOrderProcessordtor_ClassOrderProcessor29_clbk ClassOrderProcessordtor_ClassOrderProcessor29_user(nullptr);
        
        
        void ClassOrderProcessorctor_ClassOrderProcessor2_wrapper(struct ClassOrderProcessor* _this)
        {
           ClassOrderProcessorctor_ClassOrderProcessor2_user(_this, ClassOrderProcessorctor_ClassOrderProcessor2_next);
        };
        int ClassOrderProcessorDoit4_wrapper(struct ClassOrderProcessor* _this, Cmd eCmd, struct CPlayer* pOne, char* pdata)
        {
           return ClassOrderProcessorDoit4_user(_this, eCmd, pOne, pdata, ClassOrderProcessorDoit4_next);
        };
        bool ClassOrderProcessorInitialize6_wrapper(struct ClassOrderProcessor* _this)
        {
           return ClassOrderProcessorInitialize6_user(_this, ClassOrderProcessorInitialize6_next);
        };
        struct ClassOrderProcessor* ClassOrderProcessorInstance8_wrapper()
        {
           return ClassOrderProcessorInstance8_user(ClassOrderProcessorInstance8_next);
        };
        void ClassOrderProcessorSendMsg_PatriarchInform10_wrapper(struct ClassOrderProcessor* _this, struct CPlayer* pOne)
        {
           ClassOrderProcessorSendMsg_PatriarchInform10_user(_this, pOne, ClassOrderProcessorSendMsg_PatriarchInform10_next);
        };
        void ClassOrderProcessorSendMsg_QueryAppointResult12_wrapper(struct ClassOrderProcessor* _this, uint16_t wIndex, char byRet, char byClassType, char* pwszAvatorName)
        {
           ClassOrderProcessorSendMsg_QueryAppointResult12_user(_this, wIndex, byRet, byClassType, pwszAvatorName, ClassOrderProcessorSendMsg_QueryAppointResult12_next);
        };
        void ClassOrderProcessorUpdatePacket14_wrapper(struct ClassOrderProcessor* _this, char byRace, char byClassType)
        {
           ClassOrderProcessorUpdatePacket14_user(_this, byRace, byClassType, ClassOrderProcessorUpdatePacket14_next);
        };
        int ClassOrderProcessor_CheckUserInfo16_wrapper(struct ClassOrderProcessor* _this, char byRace, char byClassType, struct CPlayer* pUser)
        {
           return ClassOrderProcessor_CheckUserInfo16_user(_this, byRace, byClassType, pUser, ClassOrderProcessor_CheckUserInfo16_next);
        };
        int ClassOrderProcessor_QueryAppoint18_wrapper(struct ClassOrderProcessor* _this, struct CPlayer* pOne, char* pData)
        {
           return ClassOrderProcessor_QueryAppoint18_user(_this, pOne, pData, ClassOrderProcessor_QueryAppoint18_next);
        };
        int ClassOrderProcessor_RequestAppoint20_wrapper(struct ClassOrderProcessor* _this, struct CPlayer* pOne, char* pData)
        {
           return ClassOrderProcessor_RequestAppoint20_user(_this, pOne, pData, ClassOrderProcessor_RequestAppoint20_next);
        };
        int ClassOrderProcessor_RequestDischarge22_wrapper(struct ClassOrderProcessor* _this, struct CPlayer* pOne, char* pData)
        {
           return ClassOrderProcessor_RequestDischarge22_user(_this, pOne, pData, ClassOrderProcessor_RequestDischarge22_next);
        };
        int ClassOrderProcessor_ResponseAppoint24_wrapper(struct ClassOrderProcessor* _this, struct CPlayer* pOne, char* pData)
        {
           return ClassOrderProcessor_ResponseAppoint24_user(_this, pOne, pData, ClassOrderProcessor_ResponseAppoint24_next);
        };
        
        void ClassOrderProcessordtor_ClassOrderProcessor29_wrapper(struct ClassOrderProcessor* _this)
        {
           ClassOrderProcessordtor_ClassOrderProcessor29_user(_this, ClassOrderProcessordtor_ClassOrderProcessor29_next);
        };
        
        ::std::array<hook_record, 13> ClassOrderProcessor_functions = 
        {
            _hook_record {
                (LPVOID)0x1402b8010L,
                (LPVOID *)&ClassOrderProcessorctor_ClassOrderProcessor2_user,
                (LPVOID *)&ClassOrderProcessorctor_ClassOrderProcessor2_next,
                (LPVOID)cast_pointer_function(ClassOrderProcessorctor_ClassOrderProcessor2_wrapper),
                (LPVOID)cast_pointer_function((void(ClassOrderProcessor::*)())&ClassOrderProcessor::ctor_ClassOrderProcessor)
            },
            _hook_record {
                (LPVOID)0x1402b8360L,
                (LPVOID *)&ClassOrderProcessorDoit4_user,
                (LPVOID *)&ClassOrderProcessorDoit4_next,
                (LPVOID)cast_pointer_function(ClassOrderProcessorDoit4_wrapper),
                (LPVOID)cast_pointer_function((int(ClassOrderProcessor::*)(Cmd, struct CPlayer*, char*))&ClassOrderProcessor::Doit)
            },
            _hook_record {
                (LPVOID)0x1402b8250L,
                (LPVOID *)&ClassOrderProcessorInitialize6_user,
                (LPVOID *)&ClassOrderProcessorInitialize6_next,
                (LPVOID)cast_pointer_function(ClassOrderProcessorInitialize6_wrapper),
                (LPVOID)cast_pointer_function((bool(ClassOrderProcessor::*)())&ClassOrderProcessor::Initialize)
            },
            _hook_record {
                (LPVOID)0x1402b8190L,
                (LPVOID *)&ClassOrderProcessorInstance8_user,
                (LPVOID *)&ClassOrderProcessorInstance8_next,
                (LPVOID)cast_pointer_function(ClassOrderProcessorInstance8_wrapper),
                (LPVOID)cast_pointer_function((struct ClassOrderProcessor*(*)())&ClassOrderProcessor::Instance)
            },
            _hook_record {
                (LPVOID)0x1402b8f50L,
                (LPVOID *)&ClassOrderProcessorSendMsg_PatriarchInform10_user,
                (LPVOID *)&ClassOrderProcessorSendMsg_PatriarchInform10_next,
                (LPVOID)cast_pointer_function(ClassOrderProcessorSendMsg_PatriarchInform10_wrapper),
                (LPVOID)cast_pointer_function((void(ClassOrderProcessor::*)(struct CPlayer*))&ClassOrderProcessor::SendMsg_PatriarchInform)
            },
            _hook_record {
                (LPVOID)0x1402b8e60L,
                (LPVOID *)&ClassOrderProcessorSendMsg_QueryAppointResult12_user,
                (LPVOID *)&ClassOrderProcessorSendMsg_QueryAppointResult12_next,
                (LPVOID)cast_pointer_function(ClassOrderProcessorSendMsg_QueryAppointResult12_wrapper),
                (LPVOID)cast_pointer_function((void(ClassOrderProcessor::*)(uint16_t, char, char, char*))&ClassOrderProcessor::SendMsg_QueryAppointResult)
            },
            _hook_record {
                (LPVOID)0x1402b9180L,
                (LPVOID *)&ClassOrderProcessorUpdatePacket14_user,
                (LPVOID *)&ClassOrderProcessorUpdatePacket14_next,
                (LPVOID)cast_pointer_function(ClassOrderProcessorUpdatePacket14_wrapper),
                (LPVOID)cast_pointer_function((void(ClassOrderProcessor::*)(char, char))&ClassOrderProcessor::UpdatePacket)
            },
            _hook_record {
                (LPVOID)0x1402b9060L,
                (LPVOID *)&ClassOrderProcessor_CheckUserInfo16_user,
                (LPVOID *)&ClassOrderProcessor_CheckUserInfo16_next,
                (LPVOID)cast_pointer_function(ClassOrderProcessor_CheckUserInfo16_wrapper),
                (LPVOID)cast_pointer_function((int(ClassOrderProcessor::*)(char, char, struct CPlayer*))&ClassOrderProcessor::_CheckUserInfo)
            },
            _hook_record {
                (LPVOID)0x1402b8460L,
                (LPVOID *)&ClassOrderProcessor_QueryAppoint18_user,
                (LPVOID *)&ClassOrderProcessor_QueryAppoint18_next,
                (LPVOID)cast_pointer_function(ClassOrderProcessor_QueryAppoint18_wrapper),
                (LPVOID)cast_pointer_function((int(ClassOrderProcessor::*)(struct CPlayer*, char*))&ClassOrderProcessor::_QueryAppoint)
            },
            _hook_record {
                (LPVOID)0x1402b85b0L,
                (LPVOID *)&ClassOrderProcessor_RequestAppoint20_user,
                (LPVOID *)&ClassOrderProcessor_RequestAppoint20_next,
                (LPVOID)cast_pointer_function(ClassOrderProcessor_RequestAppoint20_wrapper),
                (LPVOID)cast_pointer_function((int(ClassOrderProcessor::*)(struct CPlayer*, char*))&ClassOrderProcessor::_RequestAppoint)
            },
            _hook_record {
                (LPVOID)0x1402b8ac0L,
                (LPVOID *)&ClassOrderProcessor_RequestDischarge22_user,
                (LPVOID *)&ClassOrderProcessor_RequestDischarge22_next,
                (LPVOID)cast_pointer_function(ClassOrderProcessor_RequestDischarge22_wrapper),
                (LPVOID)cast_pointer_function((int(ClassOrderProcessor::*)(struct CPlayer*, char*))&ClassOrderProcessor::_RequestDischarge)
            },
            _hook_record {
                (LPVOID)0x1402b87c0L,
                (LPVOID *)&ClassOrderProcessor_ResponseAppoint24_user,
                (LPVOID *)&ClassOrderProcessor_ResponseAppoint24_next,
                (LPVOID)cast_pointer_function(ClassOrderProcessor_ResponseAppoint24_wrapper),
                (LPVOID)cast_pointer_function((int(ClassOrderProcessor::*)(struct CPlayer*, char*))&ClassOrderProcessor::_ResponseAppoint)
            },
            _hook_record {
                (LPVOID)0x1402b8140L,
                (LPVOID *)&ClassOrderProcessordtor_ClassOrderProcessor29_user,
                (LPVOID *)&ClassOrderProcessordtor_ClassOrderProcessor29_next,
                (LPVOID)cast_pointer_function(ClassOrderProcessordtor_ClassOrderProcessor29_wrapper),
                (LPVOID)cast_pointer_function((void(ClassOrderProcessor::*)())&ClassOrderProcessor::dtor_ClassOrderProcessor)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
