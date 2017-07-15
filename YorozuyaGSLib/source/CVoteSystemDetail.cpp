#include <CVoteSystemDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CVoteSystemActVote2_ptr CVoteSystemActVote2_next(nullptr);
        Info::CVoteSystemActVote2_clbk CVoteSystemActVote2_user(nullptr);
        
        
        Info::CVoteSystemctor_CVoteSystem4_ptr CVoteSystemctor_CVoteSystem4_next(nullptr);
        Info::CVoteSystemctor_CVoteSystem4_clbk CVoteSystemctor_CVoteSystem4_user(nullptr);
        
        Info::CVoteSystemCompleteSelectCharSerial6_ptr CVoteSystemCompleteSelectCharSerial6_next(nullptr);
        Info::CVoteSystemCompleteSelectCharSerial6_clbk CVoteSystemCompleteSelectCharSerial6_user(nullptr);
        
        Info::CVoteSystemLoop8_ptr CVoteSystemLoop8_next(nullptr);
        Info::CVoteSystemLoop8_clbk CVoteSystemLoop8_user(nullptr);
        
        Info::CVoteSystemProcessPunishment10_ptr CVoteSystemProcessPunishment10_next(nullptr);
        Info::CVoteSystemProcessPunishment10_clbk CVoteSystemProcessPunishment10_user(nullptr);
        
        Info::CVoteSystemSendMsg_StartedVoteInform12_ptr CVoteSystemSendMsg_StartedVoteInform12_next(nullptr);
        Info::CVoteSystemSendMsg_StartedVoteInform12_clbk CVoteSystemSendMsg_StartedVoteInform12_user(nullptr);
        
        Info::CVoteSystemStartVote14_ptr CVoteSystemStartVote14_next(nullptr);
        Info::CVoteSystemStartVote14_clbk CVoteSystemStartVote14_user(nullptr);
        
        Info::CVoteSystemStartVote16_ptr CVoteSystemStartVote16_next(nullptr);
        Info::CVoteSystemStartVote16_clbk CVoteSystemStartVote16_user(nullptr);
        
        Info::CVoteSystemStopVote18_ptr CVoteSystemStopVote18_next(nullptr);
        Info::CVoteSystemStopVote18_clbk CVoteSystemStopVote18_user(nullptr);
        
        
        Info::CVoteSystemdtor_CVoteSystem20_ptr CVoteSystemdtor_CVoteSystem20_next(nullptr);
        Info::CVoteSystemdtor_CVoteSystem20_clbk CVoteSystemdtor_CVoteSystem20_user(nullptr);
        
        bool CVoteSystemActVote2_wrapper(struct CVoteSystem* _this, unsigned int dwAvatorSerial, char byPoint)
        {
           return CVoteSystemActVote2_user(_this, dwAvatorSerial, byPoint, CVoteSystemActVote2_next);
        };
        
        void CVoteSystemctor_CVoteSystem4_wrapper(struct CVoteSystem* _this)
        {
           CVoteSystemctor_CVoteSystem4_user(_this, CVoteSystemctor_CVoteSystem4_next);
        };
        void CVoteSystemCompleteSelectCharSerial6_wrapper(struct CVoteSystem* _this, char* pData)
        {
           CVoteSystemCompleteSelectCharSerial6_user(_this, pData, CVoteSystemCompleteSelectCharSerial6_next);
        };
        void CVoteSystemLoop8_wrapper(struct CVoteSystem* _this)
        {
           CVoteSystemLoop8_user(_this, CVoteSystemLoop8_next);
        };
        void CVoteSystemProcessPunishment10_wrapper(struct CVoteSystem* _this)
        {
           CVoteSystemProcessPunishment10_user(_this, CVoteSystemProcessPunishment10_next);
        };
        void CVoteSystemSendMsg_StartedVoteInform12_wrapper(struct CVoteSystem* _this, int n, unsigned int dwAvatorSerial, bool bPunish)
        {
           CVoteSystemSendMsg_StartedVoteInform12_user(_this, n, dwAvatorSerial, bPunish, CVoteSystemSendMsg_StartedVoteInform12_next);
        };
        bool CVoteSystemStartVote14_wrapper(struct CVoteSystem* _this, char* pwszContent, char byLimGrade, char byRaceCode)
        {
           return CVoteSystemStartVote14_user(_this, pwszContent, byLimGrade, byRaceCode, CVoteSystemStartVote14_next);
        };
        bool CVoteSystemStartVote16_wrapper(struct CVoteSystem* _this, char byRaceCode, char byPunishType, char* pwszContent, char* pwszName, unsigned int dwSerial)
        {
           return CVoteSystemStartVote16_user(_this, byRaceCode, byPunishType, pwszContent, pwszName, dwSerial, CVoteSystemStartVote16_next);
        };
        bool CVoteSystemStopVote18_wrapper(struct CVoteSystem* _this)
        {
           return CVoteSystemStopVote18_user(_this, CVoteSystemStopVote18_next);
        };
        
        void CVoteSystemdtor_CVoteSystem20_wrapper(struct CVoteSystem* _this)
        {
           CVoteSystemdtor_CVoteSystem20_user(_this, CVoteSystemdtor_CVoteSystem20_next);
        };
        
        ::std::array<hook_record, 10> CVoteSystem_functions = 
        {
            _hook_record {
                (LPVOID)0x1402b0580L,
                (LPVOID *)&CVoteSystemActVote2_user,
                (LPVOID *)&CVoteSystemActVote2_next,
                (LPVOID)cast_pointer_function(CVoteSystemActVote2_wrapper),
                (LPVOID)cast_pointer_function((bool(CVoteSystem::*)(unsigned int, char))&CVoteSystem::ActVote)
            },
            _hook_record {
                (LPVOID)0x1402af7f0L,
                (LPVOID *)&CVoteSystemctor_CVoteSystem4_user,
                (LPVOID *)&CVoteSystemctor_CVoteSystem4_next,
                (LPVOID)cast_pointer_function(CVoteSystemctor_CVoteSystem4_wrapper),
                (LPVOID)cast_pointer_function((void(CVoteSystem::*)())&CVoteSystem::ctor_CVoteSystem)
            },
            _hook_record {
                (LPVOID)0x1402b02c0L,
                (LPVOID *)&CVoteSystemCompleteSelectCharSerial6_user,
                (LPVOID *)&CVoteSystemCompleteSelectCharSerial6_next,
                (LPVOID)cast_pointer_function(CVoteSystemCompleteSelectCharSerial6_wrapper),
                (LPVOID)cast_pointer_function((void(CVoteSystem::*)(char*))&CVoteSystem::CompleteSelectCharSerial)
            },
            _hook_record {
                (LPVOID)0x1402b0620L,
                (LPVOID *)&CVoteSystemLoop8_user,
                (LPVOID *)&CVoteSystemLoop8_next,
                (LPVOID)cast_pointer_function(CVoteSystemLoop8_wrapper),
                (LPVOID)cast_pointer_function((void(CVoteSystem::*)())&CVoteSystem::Loop)
            },
            _hook_record {
                (LPVOID)0x1402affd0L,
                (LPVOID *)&CVoteSystemProcessPunishment10_user,
                (LPVOID *)&CVoteSystemProcessPunishment10_next,
                (LPVOID)cast_pointer_function(CVoteSystemProcessPunishment10_wrapper),
                (LPVOID)cast_pointer_function((void(CVoteSystem::*)())&CVoteSystem::ProcessPunishment)
            },
            _hook_record {
                (LPVOID)0x1402b0890L,
                (LPVOID *)&CVoteSystemSendMsg_StartedVoteInform12_user,
                (LPVOID *)&CVoteSystemSendMsg_StartedVoteInform12_next,
                (LPVOID)cast_pointer_function(CVoteSystemSendMsg_StartedVoteInform12_wrapper),
                (LPVOID)cast_pointer_function((void(CVoteSystem::*)(int, unsigned int, bool))&CVoteSystem::SendMsg_StartedVoteInform)
            },
            _hook_record {
                (LPVOID)0x1402af8b0L,
                (LPVOID *)&CVoteSystemStartVote14_user,
                (LPVOID *)&CVoteSystemStartVote14_next,
                (LPVOID)cast_pointer_function(CVoteSystemStartVote14_wrapper),
                (LPVOID)cast_pointer_function((bool(CVoteSystem::*)(char*, char, char))&CVoteSystem::StartVote)
            },
            _hook_record {
                (LPVOID)0x1402afbc0L,
                (LPVOID *)&CVoteSystemStartVote16_user,
                (LPVOID *)&CVoteSystemStartVote16_next,
                (LPVOID)cast_pointer_function(CVoteSystemStartVote16_wrapper),
                (LPVOID)cast_pointer_function((bool(CVoteSystem::*)(char, char, char*, char*, unsigned int))&CVoteSystem::StartVote)
            },
            _hook_record {
                (LPVOID)0x1402b03b0L,
                (LPVOID *)&CVoteSystemStopVote18_user,
                (LPVOID *)&CVoteSystemStopVote18_next,
                (LPVOID)cast_pointer_function(CVoteSystemStopVote18_wrapper),
                (LPVOID)cast_pointer_function((bool(CVoteSystem::*)())&CVoteSystem::StopVote)
            },
            _hook_record {
                (LPVOID)0x1402b0fd0L,
                (LPVOID *)&CVoteSystemdtor_CVoteSystem20_user,
                (LPVOID *)&CVoteSystemdtor_CVoteSystem20_next,
                (LPVOID)cast_pointer_function(CVoteSystemdtor_CVoteSystem20_wrapper),
                (LPVOID)cast_pointer_function((void(CVoteSystem::*)())&CVoteSystem::dtor_CVoteSystem)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
