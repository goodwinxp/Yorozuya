#include <CChatStealSystemDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CChatStealSystemctor_CChatStealSystem2_ptr CChatStealSystemctor_CChatStealSystem2_next(nullptr);
        Info::CChatStealSystemctor_CChatStealSystem2_clbk CChatStealSystemctor_CChatStealSystem2_user(nullptr);
        
        Info::CChatStealSystemInstance4_ptr CChatStealSystemInstance4_next(nullptr);
        Info::CChatStealSystemInstance4_clbk CChatStealSystemInstance4_user(nullptr);
        
        Info::CChatStealSystemSendStealMsg6_ptr CChatStealSystemSendStealMsg6_next(nullptr);
        Info::CChatStealSystemSendStealMsg6_clbk CChatStealSystemSendStealMsg6_user(nullptr);
        
        Info::CChatStealSystemSetGm8_ptr CChatStealSystemSetGm8_next(nullptr);
        Info::CChatStealSystemSetGm8_clbk CChatStealSystemSetGm8_user(nullptr);
        
        Info::CChatStealSystemSetTargetInfoFromBoss10_ptr CChatStealSystemSetTargetInfoFromBoss10_next(nullptr);
        Info::CChatStealSystemSetTargetInfoFromBoss10_clbk CChatStealSystemSetTargetInfoFromBoss10_user(nullptr);
        
        Info::CChatStealSystemSetTargetInfoFromCharacter12_ptr CChatStealSystemSetTargetInfoFromCharacter12_next(nullptr);
        Info::CChatStealSystemSetTargetInfoFromCharacter12_clbk CChatStealSystemSetTargetInfoFromCharacter12_user(nullptr);
        
        Info::CChatStealSystemSetTargetInfoFromRace14_ptr CChatStealSystemSetTargetInfoFromRace14_next(nullptr);
        Info::CChatStealSystemSetTargetInfoFromRace14_clbk CChatStealSystemSetTargetInfoFromRace14_user(nullptr);
        
        Info::CChatStealSystemStealChatMsg16_ptr CChatStealSystemStealChatMsg16_next(nullptr);
        Info::CChatStealSystemStealChatMsg16_clbk CChatStealSystemStealChatMsg16_user(nullptr);
        
        
        Info::CChatStealSystemdtor_CChatStealSystem18_ptr CChatStealSystemdtor_CChatStealSystem18_next(nullptr);
        Info::CChatStealSystemdtor_CChatStealSystem18_clbk CChatStealSystemdtor_CChatStealSystem18_user(nullptr);
        
        
        void CChatStealSystemctor_CChatStealSystem2_wrapper(struct CChatStealSystem* _this)
        {
           CChatStealSystemctor_CChatStealSystem2_user(_this, CChatStealSystemctor_CChatStealSystem2_next);
        };
        struct CChatStealSystem* CChatStealSystemInstance4_wrapper()
        {
           return CChatStealSystemInstance4_user(CChatStealSystemInstance4_next);
        };
        void CChatStealSystemSendStealMsg6_wrapper(struct CChatStealSystem* _this, struct CPlayer* pPlayer, char byChatType, unsigned int dwSenderSerial, char* pwszSender, char byRaceCode, char* pwszMessage)
        {
           CChatStealSystemSendStealMsg6_user(_this, pPlayer, byChatType, dwSenderSerial, pwszSender, byRaceCode, pwszMessage, CChatStealSystemSendStealMsg6_next);
        };
        bool CChatStealSystemSetGm8_wrapper(struct CChatStealSystem* _this, struct CPlayer* pGM)
        {
           return CChatStealSystemSetGm8_user(_this, pGM, CChatStealSystemSetGm8_next);
        };
        bool CChatStealSystemSetTargetInfoFromBoss10_wrapper(struct CChatStealSystem* _this, char byType, char byRaceCode)
        {
           return CChatStealSystemSetTargetInfoFromBoss10_user(_this, byType, byRaceCode, CChatStealSystemSetTargetInfoFromBoss10_next);
        };
        bool CChatStealSystemSetTargetInfoFromCharacter12_wrapper(struct CChatStealSystem* _this, char byType, char* szCharName)
        {
           return CChatStealSystemSetTargetInfoFromCharacter12_user(_this, byType, szCharName, CChatStealSystemSetTargetInfoFromCharacter12_next);
        };
        bool CChatStealSystemSetTargetInfoFromRace14_wrapper(struct CChatStealSystem* _this, char byType, char byRaceCode)
        {
           return CChatStealSystemSetTargetInfoFromRace14_user(_this, byType, byRaceCode, CChatStealSystemSetTargetInfoFromRace14_next);
        };
        void CChatStealSystemStealChatMsg16_wrapper(struct CChatStealSystem* _this, struct CPlayer* pPlayer, char byChatType, char* szChatMsg)
        {
           CChatStealSystemStealChatMsg16_user(_this, pPlayer, byChatType, szChatMsg, CChatStealSystemStealChatMsg16_next);
        };
        
        void CChatStealSystemdtor_CChatStealSystem18_wrapper(struct CChatStealSystem* _this)
        {
           CChatStealSystemdtor_CChatStealSystem18_user(_this, CChatStealSystemdtor_CChatStealSystem18_next);
        };
        
        ::std::array<hook_record, 9> CChatStealSystem_functions = 
        {
            _hook_record {
                (LPVOID)0x1403f86a0L,
                (LPVOID *)&CChatStealSystemctor_CChatStealSystem2_user,
                (LPVOID *)&CChatStealSystemctor_CChatStealSystem2_next,
                (LPVOID)cast_pointer_function(CChatStealSystemctor_CChatStealSystem2_wrapper),
                (LPVOID)cast_pointer_function((void(CChatStealSystem::*)())&CChatStealSystem::ctor_CChatStealSystem)
            },
            _hook_record {
                (LPVOID)0x140094f00L,
                (LPVOID *)&CChatStealSystemInstance4_user,
                (LPVOID *)&CChatStealSystemInstance4_next,
                (LPVOID)cast_pointer_function(CChatStealSystemInstance4_wrapper),
                (LPVOID)cast_pointer_function((struct CChatStealSystem*(*)())&CChatStealSystem::Instance)
            },
            _hook_record {
                (LPVOID)0x1403f8a30L,
                (LPVOID *)&CChatStealSystemSendStealMsg6_user,
                (LPVOID *)&CChatStealSystemSendStealMsg6_next,
                (LPVOID)cast_pointer_function(CChatStealSystemSendStealMsg6_wrapper),
                (LPVOID)cast_pointer_function((void(CChatStealSystem::*)(struct CPlayer*, char, unsigned int, char*, char, char*))&CChatStealSystem::SendStealMsg)
            },
            _hook_record {
                (LPVOID)0x1403f88b0L,
                (LPVOID *)&CChatStealSystemSetGm8_user,
                (LPVOID *)&CChatStealSystemSetGm8_next,
                (LPVOID)cast_pointer_function(CChatStealSystemSetGm8_wrapper),
                (LPVOID)cast_pointer_function((bool(CChatStealSystem::*)(struct CPlayer*))&CChatStealSystem::SetGm)
            },
            _hook_record {
                (LPVOID)0x1403f8870L,
                (LPVOID *)&CChatStealSystemSetTargetInfoFromBoss10_user,
                (LPVOID *)&CChatStealSystemSetTargetInfoFromBoss10_next,
                (LPVOID)cast_pointer_function(CChatStealSystemSetTargetInfoFromBoss10_wrapper),
                (LPVOID)cast_pointer_function((bool(CChatStealSystem::*)(char, char))&CChatStealSystem::SetTargetInfoFromBoss)
            },
            _hook_record {
                (LPVOID)0x1403f87c0L,
                (LPVOID *)&CChatStealSystemSetTargetInfoFromCharacter12_user,
                (LPVOID *)&CChatStealSystemSetTargetInfoFromCharacter12_next,
                (LPVOID)cast_pointer_function(CChatStealSystemSetTargetInfoFromCharacter12_wrapper),
                (LPVOID)cast_pointer_function((bool(CChatStealSystem::*)(char, char*))&CChatStealSystem::SetTargetInfoFromCharacter)
            },
            _hook_record {
                (LPVOID)0x1403f8830L,
                (LPVOID *)&CChatStealSystemSetTargetInfoFromRace14_user,
                (LPVOID *)&CChatStealSystemSetTargetInfoFromRace14_next,
                (LPVOID)cast_pointer_function(CChatStealSystemSetTargetInfoFromRace14_wrapper),
                (LPVOID)cast_pointer_function((bool(CChatStealSystem::*)(char, char))&CChatStealSystem::SetTargetInfoFromRace)
            },
            _hook_record {
                (LPVOID)0x1403f8900L,
                (LPVOID *)&CChatStealSystemStealChatMsg16_user,
                (LPVOID *)&CChatStealSystemStealChatMsg16_next,
                (LPVOID)cast_pointer_function(CChatStealSystemStealChatMsg16_wrapper),
                (LPVOID)cast_pointer_function((void(CChatStealSystem::*)(struct CPlayer*, char, char*))&CChatStealSystem::StealChatMsg)
            },
            _hook_record {
                (LPVOID)0x1403f8700L,
                (LPVOID *)&CChatStealSystemdtor_CChatStealSystem18_user,
                (LPVOID *)&CChatStealSystemdtor_CChatStealSystem18_next,
                (LPVOID)cast_pointer_function(CChatStealSystemdtor_CChatStealSystem18_wrapper),
                (LPVOID)cast_pointer_function((void(CChatStealSystem::*)())&CChatStealSystem::dtor_CChatStealSystem)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
