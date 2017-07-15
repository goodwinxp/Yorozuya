#include <CRaceBuffByHolyQuestProcedureDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CRaceBuffByHolyQuestProcedurector_CRaceBuffByHolyQuestProcedure2_ptr CRaceBuffByHolyQuestProcedurector_CRaceBuffByHolyQuestProcedure2_next(nullptr);
        Info::CRaceBuffByHolyQuestProcedurector_CRaceBuffByHolyQuestProcedure2_clbk CRaceBuffByHolyQuestProcedurector_CRaceBuffByHolyQuestProcedure2_user(nullptr);
        
        Info::CRaceBuffByHolyQuestProcedureCancelPlayerRaceBuff4_ptr CRaceBuffByHolyQuestProcedureCancelPlayerRaceBuff4_next(nullptr);
        Info::CRaceBuffByHolyQuestProcedureCancelPlayerRaceBuff4_clbk CRaceBuffByHolyQuestProcedureCancelPlayerRaceBuff4_user(nullptr);
        
        Info::CRaceBuffByHolyQuestProcedureCreateComplete6_ptr CRaceBuffByHolyQuestProcedureCreateComplete6_next(nullptr);
        Info::CRaceBuffByHolyQuestProcedureCreateComplete6_clbk CRaceBuffByHolyQuestProcedureCreateComplete6_user(nullptr);
        
        Info::CRaceBuffByHolyQuestProcedureGetRaceBuffLevel8_ptr CRaceBuffByHolyQuestProcedureGetRaceBuffLevel8_next(nullptr);
        Info::CRaceBuffByHolyQuestProcedureGetRaceBuffLevel8_clbk CRaceBuffByHolyQuestProcedureGetRaceBuffLevel8_user(nullptr);
        
        Info::CRaceBuffByHolyQuestProcedureInit10_ptr CRaceBuffByHolyQuestProcedureInit10_next(nullptr);
        Info::CRaceBuffByHolyQuestProcedureInit10_clbk CRaceBuffByHolyQuestProcedureInit10_user(nullptr);
        
        Info::CRaceBuffByHolyQuestProcedureLoop12_ptr CRaceBuffByHolyQuestProcedureLoop12_next(nullptr);
        Info::CRaceBuffByHolyQuestProcedureLoop12_clbk CRaceBuffByHolyQuestProcedureLoop12_user(nullptr);
        
        Info::CRaceBuffByHolyQuestProcedureLoopSubProcSetRaceBuff14_ptr CRaceBuffByHolyQuestProcedureLoopSubProcSetRaceBuff14_next(nullptr);
        Info::CRaceBuffByHolyQuestProcedureLoopSubProcSetRaceBuff14_clbk CRaceBuffByHolyQuestProcedureLoopSubProcSetRaceBuff14_user(nullptr);
        
        Info::CRaceBuffByHolyQuestProcedureRequest16_ptr CRaceBuffByHolyQuestProcedureRequest16_next(nullptr);
        Info::CRaceBuffByHolyQuestProcedureRequest16_clbk CRaceBuffByHolyQuestProcedureRequest16_user(nullptr);
        
        Info::CRaceBuffByHolyQuestProcedureRequestSubProcCancelRaceBuff18_ptr CRaceBuffByHolyQuestProcedureRequestSubProcCancelRaceBuff18_next(nullptr);
        Info::CRaceBuffByHolyQuestProcedureRequestSubProcCancelRaceBuff18_clbk CRaceBuffByHolyQuestProcedureRequestSubProcCancelRaceBuff18_user(nullptr);
        
        Info::CRaceBuffByHolyQuestProcedureRequestSubProcSetRaceBattleResult20_ptr CRaceBuffByHolyQuestProcedureRequestSubProcSetRaceBattleResult20_next(nullptr);
        Info::CRaceBuffByHolyQuestProcedureRequestSubProcSetRaceBattleResult20_clbk CRaceBuffByHolyQuestProcedureRequestSubProcSetRaceBattleResult20_user(nullptr);
        
        Info::CRaceBuffByHolyQuestProcedureRequestSubProcSetRaceBuff22_ptr CRaceBuffByHolyQuestProcedureRequestSubProcSetRaceBuff22_next(nullptr);
        Info::CRaceBuffByHolyQuestProcedureRequestSubProcSetRaceBuff22_clbk CRaceBuffByHolyQuestProcedureRequestSubProcSetRaceBuff22_user(nullptr);
        
        
        Info::CRaceBuffByHolyQuestProceduredtor_CRaceBuffByHolyQuestProcedure24_ptr CRaceBuffByHolyQuestProceduredtor_CRaceBuffByHolyQuestProcedure24_next(nullptr);
        Info::CRaceBuffByHolyQuestProceduredtor_CRaceBuffByHolyQuestProcedure24_clbk CRaceBuffByHolyQuestProceduredtor_CRaceBuffByHolyQuestProcedure24_user(nullptr);
        
        
        void CRaceBuffByHolyQuestProcedurector_CRaceBuffByHolyQuestProcedure2_wrapper(struct CRaceBuffByHolyQuestProcedure* _this)
        {
           CRaceBuffByHolyQuestProcedurector_CRaceBuffByHolyQuestProcedure2_user(_this, CRaceBuffByHolyQuestProcedurector_CRaceBuffByHolyQuestProcedure2_next);
        };
        int CRaceBuffByHolyQuestProcedureCancelPlayerRaceBuff4_wrapper(struct CRaceBuffByHolyQuestProcedure* _this, struct CPlayer* pkPlayer, CRaceBuffInfoByHolyQuestfGroup::RESULT_TYPE eReleaseType, unsigned int uiReleaseLv)
        {
           return CRaceBuffByHolyQuestProcedureCancelPlayerRaceBuff4_user(_this, pkPlayer, eReleaseType, uiReleaseLv, CRaceBuffByHolyQuestProcedureCancelPlayerRaceBuff4_next);
        };
        bool CRaceBuffByHolyQuestProcedureCreateComplete6_wrapper(struct CRaceBuffByHolyQuestProcedure* _this, struct CPlayer* pkPlayer)
        {
           return CRaceBuffByHolyQuestProcedureCreateComplete6_user(_this, pkPlayer, CRaceBuffByHolyQuestProcedureCreateComplete6_next);
        };
        int CRaceBuffByHolyQuestProcedureGetRaceBuffLevel8_wrapper(struct CRaceBuffByHolyQuestProcedure* _this, struct CPlayer* pOne)
        {
           return CRaceBuffByHolyQuestProcedureGetRaceBuffLevel8_user(_this, pOne, CRaceBuffByHolyQuestProcedureGetRaceBuffLevel8_next);
        };
        bool CRaceBuffByHolyQuestProcedureInit10_wrapper(struct CRaceBuffByHolyQuestProcedure* _this)
        {
           return CRaceBuffByHolyQuestProcedureInit10_user(_this, CRaceBuffByHolyQuestProcedureInit10_next);
        };
        void CRaceBuffByHolyQuestProcedureLoop12_wrapper(struct CRaceBuffByHolyQuestProcedure* _this)
        {
           CRaceBuffByHolyQuestProcedureLoop12_user(_this, CRaceBuffByHolyQuestProcedureLoop12_next);
        };
        void CRaceBuffByHolyQuestProcedureLoopSubProcSetRaceBuff14_wrapper(struct CRaceBuffByHolyQuestProcedure* _this)
        {
           CRaceBuffByHolyQuestProcedureLoopSubProcSetRaceBuff14_user(_this, CRaceBuffByHolyQuestProcedureLoopSubProcSetRaceBuff14_next);
        };
        bool CRaceBuffByHolyQuestProcedureRequest16_wrapper(struct CRaceBuffByHolyQuestProcedure* _this, int iType)
        {
           return CRaceBuffByHolyQuestProcedureRequest16_user(_this, iType, CRaceBuffByHolyQuestProcedureRequest16_next);
        };
        bool CRaceBuffByHolyQuestProcedureRequestSubProcCancelRaceBuff18_wrapper(struct CRaceBuffByHolyQuestProcedure* _this)
        {
           return CRaceBuffByHolyQuestProcedureRequestSubProcCancelRaceBuff18_user(_this, CRaceBuffByHolyQuestProcedureRequestSubProcCancelRaceBuff18_next);
        };
        bool CRaceBuffByHolyQuestProcedureRequestSubProcSetRaceBattleResult20_wrapper(struct CRaceBuffByHolyQuestProcedure* _this)
        {
           return CRaceBuffByHolyQuestProcedureRequestSubProcSetRaceBattleResult20_user(_this, CRaceBuffByHolyQuestProcedureRequestSubProcSetRaceBattleResult20_next);
        };
        bool CRaceBuffByHolyQuestProcedureRequestSubProcSetRaceBuff22_wrapper(struct CRaceBuffByHolyQuestProcedure* _this)
        {
           return CRaceBuffByHolyQuestProcedureRequestSubProcSetRaceBuff22_user(_this, CRaceBuffByHolyQuestProcedureRequestSubProcSetRaceBuff22_next);
        };
        
        void CRaceBuffByHolyQuestProceduredtor_CRaceBuffByHolyQuestProcedure24_wrapper(struct CRaceBuffByHolyQuestProcedure* _this)
        {
           CRaceBuffByHolyQuestProceduredtor_CRaceBuffByHolyQuestProcedure24_user(_this, CRaceBuffByHolyQuestProceduredtor_CRaceBuffByHolyQuestProcedure24_next);
        };
        
        ::std::array<hook_record, 12> CRaceBuffByHolyQuestProcedure_functions = 
        {
            _hook_record {
                (LPVOID)0x1403b60f0L,
                (LPVOID *)&CRaceBuffByHolyQuestProcedurector_CRaceBuffByHolyQuestProcedure2_user,
                (LPVOID *)&CRaceBuffByHolyQuestProcedurector_CRaceBuffByHolyQuestProcedure2_next,
                (LPVOID)cast_pointer_function(CRaceBuffByHolyQuestProcedurector_CRaceBuffByHolyQuestProcedure2_wrapper),
                (LPVOID)cast_pointer_function((void(CRaceBuffByHolyQuestProcedure::*)())&CRaceBuffByHolyQuestProcedure::ctor_CRaceBuffByHolyQuestProcedure)
            },
            _hook_record {
                (LPVOID)0x1403b63d0L,
                (LPVOID *)&CRaceBuffByHolyQuestProcedureCancelPlayerRaceBuff4_user,
                (LPVOID *)&CRaceBuffByHolyQuestProcedureCancelPlayerRaceBuff4_next,
                (LPVOID)cast_pointer_function(CRaceBuffByHolyQuestProcedureCancelPlayerRaceBuff4_wrapper),
                (LPVOID)cast_pointer_function((int(CRaceBuffByHolyQuestProcedure::*)(struct CPlayer*, CRaceBuffInfoByHolyQuestfGroup::RESULT_TYPE, unsigned int))&CRaceBuffByHolyQuestProcedure::CancelPlayerRaceBuff)
            },
            _hook_record {
                (LPVOID)0x1403b6260L,
                (LPVOID *)&CRaceBuffByHolyQuestProcedureCreateComplete6_user,
                (LPVOID *)&CRaceBuffByHolyQuestProcedureCreateComplete6_next,
                (LPVOID)cast_pointer_function(CRaceBuffByHolyQuestProcedureCreateComplete6_wrapper),
                (LPVOID)cast_pointer_function((bool(CRaceBuffByHolyQuestProcedure::*)(struct CPlayer*))&CRaceBuffByHolyQuestProcedure::CreateComplete)
            },
            _hook_record {
                (LPVOID)0x1403b64f0L,
                (LPVOID *)&CRaceBuffByHolyQuestProcedureGetRaceBuffLevel8_user,
                (LPVOID *)&CRaceBuffByHolyQuestProcedureGetRaceBuffLevel8_next,
                (LPVOID)cast_pointer_function(CRaceBuffByHolyQuestProcedureGetRaceBuffLevel8_wrapper),
                (LPVOID)cast_pointer_function((int(CRaceBuffByHolyQuestProcedure::*)(struct CPlayer*))&CRaceBuffByHolyQuestProcedure::GetRaceBuffLevel)
            },
            _hook_record {
                (LPVOID)0x1403b61a0L,
                (LPVOID *)&CRaceBuffByHolyQuestProcedureInit10_user,
                (LPVOID *)&CRaceBuffByHolyQuestProcedureInit10_next,
                (LPVOID)cast_pointer_function(CRaceBuffByHolyQuestProcedureInit10_wrapper),
                (LPVOID)cast_pointer_function((bool(CRaceBuffByHolyQuestProcedure::*)())&CRaceBuffByHolyQuestProcedure::Init)
            },
            _hook_record {
                (LPVOID)0x1403b6210L,
                (LPVOID *)&CRaceBuffByHolyQuestProcedureLoop12_user,
                (LPVOID *)&CRaceBuffByHolyQuestProcedureLoop12_next,
                (LPVOID)cast_pointer_function(CRaceBuffByHolyQuestProcedureLoop12_wrapper),
                (LPVOID)cast_pointer_function((void(CRaceBuffByHolyQuestProcedure::*)())&CRaceBuffByHolyQuestProcedure::Loop)
            },
            _hook_record {
                (LPVOID)0x1403b6820L,
                (LPVOID *)&CRaceBuffByHolyQuestProcedureLoopSubProcSetRaceBuff14_user,
                (LPVOID *)&CRaceBuffByHolyQuestProcedureLoopSubProcSetRaceBuff14_next,
                (LPVOID)cast_pointer_function(CRaceBuffByHolyQuestProcedureLoopSubProcSetRaceBuff14_wrapper),
                (LPVOID)cast_pointer_function((void(CRaceBuffByHolyQuestProcedure::*)())&CRaceBuffByHolyQuestProcedure::LoopSubProcSetRaceBuff)
            },
            _hook_record {
                (LPVOID)0x1403b6340L,
                (LPVOID *)&CRaceBuffByHolyQuestProcedureRequest16_user,
                (LPVOID *)&CRaceBuffByHolyQuestProcedureRequest16_next,
                (LPVOID)cast_pointer_function(CRaceBuffByHolyQuestProcedureRequest16_wrapper),
                (LPVOID)cast_pointer_function((bool(CRaceBuffByHolyQuestProcedure::*)(int))&CRaceBuffByHolyQuestProcedure::Request)
            },
            _hook_record {
                (LPVOID)0x1403b6590L,
                (LPVOID *)&CRaceBuffByHolyQuestProcedureRequestSubProcCancelRaceBuff18_user,
                (LPVOID *)&CRaceBuffByHolyQuestProcedureRequestSubProcCancelRaceBuff18_next,
                (LPVOID)cast_pointer_function(CRaceBuffByHolyQuestProcedureRequestSubProcCancelRaceBuff18_wrapper),
                (LPVOID)cast_pointer_function((bool(CRaceBuffByHolyQuestProcedure::*)())&CRaceBuffByHolyQuestProcedure::RequestSubProcCancelRaceBuff)
            },
            _hook_record {
                (LPVOID)0x1403b66e0L,
                (LPVOID *)&CRaceBuffByHolyQuestProcedureRequestSubProcSetRaceBattleResult20_user,
                (LPVOID *)&CRaceBuffByHolyQuestProcedureRequestSubProcSetRaceBattleResult20_next,
                (LPVOID)cast_pointer_function(CRaceBuffByHolyQuestProcedureRequestSubProcSetRaceBattleResult20_wrapper),
                (LPVOID)cast_pointer_function((bool(CRaceBuffByHolyQuestProcedure::*)())&CRaceBuffByHolyQuestProcedure::RequestSubProcSetRaceBattleResult)
            },
            _hook_record {
                (LPVOID)0x1403b67a0L,
                (LPVOID *)&CRaceBuffByHolyQuestProcedureRequestSubProcSetRaceBuff22_user,
                (LPVOID *)&CRaceBuffByHolyQuestProcedureRequestSubProcSetRaceBuff22_next,
                (LPVOID)cast_pointer_function(CRaceBuffByHolyQuestProcedureRequestSubProcSetRaceBuff22_wrapper),
                (LPVOID)cast_pointer_function((bool(CRaceBuffByHolyQuestProcedure::*)())&CRaceBuffByHolyQuestProcedure::RequestSubProcSetRaceBuff)
            },
            _hook_record {
                (LPVOID)0x1403b7f30L,
                (LPVOID *)&CRaceBuffByHolyQuestProceduredtor_CRaceBuffByHolyQuestProcedure24_user,
                (LPVOID *)&CRaceBuffByHolyQuestProceduredtor_CRaceBuffByHolyQuestProcedure24_next,
                (LPVOID)cast_pointer_function(CRaceBuffByHolyQuestProceduredtor_CRaceBuffByHolyQuestProcedure24_wrapper),
                (LPVOID)cast_pointer_function((void(CRaceBuffByHolyQuestProcedure::*)())&CRaceBuffByHolyQuestProcedure::dtor_CRaceBuffByHolyQuestProcedure)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
