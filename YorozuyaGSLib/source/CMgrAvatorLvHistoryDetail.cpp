#include <CMgrAvatorLvHistoryDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CMgrAvatorLvHistoryctor_CMgrAvatorLvHistory2_ptr CMgrAvatorLvHistoryctor_CMgrAvatorLvHistory2_next(nullptr);
        Info::CMgrAvatorLvHistoryctor_CMgrAvatorLvHistory2_clbk CMgrAvatorLvHistoryctor_CMgrAvatorLvHistory2_user(nullptr);
        
        Info::CMgrAvatorLvHistoryGetNewFileName4_ptr CMgrAvatorLvHistoryGetNewFileName4_next(nullptr);
        Info::CMgrAvatorLvHistoryGetNewFileName4_clbk CMgrAvatorLvHistoryGetNewFileName4_user(nullptr);
        
        Info::CMgrAvatorLvHistoryGetTotalWaitSize6_ptr CMgrAvatorLvHistoryGetTotalWaitSize6_next(nullptr);
        Info::CMgrAvatorLvHistoryGetTotalWaitSize6_clbk CMgrAvatorLvHistoryGetTotalWaitSize6_user(nullptr);
        
        Info::CMgrAvatorLvHistoryIOThread8_ptr CMgrAvatorLvHistoryIOThread8_next(nullptr);
        Info::CMgrAvatorLvHistoryIOThread8_clbk CMgrAvatorLvHistoryIOThread8_user(nullptr);
        
        Info::CMgrAvatorLvHistoryOnLoop10_ptr CMgrAvatorLvHistoryOnLoop10_next(nullptr);
        Info::CMgrAvatorLvHistoryOnLoop10_clbk CMgrAvatorLvHistoryOnLoop10_user(nullptr);
        
        Info::CMgrAvatorLvHistoryWriteFile12_ptr CMgrAvatorLvHistoryWriteFile12_next(nullptr);
        Info::CMgrAvatorLvHistoryWriteFile12_clbk CMgrAvatorLvHistoryWriteFile12_user(nullptr);
        
        Info::CMgrAvatorLvHistoryadjust_pvpcash14_ptr CMgrAvatorLvHistoryadjust_pvpcash14_next(nullptr);
        Info::CMgrAvatorLvHistoryadjust_pvpcash14_clbk CMgrAvatorLvHistoryadjust_pvpcash14_user(nullptr);
        
        Info::CMgrAvatorLvHistoryalter_pvp16_ptr CMgrAvatorLvHistoryalter_pvp16_next(nullptr);
        Info::CMgrAvatorLvHistoryalter_pvp16_clbk CMgrAvatorLvHistoryalter_pvp16_user(nullptr);
        
        Info::CMgrAvatorLvHistorychar_copy18_ptr CMgrAvatorLvHistorychar_copy18_next(nullptr);
        Info::CMgrAvatorLvHistorychar_copy18_clbk CMgrAvatorLvHistorychar_copy18_user(nullptr);
        
        Info::CMgrAvatorLvHistoryclose20_ptr CMgrAvatorLvHistoryclose20_next(nullptr);
        Info::CMgrAvatorLvHistoryclose20_clbk CMgrAvatorLvHistoryclose20_user(nullptr);
        
        Info::CMgrAvatorLvHistorydie22_ptr CMgrAvatorLvHistorydie22_next(nullptr);
        Info::CMgrAvatorLvHistorydie22_clbk CMgrAvatorLvHistorydie22_user(nullptr);
        
        Info::CMgrAvatorLvHistorydown_animus_exp24_ptr CMgrAvatorLvHistorydown_animus_exp24_next(nullptr);
        Info::CMgrAvatorLvHistorydown_animus_exp24_clbk CMgrAvatorLvHistorydown_animus_exp24_user(nullptr);
        
        Info::CMgrAvatorLvHistorydown_exp26_ptr CMgrAvatorLvHistorydown_exp26_next(nullptr);
        Info::CMgrAvatorLvHistorydown_exp26_clbk CMgrAvatorLvHistorydown_exp26_user(nullptr);
        
        Info::CMgrAvatorLvHistorydowngrade_lv28_ptr CMgrAvatorLvHistorydowngrade_lv28_next(nullptr);
        Info::CMgrAvatorLvHistorydowngrade_lv28_clbk CMgrAvatorLvHistorydowngrade_lv28_user(nullptr);
        
        Info::CMgrAvatorLvHistoryrecovery_exp30_ptr CMgrAvatorLvHistoryrecovery_exp30_next(nullptr);
        Info::CMgrAvatorLvHistoryrecovery_exp30_clbk CMgrAvatorLvHistoryrecovery_exp30_user(nullptr);
        
        Info::CMgrAvatorLvHistorystart_mastery32_ptr CMgrAvatorLvHistorystart_mastery32_next(nullptr);
        Info::CMgrAvatorLvHistorystart_mastery32_clbk CMgrAvatorLvHistorystart_mastery32_user(nullptr);
        
        Info::CMgrAvatorLvHistoryupdate_mastery34_ptr CMgrAvatorLvHistoryupdate_mastery34_next(nullptr);
        Info::CMgrAvatorLvHistoryupdate_mastery34_clbk CMgrAvatorLvHistoryupdate_mastery34_user(nullptr);
        
        Info::CMgrAvatorLvHistoryupgrade_lv36_ptr CMgrAvatorLvHistoryupgrade_lv36_next(nullptr);
        Info::CMgrAvatorLvHistoryupgrade_lv36_clbk CMgrAvatorLvHistoryupgrade_lv36_user(nullptr);
        
        
        Info::CMgrAvatorLvHistorydtor_CMgrAvatorLvHistory38_ptr CMgrAvatorLvHistorydtor_CMgrAvatorLvHistory38_next(nullptr);
        Info::CMgrAvatorLvHistorydtor_CMgrAvatorLvHistory38_clbk CMgrAvatorLvHistorydtor_CMgrAvatorLvHistory38_user(nullptr);
        
        
        void CMgrAvatorLvHistoryctor_CMgrAvatorLvHistory2_wrapper(struct CMgrAvatorLvHistory* _this)
        {
           CMgrAvatorLvHistoryctor_CMgrAvatorLvHistory2_user(_this, CMgrAvatorLvHistoryctor_CMgrAvatorLvHistory2_next);
        };
        void CMgrAvatorLvHistoryGetNewFileName4_wrapper(struct CMgrAvatorLvHistory* _this, unsigned int dwAvatorSerial, char* pszFileName)
        {
           CMgrAvatorLvHistoryGetNewFileName4_user(_this, dwAvatorSerial, pszFileName, CMgrAvatorLvHistoryGetNewFileName4_next);
        };
        int CMgrAvatorLvHistoryGetTotalWaitSize6_wrapper(struct CMgrAvatorLvHistory* _this)
        {
           return CMgrAvatorLvHistoryGetTotalWaitSize6_user(_this, CMgrAvatorLvHistoryGetTotalWaitSize6_next);
        };
        void CMgrAvatorLvHistoryIOThread8_wrapper(void* pv)
        {
           CMgrAvatorLvHistoryIOThread8_user(pv, CMgrAvatorLvHistoryIOThread8_next);
        };
        void CMgrAvatorLvHistoryOnLoop10_wrapper(struct CMgrAvatorLvHistory* _this)
        {
           CMgrAvatorLvHistoryOnLoop10_user(_this, CMgrAvatorLvHistoryOnLoop10_next);
        };
        void CMgrAvatorLvHistoryWriteFile12_wrapper(struct CMgrAvatorLvHistory* _this, char* pszFileName, char* pszLog)
        {
           CMgrAvatorLvHistoryWriteFile12_user(_this, pszFileName, pszLog, CMgrAvatorLvHistoryWriteFile12_next);
        };
        void CMgrAvatorLvHistoryadjust_pvpcash14_wrapper(struct CMgrAvatorLvHistory* _this, bool bAdjust, long double dPvpCash, long double dPvpTempCash, char* pszFileName)
        {
           CMgrAvatorLvHistoryadjust_pvpcash14_user(_this, bAdjust, dPvpCash, dPvpTempCash, pszFileName, CMgrAvatorLvHistoryadjust_pvpcash14_next);
        };
        void CMgrAvatorLvHistoryalter_pvp16_wrapper(struct CMgrAvatorLvHistory* _this, int n, long double dPvpVariation, struct CPartyPlayer* pParty, char* pszFileName)
        {
           CMgrAvatorLvHistoryalter_pvp16_user(_this, n, dPvpVariation, pParty, pszFileName, CMgrAvatorLvHistoryalter_pvp16_next);
        };
        void CMgrAvatorLvHistorychar_copy18_wrapper(struct CMgrAvatorLvHistory* _this, int n, char* pszDstName, unsigned int dwDstSerial, char* pszFileName)
        {
           CMgrAvatorLvHistorychar_copy18_user(_this, n, pszDstName, dwDstSerial, pszFileName, CMgrAvatorLvHistorychar_copy18_next);
        };
        void CMgrAvatorLvHistoryclose20_wrapper(struct CMgrAvatorLvHistory* _this, int n, char* pCloseCode, char* pszFileName)
        {
           CMgrAvatorLvHistoryclose20_user(_this, n, pCloseCode, pszFileName, CMgrAvatorLvHistoryclose20_next);
        };
        void CMgrAvatorLvHistorydie22_wrapper(struct CMgrAvatorLvHistory* _this, int n, char* pszDstName, char* pszDeathName, char* pszFileName)
        {
           CMgrAvatorLvHistorydie22_user(_this, n, pszDstName, pszDeathName, pszFileName, CMgrAvatorLvHistorydie22_next);
        };
        void CMgrAvatorLvHistorydown_animus_exp24_wrapper(struct CMgrAvatorLvHistory* _this, uint64_t dw64OldExp, uint64_t dw64NewExp, int64_t i64Alter, char* pszFileName)
        {
           CMgrAvatorLvHistorydown_animus_exp24_user(_this, dw64OldExp, dw64NewExp, i64Alter, pszFileName, CMgrAvatorLvHistorydown_animus_exp24_next);
        };
        void CMgrAvatorLvHistorydown_exp26_wrapper(struct CMgrAvatorLvHistory* _this, int n, long double dOldExp, uint16_t wOldExpRate, long double dNewExp, uint16_t wNewExpRate, char* pCause, char* pszFileName)
        {
           CMgrAvatorLvHistorydown_exp26_user(_this, n, dOldExp, wOldExpRate, dNewExp, wNewExpRate, pCause, pszFileName, CMgrAvatorLvHistorydown_exp26_next);
        };
        void CMgrAvatorLvHistorydowngrade_lv28_wrapper(struct CMgrAvatorLvHistory* _this, int n, unsigned int dwLv, int nGrade, int* pnMaxPoint, char* pszFileName)
        {
           CMgrAvatorLvHistorydowngrade_lv28_user(_this, n, dwLv, nGrade, pnMaxPoint, pszFileName, CMgrAvatorLvHistorydowngrade_lv28_next);
        };
        void CMgrAvatorLvHistoryrecovery_exp30_wrapper(struct CMgrAvatorLvHistory* _this, int n, long double dOldExp, uint16_t wOldExpRate, long double dNewExp, uint16_t wNewExpRate, long double dLossExp, int nProbPro, char* pCause, char* pszFileName)
        {
           CMgrAvatorLvHistoryrecovery_exp30_user(_this, n, dOldExp, wOldExpRate, dNewExp, wNewExpRate, dLossExp, nProbPro, pCause, pszFileName, CMgrAvatorLvHistoryrecovery_exp30_next);
        };
        void CMgrAvatorLvHistorystart_mastery32_wrapper(struct CMgrAvatorLvHistory* _this, int n, char* pszAvatorName, unsigned int dwLv, long double dExp, unsigned int dwExpRate, int nGrade, int* pnMaxPoint, struct _MASTERY_PARAM* pData, char* pszFileName)
        {
           CMgrAvatorLvHistorystart_mastery32_user(_this, n, pszAvatorName, dwLv, dExp, dwExpRate, nGrade, pnMaxPoint, pData, pszFileName, CMgrAvatorLvHistorystart_mastery32_next);
        };
        void CMgrAvatorLvHistoryupdate_mastery34_wrapper(struct CMgrAvatorLvHistory* _this, int n, char byUserDgr, unsigned int dwLv, long double dExp, unsigned int dwExpRate, int nGrade, int* pnMaxPoint, struct _MASTERY_PARAM* pData, unsigned int* pdwAlter, char* pszFileName, char byLogType, char* pszTitle)
        {
           CMgrAvatorLvHistoryupdate_mastery34_user(_this, n, byUserDgr, dwLv, dExp, dwExpRate, nGrade, pnMaxPoint, pData, pdwAlter, pszFileName, byLogType, pszTitle, CMgrAvatorLvHistoryupdate_mastery34_next);
        };
        void CMgrAvatorLvHistoryupgrade_lv36_wrapper(struct CMgrAvatorLvHistory* _this, int n, unsigned int dwLv, int nGrade, int* pnMaxPoint, char* pszFileName)
        {
           CMgrAvatorLvHistoryupgrade_lv36_user(_this, n, dwLv, nGrade, pnMaxPoint, pszFileName, CMgrAvatorLvHistoryupgrade_lv36_next);
        };
        
        void CMgrAvatorLvHistorydtor_CMgrAvatorLvHistory38_wrapper(struct CMgrAvatorLvHistory* _this)
        {
           CMgrAvatorLvHistorydtor_CMgrAvatorLvHistory38_user(_this, CMgrAvatorLvHistorydtor_CMgrAvatorLvHistory38_next);
        };
        
        ::std::array<hook_record, 19> CMgrAvatorLvHistory_functions = 
        {
            _hook_record {
                (LPVOID)0x140243d60L,
                (LPVOID *)&CMgrAvatorLvHistoryctor_CMgrAvatorLvHistory2_user,
                (LPVOID *)&CMgrAvatorLvHistoryctor_CMgrAvatorLvHistory2_next,
                (LPVOID)cast_pointer_function(CMgrAvatorLvHistoryctor_CMgrAvatorLvHistory2_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAvatorLvHistory::*)())&CMgrAvatorLvHistory::ctor_CMgrAvatorLvHistory)
            },
            _hook_record {
                (LPVOID)0x140244500L,
                (LPVOID *)&CMgrAvatorLvHistoryGetNewFileName4_user,
                (LPVOID *)&CMgrAvatorLvHistoryGetNewFileName4_next,
                (LPVOID)cast_pointer_function(CMgrAvatorLvHistoryGetNewFileName4_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAvatorLvHistory::*)(unsigned int, char*))&CMgrAvatorLvHistory::GetNewFileName)
            },
            _hook_record {
                (LPVOID)0x140246760L,
                (LPVOID *)&CMgrAvatorLvHistoryGetTotalWaitSize6_user,
                (LPVOID *)&CMgrAvatorLvHistoryGetTotalWaitSize6_next,
                (LPVOID)cast_pointer_function(CMgrAvatorLvHistoryGetTotalWaitSize6_wrapper),
                (LPVOID)cast_pointer_function((int(CMgrAvatorLvHistory::*)())&CMgrAvatorLvHistory::GetTotalWaitSize)
            },
            _hook_record {
                (LPVOID)0x140246480L,
                (LPVOID *)&CMgrAvatorLvHistoryIOThread8_user,
                (LPVOID *)&CMgrAvatorLvHistoryIOThread8_next,
                (LPVOID)cast_pointer_function(CMgrAvatorLvHistoryIOThread8_wrapper),
                (LPVOID)cast_pointer_function((void(*)(void*))&CMgrAvatorLvHistory::IOThread)
            },
            _hook_record {
                (LPVOID)0x1402447a0L,
                (LPVOID *)&CMgrAvatorLvHistoryOnLoop10_user,
                (LPVOID *)&CMgrAvatorLvHistoryOnLoop10_next,
                (LPVOID)cast_pointer_function(CMgrAvatorLvHistoryOnLoop10_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAvatorLvHistory::*)())&CMgrAvatorLvHistory::OnLoop)
            },
            _hook_record {
                (LPVOID)0x140246210L,
                (LPVOID *)&CMgrAvatorLvHistoryWriteFile12_user,
                (LPVOID *)&CMgrAvatorLvHistoryWriteFile12_next,
                (LPVOID)cast_pointer_function(CMgrAvatorLvHistoryWriteFile12_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAvatorLvHistory::*)(char*, char*))&CMgrAvatorLvHistory::WriteFile)
            },
            _hook_record {
                (LPVOID)0x140246150L,
                (LPVOID *)&CMgrAvatorLvHistoryadjust_pvpcash14_user,
                (LPVOID *)&CMgrAvatorLvHistoryadjust_pvpcash14_next,
                (LPVOID)cast_pointer_function(CMgrAvatorLvHistoryadjust_pvpcash14_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAvatorLvHistory::*)(bool, long double, long double, char*))&CMgrAvatorLvHistory::adjust_pvpcash)
            },
            _hook_record {
                (LPVOID)0x140245e00L,
                (LPVOID *)&CMgrAvatorLvHistoryalter_pvp16_user,
                (LPVOID *)&CMgrAvatorLvHistoryalter_pvp16_next,
                (LPVOID)cast_pointer_function(CMgrAvatorLvHistoryalter_pvp16_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAvatorLvHistory::*)(int, long double, struct CPartyPlayer*, char*))&CMgrAvatorLvHistory::alter_pvp)
            },
            _hook_record {
                (LPVOID)0x140246030L,
                (LPVOID *)&CMgrAvatorLvHistorychar_copy18_user,
                (LPVOID *)&CMgrAvatorLvHistorychar_copy18_next,
                (LPVOID)cast_pointer_function(CMgrAvatorLvHistorychar_copy18_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAvatorLvHistory::*)(int, char*, unsigned int, char*))&CMgrAvatorLvHistory::char_copy)
            },
            _hook_record {
                (LPVOID)0x140244d30L,
                (LPVOID *)&CMgrAvatorLvHistoryclose20_user,
                (LPVOID *)&CMgrAvatorLvHistoryclose20_next,
                (LPVOID)cast_pointer_function(CMgrAvatorLvHistoryclose20_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAvatorLvHistory::*)(int, char*, char*))&CMgrAvatorLvHistory::close)
            },
            _hook_record {
                (LPVOID)0x140245d60L,
                (LPVOID *)&CMgrAvatorLvHistorydie22_user,
                (LPVOID *)&CMgrAvatorLvHistorydie22_next,
                (LPVOID)cast_pointer_function(CMgrAvatorLvHistorydie22_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAvatorLvHistory::*)(int, char*, char*, char*))&CMgrAvatorLvHistory::die)
            },
            _hook_record {
                (LPVOID)0x1402460b0L,
                (LPVOID *)&CMgrAvatorLvHistorydown_animus_exp24_user,
                (LPVOID *)&CMgrAvatorLvHistorydown_animus_exp24_next,
                (LPVOID)cast_pointer_function(CMgrAvatorLvHistorydown_animus_exp24_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAvatorLvHistory::*)(uint64_t, uint64_t, int64_t, char*))&CMgrAvatorLvHistory::down_animus_exp)
            },
            _hook_record {
                (LPVOID)0x140245ba0L,
                (LPVOID *)&CMgrAvatorLvHistorydown_exp26_user,
                (LPVOID *)&CMgrAvatorLvHistorydown_exp26_next,
                (LPVOID)cast_pointer_function(CMgrAvatorLvHistorydown_exp26_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAvatorLvHistory::*)(int, long double, uint16_t, long double, uint16_t, char*, char*))&CMgrAvatorLvHistory::down_exp)
            },
            _hook_record {
                (LPVOID)0x140245ad0L,
                (LPVOID *)&CMgrAvatorLvHistorydowngrade_lv28_user,
                (LPVOID *)&CMgrAvatorLvHistorydowngrade_lv28_next,
                (LPVOID)cast_pointer_function(CMgrAvatorLvHistorydowngrade_lv28_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAvatorLvHistory::*)(int, unsigned int, int, int*, char*))&CMgrAvatorLvHistory::downgrade_lv)
            },
            _hook_record {
                (LPVOID)0x140245c70L,
                (LPVOID *)&CMgrAvatorLvHistoryrecovery_exp30_user,
                (LPVOID *)&CMgrAvatorLvHistoryrecovery_exp30_next,
                (LPVOID)cast_pointer_function(CMgrAvatorLvHistoryrecovery_exp30_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAvatorLvHistory::*)(int, long double, uint16_t, long double, uint16_t, long double, int, char*, char*))&CMgrAvatorLvHistory::recovery_exp)
            },
            _hook_record {
                (LPVOID)0x140244830L,
                (LPVOID *)&CMgrAvatorLvHistorystart_mastery32_user,
                (LPVOID *)&CMgrAvatorLvHistorystart_mastery32_next,
                (LPVOID)cast_pointer_function(CMgrAvatorLvHistorystart_mastery32_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAvatorLvHistory::*)(int, char*, unsigned int, long double, unsigned int, int, int*, struct _MASTERY_PARAM*, char*))&CMgrAvatorLvHistory::start_mastery)
            },
            _hook_record {
                (LPVOID)0x140244dc0L,
                (LPVOID *)&CMgrAvatorLvHistoryupdate_mastery34_user,
                (LPVOID *)&CMgrAvatorLvHistoryupdate_mastery34_next,
                (LPVOID)cast_pointer_function(CMgrAvatorLvHistoryupdate_mastery34_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAvatorLvHistory::*)(int, char, unsigned int, long double, unsigned int, int, int*, struct _MASTERY_PARAM*, unsigned int*, char*, char, char*))&CMgrAvatorLvHistory::update_mastery)
            },
            _hook_record {
                (LPVOID)0x140245a00L,
                (LPVOID *)&CMgrAvatorLvHistoryupgrade_lv36_user,
                (LPVOID *)&CMgrAvatorLvHistoryupgrade_lv36_next,
                (LPVOID)cast_pointer_function(CMgrAvatorLvHistoryupgrade_lv36_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAvatorLvHistory::*)(int, unsigned int, int, int*, char*))&CMgrAvatorLvHistory::upgrade_lv)
            },
            _hook_record {
                (LPVOID)0x1402442d0L,
                (LPVOID *)&CMgrAvatorLvHistorydtor_CMgrAvatorLvHistory38_user,
                (LPVOID *)&CMgrAvatorLvHistorydtor_CMgrAvatorLvHistory38_next,
                (LPVOID)cast_pointer_function(CMgrAvatorLvHistorydtor_CMgrAvatorLvHistory38_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAvatorLvHistory::*)())&CMgrAvatorLvHistory::dtor_CMgrAvatorLvHistory)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
