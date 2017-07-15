#include <CCashDbWorkerJPDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CCashDbWorkerJPctor_CCashDbWorkerJP2_ptr CCashDbWorkerJPctor_CCashDbWorkerJP2_next(nullptr);
        Info::CCashDbWorkerJPctor_CCashDbWorkerJP2_clbk CCashDbWorkerJPctor_CCashDbWorkerJP2_user(nullptr);
        
        Info::CCashDbWorkerJPConvertErrorCode4_ptr CCashDbWorkerJPConvertErrorCode4_next(nullptr);
        Info::CCashDbWorkerJPConvertErrorCode4_clbk CCashDbWorkerJPConvertErrorCode4_user(nullptr);
        
        Info::CCashDbWorkerJPGetUseCashQueryStr6_ptr CCashDbWorkerJPGetUseCashQueryStr6_next(nullptr);
        Info::CCashDbWorkerJPGetUseCashQueryStr6_clbk CCashDbWorkerJPGetUseCashQueryStr6_user(nullptr);
        
        Info::CCashDbWorkerJP_all_rollback8_ptr CCashDbWorkerJP_all_rollback8_next(nullptr);
        Info::CCashDbWorkerJP_all_rollback8_clbk CCashDbWorkerJP_all_rollback8_user(nullptr);
        
        Info::CCashDbWorkerJP_wait_tsk_cash_rollback10_ptr CCashDbWorkerJP_wait_tsk_cash_rollback10_next(nullptr);
        Info::CCashDbWorkerJP_wait_tsk_cash_rollback10_clbk CCashDbWorkerJP_wait_tsk_cash_rollback10_user(nullptr);
        
        Info::CCashDbWorkerJP_wait_tsk_cash_select12_ptr CCashDbWorkerJP_wait_tsk_cash_select12_next(nullptr);
        Info::CCashDbWorkerJP_wait_tsk_cash_select12_clbk CCashDbWorkerJP_wait_tsk_cash_select12_user(nullptr);
        
        Info::CCashDbWorkerJP_wait_tsk_cash_update14_ptr CCashDbWorkerJP_wait_tsk_cash_update14_next(nullptr);
        Info::CCashDbWorkerJP_wait_tsk_cash_update14_clbk CCashDbWorkerJP_wait_tsk_cash_update14_user(nullptr);
        
        
        Info::CCashDbWorkerJPdtor_CCashDbWorkerJP19_ptr CCashDbWorkerJPdtor_CCashDbWorkerJP19_next(nullptr);
        Info::CCashDbWorkerJPdtor_CCashDbWorkerJP19_clbk CCashDbWorkerJPdtor_CCashDbWorkerJP19_user(nullptr);
        
        
        void CCashDbWorkerJPctor_CCashDbWorkerJP2_wrapper(struct CCashDbWorkerJP* _this)
        {
           CCashDbWorkerJPctor_CCashDbWorkerJP2_user(_this, CCashDbWorkerJPctor_CCashDbWorkerJP2_next);
        };
        int CCashDbWorkerJPConvertErrorCode4_wrapper(struct CCashDbWorkerJP* _this, char state)
        {
           return CCashDbWorkerJPConvertErrorCode4_user(_this, state, CCashDbWorkerJPConvertErrorCode4_next);
        };
        void CCashDbWorkerJPGetUseCashQueryStr6_wrapper(struct CCashDbWorkerJP* _this, struct _param_cash_update* rParam, int nIdx, char* wszQuery, uint64_t tBufferSize)
        {
           CCashDbWorkerJPGetUseCashQueryStr6_user(_this, rParam, nIdx, wszQuery, tBufferSize, CCashDbWorkerJPGetUseCashQueryStr6_next);
        };
        void CCashDbWorkerJP_all_rollback8_wrapper(struct CCashDbWorkerJP* _this, struct _param_cash_update* psheet)
        {
           CCashDbWorkerJP_all_rollback8_user(_this, psheet, CCashDbWorkerJP_all_rollback8_next);
        };
        int CCashDbWorkerJP_wait_tsk_cash_rollback10_wrapper(struct CCashDbWorkerJP* _this, struct Task* pkTsk)
        {
           return CCashDbWorkerJP_wait_tsk_cash_rollback10_user(_this, pkTsk, CCashDbWorkerJP_wait_tsk_cash_rollback10_next);
        };
        int CCashDbWorkerJP_wait_tsk_cash_select12_wrapper(struct CCashDbWorkerJP* _this, struct Task* pkTsk)
        {
           return CCashDbWorkerJP_wait_tsk_cash_select12_user(_this, pkTsk, CCashDbWorkerJP_wait_tsk_cash_select12_next);
        };
        int CCashDbWorkerJP_wait_tsk_cash_update14_wrapper(struct CCashDbWorkerJP* _this, struct Task* pkTsk)
        {
           return CCashDbWorkerJP_wait_tsk_cash_update14_user(_this, pkTsk, CCashDbWorkerJP_wait_tsk_cash_update14_next);
        };
        
        void CCashDbWorkerJPdtor_CCashDbWorkerJP19_wrapper(struct CCashDbWorkerJP* _this)
        {
           CCashDbWorkerJPdtor_CCashDbWorkerJP19_user(_this, CCashDbWorkerJPdtor_CCashDbWorkerJP19_next);
        };
        
        ::std::array<hook_record, 8> CCashDbWorkerJP_functions = 
        {
            _hook_record {
                (LPVOID)0x14022d630L,
                (LPVOID *)&CCashDbWorkerJPctor_CCashDbWorkerJP2_user,
                (LPVOID *)&CCashDbWorkerJPctor_CCashDbWorkerJP2_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerJPctor_CCashDbWorkerJP2_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDbWorkerJP::*)())&CCashDbWorkerJP::ctor_CCashDbWorkerJP)
            },
            _hook_record {
                (LPVOID)0x1403206a0L,
                (LPVOID *)&CCashDbWorkerJPConvertErrorCode4_user,
                (LPVOID *)&CCashDbWorkerJPConvertErrorCode4_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerJPConvertErrorCode4_wrapper),
                (LPVOID)cast_pointer_function((int(CCashDbWorkerJP::*)(char))&CCashDbWorkerJP::ConvertErrorCode)
            },
            _hook_record {
                (LPVOID)0x14031ff50L,
                (LPVOID *)&CCashDbWorkerJPGetUseCashQueryStr6_user,
                (LPVOID *)&CCashDbWorkerJPGetUseCashQueryStr6_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerJPGetUseCashQueryStr6_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDbWorkerJP::*)(struct _param_cash_update*, int, char*, uint64_t))&CCashDbWorkerJP::GetUseCashQueryStr)
            },
            _hook_record {
                (LPVOID)0x140320350L,
                (LPVOID *)&CCashDbWorkerJP_all_rollback8_user,
                (LPVOID *)&CCashDbWorkerJP_all_rollback8_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerJP_all_rollback8_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDbWorkerJP::*)(struct _param_cash_update*))&CCashDbWorkerJP::_all_rollback)
            },
            _hook_record {
                (LPVOID)0x140320200L,
                (LPVOID *)&CCashDbWorkerJP_wait_tsk_cash_rollback10_user,
                (LPVOID *)&CCashDbWorkerJP_wait_tsk_cash_rollback10_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerJP_wait_tsk_cash_rollback10_wrapper),
                (LPVOID)cast_pointer_function((int(CCashDbWorkerJP::*)(struct Task*))&CCashDbWorkerJP::_wait_tsk_cash_rollback)
            },
            _hook_record {
                (LPVOID)0x1403200a0L,
                (LPVOID *)&CCashDbWorkerJP_wait_tsk_cash_select12_user,
                (LPVOID *)&CCashDbWorkerJP_wait_tsk_cash_select12_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerJP_wait_tsk_cash_select12_wrapper),
                (LPVOID)cast_pointer_function((int(CCashDbWorkerJP::*)(struct Task*))&CCashDbWorkerJP::_wait_tsk_cash_select)
            },
            _hook_record {
                (LPVOID)0x140320110L,
                (LPVOID *)&CCashDbWorkerJP_wait_tsk_cash_update14_user,
                (LPVOID *)&CCashDbWorkerJP_wait_tsk_cash_update14_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerJP_wait_tsk_cash_update14_wrapper),
                (LPVOID)cast_pointer_function((int(CCashDbWorkerJP::*)(struct Task*))&CCashDbWorkerJP::_wait_tsk_cash_update)
            },
            _hook_record {
                (LPVOID)0x14022d700L,
                (LPVOID *)&CCashDbWorkerJPdtor_CCashDbWorkerJP19_user,
                (LPVOID *)&CCashDbWorkerJPdtor_CCashDbWorkerJP19_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerJPdtor_CCashDbWorkerJP19_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDbWorkerJP::*)())&CCashDbWorkerJP::dtor_CCashDbWorkerJP)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
