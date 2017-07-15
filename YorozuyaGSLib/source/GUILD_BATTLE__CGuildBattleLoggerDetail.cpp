#include <GUILD_BATTLE__CGuildBattleLoggerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        namespace Detail
        {
            
            Info::GUILD_BATTLE__CGuildBattleLoggerctor_CGuildBattleLogger2_ptr GUILD_BATTLE__CGuildBattleLoggerctor_CGuildBattleLogger2_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleLoggerctor_CGuildBattleLogger2_clbk GUILD_BATTLE__CGuildBattleLoggerctor_CGuildBattleLogger2_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleLoggerCreateLogFile4_ptr GUILD_BATTLE__CGuildBattleLoggerCreateLogFile4_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleLoggerCreateLogFile4_clbk GUILD_BATTLE__CGuildBattleLoggerCreateLogFile4_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleLoggerDestroy6_ptr GUILD_BATTLE__CGuildBattleLoggerDestroy6_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleLoggerDestroy6_clbk GUILD_BATTLE__CGuildBattleLoggerDestroy6_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleLoggerInit8_ptr GUILD_BATTLE__CGuildBattleLoggerInit8_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleLoggerInit8_clbk GUILD_BATTLE__CGuildBattleLoggerInit8_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleLoggerInstance10_ptr GUILD_BATTLE__CGuildBattleLoggerInstance10_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleLoggerInstance10_clbk GUILD_BATTLE__CGuildBattleLoggerInstance10_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleLoggerLog12_ptr GUILD_BATTLE__CGuildBattleLoggerLog12_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleLoggerLog12_clbk GUILD_BATTLE__CGuildBattleLoggerLog12_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleLoggerLog14_ptr GUILD_BATTLE__CGuildBattleLoggerLog14_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleLoggerLog14_clbk GUILD_BATTLE__CGuildBattleLoggerLog14_user(nullptr);
            
            
            Info::GUILD_BATTLE__CGuildBattleLoggerdtor_CGuildBattleLogger18_ptr GUILD_BATTLE__CGuildBattleLoggerdtor_CGuildBattleLogger18_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleLoggerdtor_CGuildBattleLogger18_clbk GUILD_BATTLE__CGuildBattleLoggerdtor_CGuildBattleLogger18_user(nullptr);
            
            
            void GUILD_BATTLE__CGuildBattleLoggerctor_CGuildBattleLogger2_wrapper(struct GUILD_BATTLE::CGuildBattleLogger* _this)
            {
               GUILD_BATTLE__CGuildBattleLoggerctor_CGuildBattleLogger2_user(_this, GUILD_BATTLE__CGuildBattleLoggerctor_CGuildBattleLogger2_next);
            };
            void GUILD_BATTLE__CGuildBattleLoggerCreateLogFile4_wrapper(struct GUILD_BATTLE::CGuildBattleLogger* _this, char* szLogName)
            {
               GUILD_BATTLE__CGuildBattleLoggerCreateLogFile4_user(_this, szLogName, GUILD_BATTLE__CGuildBattleLoggerCreateLogFile4_next);
            };
            void GUILD_BATTLE__CGuildBattleLoggerDestroy6_wrapper()
            {
               GUILD_BATTLE__CGuildBattleLoggerDestroy6_user(GUILD_BATTLE__CGuildBattleLoggerDestroy6_next);
            };
            bool GUILD_BATTLE__CGuildBattleLoggerInit8_wrapper(struct GUILD_BATTLE::CGuildBattleLogger* _this)
            {
               return GUILD_BATTLE__CGuildBattleLoggerInit8_user(_this, GUILD_BATTLE__CGuildBattleLoggerInit8_next);
            };
            struct GUILD_BATTLE::CGuildBattleLogger* GUILD_BATTLE__CGuildBattleLoggerInstance10_wrapper()
            {
               return GUILD_BATTLE__CGuildBattleLoggerInstance10_user(GUILD_BATTLE__CGuildBattleLoggerInstance10_next);
            };
            void GUILD_BATTLE__CGuildBattleLoggerLog12_wrapper(struct GUILD_BATTLE::CGuildBattleLogger* _this, char* fmt)
            {
               GUILD_BATTLE__CGuildBattleLoggerLog12_user(_this, fmt, GUILD_BATTLE__CGuildBattleLoggerLog12_next);
            };
            void GUILD_BATTLE__CGuildBattleLoggerLog14_wrapper(struct GUILD_BATTLE::CGuildBattleLogger* _this, wchar_t* fmt)
            {
               GUILD_BATTLE__CGuildBattleLoggerLog14_user(_this, fmt, GUILD_BATTLE__CGuildBattleLoggerLog14_next);
            };
            
            void GUILD_BATTLE__CGuildBattleLoggerdtor_CGuildBattleLogger18_wrapper(struct GUILD_BATTLE::CGuildBattleLogger* _this)
            {
               GUILD_BATTLE__CGuildBattleLoggerdtor_CGuildBattleLogger18_user(_this, GUILD_BATTLE__CGuildBattleLoggerdtor_CGuildBattleLogger18_next);
            };
            
            ::std::array<hook_record, 8> CGuildBattleLogger_functions = 
            {
                _hook_record {
                    (LPVOID)0x1403ce6f0L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleLoggerctor_CGuildBattleLogger2_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleLoggerctor_CGuildBattleLogger2_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleLoggerctor_CGuildBattleLogger2_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CGuildBattleLogger::*)())&GUILD_BATTLE::CGuildBattleLogger::ctor_CGuildBattleLogger)
                },
                _hook_record {
                    (LPVOID)0x1403ce9e0L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleLoggerCreateLogFile4_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleLoggerCreateLogFile4_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleLoggerCreateLogFile4_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CGuildBattleLogger::*)(char*))&GUILD_BATTLE::CGuildBattleLogger::CreateLogFile)
                },
                _hook_record {
                    (LPVOID)0x1403ce850L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleLoggerDestroy6_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleLoggerDestroy6_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleLoggerDestroy6_wrapper),
                    (LPVOID)cast_pointer_function((void(*)())&GUILD_BATTLE::CGuildBattleLogger::Destroy)
                },
                _hook_record {
                    (LPVOID)0x1403ce8d0L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleLoggerInit8_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleLoggerInit8_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleLoggerInit8_wrapper),
                    (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CGuildBattleLogger::*)())&GUILD_BATTLE::CGuildBattleLogger::Init)
                },
                _hook_record {
                    (LPVOID)0x1403ce790L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleLoggerInstance10_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleLoggerInstance10_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleLoggerInstance10_wrapper),
                    (LPVOID)cast_pointer_function((struct GUILD_BATTLE::CGuildBattleLogger*(*)())&GUILD_BATTLE::CGuildBattleLogger::Instance)
                },
                _hook_record {
                    (LPVOID)0x1403ceac0L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleLoggerLog12_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleLoggerLog12_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleLoggerLog12_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CGuildBattleLogger::*)(char*))&GUILD_BATTLE::CGuildBattleLogger::Log)
                },
                _hook_record {
                    (LPVOID)0x1403ceb50L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleLoggerLog14_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleLoggerLog14_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleLoggerLog14_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CGuildBattleLogger::*)(wchar_t*))&GUILD_BATTLE::CGuildBattleLogger::Log)
                },
                _hook_record {
                    (LPVOID)0x1403ce710L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleLoggerdtor_CGuildBattleLogger18_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleLoggerdtor_CGuildBattleLogger18_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleLoggerdtor_CGuildBattleLogger18_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CGuildBattleLogger::*)())&GUILD_BATTLE::CGuildBattleLogger::dtor_CGuildBattleLogger)
                },
            };
        }; // end namespace Detail
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
