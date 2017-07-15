#include <GUILD_BATTLE__CGuildBattleDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        namespace Detail
        {
            
            Info::GUILD_BATTLE__CGuildBattlector_CGuildBattle2_ptr GUILD_BATTLE__CGuildBattlector_CGuildBattle2_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattlector_CGuildBattle2_clbk GUILD_BATTLE__CGuildBattlector_CGuildBattle2_user(nullptr);
            
            Info::GUILD_BATTLE__CGuildBattleGetObjType4_ptr GUILD_BATTLE__CGuildBattleGetObjType4_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattleGetObjType4_clbk GUILD_BATTLE__CGuildBattleGetObjType4_user(nullptr);
            
            
            Info::GUILD_BATTLE__CGuildBattledtor_CGuildBattle6_ptr GUILD_BATTLE__CGuildBattledtor_CGuildBattle6_next(nullptr);
            Info::GUILD_BATTLE__CGuildBattledtor_CGuildBattle6_clbk GUILD_BATTLE__CGuildBattledtor_CGuildBattle6_user(nullptr);
            
            
            void GUILD_BATTLE__CGuildBattlector_CGuildBattle2_wrapper(struct GUILD_BATTLE::CGuildBattle* _this)
            {
               GUILD_BATTLE__CGuildBattlector_CGuildBattle2_user(_this, GUILD_BATTLE__CGuildBattlector_CGuildBattle2_next);
            };
            int GUILD_BATTLE__CGuildBattleGetObjType4_wrapper(struct GUILD_BATTLE::CGuildBattle* _this)
            {
               return GUILD_BATTLE__CGuildBattleGetObjType4_user(_this, GUILD_BATTLE__CGuildBattleGetObjType4_next);
            };
            
            void GUILD_BATTLE__CGuildBattledtor_CGuildBattle6_wrapper(struct GUILD_BATTLE::CGuildBattle* _this)
            {
               GUILD_BATTLE__CGuildBattledtor_CGuildBattle6_user(_this, GUILD_BATTLE__CGuildBattledtor_CGuildBattle6_next);
            };
            
            ::std::array<hook_record, 3> CGuildBattle_functions = 
            {
                _hook_record {
                    (LPVOID)0x1403eb010L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattlector_CGuildBattle2_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattlector_CGuildBattle2_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattlector_CGuildBattle2_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CGuildBattle::*)())&GUILD_BATTLE::CGuildBattle::ctor_CGuildBattle)
                },
                _hook_record {
                    (LPVOID)0x1403eb060L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleGetObjType4_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattleGetObjType4_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattleGetObjType4_wrapper),
                    (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CGuildBattle::*)())&GUILD_BATTLE::CGuildBattle::GetObjType)
                },
                _hook_record {
                    (LPVOID)0x1403eb040L,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattledtor_CGuildBattle6_user,
                    (LPVOID *)&GUILD_BATTLE__CGuildBattledtor_CGuildBattle6_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CGuildBattledtor_CGuildBattle6_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CGuildBattle::*)())&GUILD_BATTLE::CGuildBattle::dtor_CGuildBattle)
                },
            };
        }; // end namespace Detail
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
