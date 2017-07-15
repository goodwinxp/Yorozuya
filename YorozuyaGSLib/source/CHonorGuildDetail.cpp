#include <CHonorGuildDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CHonorGuildctor_CHonorGuild2_ptr CHonorGuildctor_CHonorGuild2_next(nullptr);
        Info::CHonorGuildctor_CHonorGuild2_clbk CHonorGuildctor_CHonorGuild2_user(nullptr);
        
        Info::CHonorGuildChangeHonorGuild4_ptr CHonorGuildChangeHonorGuild4_next(nullptr);
        Info::CHonorGuildChangeHonorGuild4_clbk CHonorGuildChangeHonorGuild4_user(nullptr);
        
        Info::CHonorGuildCheckHonorGuild6_ptr CHonorGuildCheckHonorGuild6_next(nullptr);
        Info::CHonorGuildCheckHonorGuild6_clbk CHonorGuildCheckHonorGuild6_user(nullptr);
        
        Info::CHonorGuildDQSCompleteInAtradTaxMoney8_ptr CHonorGuildDQSCompleteInAtradTaxMoney8_next(nullptr);
        Info::CHonorGuildDQSCompleteInAtradTaxMoney8_clbk CHonorGuildDQSCompleteInAtradTaxMoney8_user(nullptr);
        
        Info::CHonorGuildDestroy10_ptr CHonorGuildDestroy10_next(nullptr);
        Info::CHonorGuildDestroy10_clbk CHonorGuildDestroy10_user(nullptr);
        
        Info::CHonorGuildFindHonorGuildRank12_ptr CHonorGuildFindHonorGuildRank12_next(nullptr);
        Info::CHonorGuildFindHonorGuildRank12_clbk CHonorGuildFindHonorGuildRank12_user(nullptr);
        
        Info::CHonorGuildInit14_ptr CHonorGuildInit14_next(nullptr);
        Info::CHonorGuildInit14_clbk CHonorGuildInit14_user(nullptr);
        
        Info::CHonorGuildInstance16_ptr CHonorGuildInstance16_next(nullptr);
        Info::CHonorGuildInstance16_clbk CHonorGuildInstance16_user(nullptr);
        
        Info::CHonorGuildLoadDB18_ptr CHonorGuildLoadDB18_next(nullptr);
        Info::CHonorGuildLoadDB18_clbk CHonorGuildLoadDB18_user(nullptr);
        
        Info::CHonorGuildLoop20_ptr CHonorGuildLoop20_next(nullptr);
        Info::CHonorGuildLoop20_clbk CHonorGuildLoop20_user(nullptr);
        
        Info::CHonorGuildLoopSubProcSendInform22_ptr CHonorGuildLoopSubProcSendInform22_next(nullptr);
        Info::CHonorGuildLoopSubProcSendInform22_clbk CHonorGuildLoopSubProcSendInform22_user(nullptr);
        
        Info::CHonorGuildSendCurrHonorGuildList24_ptr CHonorGuildSendCurrHonorGuildList24_next(nullptr);
        Info::CHonorGuildSendCurrHonorGuildList24_clbk CHonorGuildSendCurrHonorGuildList24_user(nullptr);
        
        Info::CHonorGuildSendInformChange26_ptr CHonorGuildSendInformChange26_next(nullptr);
        Info::CHonorGuildSendInformChange26_clbk CHonorGuildSendInformChange26_user(nullptr);
        
        Info::CHonorGuildSendNextHonorGuildList28_ptr CHonorGuildSendNextHonorGuildList28_next(nullptr);
        Info::CHonorGuildSendNextHonorGuildList28_clbk CHonorGuildSendNextHonorGuildList28_user(nullptr);
        
        Info::CHonorGuildSetGuildMaintainMoney30_ptr CHonorGuildSetGuildMaintainMoney30_next(nullptr);
        Info::CHonorGuildSetGuildMaintainMoney30_clbk CHonorGuildSetGuildMaintainMoney30_user(nullptr);
        
        Info::CHonorGuildSetNextHonorGuild32_ptr CHonorGuildSetNextHonorGuild32_next(nullptr);
        Info::CHonorGuildSetNextHonorGuild32_clbk CHonorGuildSetNextHonorGuild32_user(nullptr);
        
        Info::CHonorGuildUpdateChangeHonorGuild34_ptr CHonorGuildUpdateChangeHonorGuild34_next(nullptr);
        Info::CHonorGuildUpdateChangeHonorGuild34_clbk CHonorGuildUpdateChangeHonorGuild34_user(nullptr);
        
        Info::CHonorGuildUpdateHonorGuildMark36_ptr CHonorGuildUpdateHonorGuildMark36_next(nullptr);
        Info::CHonorGuildUpdateHonorGuildMark36_clbk CHonorGuildUpdateHonorGuildMark36_user(nullptr);
        
        Info::CHonorGuildUpdateNextHonorGuild38_ptr CHonorGuildUpdateNextHonorGuild38_next(nullptr);
        Info::CHonorGuildUpdateNextHonorGuild38_clbk CHonorGuildUpdateNextHonorGuild38_user(nullptr);
        
        
        Info::CHonorGuilddtor_CHonorGuild43_ptr CHonorGuilddtor_CHonorGuild43_next(nullptr);
        Info::CHonorGuilddtor_CHonorGuild43_clbk CHonorGuilddtor_CHonorGuild43_user(nullptr);
        
        
        void CHonorGuildctor_CHonorGuild2_wrapper(struct CHonorGuild* _this)
        {
           CHonorGuildctor_CHonorGuild2_user(_this, CHonorGuildctor_CHonorGuild2_next);
        };
        void CHonorGuildChangeHonorGuild4_wrapper(struct CHonorGuild* _this, char byRace)
        {
           CHonorGuildChangeHonorGuild4_user(_this, byRace, CHonorGuildChangeHonorGuild4_next);
        };
        bool CHonorGuildCheckHonorGuild6_wrapper(struct CHonorGuild* _this, char byRace, unsigned int dwSerial)
        {
           return CHonorGuildCheckHonorGuild6_user(_this, byRace, dwSerial, CHonorGuildCheckHonorGuild6_next);
        };
        void CHonorGuildDQSCompleteInAtradTaxMoney8_wrapper(struct CHonorGuild* _this, char* pdata)
        {
           CHonorGuildDQSCompleteInAtradTaxMoney8_user(_this, pdata, CHonorGuildDQSCompleteInAtradTaxMoney8_next);
        };
        void CHonorGuildDestroy10_wrapper(struct CHonorGuild* _this)
        {
           CHonorGuildDestroy10_user(_this, CHonorGuildDestroy10_next);
        };
        char CHonorGuildFindHonorGuildRank12_wrapper(struct CHonorGuild* _this, char byRace, unsigned int dwGuildSerial)
        {
           return CHonorGuildFindHonorGuildRank12_user(_this, byRace, dwGuildSerial, CHonorGuildFindHonorGuildRank12_next);
        };
        bool CHonorGuildInit14_wrapper(struct CHonorGuild* _this)
        {
           return CHonorGuildInit14_user(_this, CHonorGuildInit14_next);
        };
        struct CHonorGuild* CHonorGuildInstance16_wrapper()
        {
           return CHonorGuildInstance16_user(CHonorGuildInstance16_next);
        };
        bool CHonorGuildLoadDB18_wrapper(struct CHonorGuild* _this)
        {
           return CHonorGuildLoadDB18_user(_this, CHonorGuildLoadDB18_next);
        };
        void CHonorGuildLoop20_wrapper(struct CHonorGuild* _this)
        {
           CHonorGuildLoop20_user(_this, CHonorGuildLoop20_next);
        };
        void CHonorGuildLoopSubProcSendInform22_wrapper(struct CHonorGuild* _this, char byRace)
        {
           CHonorGuildLoopSubProcSendInform22_user(_this, byRace, CHonorGuildLoopSubProcSendInform22_next);
        };
        void CHonorGuildSendCurrHonorGuildList24_wrapper(struct CHonorGuild* _this, uint16_t wIndex, char byRace, char byUI)
        {
           CHonorGuildSendCurrHonorGuildList24_user(_this, wIndex, byRace, byUI, CHonorGuildSendCurrHonorGuildList24_next);
        };
        void CHonorGuildSendInformChange26_wrapper(struct CHonorGuild* _this, char byRace, uint16_t wIndex)
        {
           CHonorGuildSendInformChange26_user(_this, byRace, wIndex, CHonorGuildSendInformChange26_next);
        };
        void CHonorGuildSendNextHonorGuildList28_wrapper(struct CHonorGuild* _this, uint16_t wIndex, char byRace)
        {
           CHonorGuildSendNextHonorGuildList28_user(_this, wIndex, byRace, CHonorGuildSendNextHonorGuildList28_next);
        };
        void CHonorGuildSetGuildMaintainMoney30_wrapper(struct CHonorGuild* _this, char byRace, unsigned int dwTax, unsigned int dwSeller)
        {
           CHonorGuildSetGuildMaintainMoney30_user(_this, byRace, dwTax, dwSeller, CHonorGuildSetGuildMaintainMoney30_next);
        };
        char CHonorGuildSetNextHonorGuild32_wrapper(struct CHonorGuild* _this, char byRace, struct _guild_honor_set_request_clzo* pRecv)
        {
           return CHonorGuildSetNextHonorGuild32_user(_this, byRace, pRecv, CHonorGuildSetNextHonorGuild32_next);
        };
        char CHonorGuildUpdateChangeHonorGuild34_wrapper(struct CHonorGuild* _this, char byRace)
        {
           return CHonorGuildUpdateChangeHonorGuild34_user(_this, byRace, CHonorGuildUpdateChangeHonorGuild34_next);
        };
        void CHonorGuildUpdateHonorGuildMark36_wrapper(struct CHonorGuild* _this, struct _guild_honor_list_result_zocl* pList, int bSet)
        {
           CHonorGuildUpdateHonorGuildMark36_user(_this, pList, bSet, CHonorGuildUpdateHonorGuildMark36_next);
        };
        char CHonorGuildUpdateNextHonorGuild38_wrapper(struct CHonorGuild* _this, char byRace)
        {
           return CHonorGuildUpdateNextHonorGuild38_user(_this, byRace, CHonorGuildUpdateNextHonorGuild38_next);
        };
        
        void CHonorGuilddtor_CHonorGuild43_wrapper(struct CHonorGuild* _this)
        {
           CHonorGuilddtor_CHonorGuild43_user(_this, CHonorGuilddtor_CHonorGuild43_next);
        };
        
        ::std::array<hook_record, 20> CHonorGuild_functions = 
        {
            _hook_record {
                (LPVOID)0x14025e2a0L,
                (LPVOID *)&CHonorGuildctor_CHonorGuild2_user,
                (LPVOID *)&CHonorGuildctor_CHonorGuild2_next,
                (LPVOID)cast_pointer_function(CHonorGuildctor_CHonorGuild2_wrapper),
                (LPVOID)cast_pointer_function((void(CHonorGuild::*)())&CHonorGuild::ctor_CHonorGuild)
            },
            _hook_record {
                (LPVOID)0x14025f240L,
                (LPVOID *)&CHonorGuildChangeHonorGuild4_user,
                (LPVOID *)&CHonorGuildChangeHonorGuild4_next,
                (LPVOID)cast_pointer_function(CHonorGuildChangeHonorGuild4_wrapper),
                (LPVOID)cast_pointer_function((void(CHonorGuild::*)(char))&CHonorGuild::ChangeHonorGuild)
            },
            _hook_record {
                (LPVOID)0x14025fd30L,
                (LPVOID *)&CHonorGuildCheckHonorGuild6_user,
                (LPVOID *)&CHonorGuildCheckHonorGuild6_next,
                (LPVOID)cast_pointer_function(CHonorGuildCheckHonorGuild6_wrapper),
                (LPVOID)cast_pointer_function((bool(CHonorGuild::*)(char, unsigned int))&CHonorGuild::CheckHonorGuild)
            },
            _hook_record {
                (LPVOID)0x14025f0c0L,
                (LPVOID *)&CHonorGuildDQSCompleteInAtradTaxMoney8_user,
                (LPVOID *)&CHonorGuildDQSCompleteInAtradTaxMoney8_next,
                (LPVOID)cast_pointer_function(CHonorGuildDQSCompleteInAtradTaxMoney8_wrapper),
                (LPVOID)cast_pointer_function((void(CHonorGuild::*)(char*))&CHonorGuild::DQSCompleteInAtradTaxMoney)
            },
            _hook_record {
                (LPVOID)0x14025e4b0L,
                (LPVOID *)&CHonorGuildDestroy10_user,
                (LPVOID *)&CHonorGuildDestroy10_next,
                (LPVOID)cast_pointer_function(CHonorGuildDestroy10_wrapper),
                (LPVOID)cast_pointer_function((void(CHonorGuild::*)())&CHonorGuild::Destroy)
            },
            _hook_record {
                (LPVOID)0x14025f980L,
                (LPVOID *)&CHonorGuildFindHonorGuildRank12_user,
                (LPVOID *)&CHonorGuildFindHonorGuildRank12_next,
                (LPVOID)cast_pointer_function(CHonorGuildFindHonorGuildRank12_wrapper),
                (LPVOID)cast_pointer_function((char(CHonorGuild::*)(char, unsigned int))&CHonorGuild::FindHonorGuildRank)
            },
            _hook_record {
                (LPVOID)0x14025e540L,
                (LPVOID *)&CHonorGuildInit14_user,
                (LPVOID *)&CHonorGuildInit14_next,
                (LPVOID)cast_pointer_function(CHonorGuildInit14_wrapper),
                (LPVOID)cast_pointer_function((bool(CHonorGuild::*)())&CHonorGuild::Init)
            },
            _hook_record {
                (LPVOID)0x14025e3e0L,
                (LPVOID *)&CHonorGuildInstance16_user,
                (LPVOID *)&CHonorGuildInstance16_next,
                (LPVOID)cast_pointer_function(CHonorGuildInstance16_wrapper),
                (LPVOID)cast_pointer_function((struct CHonorGuild*(*)())&CHonorGuild::Instance)
            },
            _hook_record {
                (LPVOID)0x14025e710L,
                (LPVOID *)&CHonorGuildLoadDB18_user,
                (LPVOID *)&CHonorGuildLoadDB18_next,
                (LPVOID)cast_pointer_function(CHonorGuildLoadDB18_wrapper),
                (LPVOID)cast_pointer_function((bool(CHonorGuild::*)())&CHonorGuild::LoadDB)
            },
            _hook_record {
                (LPVOID)0x14025fb70L,
                (LPVOID *)&CHonorGuildLoop20_user,
                (LPVOID *)&CHonorGuildLoop20_next,
                (LPVOID)cast_pointer_function(CHonorGuildLoop20_wrapper),
                (LPVOID)cast_pointer_function((void(CHonorGuild::*)())&CHonorGuild::Loop)
            },
            _hook_record {
                (LPVOID)0x14025fbe0L,
                (LPVOID *)&CHonorGuildLoopSubProcSendInform22_user,
                (LPVOID *)&CHonorGuildLoopSubProcSendInform22_next,
                (LPVOID)cast_pointer_function(CHonorGuildLoopSubProcSendInform22_wrapper),
                (LPVOID)cast_pointer_function((void(CHonorGuild::*)(char))&CHonorGuild::LoopSubProcSendInform)
            },
            _hook_record {
                (LPVOID)0x14025ed00L,
                (LPVOID *)&CHonorGuildSendCurrHonorGuildList24_user,
                (LPVOID *)&CHonorGuildSendCurrHonorGuildList24_next,
                (LPVOID)cast_pointer_function(CHonorGuildSendCurrHonorGuildList24_wrapper),
                (LPVOID)cast_pointer_function((void(CHonorGuild::*)(uint16_t, char, char))&CHonorGuild::SendCurrHonorGuildList)
            },
            _hook_record {
                (LPVOID)0x14025f850L,
                (LPVOID *)&CHonorGuildSendInformChange26_user,
                (LPVOID *)&CHonorGuildSendInformChange26_next,
                (LPVOID)cast_pointer_function(CHonorGuildSendInformChange26_wrapper),
                (LPVOID)cast_pointer_function((void(CHonorGuild::*)(char, uint16_t))&CHonorGuild::SendInformChange)
            },
            _hook_record {
                (LPVOID)0x14025edb0L,
                (LPVOID *)&CHonorGuildSendNextHonorGuildList28_user,
                (LPVOID *)&CHonorGuildSendNextHonorGuildList28_next,
                (LPVOID)cast_pointer_function(CHonorGuildSendNextHonorGuildList28_wrapper),
                (LPVOID)cast_pointer_function((void(CHonorGuild::*)(uint16_t, char))&CHonorGuild::SendNextHonorGuildList)
            },
            _hook_record {
                (LPVOID)0x14025eea0L,
                (LPVOID *)&CHonorGuildSetGuildMaintainMoney30_user,
                (LPVOID *)&CHonorGuildSetGuildMaintainMoney30_next,
                (LPVOID)cast_pointer_function(CHonorGuildSetGuildMaintainMoney30_wrapper),
                (LPVOID)cast_pointer_function((void(CHonorGuild::*)(char, unsigned int, unsigned int))&CHonorGuild::SetGuildMaintainMoney)
            },
            _hook_record {
                (LPVOID)0x14025e900L,
                (LPVOID *)&CHonorGuildSetNextHonorGuild32_user,
                (LPVOID *)&CHonorGuildSetNextHonorGuild32_next,
                (LPVOID)cast_pointer_function(CHonorGuildSetNextHonorGuild32_wrapper),
                (LPVOID)cast_pointer_function((char(CHonorGuild::*)(char, struct _guild_honor_set_request_clzo*))&CHonorGuild::SetNextHonorGuild)
            },
            _hook_record {
                (LPVOID)0x14025f720L,
                (LPVOID *)&CHonorGuildUpdateChangeHonorGuild34_user,
                (LPVOID *)&CHonorGuildUpdateChangeHonorGuild34_next,
                (LPVOID)cast_pointer_function(CHonorGuildUpdateChangeHonorGuild34_wrapper),
                (LPVOID)cast_pointer_function((char(CHonorGuild::*)(char))&CHonorGuild::UpdateChangeHonorGuild)
            },
            _hook_record {
                (LPVOID)0x14025fa30L,
                (LPVOID *)&CHonorGuildUpdateHonorGuildMark36_user,
                (LPVOID *)&CHonorGuildUpdateHonorGuildMark36_next,
                (LPVOID)cast_pointer_function(CHonorGuildUpdateHonorGuildMark36_wrapper),
                (LPVOID)cast_pointer_function((void(CHonorGuild::*)(struct _guild_honor_list_result_zocl*, int))&CHonorGuild::UpdateHonorGuildMark)
            },
            _hook_record {
                (LPVOID)0x14025f520L,
                (LPVOID *)&CHonorGuildUpdateNextHonorGuild38_user,
                (LPVOID *)&CHonorGuildUpdateNextHonorGuild38_next,
                (LPVOID)cast_pointer_function(CHonorGuildUpdateNextHonorGuild38_wrapper),
                (LPVOID)cast_pointer_function((char(CHonorGuild::*)(char))&CHonorGuild::UpdateNextHonorGuild)
            },
            _hook_record {
                (LPVOID)0x14025e320L,
                (LPVOID *)&CHonorGuilddtor_CHonorGuild43_user,
                (LPVOID *)&CHonorGuilddtor_CHonorGuild43_next,
                (LPVOID)cast_pointer_function(CHonorGuilddtor_CHonorGuild43_wrapper),
                (LPVOID)cast_pointer_function((void(CHonorGuild::*)())&CHonorGuild::dtor_CHonorGuild)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
