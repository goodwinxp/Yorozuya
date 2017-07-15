#include <CashDbWorkerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CashDbWorkerctor_CashDbWorker2_ptr CashDbWorkerctor_CashDbWorker2_next(nullptr);
        Info::CashDbWorkerctor_CashDbWorker2_clbk CashDbWorkerctor_CashDbWorker2_user(nullptr);
        
        Info::CashDbWorkerCompleteWork4_ptr CashDbWorkerCompleteWork4_next(nullptr);
        Info::CashDbWorkerCompleteWork4_clbk CashDbWorkerCompleteWork4_user(nullptr);
        
        Info::CashDbWorkerConvertErrorCode6_ptr CashDbWorkerConvertErrorCode6_next(nullptr);
        Info::CashDbWorkerConvertErrorCode6_clbk CashDbWorkerConvertErrorCode6_user(nullptr);
        
        Info::CashDbWorkerDoWork8_ptr CashDbWorkerDoWork8_next(nullptr);
        Info::CashDbWorkerDoWork8_clbk CashDbWorkerDoWork8_user(nullptr);
        
        Info::CashDbWorkerGetBillingDBConnectionStatus10_ptr CashDbWorkerGetBillingDBConnectionStatus10_next(nullptr);
        Info::CashDbWorkerGetBillingDBConnectionStatus10_clbk CashDbWorkerGetBillingDBConnectionStatus10_user(nullptr);
        
        Info::CashDbWorkerGetUseCashQueryStr12_ptr CashDbWorkerGetUseCashQueryStr12_next(nullptr);
        Info::CashDbWorkerGetUseCashQueryStr12_clbk CashDbWorkerGetUseCashQueryStr12_user(nullptr);
        
        Info::CashDbWorkerInitialize14_ptr CashDbWorkerInitialize14_next(nullptr);
        Info::CashDbWorkerInitialize14_clbk CashDbWorkerInitialize14_user(nullptr);
        
        Info::CashDbWorkerIsNULL16_ptr CashDbWorkerIsNULL16_next(nullptr);
        Info::CashDbWorkerIsNULL16_clbk CashDbWorkerIsNULL16_user(nullptr);
        
        Info::CashDbWorkerPushTask18_ptr CashDbWorkerPushTask18_next(nullptr);
        Info::CashDbWorkerPushTask18_clbk CashDbWorkerPushTask18_user(nullptr);
        
        Info::CashDbWorkerRelease20_ptr CashDbWorkerRelease20_next(nullptr);
        Info::CashDbWorkerRelease20_clbk CashDbWorkerRelease20_user(nullptr);
        
        Info::CashDbWorkerSendMsgSucceedBuy22_ptr CashDbWorkerSendMsgSucceedBuy22_next(nullptr);
        Info::CashDbWorkerSendMsgSucceedBuy22_clbk CashDbWorkerSendMsgSucceedBuy22_user(nullptr);
        
        Info::CashDbWorker_all_rollback24_ptr CashDbWorker_all_rollback24_next(nullptr);
        Info::CashDbWorker_all_rollback24_clbk CashDbWorker_all_rollback24_user(nullptr);
        
        Info::CashDbWorker_complete_tsk_cash_rollback26_ptr CashDbWorker_complete_tsk_cash_rollback26_next(nullptr);
        Info::CashDbWorker_complete_tsk_cash_rollback26_clbk CashDbWorker_complete_tsk_cash_rollback26_user(nullptr);
        
        Info::CashDbWorker_complete_tsk_cash_select28_ptr CashDbWorker_complete_tsk_cash_select28_next(nullptr);
        Info::CashDbWorker_complete_tsk_cash_select28_clbk CashDbWorker_complete_tsk_cash_select28_user(nullptr);
        
        Info::CashDbWorker_complete_tsk_cash_total_selling_select30_ptr CashDbWorker_complete_tsk_cash_total_selling_select30_next(nullptr);
        Info::CashDbWorker_complete_tsk_cash_total_selling_select30_clbk CashDbWorker_complete_tsk_cash_total_selling_select30_user(nullptr);
        
        Info::CashDbWorker_complete_tsk_cash_update32_ptr CashDbWorker_complete_tsk_cash_update32_next(nullptr);
        Info::CashDbWorker_complete_tsk_cash_update32_clbk CashDbWorker_complete_tsk_cash_update32_user(nullptr);
        
        Info::CashDbWorker_complete_tsk_cashitem_buy_dblog34_ptr CashDbWorker_complete_tsk_cashitem_buy_dblog34_next(nullptr);
        Info::CashDbWorker_complete_tsk_cashitem_buy_dblog34_clbk CashDbWorker_complete_tsk_cashitem_buy_dblog34_user(nullptr);
        
        Info::CashDbWorker_delete_from_inven36_ptr CashDbWorker_delete_from_inven36_next(nullptr);
        Info::CashDbWorker_delete_from_inven36_clbk CashDbWorker_delete_from_inven36_user(nullptr);
        
        Info::CashDbWorker_get_player38_ptr CashDbWorker_get_player38_next(nullptr);
        Info::CashDbWorker_get_player38_clbk CashDbWorker_get_player38_user(nullptr);
        
        Info::CashDbWorker_init_database40_ptr CashDbWorker_init_database40_next(nullptr);
        Info::CashDbWorker_init_database40_clbk CashDbWorker_init_database40_user(nullptr);
        
        Info::CashDbWorker_init_loggers42_ptr CashDbWorker_init_loggers42_next(nullptr);
        Info::CashDbWorker_init_loggers42_clbk CashDbWorker_init_loggers42_user(nullptr);
        
        Info::CashDbWorker_insert_to_inven44_ptr CashDbWorker_insert_to_inven44_next(nullptr);
        Info::CashDbWorker_insert_to_inven44_clbk CashDbWorker_insert_to_inven44_user(nullptr);
        
        Info::CashDbWorker_wait_tsk_cash_buy_dblog46_ptr CashDbWorker_wait_tsk_cash_buy_dblog46_next(nullptr);
        Info::CashDbWorker_wait_tsk_cash_buy_dblog46_clbk CashDbWorker_wait_tsk_cash_buy_dblog46_user(nullptr);
        
        Info::CashDbWorker_wait_tsk_cash_rollback48_ptr CashDbWorker_wait_tsk_cash_rollback48_next(nullptr);
        Info::CashDbWorker_wait_tsk_cash_rollback48_clbk CashDbWorker_wait_tsk_cash_rollback48_user(nullptr);
        
        Info::CashDbWorker_wait_tsk_cash_select50_ptr CashDbWorker_wait_tsk_cash_select50_next(nullptr);
        Info::CashDbWorker_wait_tsk_cash_select50_clbk CashDbWorker_wait_tsk_cash_select50_user(nullptr);
        
        Info::CashDbWorker_wait_tsk_cash_update52_ptr CashDbWorker_wait_tsk_cash_update52_next(nullptr);
        Info::CashDbWorker_wait_tsk_cash_update52_clbk CashDbWorker_wait_tsk_cash_update52_user(nullptr);
        
        Info::CashDbWorker_wait_tst_cash_total_selling_select54_ptr CashDbWorker_wait_tst_cash_total_selling_select54_next(nullptr);
        Info::CashDbWorker_wait_tst_cash_total_selling_select54_clbk CashDbWorker_wait_tst_cash_total_selling_select54_user(nullptr);
        
        
        Info::CashDbWorkerdtor_CashDbWorker59_ptr CashDbWorkerdtor_CashDbWorker59_next(nullptr);
        Info::CashDbWorkerdtor_CashDbWorker59_clbk CashDbWorkerdtor_CashDbWorker59_user(nullptr);
        
        
        void CashDbWorkerctor_CashDbWorker2_wrapper(struct CashDbWorker* _this)
        {
           CashDbWorkerctor_CashDbWorker2_user(_this, CashDbWorkerctor_CashDbWorker2_next);
        };
        void CashDbWorkerCompleteWork4_wrapper(struct CashDbWorker* _this)
        {
           CashDbWorkerCompleteWork4_user(_this, CashDbWorkerCompleteWork4_next);
        };
        int CashDbWorkerConvertErrorCode6_wrapper(struct CashDbWorker* _this, char state)
        {
           return CashDbWorkerConvertErrorCode6_user(_this, state, CashDbWorkerConvertErrorCode6_next);
        };
        void CashDbWorkerDoWork8_wrapper(struct CashDbWorker* _this)
        {
           CashDbWorkerDoWork8_user(_this, CashDbWorkerDoWork8_next);
        };
        bool CashDbWorkerGetBillingDBConnectionStatus10_wrapper(struct CashDbWorker* _this)
        {
           return CashDbWorkerGetBillingDBConnectionStatus10_user(_this, CashDbWorkerGetBillingDBConnectionStatus10_next);
        };
        void CashDbWorkerGetUseCashQueryStr12_wrapper(struct CashDbWorker* _this, struct _param_cash_update* rParam, int nIdx, char* wszQuery, uint64_t tBufferSize)
        {
           CashDbWorkerGetUseCashQueryStr12_user(_this, rParam, nIdx, wszQuery, tBufferSize, CashDbWorkerGetUseCashQueryStr12_next);
        };
        bool CashDbWorkerInitialize14_wrapper(struct CashDbWorker* _this)
        {
           return CashDbWorkerInitialize14_user(_this, CashDbWorkerInitialize14_next);
        };
        bool CashDbWorkerIsNULL16_wrapper(struct CashDbWorker* _this)
        {
           return CashDbWorkerIsNULL16_user(_this, CashDbWorkerIsNULL16_next);
        };
        bool CashDbWorkerPushTask18_wrapper(struct CashDbWorker* _this, int nTaskCode, char* p, uint64_t size)
        {
           return CashDbWorkerPushTask18_user(_this, nTaskCode, p, size, CashDbWorkerPushTask18_next);
        };
        void CashDbWorkerRelease20_wrapper(struct CashDbWorker* _this)
        {
           CashDbWorkerRelease20_user(_this, CashDbWorkerRelease20_next);
        };
        void CashDbWorkerSendMsgSucceedBuy22_wrapper(struct CashDbWorker* _this, uint16_t wSock, struct _param_cash_update* sheet)
        {
           CashDbWorkerSendMsgSucceedBuy22_user(_this, wSock, sheet, CashDbWorkerSendMsgSucceedBuy22_next);
        };
        void CashDbWorker_all_rollback24_wrapper(struct CashDbWorker* _this, struct _param_cash_update* psheet)
        {
           CashDbWorker_all_rollback24_user(_this, psheet, CashDbWorker_all_rollback24_next);
        };
        void CashDbWorker_complete_tsk_cash_rollback26_wrapper(struct CashDbWorker* _this, struct Task* pkTsk)
        {
           CashDbWorker_complete_tsk_cash_rollback26_user(_this, pkTsk, CashDbWorker_complete_tsk_cash_rollback26_next);
        };
        void CashDbWorker_complete_tsk_cash_select28_wrapper(struct CashDbWorker* _this, struct Task* pkTsk)
        {
           CashDbWorker_complete_tsk_cash_select28_user(_this, pkTsk, CashDbWorker_complete_tsk_cash_select28_next);
        };
        void CashDbWorker_complete_tsk_cash_total_selling_select30_wrapper(struct CashDbWorker* _this, struct Task* pkTsk)
        {
           CashDbWorker_complete_tsk_cash_total_selling_select30_user(_this, pkTsk, CashDbWorker_complete_tsk_cash_total_selling_select30_next);
        };
        void CashDbWorker_complete_tsk_cash_update32_wrapper(struct CashDbWorker* _this, struct Task* pkTsk)
        {
           CashDbWorker_complete_tsk_cash_update32_user(_this, pkTsk, CashDbWorker_complete_tsk_cash_update32_next);
        };
        void CashDbWorker_complete_tsk_cashitem_buy_dblog34_wrapper(struct CashDbWorker* _this, struct Task* pkTsk)
        {
           CashDbWorker_complete_tsk_cashitem_buy_dblog34_user(_this, pkTsk, CashDbWorker_complete_tsk_cashitem_buy_dblog34_next);
        };
        void CashDbWorker_delete_from_inven36_wrapper(struct CashDbWorker* _this, struct CPlayer* pOne, struct _param_cash_update* psheet, int nNum)
        {
           CashDbWorker_delete_from_inven36_user(_this, pOne, psheet, nNum, CashDbWorker_delete_from_inven36_next);
        };
        struct CPlayer* CashDbWorker_get_player38_wrapper(struct CashDbWorker* _this, uint16_t wSock, unsigned int dwAvator)
        {
           return CashDbWorker_get_player38_user(_this, wSock, dwAvator, CashDbWorker_get_player38_next);
        };
        bool CashDbWorker_init_database40_wrapper(struct CashDbWorker* _this)
        {
           return CashDbWorker_init_database40_user(_this, CashDbWorker_init_database40_next);
        };
        bool CashDbWorker_init_loggers42_wrapper(struct CashDbWorker* _this)
        {
           return CashDbWorker_init_loggers42_user(_this, CashDbWorker_init_loggers42_next);
        };
        bool CashDbWorker_insert_to_inven44_wrapper(struct CashDbWorker* _this, struct CPlayer* pOne, struct _param_cash_update::__item* pGII)
        {
           return CashDbWorker_insert_to_inven44_user(_this, pOne, pGII, CashDbWorker_insert_to_inven44_next);
        };
        int CashDbWorker_wait_tsk_cash_buy_dblog46_wrapper(struct CashDbWorker* _this, struct Task* pkTsk)
        {
           return CashDbWorker_wait_tsk_cash_buy_dblog46_user(_this, pkTsk, CashDbWorker_wait_tsk_cash_buy_dblog46_next);
        };
        int CashDbWorker_wait_tsk_cash_rollback48_wrapper(struct CashDbWorker* _this, struct Task* pkTsk)
        {
           return CashDbWorker_wait_tsk_cash_rollback48_user(_this, pkTsk, CashDbWorker_wait_tsk_cash_rollback48_next);
        };
        int CashDbWorker_wait_tsk_cash_select50_wrapper(struct CashDbWorker* _this, struct Task* pkTsk)
        {
           return CashDbWorker_wait_tsk_cash_select50_user(_this, pkTsk, CashDbWorker_wait_tsk_cash_select50_next);
        };
        int CashDbWorker_wait_tsk_cash_update52_wrapper(struct CashDbWorker* _this, struct Task* pkTsk)
        {
           return CashDbWorker_wait_tsk_cash_update52_user(_this, pkTsk, CashDbWorker_wait_tsk_cash_update52_next);
        };
        int CashDbWorker_wait_tst_cash_total_selling_select54_wrapper(struct CashDbWorker* _this, struct Task* pkTsk)
        {
           return CashDbWorker_wait_tst_cash_total_selling_select54_user(_this, pkTsk, CashDbWorker_wait_tst_cash_total_selling_select54_next);
        };
        
        void CashDbWorkerdtor_CashDbWorker59_wrapper(struct CashDbWorker* _this)
        {
           CashDbWorkerdtor_CashDbWorker59_user(_this, CashDbWorkerdtor_CashDbWorker59_next);
        };
        
        ::std::array<hook_record, 28> CashDbWorker_functions = 
        {
            _hook_record {
                (LPVOID)0x14022b750L,
                (LPVOID *)&CashDbWorkerctor_CashDbWorker2_user,
                (LPVOID *)&CashDbWorkerctor_CashDbWorker2_next,
                (LPVOID)cast_pointer_function(CashDbWorkerctor_CashDbWorker2_wrapper),
                (LPVOID)cast_pointer_function((void(CashDbWorker::*)())&CashDbWorker::ctor_CashDbWorker)
            },
            _hook_record {
                (LPVOID)0x1402eed20L,
                (LPVOID *)&CashDbWorkerCompleteWork4_user,
                (LPVOID *)&CashDbWorkerCompleteWork4_next,
                (LPVOID)cast_pointer_function(CashDbWorkerCompleteWork4_wrapper),
                (LPVOID)cast_pointer_function((void(CashDbWorker::*)())&CashDbWorker::CompleteWork)
            },
            _hook_record {
                (LPVOID)0x1402f0cd0L,
                (LPVOID *)&CashDbWorkerConvertErrorCode6_user,
                (LPVOID *)&CashDbWorkerConvertErrorCode6_next,
                (LPVOID)cast_pointer_function(CashDbWorkerConvertErrorCode6_wrapper),
                (LPVOID)cast_pointer_function((int(CashDbWorker::*)(char))&CashDbWorker::ConvertErrorCode)
            },
            _hook_record {
                (LPVOID)0x1402f0b80L,
                (LPVOID *)&CashDbWorkerDoWork8_user,
                (LPVOID *)&CashDbWorkerDoWork8_next,
                (LPVOID)cast_pointer_function(CashDbWorkerDoWork8_wrapper),
                (LPVOID)cast_pointer_function((void(CashDbWorker::*)())&CashDbWorker::DoWork)
            },
            _hook_record {
                (LPVOID)0x1402eee50L,
                (LPVOID *)&CashDbWorkerGetBillingDBConnectionStatus10_user,
                (LPVOID *)&CashDbWorkerGetBillingDBConnectionStatus10_next,
                (LPVOID)cast_pointer_function(CashDbWorkerGetBillingDBConnectionStatus10_wrapper),
                (LPVOID)cast_pointer_function((bool(CashDbWorker::*)())&CashDbWorker::GetBillingDBConnectionStatus)
            },
            _hook_record {
                (LPVOID)0x1402eeeb0L,
                (LPVOID *)&CashDbWorkerGetUseCashQueryStr12_user,
                (LPVOID *)&CashDbWorkerGetUseCashQueryStr12_next,
                (LPVOID)cast_pointer_function(CashDbWorkerGetUseCashQueryStr12_wrapper),
                (LPVOID)cast_pointer_function((void(CashDbWorker::*)(struct _param_cash_update*, int, char*, uint64_t))&CashDbWorker::GetUseCashQueryStr)
            },
            _hook_record {
                (LPVOID)0x1402eec00L,
                (LPVOID *)&CashDbWorkerInitialize14_user,
                (LPVOID *)&CashDbWorkerInitialize14_next,
                (LPVOID)cast_pointer_function(CashDbWorkerInitialize14_wrapper),
                (LPVOID)cast_pointer_function((bool(CashDbWorker::*)())&CashDbWorker::Initialize)
            },
            _hook_record {
                (LPVOID)0x1402eeb10L,
                (LPVOID *)&CashDbWorkerIsNULL16_user,
                (LPVOID *)&CashDbWorkerIsNULL16_next,
                (LPVOID)cast_pointer_function(CashDbWorkerIsNULL16_wrapper),
                (LPVOID)cast_pointer_function((bool(CashDbWorker::*)())&CashDbWorker::IsNULL)
            },
            _hook_record {
                (LPVOID)0x1402eeca0L,
                (LPVOID *)&CashDbWorkerPushTask18_user,
                (LPVOID *)&CashDbWorkerPushTask18_next,
                (LPVOID)cast_pointer_function(CashDbWorkerPushTask18_wrapper),
                (LPVOID)cast_pointer_function((bool(CashDbWorker::*)(int, char*, uint64_t))&CashDbWorker::PushTask)
            },
            _hook_record {
                (LPVOID)0x1402eeb60L,
                (LPVOID *)&CashDbWorkerRelease20_user,
                (LPVOID *)&CashDbWorkerRelease20_next,
                (LPVOID)cast_pointer_function(CashDbWorkerRelease20_wrapper),
                (LPVOID)cast_pointer_function((void(CashDbWorker::*)())&CashDbWorker::Release)
            },
            _hook_record {
                (LPVOID)0x1402f14f0L,
                (LPVOID *)&CashDbWorkerSendMsgSucceedBuy22_user,
                (LPVOID *)&CashDbWorkerSendMsgSucceedBuy22_next,
                (LPVOID)cast_pointer_function(CashDbWorkerSendMsgSucceedBuy22_wrapper),
                (LPVOID)cast_pointer_function((void(CashDbWorker::*)(uint16_t, struct _param_cash_update*))&CashDbWorker::SendMsgSucceedBuy)
            },
            _hook_record {
                (LPVOID)0x1402f0440L,
                (LPVOID *)&CashDbWorker_all_rollback24_user,
                (LPVOID *)&CashDbWorker_all_rollback24_next,
                (LPVOID)cast_pointer_function(CashDbWorker_all_rollback24_wrapper),
                (LPVOID)cast_pointer_function((void(CashDbWorker::*)(struct _param_cash_update*))&CashDbWorker::_all_rollback)
            },
            _hook_record {
                (LPVOID)0x1402efe80L,
                (LPVOID *)&CashDbWorker_complete_tsk_cash_rollback26_user,
                (LPVOID *)&CashDbWorker_complete_tsk_cash_rollback26_next,
                (LPVOID)cast_pointer_function(CashDbWorker_complete_tsk_cash_rollback26_wrapper),
                (LPVOID)cast_pointer_function((void(CashDbWorker::*)(struct Task*))&CashDbWorker::_complete_tsk_cash_rollback)
            },
            _hook_record {
                (LPVOID)0x1402ef070L,
                (LPVOID *)&CashDbWorker_complete_tsk_cash_select28_user,
                (LPVOID *)&CashDbWorker_complete_tsk_cash_select28_next,
                (LPVOID)cast_pointer_function(CashDbWorker_complete_tsk_cash_select28_wrapper),
                (LPVOID)cast_pointer_function((void(CashDbWorker::*)(struct Task*))&CashDbWorker::_complete_tsk_cash_select)
            },
            _hook_record {
                (LPVOID)0x1402f03b0L,
                (LPVOID *)&CashDbWorker_complete_tsk_cash_total_selling_select30_user,
                (LPVOID *)&CashDbWorker_complete_tsk_cash_total_selling_select30_next,
                (LPVOID)cast_pointer_function(CashDbWorker_complete_tsk_cash_total_selling_select30_wrapper),
                (LPVOID)cast_pointer_function((void(CashDbWorker::*)(struct Task*))&CashDbWorker::_complete_tsk_cash_total_selling_select)
            },
            _hook_record {
                (LPVOID)0x1402ef290L,
                (LPVOID *)&CashDbWorker_complete_tsk_cash_update32_user,
                (LPVOID *)&CashDbWorker_complete_tsk_cash_update32_next,
                (LPVOID)cast_pointer_function(CashDbWorker_complete_tsk_cash_update32_wrapper),
                (LPVOID)cast_pointer_function((void(CashDbWorker::*)(struct Task*))&CashDbWorker::_complete_tsk_cash_update)
            },
            _hook_record {
                (LPVOID)0x1402f0210L,
                (LPVOID *)&CashDbWorker_complete_tsk_cashitem_buy_dblog34_user,
                (LPVOID *)&CashDbWorker_complete_tsk_cashitem_buy_dblog34_next,
                (LPVOID)cast_pointer_function(CashDbWorker_complete_tsk_cashitem_buy_dblog34_wrapper),
                (LPVOID)cast_pointer_function((void(CashDbWorker::*)(struct Task*))&CashDbWorker::_complete_tsk_cashitem_buy_dblog)
            },
            _hook_record {
                (LPVOID)0x1402f1370L,
                (LPVOID *)&CashDbWorker_delete_from_inven36_user,
                (LPVOID *)&CashDbWorker_delete_from_inven36_next,
                (LPVOID)cast_pointer_function(CashDbWorker_delete_from_inven36_wrapper),
                (LPVOID)cast_pointer_function((void(CashDbWorker::*)(struct CPlayer*, struct _param_cash_update*, int))&CashDbWorker::_delete_from_inven)
            },
            _hook_record {
                (LPVOID)0x1402f2f10L,
                (LPVOID *)&CashDbWorker_get_player38_user,
                (LPVOID *)&CashDbWorker_get_player38_next,
                (LPVOID)cast_pointer_function(CashDbWorker_get_player38_wrapper),
                (LPVOID)cast_pointer_function((struct CPlayer*(CashDbWorker::*)(uint16_t, unsigned int))&CashDbWorker::_get_player)
            },
            _hook_record {
                (LPVOID)0x1402f0720L,
                (LPVOID *)&CashDbWorker_init_database40_user,
                (LPVOID *)&CashDbWorker_init_database40_next,
                (LPVOID)cast_pointer_function(CashDbWorker_init_database40_wrapper),
                (LPVOID)cast_pointer_function((bool(CashDbWorker::*)())&CashDbWorker::_init_database)
            },
            _hook_record {
                (LPVOID)0x1402f0e50L,
                (LPVOID *)&CashDbWorker_init_loggers42_user,
                (LPVOID *)&CashDbWorker_init_loggers42_next,
                (LPVOID)cast_pointer_function(CashDbWorker_init_loggers42_wrapper),
                (LPVOID)cast_pointer_function((bool(CashDbWorker::*)())&CashDbWorker::_init_loggers)
            },
            _hook_record {
                (LPVOID)0x1402f0fa0L,
                (LPVOID *)&CashDbWorker_insert_to_inven44_user,
                (LPVOID *)&CashDbWorker_insert_to_inven44_next,
                (LPVOID)cast_pointer_function(CashDbWorker_insert_to_inven44_wrapper),
                (LPVOID)cast_pointer_function((bool(CashDbWorker::*)(struct CPlayer*, struct _param_cash_update::__item*))&CashDbWorker::_insert_to_inven)
            },
            _hook_record {
                (LPVOID)0x1402f0070L,
                (LPVOID *)&CashDbWorker_wait_tsk_cash_buy_dblog46_user,
                (LPVOID *)&CashDbWorker_wait_tsk_cash_buy_dblog46_next,
                (LPVOID)cast_pointer_function(CashDbWorker_wait_tsk_cash_buy_dblog46_wrapper),
                (LPVOID)cast_pointer_function((int(CashDbWorker::*)(struct Task*))&CashDbWorker::_wait_tsk_cash_buy_dblog)
            },
            _hook_record {
                (LPVOID)0x1402efd00L,
                (LPVOID *)&CashDbWorker_wait_tsk_cash_rollback48_user,
                (LPVOID *)&CashDbWorker_wait_tsk_cash_rollback48_next,
                (LPVOID)cast_pointer_function(CashDbWorker_wait_tsk_cash_rollback48_wrapper),
                (LPVOID)cast_pointer_function((int(CashDbWorker::*)(struct Task*))&CashDbWorker::_wait_tsk_cash_rollback)
            },
            _hook_record {
                (LPVOID)0x1402ef000L,
                (LPVOID *)&CashDbWorker_wait_tsk_cash_select50_user,
                (LPVOID *)&CashDbWorker_wait_tsk_cash_select50_next,
                (LPVOID)cast_pointer_function(CashDbWorker_wait_tsk_cash_select50_wrapper),
                (LPVOID)cast_pointer_function((int(CashDbWorker::*)(struct Task*))&CashDbWorker::_wait_tsk_cash_select)
            },
            _hook_record {
                (LPVOID)0x1402ef1a0L,
                (LPVOID *)&CashDbWorker_wait_tsk_cash_update52_user,
                (LPVOID *)&CashDbWorker_wait_tsk_cash_update52_next,
                (LPVOID)cast_pointer_function(CashDbWorker_wait_tsk_cash_update52_wrapper),
                (LPVOID)cast_pointer_function((int(CashDbWorker::*)(struct Task*))&CashDbWorker::_wait_tsk_cash_update)
            },
            _hook_record {
                (LPVOID)0x1402f0340L,
                (LPVOID *)&CashDbWorker_wait_tst_cash_total_selling_select54_user,
                (LPVOID *)&CashDbWorker_wait_tst_cash_total_selling_select54_next,
                (LPVOID)cast_pointer_function(CashDbWorker_wait_tst_cash_total_selling_select54_wrapper),
                (LPVOID)cast_pointer_function((int(CashDbWorker::*)(struct Task*))&CashDbWorker::_wait_tst_cash_total_selling_select)
            },
            _hook_record {
                (LPVOID)0x14022b8d0L,
                (LPVOID *)&CashDbWorkerdtor_CashDbWorker59_user,
                (LPVOID *)&CashDbWorkerdtor_CashDbWorker59_next,
                (LPVOID)cast_pointer_function(CashDbWorkerdtor_CashDbWorker59_wrapper),
                (LPVOID)cast_pointer_function((void(CashDbWorker::*)())&CashDbWorker::dtor_CashDbWorker)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
