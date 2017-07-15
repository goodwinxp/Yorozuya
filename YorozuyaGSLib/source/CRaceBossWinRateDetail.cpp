#include <CRaceBossWinRateDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CRaceBossWinRatector_CRaceBossWinRate2_ptr CRaceBossWinRatector_CRaceBossWinRate2_next(nullptr);
        Info::CRaceBossWinRatector_CRaceBossWinRate2_clbk CRaceBossWinRatector_CRaceBossWinRate2_user(nullptr);
        
        Info::CRaceBossWinRateCompleteBossAccmulationWinRate4_ptr CRaceBossWinRateCompleteBossAccmulationWinRate4_next(nullptr);
        Info::CRaceBossWinRateCompleteBossAccmulationWinRate4_clbk CRaceBossWinRateCompleteBossAccmulationWinRate4_user(nullptr);
        
        Info::CRaceBossWinRateDestroy6_ptr CRaceBossWinRateDestroy6_next(nullptr);
        Info::CRaceBossWinRateDestroy6_clbk CRaceBossWinRateDestroy6_user(nullptr);
        
        Info::CRaceBossWinRateInstance8_ptr CRaceBossWinRateInstance8_next(nullptr);
        Info::CRaceBossWinRateInstance8_clbk CRaceBossWinRateInstance8_user(nullptr);
        
        Info::CRaceBossWinRateLoadBossAccmulationWinRate10_ptr CRaceBossWinRateLoadBossAccmulationWinRate10_next(nullptr);
        Info::CRaceBossWinRateLoadBossAccmulationWinRate10_clbk CRaceBossWinRateLoadBossAccmulationWinRate10_user(nullptr);
        
        Info::CRaceBossWinRateLoadBossCurrentWinRate12_ptr CRaceBossWinRateLoadBossCurrentWinRate12_next(nullptr);
        Info::CRaceBossWinRateLoadBossCurrentWinRate12_clbk CRaceBossWinRateLoadBossCurrentWinRate12_user(nullptr);
        
        Info::CRaceBossWinRateLoadDB14_ptr CRaceBossWinRateLoadDB14_next(nullptr);
        Info::CRaceBossWinRateLoadDB14_clbk CRaceBossWinRateLoadDB14_user(nullptr);
        
        Info::CRaceBossWinRateLoadINI16_ptr CRaceBossWinRateLoadINI16_next(nullptr);
        Info::CRaceBossWinRateLoadINI16_clbk CRaceBossWinRateLoadINI16_user(nullptr);
        
        Info::CRaceBossWinRateNotify18_ptr CRaceBossWinRateNotify18_next(nullptr);
        Info::CRaceBossWinRateNotify18_clbk CRaceBossWinRateNotify18_user(nullptr);
        
        Info::CRaceBossWinRateNotify20_ptr CRaceBossWinRateNotify20_next(nullptr);
        Info::CRaceBossWinRateNotify20_clbk CRaceBossWinRateNotify20_user(nullptr);
        
        Info::CRaceBossWinRateNotify22_ptr CRaceBossWinRateNotify22_next(nullptr);
        Info::CRaceBossWinRateNotify22_clbk CRaceBossWinRateNotify22_user(nullptr);
        
        Info::CRaceBossWinRateSaveINI24_ptr CRaceBossWinRateSaveINI24_next(nullptr);
        Info::CRaceBossWinRateSaveINI24_clbk CRaceBossWinRateSaveINI24_user(nullptr);
        
        Info::CRaceBossWinRateUpdateRaceBossWinRate26_ptr CRaceBossWinRateUpdateRaceBossWinRate26_next(nullptr);
        Info::CRaceBossWinRateUpdateRaceBossWinRate26_clbk CRaceBossWinRateUpdateRaceBossWinRate26_user(nullptr);
        
        Info::CRaceBossWinRateUpdateRaceBossWinRate28_ptr CRaceBossWinRateUpdateRaceBossWinRate28_next(nullptr);
        Info::CRaceBossWinRateUpdateRaceBossWinRate28_clbk CRaceBossWinRateUpdateRaceBossWinRate28_user(nullptr);
        
        Info::CRaceBossWinRateUpdateTotalCnt30_ptr CRaceBossWinRateUpdateTotalCnt30_next(nullptr);
        Info::CRaceBossWinRateUpdateTotalCnt30_clbk CRaceBossWinRateUpdateTotalCnt30_user(nullptr);
        
        Info::CRaceBossWinRateUpdateWinCnt32_ptr CRaceBossWinRateUpdateWinCnt32_next(nullptr);
        Info::CRaceBossWinRateUpdateWinCnt32_clbk CRaceBossWinRateUpdateWinCnt32_user(nullptr);
        
        
        Info::CRaceBossWinRatedtor_CRaceBossWinRate36_ptr CRaceBossWinRatedtor_CRaceBossWinRate36_next(nullptr);
        Info::CRaceBossWinRatedtor_CRaceBossWinRate36_clbk CRaceBossWinRatedtor_CRaceBossWinRate36_user(nullptr);
        
        
        void CRaceBossWinRatector_CRaceBossWinRate2_wrapper(struct CRaceBossWinRate* _this)
        {
           CRaceBossWinRatector_CRaceBossWinRate2_user(_this, CRaceBossWinRatector_CRaceBossWinRate2_next);
        };
        void CRaceBossWinRateCompleteBossAccmulationWinRate4_wrapper(struct CRaceBossWinRate* _this, struct _qry_case_raceboss_accumulation_winrate* pData)
        {
           CRaceBossWinRateCompleteBossAccmulationWinRate4_user(_this, pData, CRaceBossWinRateCompleteBossAccmulationWinRate4_next);
        };
        void CRaceBossWinRateDestroy6_wrapper(struct CRaceBossWinRate* _this)
        {
           CRaceBossWinRateDestroy6_user(_this, CRaceBossWinRateDestroy6_next);
        };
        struct CRaceBossWinRate* CRaceBossWinRateInstance8_wrapper()
        {
           return CRaceBossWinRateInstance8_user(CRaceBossWinRateInstance8_next);
        };
        char CRaceBossWinRateLoadBossAccmulationWinRate10_wrapper(struct CRaceBossWinRate* _this, struct _qry_case_raceboss_accumulation_winrate* pData)
        {
           return CRaceBossWinRateLoadBossAccmulationWinRate10_user(_this, pData, CRaceBossWinRateLoadBossAccmulationWinRate10_next);
        };
        bool CRaceBossWinRateLoadBossCurrentWinRate12_wrapper(struct CRaceBossWinRate* _this)
        {
           return CRaceBossWinRateLoadBossCurrentWinRate12_user(_this, CRaceBossWinRateLoadBossCurrentWinRate12_next);
        };
        bool CRaceBossWinRateLoadDB14_wrapper(struct CRaceBossWinRate* _this)
        {
           return CRaceBossWinRateLoadDB14_user(_this, CRaceBossWinRateLoadDB14_next);
        };
        bool CRaceBossWinRateLoadINI16_wrapper(struct CRaceBossWinRate* _this)
        {
           return CRaceBossWinRateLoadINI16_user(_this, CRaceBossWinRateLoadINI16_next);
        };
        void CRaceBossWinRateNotify18_wrapper(struct CRaceBossWinRate* _this, char byRace)
        {
           CRaceBossWinRateNotify18_user(_this, byRace, CRaceBossWinRateNotify18_next);
        };
        void CRaceBossWinRateNotify20_wrapper(struct CRaceBossWinRate* _this, char byRace, uint16_t wIndex)
        {
           CRaceBossWinRateNotify20_user(_this, byRace, wIndex, CRaceBossWinRateNotify20_next);
        };
        void CRaceBossWinRateNotify22_wrapper(struct CRaceBossWinRate* _this)
        {
           CRaceBossWinRateNotify22_user(_this, CRaceBossWinRateNotify22_next);
        };
        bool CRaceBossWinRateSaveINI24_wrapper(struct CRaceBossWinRate* _this)
        {
           return CRaceBossWinRateSaveINI24_user(_this, CRaceBossWinRateSaveINI24_next);
        };
        void CRaceBossWinRateUpdateRaceBossWinRate26_wrapper(struct CRaceBossWinRate* _this, char byRace)
        {
           CRaceBossWinRateUpdateRaceBossWinRate26_user(_this, byRace, CRaceBossWinRateUpdateRaceBossWinRate26_next);
        };
        void CRaceBossWinRateUpdateRaceBossWinRate28_wrapper(struct CRaceBossWinRate* _this)
        {
           CRaceBossWinRateUpdateRaceBossWinRate28_user(_this, CRaceBossWinRateUpdateRaceBossWinRate28_next);
        };
        void CRaceBossWinRateUpdateTotalCnt30_wrapper(struct CRaceBossWinRate* _this)
        {
           CRaceBossWinRateUpdateTotalCnt30_user(_this, CRaceBossWinRateUpdateTotalCnt30_next);
        };
        void CRaceBossWinRateUpdateWinCnt32_wrapper(struct CRaceBossWinRate* _this, char byRace)
        {
           CRaceBossWinRateUpdateWinCnt32_user(_this, byRace, CRaceBossWinRateUpdateWinCnt32_next);
        };
        
        void CRaceBossWinRatedtor_CRaceBossWinRate36_wrapper(struct CRaceBossWinRate* _this)
        {
           CRaceBossWinRatedtor_CRaceBossWinRate36_user(_this, CRaceBossWinRatedtor_CRaceBossWinRate36_next);
        };
        
        ::std::array<hook_record, 17> CRaceBossWinRate_functions = 
        {
            _hook_record {
                (LPVOID)0x14024d390L,
                (LPVOID *)&CRaceBossWinRatector_CRaceBossWinRate2_user,
                (LPVOID *)&CRaceBossWinRatector_CRaceBossWinRate2_next,
                (LPVOID)cast_pointer_function(CRaceBossWinRatector_CRaceBossWinRate2_wrapper),
                (LPVOID)cast_pointer_function((void(CRaceBossWinRate::*)())&CRaceBossWinRate::ctor_CRaceBossWinRate)
            },
            _hook_record {
                (LPVOID)0x14024cf50L,
                (LPVOID *)&CRaceBossWinRateCompleteBossAccmulationWinRate4_user,
                (LPVOID *)&CRaceBossWinRateCompleteBossAccmulationWinRate4_next,
                (LPVOID)cast_pointer_function(CRaceBossWinRateCompleteBossAccmulationWinRate4_wrapper),
                (LPVOID)cast_pointer_function((void(CRaceBossWinRate::*)(struct _qry_case_raceboss_accumulation_winrate*))&CRaceBossWinRate::CompleteBossAccmulationWinRate)
            },
            _hook_record {
                (LPVOID)0x14024c230L,
                (LPVOID *)&CRaceBossWinRateDestroy6_user,
                (LPVOID *)&CRaceBossWinRateDestroy6_next,
                (LPVOID)cast_pointer_function(CRaceBossWinRateDestroy6_wrapper),
                (LPVOID)cast_pointer_function((void(CRaceBossWinRate::*)())&CRaceBossWinRate::Destroy)
            },
            _hook_record {
                (LPVOID)0x14024c170L,
                (LPVOID *)&CRaceBossWinRateInstance8_user,
                (LPVOID *)&CRaceBossWinRateInstance8_next,
                (LPVOID)cast_pointer_function(CRaceBossWinRateInstance8_wrapper),
                (LPVOID)cast_pointer_function((struct CRaceBossWinRate*(*)())&CRaceBossWinRate::Instance)
            },
            _hook_record {
                (LPVOID)0x14024cdb0L,
                (LPVOID *)&CRaceBossWinRateLoadBossAccmulationWinRate10_user,
                (LPVOID *)&CRaceBossWinRateLoadBossAccmulationWinRate10_next,
                (LPVOID)cast_pointer_function(CRaceBossWinRateLoadBossAccmulationWinRate10_wrapper),
                (LPVOID)cast_pointer_function((char(CRaceBossWinRate::*)(struct _qry_case_raceboss_accumulation_winrate*))&CRaceBossWinRate::LoadBossAccmulationWinRate)
            },
            _hook_record {
                (LPVOID)0x14024cbd0L,
                (LPVOID *)&CRaceBossWinRateLoadBossCurrentWinRate12_user,
                (LPVOID *)&CRaceBossWinRateLoadBossCurrentWinRate12_next,
                (LPVOID)cast_pointer_function(CRaceBossWinRateLoadBossCurrentWinRate12_wrapper),
                (LPVOID)cast_pointer_function((bool(CRaceBossWinRate::*)())&CRaceBossWinRate::LoadBossCurrentWinRate)
            },
            _hook_record {
                (LPVOID)0x14024cb70L,
                (LPVOID *)&CRaceBossWinRateLoadDB14_user,
                (LPVOID *)&CRaceBossWinRateLoadDB14_next,
                (LPVOID)cast_pointer_function(CRaceBossWinRateLoadDB14_wrapper),
                (LPVOID)cast_pointer_function((bool(CRaceBossWinRate::*)())&CRaceBossWinRate::LoadDB)
            },
            _hook_record {
                (LPVOID)0x14024caa0L,
                (LPVOID *)&CRaceBossWinRateLoadINI16_user,
                (LPVOID *)&CRaceBossWinRateLoadINI16_next,
                (LPVOID)cast_pointer_function(CRaceBossWinRateLoadINI16_wrapper),
                (LPVOID)cast_pointer_function((bool(CRaceBossWinRate::*)())&CRaceBossWinRate::LoadINI)
            },
            _hook_record {
                (LPVOID)0x14024c570L,
                (LPVOID *)&CRaceBossWinRateNotify18_user,
                (LPVOID *)&CRaceBossWinRateNotify18_next,
                (LPVOID)cast_pointer_function(CRaceBossWinRateNotify18_wrapper),
                (LPVOID)cast_pointer_function((void(CRaceBossWinRate::*)(char))&CRaceBossWinRate::Notify)
            },
            _hook_record {
                (LPVOID)0x14024c700L,
                (LPVOID *)&CRaceBossWinRateNotify20_user,
                (LPVOID *)&CRaceBossWinRateNotify20_next,
                (LPVOID)cast_pointer_function(CRaceBossWinRateNotify20_wrapper),
                (LPVOID)cast_pointer_function((void(CRaceBossWinRate::*)(char, uint16_t))&CRaceBossWinRate::Notify)
            },
            _hook_record {
                (LPVOID)0x14024c420L,
                (LPVOID *)&CRaceBossWinRateNotify22_user,
                (LPVOID *)&CRaceBossWinRateNotify22_next,
                (LPVOID)cast_pointer_function(CRaceBossWinRateNotify22_wrapper),
                (LPVOID)cast_pointer_function((void(CRaceBossWinRate::*)())&CRaceBossWinRate::Notify)
            },
            _hook_record {
                (LPVOID)0x14024c810L,
                (LPVOID *)&CRaceBossWinRateSaveINI24_user,
                (LPVOID *)&CRaceBossWinRateSaveINI24_next,
                (LPVOID)cast_pointer_function(CRaceBossWinRateSaveINI24_wrapper),
                (LPVOID)cast_pointer_function((bool(CRaceBossWinRate::*)())&CRaceBossWinRate::SaveINI)
            },
            _hook_record {
                (LPVOID)0x14024c2c0L,
                (LPVOID *)&CRaceBossWinRateUpdateRaceBossWinRate26_user,
                (LPVOID *)&CRaceBossWinRateUpdateRaceBossWinRate26_next,
                (LPVOID)cast_pointer_function(CRaceBossWinRateUpdateRaceBossWinRate26_wrapper),
                (LPVOID)cast_pointer_function((void(CRaceBossWinRate::*)(char))&CRaceBossWinRate::UpdateRaceBossWinRate)
            },
            _hook_record {
                (LPVOID)0x14024c2f0L,
                (LPVOID *)&CRaceBossWinRateUpdateRaceBossWinRate28_user,
                (LPVOID *)&CRaceBossWinRateUpdateRaceBossWinRate28_next,
                (LPVOID)cast_pointer_function(CRaceBossWinRateUpdateRaceBossWinRate28_wrapper),
                (LPVOID)cast_pointer_function((void(CRaceBossWinRate::*)())&CRaceBossWinRate::UpdateRaceBossWinRate)
            },
            _hook_record {
                (LPVOID)0x14024c360L,
                (LPVOID *)&CRaceBossWinRateUpdateTotalCnt30_user,
                (LPVOID *)&CRaceBossWinRateUpdateTotalCnt30_next,
                (LPVOID)cast_pointer_function(CRaceBossWinRateUpdateTotalCnt30_wrapper),
                (LPVOID)cast_pointer_function((void(CRaceBossWinRate::*)())&CRaceBossWinRate::UpdateTotalCnt)
            },
            _hook_record {
                (LPVOID)0x14024c3b0L,
                (LPVOID *)&CRaceBossWinRateUpdateWinCnt32_user,
                (LPVOID *)&CRaceBossWinRateUpdateWinCnt32_next,
                (LPVOID)cast_pointer_function(CRaceBossWinRateUpdateWinCnt32_wrapper),
                (LPVOID)cast_pointer_function((void(CRaceBossWinRate::*)(char))&CRaceBossWinRate::UpdateWinCnt)
            },
            _hook_record {
                (LPVOID)0x14024d4b0L,
                (LPVOID *)&CRaceBossWinRatedtor_CRaceBossWinRate36_user,
                (LPVOID *)&CRaceBossWinRatedtor_CRaceBossWinRate36_next,
                (LPVOID)cast_pointer_function(CRaceBossWinRatedtor_CRaceBossWinRate36_wrapper),
                (LPVOID)cast_pointer_function((void(CRaceBossWinRate::*)())&CRaceBossWinRate::dtor_CRaceBossWinRate)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
