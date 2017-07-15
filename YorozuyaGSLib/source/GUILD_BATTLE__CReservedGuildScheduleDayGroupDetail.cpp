#include <GUILD_BATTLE__CReservedGuildScheduleDayGroupDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        namespace Detail
        {
            
            Info::GUILD_BATTLE__CReservedGuildScheduleDayGroupctor_CReservedGuildScheduleDayGroup2_ptr GUILD_BATTLE__CReservedGuildScheduleDayGroupctor_CReservedGuildScheduleDayGroup2_next(nullptr);
            Info::GUILD_BATTLE__CReservedGuildScheduleDayGroupctor_CReservedGuildScheduleDayGroup2_clbk GUILD_BATTLE__CReservedGuildScheduleDayGroupctor_CReservedGuildScheduleDayGroup2_user(nullptr);
            
            Info::GUILD_BATTLE__CReservedGuildScheduleDayGroupClear4_ptr GUILD_BATTLE__CReservedGuildScheduleDayGroupClear4_next(nullptr);
            Info::GUILD_BATTLE__CReservedGuildScheduleDayGroupClear4_clbk GUILD_BATTLE__CReservedGuildScheduleDayGroupClear4_user(nullptr);
            
            Info::GUILD_BATTLE__CReservedGuildScheduleDayGroupFind6_ptr GUILD_BATTLE__CReservedGuildScheduleDayGroupFind6_next(nullptr);
            Info::GUILD_BATTLE__CReservedGuildScheduleDayGroupFind6_clbk GUILD_BATTLE__CReservedGuildScheduleDayGroupFind6_user(nullptr);
            
            Info::GUILD_BATTLE__CReservedGuildScheduleDayGroupFlip8_ptr GUILD_BATTLE__CReservedGuildScheduleDayGroupFlip8_next(nullptr);
            Info::GUILD_BATTLE__CReservedGuildScheduleDayGroupFlip8_clbk GUILD_BATTLE__CReservedGuildScheduleDayGroupFlip8_user(nullptr);
            
            Info::GUILD_BATTLE__CReservedGuildScheduleDayGroupInit10_ptr GUILD_BATTLE__CReservedGuildScheduleDayGroupInit10_next(nullptr);
            Info::GUILD_BATTLE__CReservedGuildScheduleDayGroupInit10_clbk GUILD_BATTLE__CReservedGuildScheduleDayGroupInit10_user(nullptr);
            
            Info::GUILD_BATTLE__CReservedGuildScheduleDayGroupLoad12_ptr GUILD_BATTLE__CReservedGuildScheduleDayGroupLoad12_next(nullptr);
            Info::GUILD_BATTLE__CReservedGuildScheduleDayGroupLoad12_clbk GUILD_BATTLE__CReservedGuildScheduleDayGroupLoad12_user(nullptr);
            
            Info::GUILD_BATTLE__CReservedGuildScheduleDayGroupSend14_ptr GUILD_BATTLE__CReservedGuildScheduleDayGroupSend14_next(nullptr);
            Info::GUILD_BATTLE__CReservedGuildScheduleDayGroupSend14_clbk GUILD_BATTLE__CReservedGuildScheduleDayGroupSend14_user(nullptr);
            
            
            Info::GUILD_BATTLE__CReservedGuildScheduleDayGroupdtor_CReservedGuildScheduleDayGroup16_ptr GUILD_BATTLE__CReservedGuildScheduleDayGroupdtor_CReservedGuildScheduleDayGroup16_next(nullptr);
            Info::GUILD_BATTLE__CReservedGuildScheduleDayGroupdtor_CReservedGuildScheduleDayGroup16_clbk GUILD_BATTLE__CReservedGuildScheduleDayGroupdtor_CReservedGuildScheduleDayGroup16_user(nullptr);
            
            
            void GUILD_BATTLE__CReservedGuildScheduleDayGroupctor_CReservedGuildScheduleDayGroup2_wrapper(struct GUILD_BATTLE::CReservedGuildScheduleDayGroup* _this)
            {
               GUILD_BATTLE__CReservedGuildScheduleDayGroupctor_CReservedGuildScheduleDayGroup2_user(_this, GUILD_BATTLE__CReservedGuildScheduleDayGroupctor_CReservedGuildScheduleDayGroup2_next);
            };
            bool GUILD_BATTLE__CReservedGuildScheduleDayGroupClear4_wrapper(struct GUILD_BATTLE::CReservedGuildScheduleDayGroup* _this)
            {
               return GUILD_BATTLE__CReservedGuildScheduleDayGroupClear4_user(_this, GUILD_BATTLE__CReservedGuildScheduleDayGroupClear4_next);
            };
            struct GUILD_BATTLE::CReservedGuildSchedulePage* GUILD_BATTLE__CReservedGuildScheduleDayGroupFind6_wrapper(struct GUILD_BATTLE::CReservedGuildScheduleDayGroup* _this, unsigned int dwGuildSerial)
            {
               return GUILD_BATTLE__CReservedGuildScheduleDayGroupFind6_user(_this, dwGuildSerial, GUILD_BATTLE__CReservedGuildScheduleDayGroupFind6_next);
            };
            void GUILD_BATTLE__CReservedGuildScheduleDayGroupFlip8_wrapper(struct GUILD_BATTLE::CReservedGuildScheduleDayGroup* _this)
            {
               GUILD_BATTLE__CReservedGuildScheduleDayGroupFlip8_user(_this, GUILD_BATTLE__CReservedGuildScheduleDayGroupFlip8_next);
            };
            bool GUILD_BATTLE__CReservedGuildScheduleDayGroupInit10_wrapper(struct GUILD_BATTLE::CReservedGuildScheduleDayGroup* _this, unsigned int uiMapCnt)
            {
               return GUILD_BATTLE__CReservedGuildScheduleDayGroupInit10_user(_this, uiMapCnt, GUILD_BATTLE__CReservedGuildScheduleDayGroupInit10_next);
            };
            bool GUILD_BATTLE__CReservedGuildScheduleDayGroupLoad12_wrapper(struct GUILD_BATTLE::CReservedGuildScheduleDayGroup* _this, char byDayID, unsigned int uiMapInx, struct _worlddb_guild_battle_reserved_schedule_info* kInfo)
            {
               return GUILD_BATTLE__CReservedGuildScheduleDayGroupLoad12_user(_this, byDayID, uiMapInx, kInfo, GUILD_BATTLE__CReservedGuildScheduleDayGroupLoad12_next);
            };
            void GUILD_BATTLE__CReservedGuildScheduleDayGroupSend14_wrapper(struct GUILD_BATTLE::CReservedGuildScheduleDayGroup* _this, char byDayID, unsigned int uiMapID, int n, unsigned int dwVer, char byPage, unsigned int dwGuildSerial)
            {
               GUILD_BATTLE__CReservedGuildScheduleDayGroupSend14_user(_this, byDayID, uiMapID, n, dwVer, byPage, dwGuildSerial, GUILD_BATTLE__CReservedGuildScheduleDayGroupSend14_next);
            };
            
            void GUILD_BATTLE__CReservedGuildScheduleDayGroupdtor_CReservedGuildScheduleDayGroup16_wrapper(struct GUILD_BATTLE::CReservedGuildScheduleDayGroup* _this)
            {
               GUILD_BATTLE__CReservedGuildScheduleDayGroupdtor_CReservedGuildScheduleDayGroup16_user(_this, GUILD_BATTLE__CReservedGuildScheduleDayGroupdtor_CReservedGuildScheduleDayGroup16_next);
            };
            
            ::std::array<hook_record, 8> CReservedGuildScheduleDayGroup_functions = 
            {
                _hook_record {
                    (LPVOID)0x1403ccbc0L,
                    (LPVOID *)&GUILD_BATTLE__CReservedGuildScheduleDayGroupctor_CReservedGuildScheduleDayGroup2_user,
                    (LPVOID *)&GUILD_BATTLE__CReservedGuildScheduleDayGroupctor_CReservedGuildScheduleDayGroup2_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CReservedGuildScheduleDayGroupctor_CReservedGuildScheduleDayGroup2_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CReservedGuildScheduleDayGroup::*)())&GUILD_BATTLE::CReservedGuildScheduleDayGroup::ctor_CReservedGuildScheduleDayGroup)
                },
                _hook_record {
                    (LPVOID)0x1403cce80L,
                    (LPVOID *)&GUILD_BATTLE__CReservedGuildScheduleDayGroupClear4_user,
                    (LPVOID *)&GUILD_BATTLE__CReservedGuildScheduleDayGroupClear4_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CReservedGuildScheduleDayGroupClear4_wrapper),
                    (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CReservedGuildScheduleDayGroup::*)())&GUILD_BATTLE::CReservedGuildScheduleDayGroup::Clear)
                },
                _hook_record {
                    (LPVOID)0x1403ccfa0L,
                    (LPVOID *)&GUILD_BATTLE__CReservedGuildScheduleDayGroupFind6_user,
                    (LPVOID *)&GUILD_BATTLE__CReservedGuildScheduleDayGroupFind6_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CReservedGuildScheduleDayGroupFind6_wrapper),
                    (LPVOID)cast_pointer_function((struct GUILD_BATTLE::CReservedGuildSchedulePage*(GUILD_BATTLE::CReservedGuildScheduleDayGroup::*)(unsigned int))&GUILD_BATTLE::CReservedGuildScheduleDayGroup::Find)
                },
                _hook_record {
                    (LPVOID)0x1403cd1c0L,
                    (LPVOID *)&GUILD_BATTLE__CReservedGuildScheduleDayGroupFlip8_user,
                    (LPVOID *)&GUILD_BATTLE__CReservedGuildScheduleDayGroupFlip8_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CReservedGuildScheduleDayGroupFlip8_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CReservedGuildScheduleDayGroup::*)())&GUILD_BATTLE::CReservedGuildScheduleDayGroup::Flip)
                },
                _hook_record {
                    (LPVOID)0x1403ccc90L,
                    (LPVOID *)&GUILD_BATTLE__CReservedGuildScheduleDayGroupInit10_user,
                    (LPVOID *)&GUILD_BATTLE__CReservedGuildScheduleDayGroupInit10_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CReservedGuildScheduleDayGroupInit10_wrapper),
                    (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CReservedGuildScheduleDayGroup::*)(unsigned int))&GUILD_BATTLE::CReservedGuildScheduleDayGroup::Init)
                },
                _hook_record {
                    (LPVOID)0x1403ccf20L,
                    (LPVOID *)&GUILD_BATTLE__CReservedGuildScheduleDayGroupLoad12_user,
                    (LPVOID *)&GUILD_BATTLE__CReservedGuildScheduleDayGroupLoad12_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CReservedGuildScheduleDayGroupLoad12_wrapper),
                    (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CReservedGuildScheduleDayGroup::*)(char, unsigned int, struct _worlddb_guild_battle_reserved_schedule_info*))&GUILD_BATTLE::CReservedGuildScheduleDayGroup::Load)
                },
                _hook_record {
                    (LPVOID)0x1403cd040L,
                    (LPVOID *)&GUILD_BATTLE__CReservedGuildScheduleDayGroupSend14_user,
                    (LPVOID *)&GUILD_BATTLE__CReservedGuildScheduleDayGroupSend14_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CReservedGuildScheduleDayGroupSend14_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CReservedGuildScheduleDayGroup::*)(char, unsigned int, int, unsigned int, char, unsigned int))&GUILD_BATTLE::CReservedGuildScheduleDayGroup::Send)
                },
                _hook_record {
                    (LPVOID)0x1403ccbf0L,
                    (LPVOID *)&GUILD_BATTLE__CReservedGuildScheduleDayGroupdtor_CReservedGuildScheduleDayGroup16_user,
                    (LPVOID *)&GUILD_BATTLE__CReservedGuildScheduleDayGroupdtor_CReservedGuildScheduleDayGroup16_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CReservedGuildScheduleDayGroupdtor_CReservedGuildScheduleDayGroup16_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CReservedGuildScheduleDayGroup::*)())&GUILD_BATTLE::CReservedGuildScheduleDayGroup::dtor_CReservedGuildScheduleDayGroup)
                },
            };
        }; // end namespace Detail
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
