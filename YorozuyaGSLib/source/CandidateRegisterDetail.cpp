#include <CandidateRegisterDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CandidateRegisterctor_CandidateRegister2_ptr CandidateRegisterctor_CandidateRegister2_next(nullptr);
        Info::CandidateRegisterctor_CandidateRegister2_clbk CandidateRegisterctor_CandidateRegister2_user(nullptr);
        
        Info::CandidateRegisterDoit4_ptr CandidateRegisterDoit4_next(nullptr);
        Info::CandidateRegisterDoit4_clbk CandidateRegisterDoit4_user(nullptr);
        
        Info::CandidateRegisterInitialize6_ptr CandidateRegisterInitialize6_next(nullptr);
        Info::CandidateRegisterInitialize6_clbk CandidateRegisterInitialize6_user(nullptr);
        
        Info::CandidateRegister_AddToPacket8_ptr CandidateRegister_AddToPacket8_next(nullptr);
        Info::CandidateRegister_AddToPacket8_clbk CandidateRegister_AddToPacket8_user(nullptr);
        
        Info::CandidateRegister_CheckPlayerInfo10_ptr CandidateRegister_CheckPlayerInfo10_next(nullptr);
        Info::CandidateRegister_CheckPlayerInfo10_clbk CandidateRegister_CheckPlayerInfo10_user(nullptr);
        
        Info::CandidateRegister_InitCandidate12_ptr CandidateRegister_InitCandidate12_next(nullptr);
        Info::CandidateRegister_InitCandidate12_clbk CandidateRegister_InitCandidate12_user(nullptr);
        
        Info::CandidateRegister_Regist14_ptr CandidateRegister_Regist14_next(nullptr);
        Info::CandidateRegister_Regist14_clbk CandidateRegister_Regist14_user(nullptr);
        
        Info::CandidateRegister_SendList16_ptr CandidateRegister_SendList16_next(nullptr);
        Info::CandidateRegister_SendList16_clbk CandidateRegister_SendList16_user(nullptr);
        
        Info::CandidateRegister_SortCandidacyByPvpPoint18_ptr CandidateRegister_SortCandidacyByPvpPoint18_next(nullptr);
        Info::CandidateRegister_SortCandidacyByPvpPoint18_clbk CandidateRegister_SortCandidacyByPvpPoint18_user(nullptr);
        
        Info::CandidateRegister_UpdatePacketWin20_ptr CandidateRegister_UpdatePacketWin20_next(nullptr);
        Info::CandidateRegister_UpdatePacketWin20_clbk CandidateRegister_UpdatePacketWin20_user(nullptr);
        
        
        Info::CandidateRegisterdtor_CandidateRegister25_ptr CandidateRegisterdtor_CandidateRegister25_next(nullptr);
        Info::CandidateRegisterdtor_CandidateRegister25_clbk CandidateRegisterdtor_CandidateRegister25_user(nullptr);
        
        
        void CandidateRegisterctor_CandidateRegister2_wrapper(struct CandidateRegister* _this)
        {
           CandidateRegisterctor_CandidateRegister2_user(_this, CandidateRegisterctor_CandidateRegister2_next);
        };
        int CandidateRegisterDoit4_wrapper(struct CandidateRegister* _this, Cmd eCmd, struct CPlayer* pOne, char* pdata)
        {
           return CandidateRegisterDoit4_user(_this, eCmd, pOne, pdata, CandidateRegisterDoit4_next);
        };
        bool CandidateRegisterInitialize6_wrapper(struct CandidateRegister* _this)
        {
           return CandidateRegisterInitialize6_user(_this, CandidateRegisterInitialize6_next);
        };
        bool CandidateRegister_AddToPacket8_wrapper(struct CandidateRegister* _this, struct CPlayer* pOne, unsigned int dwWinCnt)
        {
           return CandidateRegister_AddToPacket8_user(_this, pOne, dwWinCnt, CandidateRegister_AddToPacket8_next);
        };
        int CandidateRegister_CheckPlayerInfo10_wrapper(struct CandidateRegister* _this, struct CPlayer* pOne)
        {
           return CandidateRegister_CheckPlayerInfo10_user(_this, pOne, CandidateRegister_CheckPlayerInfo10_next);
        };
        void CandidateRegister_InitCandidate12_wrapper(struct CandidateRegister* _this)
        {
           CandidateRegister_InitCandidate12_user(_this, CandidateRegister_InitCandidate12_next);
        };
        int CandidateRegister_Regist14_wrapper(struct CandidateRegister* _this, struct CPlayer* pOne, char* pdata)
        {
           return CandidateRegister_Regist14_user(_this, pOne, pdata, CandidateRegister_Regist14_next);
        };
        int CandidateRegister_SendList16_wrapper(struct CandidateRegister* _this, uint16_t wSock, char byRace)
        {
           return CandidateRegister_SendList16_user(_this, wSock, byRace, CandidateRegister_SendList16_next);
        };
        void CandidateRegister_SortCandidacyByPvpPoint18_wrapper(struct CandidateRegister* _this, char byRace)
        {
           CandidateRegister_SortCandidacyByPvpPoint18_user(_this, byRace, CandidateRegister_SortCandidacyByPvpPoint18_next);
        };
        void CandidateRegister_UpdatePacketWin20_wrapper(struct CandidateRegister* _this, char byRace, char* wszName, unsigned int dwWinCnt)
        {
           CandidateRegister_UpdatePacketWin20_user(_this, byRace, wszName, dwWinCnt, CandidateRegister_UpdatePacketWin20_next);
        };
        
        void CandidateRegisterdtor_CandidateRegister25_wrapper(struct CandidateRegister* _this)
        {
           CandidateRegisterdtor_CandidateRegister25_user(_this, CandidateRegisterdtor_CandidateRegister25_next);
        };
        
        ::std::array<hook_record, 11> CandidateRegister_functions = 
        {
            _hook_record {
                (LPVOID)0x1402b6720L,
                (LPVOID *)&CandidateRegisterctor_CandidateRegister2_user,
                (LPVOID *)&CandidateRegisterctor_CandidateRegister2_next,
                (LPVOID)cast_pointer_function(CandidateRegisterctor_CandidateRegister2_wrapper),
                (LPVOID)cast_pointer_function((void(CandidateRegister::*)())&CandidateRegister::ctor_CandidateRegister)
            },
            _hook_record {
                (LPVOID)0x1402b68f0L,
                (LPVOID *)&CandidateRegisterDoit4_user,
                (LPVOID *)&CandidateRegisterDoit4_next,
                (LPVOID)cast_pointer_function(CandidateRegisterDoit4_wrapper),
                (LPVOID)cast_pointer_function((int(CandidateRegister::*)(Cmd, struct CPlayer*, char*))&CandidateRegister::Doit)
            },
            _hook_record {
                (LPVOID)0x1402b67e0L,
                (LPVOID *)&CandidateRegisterInitialize6_user,
                (LPVOID *)&CandidateRegisterInitialize6_next,
                (LPVOID)cast_pointer_function(CandidateRegisterInitialize6_wrapper),
                (LPVOID)cast_pointer_function((bool(CandidateRegister::*)())&CandidateRegister::Initialize)
            },
            _hook_record {
                (LPVOID)0x1402b6e40L,
                (LPVOID *)&CandidateRegister_AddToPacket8_user,
                (LPVOID *)&CandidateRegister_AddToPacket8_next,
                (LPVOID)cast_pointer_function(CandidateRegister_AddToPacket8_wrapper),
                (LPVOID)cast_pointer_function((bool(CandidateRegister::*)(struct CPlayer*, unsigned int))&CandidateRegister::_AddToPacket)
            },
            _hook_record {
                (LPVOID)0x1402b6d70L,
                (LPVOID *)&CandidateRegister_CheckPlayerInfo10_user,
                (LPVOID *)&CandidateRegister_CheckPlayerInfo10_next,
                (LPVOID)cast_pointer_function(CandidateRegister_CheckPlayerInfo10_wrapper),
                (LPVOID)cast_pointer_function((int(CandidateRegister::*)(struct CPlayer*))&CandidateRegister::_CheckPlayerInfo)
            },
            _hook_record {
                (LPVOID)0x1402b70c0L,
                (LPVOID *)&CandidateRegister_InitCandidate12_user,
                (LPVOID *)&CandidateRegister_InitCandidate12_next,
                (LPVOID)cast_pointer_function(CandidateRegister_InitCandidate12_wrapper),
                (LPVOID)cast_pointer_function((void(CandidateRegister::*)())&CandidateRegister::_InitCandidate)
            },
            _hook_record {
                (LPVOID)0x1402b6a40L,
                (LPVOID *)&CandidateRegister_Regist14_user,
                (LPVOID *)&CandidateRegister_Regist14_next,
                (LPVOID)cast_pointer_function(CandidateRegister_Regist14_wrapper),
                (LPVOID)cast_pointer_function((int(CandidateRegister::*)(struct CPlayer*, char*))&CandidateRegister::_Regist)
            },
            _hook_record {
                (LPVOID)0x1402b6cc0L,
                (LPVOID *)&CandidateRegister_SendList16_user,
                (LPVOID *)&CandidateRegister_SendList16_next,
                (LPVOID)cast_pointer_function(CandidateRegister_SendList16_wrapper),
                (LPVOID)cast_pointer_function((int(CandidateRegister::*)(uint16_t, char))&CandidateRegister::_SendList)
            },
            _hook_record {
                (LPVOID)0x1402b7530L,
                (LPVOID *)&CandidateRegister_SortCandidacyByPvpPoint18_user,
                (LPVOID *)&CandidateRegister_SortCandidacyByPvpPoint18_next,
                (LPVOID)cast_pointer_function(CandidateRegister_SortCandidacyByPvpPoint18_wrapper),
                (LPVOID)cast_pointer_function((void(CandidateRegister::*)(char))&CandidateRegister::_SortCandidacyByPvpPoint)
            },
            _hook_record {
                (LPVOID)0x1402b7430L,
                (LPVOID *)&CandidateRegister_UpdatePacketWin20_user,
                (LPVOID *)&CandidateRegister_UpdatePacketWin20_next,
                (LPVOID)cast_pointer_function(CandidateRegister_UpdatePacketWin20_wrapper),
                (LPVOID)cast_pointer_function((void(CandidateRegister::*)(char, char*, unsigned int))&CandidateRegister::_UpdatePacketWin)
            },
            _hook_record {
                (LPVOID)0x1402b7df0L,
                (LPVOID *)&CandidateRegisterdtor_CandidateRegister25_user,
                (LPVOID *)&CandidateRegisterdtor_CandidateRegister25_next,
                (LPVOID)cast_pointer_function(CandidateRegisterdtor_CandidateRegister25_wrapper),
                (LPVOID)cast_pointer_function((void(CandidateRegister::*)())&CandidateRegister::dtor_CandidateRegister)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
