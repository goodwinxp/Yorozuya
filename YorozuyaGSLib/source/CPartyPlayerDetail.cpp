#include <CPartyPlayerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CPartyPlayerctor_CPartyPlayer2_ptr CPartyPlayerctor_CPartyPlayer2_next(nullptr);
        Info::CPartyPlayerctor_CPartyPlayer2_clbk CPartyPlayerctor_CPartyPlayer2_user(nullptr);
        
        Info::CPartyPlayerDisjointParty4_ptr CPartyPlayerDisjointParty4_next(nullptr);
        Info::CPartyPlayerDisjointParty4_clbk CPartyPlayerDisjointParty4_user(nullptr);
        
        Info::CPartyPlayerEnterWorld6_ptr CPartyPlayerEnterWorld6_next(nullptr);
        Info::CPartyPlayerEnterWorld6_clbk CPartyPlayerEnterWorld6_user(nullptr);
        
        Info::CPartyPlayerExitWorld8_ptr CPartyPlayerExitWorld8_next(nullptr);
        Info::CPartyPlayerExitWorld8_clbk CPartyPlayerExitWorld8_user(nullptr);
        
        Info::CPartyPlayerFoundParty10_ptr CPartyPlayerFoundParty10_next(nullptr);
        Info::CPartyPlayerFoundParty10_clbk CPartyPlayerFoundParty10_user(nullptr);
        
        Info::CPartyPlayerGetLootAuthor12_ptr CPartyPlayerGetLootAuthor12_next(nullptr);
        Info::CPartyPlayerGetLootAuthor12_clbk CPartyPlayerGetLootAuthor12_user(nullptr);
        
        Info::CPartyPlayerGetPopPartyMember14_ptr CPartyPlayerGetPopPartyMember14_next(nullptr);
        Info::CPartyPlayerGetPopPartyMember14_clbk CPartyPlayerGetPopPartyMember14_user(nullptr);
        
        Info::CPartyPlayerGetPtrFromSerial16_ptr CPartyPlayerGetPtrFromSerial16_next(nullptr);
        Info::CPartyPlayerGetPtrFromSerial16_clbk CPartyPlayerGetPtrFromSerial16_user(nullptr);
        
        Info::CPartyPlayerGetPtrPartyMember18_ptr CPartyPlayerGetPtrPartyMember18_next(nullptr);
        Info::CPartyPlayerGetPtrPartyMember18_clbk CPartyPlayerGetPtrPartyMember18_user(nullptr);
        
        Info::CPartyPlayerInheritBoss20_ptr CPartyPlayerInheritBoss20_next(nullptr);
        Info::CPartyPlayerInheritBoss20_clbk CPartyPlayerInheritBoss20_user(nullptr);
        
        Info::CPartyPlayerInit22_ptr CPartyPlayerInit22_next(nullptr);
        Info::CPartyPlayerInit22_clbk CPartyPlayerInit22_user(nullptr);
        
        Info::CPartyPlayerInsertPartyMember24_ptr CPartyPlayerInsertPartyMember24_next(nullptr);
        Info::CPartyPlayerInsertPartyMember24_clbk CPartyPlayerInsertPartyMember24_user(nullptr);
        
        Info::CPartyPlayerIsJoinPartyLevel26_ptr CPartyPlayerIsJoinPartyLevel26_next(nullptr);
        Info::CPartyPlayerIsJoinPartyLevel26_clbk CPartyPlayerIsJoinPartyLevel26_user(nullptr);
        
        Info::CPartyPlayerIsPartyBoss28_ptr CPartyPlayerIsPartyBoss28_next(nullptr);
        Info::CPartyPlayerIsPartyBoss28_clbk CPartyPlayerIsPartyBoss28_user(nullptr);
        
        Info::CPartyPlayerIsPartyLock30_ptr CPartyPlayerIsPartyLock30_next(nullptr);
        Info::CPartyPlayerIsPartyLock30_clbk CPartyPlayerIsPartyLock30_user(nullptr);
        
        Info::CPartyPlayerIsPartyMember32_ptr CPartyPlayerIsPartyMember32_next(nullptr);
        Info::CPartyPlayerIsPartyMember32_clbk CPartyPlayerIsPartyMember32_user(nullptr);
        
        Info::CPartyPlayerIsPartyMode34_ptr CPartyPlayerIsPartyMode34_next(nullptr);
        Info::CPartyPlayerIsPartyMode34_clbk CPartyPlayerIsPartyMode34_user(nullptr);
        
        Info::CPartyPlayerPartyListInit36_ptr CPartyPlayerPartyListInit36_next(nullptr);
        Info::CPartyPlayerPartyListInit36_clbk CPartyPlayerPartyListInit36_user(nullptr);
        
        Info::CPartyPlayerRemovePartyMember38_ptr CPartyPlayerRemovePartyMember38_next(nullptr);
        Info::CPartyPlayerRemovePartyMember38_clbk CPartyPlayerRemovePartyMember38_user(nullptr);
        
        Info::CPartyPlayerSetLockMode40_ptr CPartyPlayerSetLockMode40_next(nullptr);
        Info::CPartyPlayerSetLockMode40_clbk CPartyPlayerSetLockMode40_user(nullptr);
        
        Info::CPartyPlayerSetLootShareMode42_ptr CPartyPlayerSetLootShareMode42_next(nullptr);
        Info::CPartyPlayerSetLootShareMode42_clbk CPartyPlayerSetLootShareMode42_user(nullptr);
        
        Info::CPartyPlayerSetNextLootAuthor44_ptr CPartyPlayerSetNextLootAuthor44_next(nullptr);
        Info::CPartyPlayerSetNextLootAuthor44_clbk CPartyPlayerSetNextLootAuthor44_user(nullptr);
        
        
        void CPartyPlayerctor_CPartyPlayer2_wrapper(struct CPartyPlayer* _this)
        {
           CPartyPlayerctor_CPartyPlayer2_user(_this, CPartyPlayerctor_CPartyPlayer2_next);
        };
        bool CPartyPlayerDisjointParty4_wrapper(struct CPartyPlayer* _this)
        {
           return CPartyPlayerDisjointParty4_user(_this, CPartyPlayerDisjointParty4_next);
        };
        void CPartyPlayerEnterWorld6_wrapper(struct CPartyPlayer* _this, struct _WA_AVATOR_CODE* pData, uint16_t wZoneIndex)
        {
           CPartyPlayerEnterWorld6_user(_this, pData, wZoneIndex, CPartyPlayerEnterWorld6_next);
        };
        void CPartyPlayerExitWorld8_wrapper(struct CPartyPlayer* _this, struct CPartyPlayer** ppoutNewBoss)
        {
           CPartyPlayerExitWorld8_user(_this, ppoutNewBoss, CPartyPlayerExitWorld8_next);
        };
        bool CPartyPlayerFoundParty10_wrapper(struct CPartyPlayer* _this, struct CPartyPlayer* pParticiper)
        {
           return CPartyPlayerFoundParty10_user(_this, pParticiper, CPartyPlayerFoundParty10_next);
        };
        struct CPlayer* CPartyPlayerGetLootAuthor12_wrapper(struct CPartyPlayer* _this)
        {
           return CPartyPlayerGetLootAuthor12_user(_this, CPartyPlayerGetLootAuthor12_next);
        };
        int CPartyPlayerGetPopPartyMember14_wrapper(struct CPartyPlayer* _this)
        {
           return CPartyPlayerGetPopPartyMember14_user(_this, CPartyPlayerGetPopPartyMember14_next);
        };
        struct CPartyPlayer* CPartyPlayerGetPtrFromSerial16_wrapper(struct CPartyPlayer* _this, unsigned int dwWorldSerial)
        {
           return CPartyPlayerGetPtrFromSerial16_user(_this, dwWorldSerial, CPartyPlayerGetPtrFromSerial16_next);
        };
        struct CPartyPlayer** CPartyPlayerGetPtrPartyMember18_wrapper(struct CPartyPlayer* _this)
        {
           return CPartyPlayerGetPtrPartyMember18_user(_this, CPartyPlayerGetPtrPartyMember18_next);
        };
        bool CPartyPlayerInheritBoss20_wrapper(struct CPartyPlayer* _this, struct CPartyPlayer* pSuccessor)
        {
           return CPartyPlayerInheritBoss20_user(_this, pSuccessor, CPartyPlayerInheritBoss20_next);
        };
        void CPartyPlayerInit22_wrapper(struct CPartyPlayer* _this, uint16_t wIndex)
        {
           CPartyPlayerInit22_user(_this, wIndex, CPartyPlayerInit22_next);
        };
        bool CPartyPlayerInsertPartyMember24_wrapper(struct CPartyPlayer* _this, struct CPartyPlayer* pJoiner)
        {
           return CPartyPlayerInsertPartyMember24_user(_this, pJoiner, CPartyPlayerInsertPartyMember24_next);
        };
        bool CPartyPlayerIsJoinPartyLevel26_wrapper(struct CPartyPlayer* _this, int nJoinerLevel, float fProf)
        {
           return CPartyPlayerIsJoinPartyLevel26_user(_this, nJoinerLevel, fProf, CPartyPlayerIsJoinPartyLevel26_next);
        };
        bool CPartyPlayerIsPartyBoss28_wrapper(struct CPartyPlayer* _this)
        {
           return CPartyPlayerIsPartyBoss28_user(_this, CPartyPlayerIsPartyBoss28_next);
        };
        bool CPartyPlayerIsPartyLock30_wrapper(struct CPartyPlayer* _this)
        {
           return CPartyPlayerIsPartyLock30_user(_this, CPartyPlayerIsPartyLock30_next);
        };
        bool CPartyPlayerIsPartyMember32_wrapper(struct CPartyPlayer* _this, struct CPlayer* pkObj)
        {
           return CPartyPlayerIsPartyMember32_user(_this, pkObj, CPartyPlayerIsPartyMember32_next);
        };
        bool CPartyPlayerIsPartyMode34_wrapper(struct CPartyPlayer* _this)
        {
           return CPartyPlayerIsPartyMode34_user(_this, CPartyPlayerIsPartyMode34_next);
        };
        void CPartyPlayerPartyListInit36_wrapper(struct CPartyPlayer* _this)
        {
           CPartyPlayerPartyListInit36_user(_this, CPartyPlayerPartyListInit36_next);
        };
        bool CPartyPlayerRemovePartyMember38_wrapper(struct CPartyPlayer* _this, struct CPartyPlayer* pExiter, struct CPartyPlayer** ppoutNewBoss)
        {
           return CPartyPlayerRemovePartyMember38_user(_this, pExiter, ppoutNewBoss, CPartyPlayerRemovePartyMember38_next);
        };
        bool CPartyPlayerSetLockMode40_wrapper(struct CPartyPlayer* _this, bool bLock)
        {
           return CPartyPlayerSetLockMode40_user(_this, bLock, CPartyPlayerSetLockMode40_next);
        };
        bool CPartyPlayerSetLootShareMode42_wrapper(struct CPartyPlayer* _this, char byLootShareMode)
        {
           return CPartyPlayerSetLootShareMode42_user(_this, byLootShareMode, CPartyPlayerSetLootShareMode42_next);
        };
        void CPartyPlayerSetNextLootAuthor44_wrapper(struct CPartyPlayer* _this)
        {
           CPartyPlayerSetNextLootAuthor44_user(_this, CPartyPlayerSetNextLootAuthor44_next);
        };
        
        ::std::array<hook_record, 22> CPartyPlayer_functions = 
        {
            _hook_record {
                (LPVOID)0x140044c10L,
                (LPVOID *)&CPartyPlayerctor_CPartyPlayer2_user,
                (LPVOID *)&CPartyPlayerctor_CPartyPlayer2_next,
                (LPVOID)cast_pointer_function(CPartyPlayerctor_CPartyPlayer2_wrapper),
                (LPVOID)cast_pointer_function((void(CPartyPlayer::*)())&CPartyPlayer::ctor_CPartyPlayer)
            },
            _hook_record {
                (LPVOID)0x140045190L,
                (LPVOID *)&CPartyPlayerDisjointParty4_user,
                (LPVOID *)&CPartyPlayerDisjointParty4_next,
                (LPVOID)cast_pointer_function(CPartyPlayerDisjointParty4_wrapper),
                (LPVOID)cast_pointer_function((bool(CPartyPlayer::*)())&CPartyPlayer::DisjointParty)
            },
            _hook_record {
                (LPVOID)0x140044ca0L,
                (LPVOID *)&CPartyPlayerEnterWorld6_user,
                (LPVOID *)&CPartyPlayerEnterWorld6_next,
                (LPVOID)cast_pointer_function(CPartyPlayerEnterWorld6_wrapper),
                (LPVOID)cast_pointer_function((void(CPartyPlayer::*)(struct _WA_AVATOR_CODE*, uint16_t))&CPartyPlayer::EnterWorld)
            },
            _hook_record {
                (LPVOID)0x140044d30L,
                (LPVOID *)&CPartyPlayerExitWorld8_user,
                (LPVOID *)&CPartyPlayerExitWorld8_next,
                (LPVOID)cast_pointer_function(CPartyPlayerExitWorld8_wrapper),
                (LPVOID)cast_pointer_function((void(CPartyPlayer::*)(struct CPartyPlayer**))&CPartyPlayer::ExitWorld)
            },
            _hook_record {
                (LPVOID)0x1400450e0L,
                (LPVOID *)&CPartyPlayerFoundParty10_user,
                (LPVOID *)&CPartyPlayerFoundParty10_next,
                (LPVOID)cast_pointer_function(CPartyPlayerFoundParty10_wrapper),
                (LPVOID)cast_pointer_function((bool(CPartyPlayer::*)(struct CPartyPlayer*))&CPartyPlayer::FoundParty)
            },
            _hook_record {
                (LPVOID)0x140045c50L,
                (LPVOID *)&CPartyPlayerGetLootAuthor12_user,
                (LPVOID *)&CPartyPlayerGetLootAuthor12_next,
                (LPVOID)cast_pointer_function(CPartyPlayerGetLootAuthor12_wrapper),
                (LPVOID)cast_pointer_function((struct CPlayer*(CPartyPlayer::*)())&CPartyPlayer::GetLootAuthor)
            },
            _hook_record {
                (LPVOID)0x140044eb0L,
                (LPVOID *)&CPartyPlayerGetPopPartyMember14_user,
                (LPVOID *)&CPartyPlayerGetPopPartyMember14_next,
                (LPVOID)cast_pointer_function(CPartyPlayerGetPopPartyMember14_wrapper),
                (LPVOID)cast_pointer_function((int(CPartyPlayer::*)())&CPartyPlayer::GetPopPartyMember)
            },
            _hook_record {
                (LPVOID)0x140044f80L,
                (LPVOID *)&CPartyPlayerGetPtrFromSerial16_user,
                (LPVOID *)&CPartyPlayerGetPtrFromSerial16_next,
                (LPVOID)cast_pointer_function(CPartyPlayerGetPtrFromSerial16_wrapper),
                (LPVOID)cast_pointer_function((struct CPartyPlayer*(CPartyPlayer::*)(unsigned int))&CPartyPlayer::GetPtrFromSerial)
            },
            _hook_record {
                (LPVOID)0x140044f50L,
                (LPVOID *)&CPartyPlayerGetPtrPartyMember18_user,
                (LPVOID *)&CPartyPlayerGetPtrPartyMember18_next,
                (LPVOID)cast_pointer_function(CPartyPlayerGetPtrPartyMember18_wrapper),
                (LPVOID)cast_pointer_function((struct CPartyPlayer**(CPartyPlayer::*)())&CPartyPlayer::GetPtrPartyMember)
            },
            _hook_record {
                (LPVOID)0x140045830L,
                (LPVOID *)&CPartyPlayerInheritBoss20_user,
                (LPVOID *)&CPartyPlayerInheritBoss20_next,
                (LPVOID)cast_pointer_function(CPartyPlayerInheritBoss20_wrapper),
                (LPVOID)cast_pointer_function((bool(CPartyPlayer::*)(struct CPartyPlayer*))&CPartyPlayer::InheritBoss)
            },
            _hook_record {
                (LPVOID)0x140044c30L,
                (LPVOID *)&CPartyPlayerInit22_user,
                (LPVOID *)&CPartyPlayerInit22_next,
                (LPVOID)cast_pointer_function(CPartyPlayerInit22_wrapper),
                (LPVOID)cast_pointer_function((void(CPartyPlayer::*)(uint16_t))&CPartyPlayer::Init)
            },
            _hook_record {
                (LPVOID)0x1400452f0L,
                (LPVOID *)&CPartyPlayerInsertPartyMember24_user,
                (LPVOID *)&CPartyPlayerInsertPartyMember24_next,
                (LPVOID)cast_pointer_function(CPartyPlayerInsertPartyMember24_wrapper),
                (LPVOID)cast_pointer_function((bool(CPartyPlayer::*)(struct CPartyPlayer*))&CPartyPlayer::InsertPartyMember)
            },
            _hook_record {
                (LPVOID)0x140045ea0L,
                (LPVOID *)&CPartyPlayerIsJoinPartyLevel26_user,
                (LPVOID *)&CPartyPlayerIsJoinPartyLevel26_next,
                (LPVOID)cast_pointer_function(CPartyPlayerIsJoinPartyLevel26_wrapper),
                (LPVOID)cast_pointer_function((bool(CPartyPlayer::*)(int, float))&CPartyPlayer::IsJoinPartyLevel)
            },
            _hook_record {
                (LPVOID)0x140044e50L,
                (LPVOID *)&CPartyPlayerIsPartyBoss28_user,
                (LPVOID *)&CPartyPlayerIsPartyBoss28_next,
                (LPVOID)cast_pointer_function(CPartyPlayerIsPartyBoss28_wrapper),
                (LPVOID)cast_pointer_function((bool(CPartyPlayer::*)())&CPartyPlayer::IsPartyBoss)
            },
            _hook_record {
                (LPVOID)0x140044e80L,
                (LPVOID *)&CPartyPlayerIsPartyLock30_user,
                (LPVOID *)&CPartyPlayerIsPartyLock30_next,
                (LPVOID)cast_pointer_function(CPartyPlayerIsPartyLock30_wrapper),
                (LPVOID)cast_pointer_function((bool(CPartyPlayer::*)())&CPartyPlayer::IsPartyLock)
            },
            _hook_record {
                (LPVOID)0x140045030L,
                (LPVOID *)&CPartyPlayerIsPartyMember32_user,
                (LPVOID *)&CPartyPlayerIsPartyMember32_next,
                (LPVOID)cast_pointer_function(CPartyPlayerIsPartyMember32_wrapper),
                (LPVOID)cast_pointer_function((bool(CPartyPlayer::*)(struct CPlayer*))&CPartyPlayer::IsPartyMember)
            },
            _hook_record {
                (LPVOID)0x140044e30L,
                (LPVOID *)&CPartyPlayerIsPartyMode34_user,
                (LPVOID *)&CPartyPlayerIsPartyMode34_next,
                (LPVOID)cast_pointer_function(CPartyPlayerIsPartyMode34_wrapper),
                (LPVOID)cast_pointer_function((bool(CPartyPlayer::*)())&CPartyPlayer::IsPartyMode)
            },
            _hook_record {
                (LPVOID)0x140044db0L,
                (LPVOID *)&CPartyPlayerPartyListInit36_user,
                (LPVOID *)&CPartyPlayerPartyListInit36_next,
                (LPVOID)cast_pointer_function(CPartyPlayerPartyListInit36_wrapper),
                (LPVOID)cast_pointer_function((void(CPartyPlayer::*)())&CPartyPlayer::PartyListInit)
            },
            _hook_record {
                (LPVOID)0x1400453a0L,
                (LPVOID *)&CPartyPlayerRemovePartyMember38_user,
                (LPVOID *)&CPartyPlayerRemovePartyMember38_next,
                (LPVOID)cast_pointer_function(CPartyPlayerRemovePartyMember38_wrapper),
                (LPVOID)cast_pointer_function((bool(CPartyPlayer::*)(struct CPartyPlayer*, struct CPartyPlayer**))&CPartyPlayer::RemovePartyMember)
            },
            _hook_record {
                (LPVOID)0x140045b70L,
                (LPVOID *)&CPartyPlayerSetLockMode40_user,
                (LPVOID *)&CPartyPlayerSetLockMode40_next,
                (LPVOID)cast_pointer_function(CPartyPlayerSetLockMode40_wrapper),
                (LPVOID)cast_pointer_function((bool(CPartyPlayer::*)(bool))&CPartyPlayer::SetLockMode)
            },
            _hook_record {
                (LPVOID)0x140045be0L,
                (LPVOID *)&CPartyPlayerSetLootShareMode42_user,
                (LPVOID *)&CPartyPlayerSetLootShareMode42_next,
                (LPVOID)cast_pointer_function(CPartyPlayerSetLootShareMode42_wrapper),
                (LPVOID)cast_pointer_function((bool(CPartyPlayer::*)(char))&CPartyPlayer::SetLootShareMode)
            },
            _hook_record {
                (LPVOID)0x140045d80L,
                (LPVOID *)&CPartyPlayerSetNextLootAuthor44_user,
                (LPVOID *)&CPartyPlayerSetNextLootAuthor44_next,
                (LPVOID)cast_pointer_function(CPartyPlayerSetNextLootAuthor44_wrapper),
                (LPVOID)cast_pointer_function((void(CPartyPlayer::*)())&CPartyPlayer::SetNextLootAuthor)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
