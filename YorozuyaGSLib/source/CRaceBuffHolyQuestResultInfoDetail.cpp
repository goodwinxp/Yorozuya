#include <CRaceBuffHolyQuestResultInfoDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CRaceBuffHolyQuestResultInfoctor_CRaceBuffHolyQuestResultInfo2_ptr CRaceBuffHolyQuestResultInfoctor_CRaceBuffHolyQuestResultInfo2_next(nullptr);
        Info::CRaceBuffHolyQuestResultInfoctor_CRaceBuffHolyQuestResultInfo2_clbk CRaceBuffHolyQuestResultInfoctor_CRaceBuffHolyQuestResultInfo2_user(nullptr);
        
        Info::CRaceBuffHolyQuestResultInfoClearResult4_ptr CRaceBuffHolyQuestResultInfoClearResult4_next(nullptr);
        Info::CRaceBuffHolyQuestResultInfoClearResult4_clbk CRaceBuffHolyQuestResultInfoClearResult4_user(nullptr);
        
        Info::CRaceBuffHolyQuestResultInfoFindFailRace6_ptr CRaceBuffHolyQuestResultInfoFindFailRace6_next(nullptr);
        Info::CRaceBuffHolyQuestResultInfoFindFailRace6_clbk CRaceBuffHolyQuestResultInfoFindFailRace6_user(nullptr);
        
        Info::CRaceBuffHolyQuestResultInfoGetContinueCnt8_ptr CRaceBuffHolyQuestResultInfoGetContinueCnt8_next(nullptr);
        Info::CRaceBuffHolyQuestResultInfoGetContinueCnt8_clbk CRaceBuffHolyQuestResultInfoGetContinueCnt8_user(nullptr);
        
        Info::CRaceBuffHolyQuestResultInfoGetResultType10_ptr CRaceBuffHolyQuestResultInfoGetResultType10_next(nullptr);
        Info::CRaceBuffHolyQuestResultInfoGetResultType10_clbk CRaceBuffHolyQuestResultInfoGetResultType10_user(nullptr);
        
        Info::CRaceBuffHolyQuestResultInfoIsChaos12_ptr CRaceBuffHolyQuestResultInfoIsChaos12_next(nullptr);
        Info::CRaceBuffHolyQuestResultInfoIsChaos12_clbk CRaceBuffHolyQuestResultInfoIsChaos12_user(nullptr);
        
        Info::CRaceBuffHolyQuestResultInfoIsValidResult14_ptr CRaceBuffHolyQuestResultInfoIsValidResult14_next(nullptr);
        Info::CRaceBuffHolyQuestResultInfoIsValidResult14_clbk CRaceBuffHolyQuestResultInfoIsValidResult14_user(nullptr);
        
        Info::CRaceBuffHolyQuestResultInfoLoad16_ptr CRaceBuffHolyQuestResultInfoLoad16_next(nullptr);
        Info::CRaceBuffHolyQuestResultInfoLoad16_clbk CRaceBuffHolyQuestResultInfoLoad16_user(nullptr);
        
        Info::CRaceBuffHolyQuestResultInfoLoadINI18_ptr CRaceBuffHolyQuestResultInfoLoadINI18_next(nullptr);
        Info::CRaceBuffHolyQuestResultInfoLoadINI18_clbk CRaceBuffHolyQuestResultInfoLoadINI18_user(nullptr);
        
        Info::CRaceBuffHolyQuestResultInfoSave20_ptr CRaceBuffHolyQuestResultInfoSave20_next(nullptr);
        Info::CRaceBuffHolyQuestResultInfoSave20_clbk CRaceBuffHolyQuestResultInfoSave20_user(nullptr);
        
        Info::CRaceBuffHolyQuestResultInfoSaveINI22_ptr CRaceBuffHolyQuestResultInfoSaveINI22_next(nullptr);
        Info::CRaceBuffHolyQuestResultInfoSaveINI22_clbk CRaceBuffHolyQuestResultInfoSaveINI22_user(nullptr);
        
        Info::CRaceBuffHolyQuestResultInfoSaveINISubProcSaveNum24_ptr CRaceBuffHolyQuestResultInfoSaveINISubProcSaveNum24_next(nullptr);
        Info::CRaceBuffHolyQuestResultInfoSaveINISubProcSaveNum24_clbk CRaceBuffHolyQuestResultInfoSaveINISubProcSaveNum24_user(nullptr);
        
        Info::CRaceBuffHolyQuestResultInfoSetBuffFlag26_ptr CRaceBuffHolyQuestResultInfoSetBuffFlag26_next(nullptr);
        Info::CRaceBuffHolyQuestResultInfoSetBuffFlag26_clbk CRaceBuffHolyQuestResultInfoSetBuffFlag26_user(nullptr);
        
        Info::CRaceBuffHolyQuestResultInfoSetResult28_ptr CRaceBuffHolyQuestResultInfoSetResult28_next(nullptr);
        Info::CRaceBuffHolyQuestResultInfoSetResult28_clbk CRaceBuffHolyQuestResultInfoSetResult28_user(nullptr);
        
        Info::CRaceBuffHolyQuestResultInfoSetResultSubProcSetRace30_ptr CRaceBuffHolyQuestResultInfoSetResultSubProcSetRace30_next(nullptr);
        Info::CRaceBuffHolyQuestResultInfoSetResultSubProcSetRace30_clbk CRaceBuffHolyQuestResultInfoSetResultSubProcSetRace30_user(nullptr);
        
        
        Info::CRaceBuffHolyQuestResultInfodtor_CRaceBuffHolyQuestResultInfo32_ptr CRaceBuffHolyQuestResultInfodtor_CRaceBuffHolyQuestResultInfo32_next(nullptr);
        Info::CRaceBuffHolyQuestResultInfodtor_CRaceBuffHolyQuestResultInfo32_clbk CRaceBuffHolyQuestResultInfodtor_CRaceBuffHolyQuestResultInfo32_user(nullptr);
        
        
        void CRaceBuffHolyQuestResultInfoctor_CRaceBuffHolyQuestResultInfo2_wrapper(struct CRaceBuffHolyQuestResultInfo* _this)
        {
           CRaceBuffHolyQuestResultInfoctor_CRaceBuffHolyQuestResultInfo2_user(_this, CRaceBuffHolyQuestResultInfoctor_CRaceBuffHolyQuestResultInfo2_next);
        };
        void CRaceBuffHolyQuestResultInfoClearResult4_wrapper(struct CRaceBuffHolyQuestResultInfo* _this)
        {
           CRaceBuffHolyQuestResultInfoClearResult4_user(_this, CRaceBuffHolyQuestResultInfoClearResult4_next);
        };
        bool CRaceBuffHolyQuestResultInfoFindFailRace6_wrapper(struct CRaceBuffHolyQuestResultInfo* _this, char byWinRace, char byLoseRace, char* pbyFailRace)
        {
           return CRaceBuffHolyQuestResultInfoFindFailRace6_user(_this, byWinRace, byLoseRace, pbyFailRace, CRaceBuffHolyQuestResultInfoFindFailRace6_next);
        };
        unsigned int CRaceBuffHolyQuestResultInfoGetContinueCnt8_wrapper(struct CRaceBuffHolyQuestResultInfo* _this, int iType)
        {
           return CRaceBuffHolyQuestResultInfoGetContinueCnt8_user(_this, iType, CRaceBuffHolyQuestResultInfoGetContinueCnt8_next);
        };
        int CRaceBuffHolyQuestResultInfoGetResultType10_wrapper(struct CRaceBuffHolyQuestResultInfo* _this, char byRace, bool bGetScanner)
        {
           return CRaceBuffHolyQuestResultInfoGetResultType10_user(_this, byRace, bGetScanner, CRaceBuffHolyQuestResultInfoGetResultType10_next);
        };
        bool CRaceBuffHolyQuestResultInfoIsChaos12_wrapper(struct CRaceBuffHolyQuestResultInfo* _this)
        {
           return CRaceBuffHolyQuestResultInfoIsChaos12_user(_this, CRaceBuffHolyQuestResultInfoIsChaos12_next);
        };
        bool CRaceBuffHolyQuestResultInfoIsValidResult14_wrapper(struct CRaceBuffHolyQuestResultInfo* _this)
        {
           return CRaceBuffHolyQuestResultInfoIsValidResult14_user(_this, CRaceBuffHolyQuestResultInfoIsValidResult14_next);
        };
        bool CRaceBuffHolyQuestResultInfoLoad16_wrapper(struct CRaceBuffHolyQuestResultInfo* _this)
        {
           return CRaceBuffHolyQuestResultInfoLoad16_user(_this, CRaceBuffHolyQuestResultInfoLoad16_next);
        };
        bool CRaceBuffHolyQuestResultInfoLoadINI18_wrapper(struct CRaceBuffHolyQuestResultInfo* _this)
        {
           return CRaceBuffHolyQuestResultInfoLoadINI18_user(_this, CRaceBuffHolyQuestResultInfoLoadINI18_next);
        };
        bool CRaceBuffHolyQuestResultInfoSave20_wrapper(struct CRaceBuffHolyQuestResultInfo* _this)
        {
           return CRaceBuffHolyQuestResultInfoSave20_user(_this, CRaceBuffHolyQuestResultInfoSave20_next);
        };
        bool CRaceBuffHolyQuestResultInfoSaveINI22_wrapper(struct CRaceBuffHolyQuestResultInfo* _this)
        {
           return CRaceBuffHolyQuestResultInfoSaveINI22_user(_this, CRaceBuffHolyQuestResultInfoSaveINI22_next);
        };
        bool CRaceBuffHolyQuestResultInfoSaveINISubProcSaveNum24_wrapper(struct CRaceBuffHolyQuestResultInfo* _this, char* szItem, char byNum)
        {
           return CRaceBuffHolyQuestResultInfoSaveINISubProcSaveNum24_user(_this, szItem, byNum, CRaceBuffHolyQuestResultInfoSaveINISubProcSaveNum24_next);
        };
        void CRaceBuffHolyQuestResultInfoSetBuffFlag26_wrapper(struct CRaceBuffHolyQuestResultInfo* _this)
        {
           CRaceBuffHolyQuestResultInfoSetBuffFlag26_user(_this, CRaceBuffHolyQuestResultInfoSetBuffFlag26_next);
        };
        void CRaceBuffHolyQuestResultInfoSetResult28_wrapper(struct CRaceBuffHolyQuestResultInfo* _this, char byWinRace, char byLoseRace, unsigned int uiThMax)
        {
           CRaceBuffHolyQuestResultInfoSetResult28_user(_this, byWinRace, byLoseRace, uiThMax, CRaceBuffHolyQuestResultInfoSetResult28_next);
        };
        bool CRaceBuffHolyQuestResultInfoSetResultSubProcSetRace30_wrapper(struct CRaceBuffHolyQuestResultInfo* _this, char byWinRace, char byLoseRace, unsigned int uiThMax)
        {
           return CRaceBuffHolyQuestResultInfoSetResultSubProcSetRace30_user(_this, byWinRace, byLoseRace, uiThMax, CRaceBuffHolyQuestResultInfoSetResultSubProcSetRace30_next);
        };
        
        void CRaceBuffHolyQuestResultInfodtor_CRaceBuffHolyQuestResultInfo32_wrapper(struct CRaceBuffHolyQuestResultInfo* _this)
        {
           CRaceBuffHolyQuestResultInfodtor_CRaceBuffHolyQuestResultInfo32_user(_this, CRaceBuffHolyQuestResultInfodtor_CRaceBuffHolyQuestResultInfo32_next);
        };
        
        ::std::array<hook_record, 16> CRaceBuffHolyQuestResultInfo_functions = 
        {
            _hook_record {
                (LPVOID)0x1403b53b0L,
                (LPVOID *)&CRaceBuffHolyQuestResultInfoctor_CRaceBuffHolyQuestResultInfo2_user,
                (LPVOID *)&CRaceBuffHolyQuestResultInfoctor_CRaceBuffHolyQuestResultInfo2_next,
                (LPVOID)cast_pointer_function(CRaceBuffHolyQuestResultInfoctor_CRaceBuffHolyQuestResultInfo2_wrapper),
                (LPVOID)cast_pointer_function((void(CRaceBuffHolyQuestResultInfo::*)())&CRaceBuffHolyQuestResultInfo::ctor_CRaceBuffHolyQuestResultInfo)
            },
            _hook_record {
                (LPVOID)0x1403b7c60L,
                (LPVOID *)&CRaceBuffHolyQuestResultInfoClearResult4_user,
                (LPVOID *)&CRaceBuffHolyQuestResultInfoClearResult4_next,
                (LPVOID)cast_pointer_function(CRaceBuffHolyQuestResultInfoClearResult4_wrapper),
                (LPVOID)cast_pointer_function((void(CRaceBuffHolyQuestResultInfo::*)())&CRaceBuffHolyQuestResultInfo::ClearResult)
            },
            _hook_record {
                (LPVOID)0x1403b5e50L,
                (LPVOID *)&CRaceBuffHolyQuestResultInfoFindFailRace6_user,
                (LPVOID *)&CRaceBuffHolyQuestResultInfoFindFailRace6_next,
                (LPVOID)cast_pointer_function(CRaceBuffHolyQuestResultInfoFindFailRace6_wrapper),
                (LPVOID)cast_pointer_function((bool(CRaceBuffHolyQuestResultInfo::*)(char, char, char*))&CRaceBuffHolyQuestResultInfo::FindFailRace)
            },
            _hook_record {
                (LPVOID)0x1403b5790L,
                (LPVOID *)&CRaceBuffHolyQuestResultInfoGetContinueCnt8_user,
                (LPVOID *)&CRaceBuffHolyQuestResultInfoGetContinueCnt8_next,
                (LPVOID)cast_pointer_function(CRaceBuffHolyQuestResultInfoGetContinueCnt8_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CRaceBuffHolyQuestResultInfo::*)(int))&CRaceBuffHolyQuestResultInfo::GetContinueCnt)
            },
            _hook_record {
                (LPVOID)0x1403b56e0L,
                (LPVOID *)&CRaceBuffHolyQuestResultInfoGetResultType10_user,
                (LPVOID *)&CRaceBuffHolyQuestResultInfoGetResultType10_next,
                (LPVOID)cast_pointer_function(CRaceBuffHolyQuestResultInfoGetResultType10_wrapper),
                (LPVOID)cast_pointer_function((int(CRaceBuffHolyQuestResultInfo::*)(char, bool))&CRaceBuffHolyQuestResultInfo::GetResultType)
            },
            _hook_record {
                (LPVOID)0x1403b7da0L,
                (LPVOID *)&CRaceBuffHolyQuestResultInfoIsChaos12_user,
                (LPVOID *)&CRaceBuffHolyQuestResultInfoIsChaos12_next,
                (LPVOID)cast_pointer_function(CRaceBuffHolyQuestResultInfoIsChaos12_wrapper),
                (LPVOID)cast_pointer_function((bool(CRaceBuffHolyQuestResultInfo::*)())&CRaceBuffHolyQuestResultInfo::IsChaos)
            },
            _hook_record {
                (LPVOID)0x1403b7b20L,
                (LPVOID *)&CRaceBuffHolyQuestResultInfoIsValidResult14_user,
                (LPVOID *)&CRaceBuffHolyQuestResultInfoIsValidResult14_next,
                (LPVOID)cast_pointer_function(CRaceBuffHolyQuestResultInfoIsValidResult14_wrapper),
                (LPVOID)cast_pointer_function((bool(CRaceBuffHolyQuestResultInfo::*)())&CRaceBuffHolyQuestResultInfo::IsValidResult)
            },
            _hook_record {
                (LPVOID)0x1403b5470L,
                (LPVOID *)&CRaceBuffHolyQuestResultInfoLoad16_user,
                (LPVOID *)&CRaceBuffHolyQuestResultInfoLoad16_next,
                (LPVOID)cast_pointer_function(CRaceBuffHolyQuestResultInfoLoad16_wrapper),
                (LPVOID)cast_pointer_function((bool(CRaceBuffHolyQuestResultInfo::*)())&CRaceBuffHolyQuestResultInfo::Load)
            },
            _hook_record {
                (LPVOID)0x1403b5a30L,
                (LPVOID *)&CRaceBuffHolyQuestResultInfoLoadINI18_user,
                (LPVOID *)&CRaceBuffHolyQuestResultInfoLoadINI18_next,
                (LPVOID)cast_pointer_function(CRaceBuffHolyQuestResultInfoLoadINI18_wrapper),
                (LPVOID)cast_pointer_function((bool(CRaceBuffHolyQuestResultInfo::*)())&CRaceBuffHolyQuestResultInfo::LoadINI)
            },
            _hook_record {
                (LPVOID)0x1403b5430L,
                (LPVOID *)&CRaceBuffHolyQuestResultInfoSave20_user,
                (LPVOID *)&CRaceBuffHolyQuestResultInfoSave20_next,
                (LPVOID)cast_pointer_function(CRaceBuffHolyQuestResultInfoSave20_wrapper),
                (LPVOID)cast_pointer_function((bool(CRaceBuffHolyQuestResultInfo::*)())&CRaceBuffHolyQuestResultInfo::Save)
            },
            _hook_record {
                (LPVOID)0x1403b57f0L,
                (LPVOID *)&CRaceBuffHolyQuestResultInfoSaveINI22_user,
                (LPVOID *)&CRaceBuffHolyQuestResultInfoSaveINI22_next,
                (LPVOID)cast_pointer_function(CRaceBuffHolyQuestResultInfoSaveINI22_wrapper),
                (LPVOID)cast_pointer_function((bool(CRaceBuffHolyQuestResultInfo::*)())&CRaceBuffHolyQuestResultInfo::SaveINI)
            },
            _hook_record {
                (LPVOID)0x1403b5cf0L,
                (LPVOID *)&CRaceBuffHolyQuestResultInfoSaveINISubProcSaveNum24_user,
                (LPVOID *)&CRaceBuffHolyQuestResultInfoSaveINISubProcSaveNum24_next,
                (LPVOID)cast_pointer_function(CRaceBuffHolyQuestResultInfoSaveINISubProcSaveNum24_wrapper),
                (LPVOID)cast_pointer_function((bool(CRaceBuffHolyQuestResultInfo::*)(char*, char))&CRaceBuffHolyQuestResultInfo::SaveINISubProcSaveNum)
            },
            _hook_record {
                (LPVOID)0x1403b5600L,
                (LPVOID *)&CRaceBuffHolyQuestResultInfoSetBuffFlag26_user,
                (LPVOID *)&CRaceBuffHolyQuestResultInfoSetBuffFlag26_next,
                (LPVOID)cast_pointer_function(CRaceBuffHolyQuestResultInfoSetBuffFlag26_wrapper),
                (LPVOID)cast_pointer_function((void(CRaceBuffHolyQuestResultInfo::*)())&CRaceBuffHolyQuestResultInfo::SetBuffFlag)
            },
            _hook_record {
                (LPVOID)0x1403b5570L,
                (LPVOID *)&CRaceBuffHolyQuestResultInfoSetResult28_user,
                (LPVOID *)&CRaceBuffHolyQuestResultInfoSetResult28_next,
                (LPVOID)cast_pointer_function(CRaceBuffHolyQuestResultInfoSetResult28_wrapper),
                (LPVOID)cast_pointer_function((void(CRaceBuffHolyQuestResultInfo::*)(char, char, unsigned int))&CRaceBuffHolyQuestResultInfo::SetResult)
            },
            _hook_record {
                (LPVOID)0x1403b5f50L,
                (LPVOID *)&CRaceBuffHolyQuestResultInfoSetResultSubProcSetRace30_user,
                (LPVOID *)&CRaceBuffHolyQuestResultInfoSetResultSubProcSetRace30_next,
                (LPVOID)cast_pointer_function(CRaceBuffHolyQuestResultInfoSetResultSubProcSetRace30_wrapper),
                (LPVOID)cast_pointer_function((bool(CRaceBuffHolyQuestResultInfo::*)(char, char, unsigned int))&CRaceBuffHolyQuestResultInfo::SetResultSubProcSetRace)
            },
            _hook_record {
                (LPVOID)0x1403b7c50L,
                (LPVOID *)&CRaceBuffHolyQuestResultInfodtor_CRaceBuffHolyQuestResultInfo32_user,
                (LPVOID *)&CRaceBuffHolyQuestResultInfodtor_CRaceBuffHolyQuestResultInfo32_next,
                (LPVOID)cast_pointer_function(CRaceBuffHolyQuestResultInfodtor_CRaceBuffHolyQuestResultInfo32_wrapper),
                (LPVOID)cast_pointer_function((void(CRaceBuffHolyQuestResultInfo::*)())&CRaceBuffHolyQuestResultInfo::dtor_CRaceBuffHolyQuestResultInfo)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
