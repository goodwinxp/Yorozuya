#include <CTotalGuildRankManagerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CTotalGuildRankManagerctor_CTotalGuildRankManager2_ptr CTotalGuildRankManagerctor_CTotalGuildRankManager2_next(nullptr);
        Info::CTotalGuildRankManagerctor_CTotalGuildRankManager2_clbk CTotalGuildRankManagerctor_CTotalGuildRankManager2_user(nullptr);
        
        Info::CTotalGuildRankManagerDestroy4_ptr CTotalGuildRankManagerDestroy4_next(nullptr);
        Info::CTotalGuildRankManagerDestroy4_clbk CTotalGuildRankManagerDestroy4_user(nullptr);
        
        Info::CTotalGuildRankManagerInit6_ptr CTotalGuildRankManagerInit6_next(nullptr);
        Info::CTotalGuildRankManagerInit6_clbk CTotalGuildRankManagerInit6_user(nullptr);
        
        Info::CTotalGuildRankManagerInstance8_ptr CTotalGuildRankManagerInstance8_next(nullptr);
        Info::CTotalGuildRankManagerInstance8_clbk CTotalGuildRankManagerInstance8_user(nullptr);
        
        Info::CTotalGuildRankManagerLoad10_ptr CTotalGuildRankManagerLoad10_next(nullptr);
        Info::CTotalGuildRankManagerLoad10_clbk CTotalGuildRankManagerLoad10_user(nullptr);
        
        Info::CTotalGuildRankManagerLoad12_ptr CTotalGuildRankManagerLoad12_next(nullptr);
        Info::CTotalGuildRankManagerLoad12_clbk CTotalGuildRankManagerLoad12_user(nullptr);
        
        Info::CTotalGuildRankManagerLoop14_ptr CTotalGuildRankManagerLoop14_next(nullptr);
        Info::CTotalGuildRankManagerLoop14_clbk CTotalGuildRankManagerLoop14_user(nullptr);
        
        Info::CTotalGuildRankManagerOrderRank16_ptr CTotalGuildRankManagerOrderRank16_next(nullptr);
        Info::CTotalGuildRankManagerOrderRank16_clbk CTotalGuildRankManagerOrderRank16_user(nullptr);
        
        Info::CTotalGuildRankManagerSend18_ptr CTotalGuildRankManagerSend18_next(nullptr);
        Info::CTotalGuildRankManagerSend18_clbk CTotalGuildRankManagerSend18_user(nullptr);
        
        Info::CTotalGuildRankManagerUpdate20_ptr CTotalGuildRankManagerUpdate20_next(nullptr);
        Info::CTotalGuildRankManagerUpdate20_clbk CTotalGuildRankManagerUpdate20_user(nullptr);
        
        Info::CTotalGuildRankManagerUpdateComlete22_ptr CTotalGuildRankManagerUpdateComlete22_next(nullptr);
        Info::CTotalGuildRankManagerUpdateComlete22_clbk CTotalGuildRankManagerUpdateComlete22_user(nullptr);
        
        
        Info::CTotalGuildRankManagerdtor_CTotalGuildRankManager26_ptr CTotalGuildRankManagerdtor_CTotalGuildRankManager26_next(nullptr);
        Info::CTotalGuildRankManagerdtor_CTotalGuildRankManager26_clbk CTotalGuildRankManagerdtor_CTotalGuildRankManager26_user(nullptr);
        
        
        void CTotalGuildRankManagerctor_CTotalGuildRankManager2_wrapper(struct CTotalGuildRankManager* _this)
        {
           CTotalGuildRankManagerctor_CTotalGuildRankManager2_user(_this, CTotalGuildRankManagerctor_CTotalGuildRankManager2_next);
        };
        void CTotalGuildRankManagerDestroy4_wrapper()
        {
           CTotalGuildRankManagerDestroy4_user(CTotalGuildRankManagerDestroy4_next);
        };
        bool CTotalGuildRankManagerInit6_wrapper(struct CTotalGuildRankManager* _this)
        {
           return CTotalGuildRankManagerInit6_user(_this, CTotalGuildRankManagerInit6_next);
        };
        struct CTotalGuildRankManager* CTotalGuildRankManagerInstance8_wrapper()
        {
           return CTotalGuildRankManagerInstance8_user(CTotalGuildRankManagerInstance8_next);
        };
        int CTotalGuildRankManagerLoad10_wrapper(struct CTotalGuildRankManager* _this, char byDayAfter, struct _total_guild_rank_info* pkInfo)
        {
           return CTotalGuildRankManagerLoad10_user(_this, byDayAfter, pkInfo, CTotalGuildRankManagerLoad10_next);
        };
        bool CTotalGuildRankManagerLoad12_wrapper(struct CTotalGuildRankManager* _this)
        {
           return CTotalGuildRankManagerLoad12_user(_this, CTotalGuildRankManagerLoad12_next);
        };
        void CTotalGuildRankManagerLoop14_wrapper(struct CTotalGuildRankManager* _this)
        {
           CTotalGuildRankManagerLoop14_user(_this, CTotalGuildRankManagerLoop14_next);
        };
        void CTotalGuildRankManagerOrderRank16_wrapper(struct CTotalGuildRankManager* _this, struct _total_guild_rank_info* pkInfo)
        {
           CTotalGuildRankManagerOrderRank16_user(_this, pkInfo, CTotalGuildRankManagerOrderRank16_next);
        };
        void CTotalGuildRankManagerSend18_wrapper(struct CTotalGuildRankManager* _this, unsigned int dwVer, char byTabRace, struct CPlayer* pkPlayer)
        {
           CTotalGuildRankManagerSend18_user(_this, dwVer, byTabRace, pkPlayer, CTotalGuildRankManagerSend18_next);
        };
        bool CTotalGuildRankManagerUpdate20_wrapper(struct CTotalGuildRankManager* _this, char* pLoadData)
        {
           return CTotalGuildRankManagerUpdate20_user(_this, pLoadData, CTotalGuildRankManagerUpdate20_next);
        };
        void CTotalGuildRankManagerUpdateComlete22_wrapper(struct CTotalGuildRankManager* _this, char byRet, char* pLoadData)
        {
           CTotalGuildRankManagerUpdateComlete22_user(_this, byRet, pLoadData, CTotalGuildRankManagerUpdateComlete22_next);
        };
        
        void CTotalGuildRankManagerdtor_CTotalGuildRankManager26_wrapper(struct CTotalGuildRankManager* _this)
        {
           CTotalGuildRankManagerdtor_CTotalGuildRankManager26_user(_this, CTotalGuildRankManagerdtor_CTotalGuildRankManager26_next);
        };
        
        ::std::array<hook_record, 12> CTotalGuildRankManager_functions = 
        {
            _hook_record {
                (LPVOID)0x1402c9550L,
                (LPVOID *)&CTotalGuildRankManagerctor_CTotalGuildRankManager2_user,
                (LPVOID *)&CTotalGuildRankManagerctor_CTotalGuildRankManager2_next,
                (LPVOID)cast_pointer_function(CTotalGuildRankManagerctor_CTotalGuildRankManager2_wrapper),
                (LPVOID)cast_pointer_function((void(CTotalGuildRankManager::*)())&CTotalGuildRankManager::ctor_CTotalGuildRankManager)
            },
            _hook_record {
                (LPVOID)0x1402c9660L,
                (LPVOID *)&CTotalGuildRankManagerDestroy4_user,
                (LPVOID *)&CTotalGuildRankManagerDestroy4_next,
                (LPVOID)cast_pointer_function(CTotalGuildRankManagerDestroy4_wrapper),
                (LPVOID)cast_pointer_function((void(*)())&CTotalGuildRankManager::Destroy)
            },
            _hook_record {
                (LPVOID)0x1402c96e0L,
                (LPVOID *)&CTotalGuildRankManagerInit6_user,
                (LPVOID *)&CTotalGuildRankManagerInit6_next,
                (LPVOID)cast_pointer_function(CTotalGuildRankManagerInit6_wrapper),
                (LPVOID)cast_pointer_function((bool(CTotalGuildRankManager::*)())&CTotalGuildRankManager::Init)
            },
            _hook_record {
                (LPVOID)0x1402c95a0L,
                (LPVOID *)&CTotalGuildRankManagerInstance8_user,
                (LPVOID *)&CTotalGuildRankManagerInstance8_next,
                (LPVOID)cast_pointer_function(CTotalGuildRankManagerInstance8_wrapper),
                (LPVOID)cast_pointer_function((struct CTotalGuildRankManager*(*)())&CTotalGuildRankManager::Instance)
            },
            _hook_record {
                (LPVOID)0x1402c9a70L,
                (LPVOID *)&CTotalGuildRankManagerLoad10_user,
                (LPVOID *)&CTotalGuildRankManagerLoad10_next,
                (LPVOID)cast_pointer_function(CTotalGuildRankManagerLoad10_wrapper),
                (LPVOID)cast_pointer_function((int(CTotalGuildRankManager::*)(char, struct _total_guild_rank_info*))&CTotalGuildRankManager::Load)
            },
            _hook_record {
                (LPVOID)0x1402c9740L,
                (LPVOID *)&CTotalGuildRankManagerLoad12_user,
                (LPVOID *)&CTotalGuildRankManagerLoad12_next,
                (LPVOID)cast_pointer_function(CTotalGuildRankManagerLoad12_wrapper),
                (LPVOID)cast_pointer_function((bool(CTotalGuildRankManager::*)())&CTotalGuildRankManager::Load)
            },
            _hook_record {
                (LPVOID)0x1402c9820L,
                (LPVOID *)&CTotalGuildRankManagerLoop14_user,
                (LPVOID *)&CTotalGuildRankManagerLoop14_next,
                (LPVOID)cast_pointer_function(CTotalGuildRankManagerLoop14_wrapper),
                (LPVOID)cast_pointer_function((void(CTotalGuildRankManager::*)())&CTotalGuildRankManager::Loop)
            },
            _hook_record {
                (LPVOID)0x1402c9bf0L,
                (LPVOID *)&CTotalGuildRankManagerOrderRank16_user,
                (LPVOID *)&CTotalGuildRankManagerOrderRank16_next,
                (LPVOID)cast_pointer_function(CTotalGuildRankManagerOrderRank16_wrapper),
                (LPVOID)cast_pointer_function((void(CTotalGuildRankManager::*)(struct _total_guild_rank_info*))&CTotalGuildRankManager::OrderRank)
            },
            _hook_record {
                (LPVOID)0x1402c99b0L,
                (LPVOID *)&CTotalGuildRankManagerSend18_user,
                (LPVOID *)&CTotalGuildRankManagerSend18_next,
                (LPVOID)cast_pointer_function(CTotalGuildRankManagerSend18_wrapper),
                (LPVOID)cast_pointer_function((void(CTotalGuildRankManager::*)(unsigned int, char, struct CPlayer*))&CTotalGuildRankManager::Send)
            },
            _hook_record {
                (LPVOID)0x1402c98b0L,
                (LPVOID *)&CTotalGuildRankManagerUpdate20_user,
                (LPVOID *)&CTotalGuildRankManagerUpdate20_next,
                (LPVOID)cast_pointer_function(CTotalGuildRankManagerUpdate20_wrapper),
                (LPVOID)cast_pointer_function((bool(CTotalGuildRankManager::*)(char*))&CTotalGuildRankManager::Update)
            },
            _hook_record {
                (LPVOID)0x1402c9910L,
                (LPVOID *)&CTotalGuildRankManagerUpdateComlete22_user,
                (LPVOID *)&CTotalGuildRankManagerUpdateComlete22_next,
                (LPVOID)cast_pointer_function(CTotalGuildRankManagerUpdateComlete22_wrapper),
                (LPVOID)cast_pointer_function((void(CTotalGuildRankManager::*)(char, char*))&CTotalGuildRankManager::UpdateComlete)
            },
            _hook_record {
                (LPVOID)0x1402ca430L,
                (LPVOID *)&CTotalGuildRankManagerdtor_CTotalGuildRankManager26_user,
                (LPVOID *)&CTotalGuildRankManagerdtor_CTotalGuildRankManager26_next,
                (LPVOID)cast_pointer_function(CTotalGuildRankManagerdtor_CTotalGuildRankManager26_wrapper),
                (LPVOID)cast_pointer_function((void(CTotalGuildRankManager::*)())&CTotalGuildRankManager::dtor_CTotalGuildRankManager)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
