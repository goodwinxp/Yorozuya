#include <CMgrAvatorQuestHistoryDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CMgrAvatorQuestHistoryctor_CMgrAvatorQuestHistory2_ptr CMgrAvatorQuestHistoryctor_CMgrAvatorQuestHistory2_next(nullptr);
        Info::CMgrAvatorQuestHistoryctor_CMgrAvatorQuestHistory2_clbk CMgrAvatorQuestHistoryctor_CMgrAvatorQuestHistory2_user(nullptr);
        
        Info::CMgrAvatorQuestHistoryGetNewFileName4_ptr CMgrAvatorQuestHistoryGetNewFileName4_next(nullptr);
        Info::CMgrAvatorQuestHistoryGetNewFileName4_clbk CMgrAvatorQuestHistoryGetNewFileName4_user(nullptr);
        
        Info::CMgrAvatorQuestHistoryGetTotalWaitSize6_ptr CMgrAvatorQuestHistoryGetTotalWaitSize6_next(nullptr);
        Info::CMgrAvatorQuestHistoryGetTotalWaitSize6_clbk CMgrAvatorQuestHistoryGetTotalWaitSize6_user(nullptr);
        
        Info::CMgrAvatorQuestHistoryIOThread8_ptr CMgrAvatorQuestHistoryIOThread8_next(nullptr);
        Info::CMgrAvatorQuestHistoryIOThread8_clbk CMgrAvatorQuestHistoryIOThread8_user(nullptr);
        
        Info::CMgrAvatorQuestHistoryOnLoop10_ptr CMgrAvatorQuestHistoryOnLoop10_next(nullptr);
        Info::CMgrAvatorQuestHistoryOnLoop10_clbk CMgrAvatorQuestHistoryOnLoop10_user(nullptr);
        
        Info::CMgrAvatorQuestHistoryWriteFile12_ptr CMgrAvatorQuestHistoryWriteFile12_next(nullptr);
        Info::CMgrAvatorQuestHistoryWriteFile12_clbk CMgrAvatorQuestHistoryWriteFile12_user(nullptr);
        
        Info::CMgrAvatorQuestHistorychar_copy14_ptr CMgrAvatorQuestHistorychar_copy14_next(nullptr);
        Info::CMgrAvatorQuestHistorychar_copy14_clbk CMgrAvatorQuestHistorychar_copy14_user(nullptr);
        
        Info::CMgrAvatorQuestHistorycomplete_quest16_ptr CMgrAvatorQuestHistorycomplete_quest16_next(nullptr);
        Info::CMgrAvatorQuestHistorycomplete_quest16_clbk CMgrAvatorQuestHistorycomplete_quest16_user(nullptr);
        
        Info::CMgrAvatorQuestHistoryfail_quest18_ptr CMgrAvatorQuestHistoryfail_quest18_next(nullptr);
        Info::CMgrAvatorQuestHistoryfail_quest18_clbk CMgrAvatorQuestHistoryfail_quest18_user(nullptr);
        
        Info::CMgrAvatorQuestHistoryinit_quest20_ptr CMgrAvatorQuestHistoryinit_quest20_next(nullptr);
        Info::CMgrAvatorQuestHistoryinit_quest20_clbk CMgrAvatorQuestHistoryinit_quest20_user(nullptr);
        
        Info::CMgrAvatorQuestHistoryinsert_quest22_ptr CMgrAvatorQuestHistoryinsert_quest22_next(nullptr);
        Info::CMgrAvatorQuestHistoryinsert_quest22_clbk CMgrAvatorQuestHistoryinsert_quest22_user(nullptr);
        
        
        Info::CMgrAvatorQuestHistorydtor_CMgrAvatorQuestHistory24_ptr CMgrAvatorQuestHistorydtor_CMgrAvatorQuestHistory24_next(nullptr);
        Info::CMgrAvatorQuestHistorydtor_CMgrAvatorQuestHistory24_clbk CMgrAvatorQuestHistorydtor_CMgrAvatorQuestHistory24_user(nullptr);
        
        
        void CMgrAvatorQuestHistoryctor_CMgrAvatorQuestHistory2_wrapper(struct CMgrAvatorQuestHistory* _this)
        {
           CMgrAvatorQuestHistoryctor_CMgrAvatorQuestHistory2_user(_this, CMgrAvatorQuestHistoryctor_CMgrAvatorQuestHistory2_next);
        };
        void CMgrAvatorQuestHistoryGetNewFileName4_wrapper(struct CMgrAvatorQuestHistory* _this, unsigned int dwAvatorSerial, char* pszFileName)
        {
           CMgrAvatorQuestHistoryGetNewFileName4_user(_this, dwAvatorSerial, pszFileName, CMgrAvatorQuestHistoryGetNewFileName4_next);
        };
        int CMgrAvatorQuestHistoryGetTotalWaitSize6_wrapper(struct CMgrAvatorQuestHistory* _this)
        {
           return CMgrAvatorQuestHistoryGetTotalWaitSize6_user(_this, CMgrAvatorQuestHistoryGetTotalWaitSize6_next);
        };
        void CMgrAvatorQuestHistoryIOThread8_wrapper(void* pv)
        {
           CMgrAvatorQuestHistoryIOThread8_user(pv, CMgrAvatorQuestHistoryIOThread8_next);
        };
        void CMgrAvatorQuestHistoryOnLoop10_wrapper(struct CMgrAvatorQuestHistory* _this)
        {
           CMgrAvatorQuestHistoryOnLoop10_user(_this, CMgrAvatorQuestHistoryOnLoop10_next);
        };
        void CMgrAvatorQuestHistoryWriteFile12_wrapper(struct CMgrAvatorQuestHistory* _this, char* pszFileName, char* pszLog)
        {
           CMgrAvatorQuestHistoryWriteFile12_user(_this, pszFileName, pszLog, CMgrAvatorQuestHistoryWriteFile12_next);
        };
        void CMgrAvatorQuestHistorychar_copy14_wrapper(struct CMgrAvatorQuestHistory* _this, char* pszDstName, unsigned int dwDstSerial, char* pszFileName)
        {
           CMgrAvatorQuestHistorychar_copy14_user(_this, pszDstName, dwDstSerial, pszFileName, CMgrAvatorQuestHistorychar_copy14_next);
        };
        void CMgrAvatorQuestHistorycomplete_quest16_wrapper(struct CMgrAvatorQuestHistory* _this, int nSlot, char* pszQuestCode, char* pszFileName)
        {
           CMgrAvatorQuestHistorycomplete_quest16_user(_this, nSlot, pszQuestCode, pszFileName, CMgrAvatorQuestHistorycomplete_quest16_next);
        };
        void CMgrAvatorQuestHistoryfail_quest18_wrapper(struct CMgrAvatorQuestHistory* _this, int nSlot, char* pszQuestCode, char* pszFailCode, char* pszFileName)
        {
           CMgrAvatorQuestHistoryfail_quest18_user(_this, nSlot, pszQuestCode, pszFailCode, pszFileName, CMgrAvatorQuestHistoryfail_quest18_next);
        };
        void CMgrAvatorQuestHistoryinit_quest20_wrapper(struct CMgrAvatorQuestHistory* _this, char* pszAvatorName, struct _QUEST_DB_BASE* pQuestDB, char* pszFileName)
        {
           CMgrAvatorQuestHistoryinit_quest20_user(_this, pszAvatorName, pQuestDB, pszFileName, CMgrAvatorQuestHistoryinit_quest20_next);
        };
        void CMgrAvatorQuestHistoryinsert_quest22_wrapper(struct CMgrAvatorQuestHistory* _this, int nSlot, char* pszQuestCode, char* pszFileName)
        {
           CMgrAvatorQuestHistoryinsert_quest22_user(_this, nSlot, pszQuestCode, pszFileName, CMgrAvatorQuestHistoryinsert_quest22_next);
        };
        
        void CMgrAvatorQuestHistorydtor_CMgrAvatorQuestHistory24_wrapper(struct CMgrAvatorQuestHistory* _this)
        {
           CMgrAvatorQuestHistorydtor_CMgrAvatorQuestHistory24_user(_this, CMgrAvatorQuestHistorydtor_CMgrAvatorQuestHistory24_next);
        };
        
        ::std::array<hook_record, 12> CMgrAvatorQuestHistory_functions = 
        {
            _hook_record {
                (LPVOID)0x140247280L,
                (LPVOID *)&CMgrAvatorQuestHistoryctor_CMgrAvatorQuestHistory2_user,
                (LPVOID *)&CMgrAvatorQuestHistoryctor_CMgrAvatorQuestHistory2_next,
                (LPVOID)cast_pointer_function(CMgrAvatorQuestHistoryctor_CMgrAvatorQuestHistory2_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAvatorQuestHistory::*)())&CMgrAvatorQuestHistory::ctor_CMgrAvatorQuestHistory)
            },
            _hook_record {
                (LPVOID)0x1402476c0L,
                (LPVOID *)&CMgrAvatorQuestHistoryGetNewFileName4_user,
                (LPVOID *)&CMgrAvatorQuestHistoryGetNewFileName4_next,
                (LPVOID)cast_pointer_function(CMgrAvatorQuestHistoryGetNewFileName4_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAvatorQuestHistory::*)(unsigned int, char*))&CMgrAvatorQuestHistory::GetNewFileName)
            },
            _hook_record {
                (LPVOID)0x140248090L,
                (LPVOID *)&CMgrAvatorQuestHistoryGetTotalWaitSize6_user,
                (LPVOID *)&CMgrAvatorQuestHistoryGetTotalWaitSize6_next,
                (LPVOID)cast_pointer_function(CMgrAvatorQuestHistoryGetTotalWaitSize6_wrapper),
                (LPVOID)cast_pointer_function((int(CMgrAvatorQuestHistory::*)())&CMgrAvatorQuestHistory::GetTotalWaitSize)
            },
            _hook_record {
                (LPVOID)0x140247ea0L,
                (LPVOID *)&CMgrAvatorQuestHistoryIOThread8_user,
                (LPVOID *)&CMgrAvatorQuestHistoryIOThread8_next,
                (LPVOID)cast_pointer_function(CMgrAvatorQuestHistoryIOThread8_wrapper),
                (LPVOID)cast_pointer_function((void(*)(void*))&CMgrAvatorQuestHistory::IOThread)
            },
            _hook_record {
                (LPVOID)0x140247960L,
                (LPVOID *)&CMgrAvatorQuestHistoryOnLoop10_user,
                (LPVOID *)&CMgrAvatorQuestHistoryOnLoop10_next,
                (LPVOID)cast_pointer_function(CMgrAvatorQuestHistoryOnLoop10_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAvatorQuestHistory::*)())&CMgrAvatorQuestHistory::OnLoop)
            },
            _hook_record {
                (LPVOID)0x140247d90L,
                (LPVOID *)&CMgrAvatorQuestHistoryWriteFile12_user,
                (LPVOID *)&CMgrAvatorQuestHistoryWriteFile12_next,
                (LPVOID)cast_pointer_function(CMgrAvatorQuestHistoryWriteFile12_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAvatorQuestHistory::*)(char*, char*))&CMgrAvatorQuestHistory::WriteFile)
            },
            _hook_record {
                (LPVOID)0x140247d10L,
                (LPVOID *)&CMgrAvatorQuestHistorychar_copy14_user,
                (LPVOID *)&CMgrAvatorQuestHistorychar_copy14_next,
                (LPVOID)cast_pointer_function(CMgrAvatorQuestHistorychar_copy14_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAvatorQuestHistory::*)(char*, unsigned int, char*))&CMgrAvatorQuestHistory::char_copy)
            },
            _hook_record {
                (LPVOID)0x140247bf0L,
                (LPVOID *)&CMgrAvatorQuestHistorycomplete_quest16_user,
                (LPVOID *)&CMgrAvatorQuestHistorycomplete_quest16_next,
                (LPVOID)cast_pointer_function(CMgrAvatorQuestHistorycomplete_quest16_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAvatorQuestHistory::*)(int, char*, char*))&CMgrAvatorQuestHistory::complete_quest)
            },
            _hook_record {
                (LPVOID)0x140247c80L,
                (LPVOID *)&CMgrAvatorQuestHistoryfail_quest18_user,
                (LPVOID *)&CMgrAvatorQuestHistoryfail_quest18_next,
                (LPVOID)cast_pointer_function(CMgrAvatorQuestHistoryfail_quest18_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAvatorQuestHistory::*)(int, char*, char*, char*))&CMgrAvatorQuestHistory::fail_quest)
            },
            _hook_record {
                (LPVOID)0x1402479d0L,
                (LPVOID *)&CMgrAvatorQuestHistoryinit_quest20_user,
                (LPVOID *)&CMgrAvatorQuestHistoryinit_quest20_next,
                (LPVOID)cast_pointer_function(CMgrAvatorQuestHistoryinit_quest20_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAvatorQuestHistory::*)(char*, struct _QUEST_DB_BASE*, char*))&CMgrAvatorQuestHistory::init_quest)
            },
            _hook_record {
                (LPVOID)0x140247b60L,
                (LPVOID *)&CMgrAvatorQuestHistoryinsert_quest22_user,
                (LPVOID *)&CMgrAvatorQuestHistoryinsert_quest22_next,
                (LPVOID)cast_pointer_function(CMgrAvatorQuestHistoryinsert_quest22_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAvatorQuestHistory::*)(int, char*, char*))&CMgrAvatorQuestHistory::insert_quest)
            },
            _hook_record {
                (LPVOID)0x1402475a0L,
                (LPVOID *)&CMgrAvatorQuestHistorydtor_CMgrAvatorQuestHistory24_user,
                (LPVOID *)&CMgrAvatorQuestHistorydtor_CMgrAvatorQuestHistory24_next,
                (LPVOID)cast_pointer_function(CMgrAvatorQuestHistorydtor_CMgrAvatorQuestHistory24_wrapper),
                (LPVOID)cast_pointer_function((void(CMgrAvatorQuestHistory::*)())&CMgrAvatorQuestHistory::dtor_CMgrAvatorQuestHistory)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
