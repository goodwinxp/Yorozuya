#include <CCashDbWorkerGBDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CCashDbWorkerGBctor_CCashDbWorkerGB2_ptr CCashDbWorkerGBctor_CCashDbWorkerGB2_next(nullptr);
        Info::CCashDbWorkerGBctor_CCashDbWorkerGB2_clbk CCashDbWorkerGBctor_CCashDbWorkerGB2_user(nullptr);
        
        Info::CCashDbWorkerGBCompleteWork4_ptr CCashDbWorkerGBCompleteWork4_next(nullptr);
        Info::CCashDbWorkerGBCompleteWork4_clbk CCashDbWorkerGBCompleteWork4_user(nullptr);
        
        Info::CCashDbWorkerGBDoWork6_ptr CCashDbWorkerGBDoWork6_next(nullptr);
        Info::CCashDbWorkerGBDoWork6_clbk CCashDbWorkerGBDoWork6_user(nullptr);
        
        Info::CCashDbWorkerGBGetUseCashQueryStr8_ptr CCashDbWorkerGBGetUseCashQueryStr8_next(nullptr);
        Info::CCashDbWorkerGBGetUseCashQueryStr8_clbk CCashDbWorkerGBGetUseCashQueryStr8_user(nullptr);
        
        Info::CCashDbWorkerGBInitialize10_ptr CCashDbWorkerGBInitialize10_next(nullptr);
        Info::CCashDbWorkerGBInitialize10_clbk CCashDbWorkerGBInitialize10_user(nullptr);
        
        Info::CCashDbWorkerGBRelease12_ptr CCashDbWorkerGBRelease12_next(nullptr);
        Info::CCashDbWorkerGBRelease12_clbk CCashDbWorkerGBRelease12_user(nullptr);
        
        Info::CCashDbWorkerGB_init_database14_ptr CCashDbWorkerGB_init_database14_next(nullptr);
        Info::CCashDbWorkerGB_init_database14_clbk CCashDbWorkerGB_init_database14_user(nullptr);
        
        Info::CCashDbWorkerGB_wait_tsk_cash_select16_ptr CCashDbWorkerGB_wait_tsk_cash_select16_next(nullptr);
        Info::CCashDbWorkerGB_wait_tsk_cash_select16_clbk CCashDbWorkerGB_wait_tsk_cash_select16_user(nullptr);
        
        Info::CCashDbWorkerGB_wait_tsk_cash_update18_ptr CCashDbWorkerGB_wait_tsk_cash_update18_next(nullptr);
        Info::CCashDbWorkerGB_wait_tsk_cash_update18_clbk CCashDbWorkerGB_wait_tsk_cash_update18_user(nullptr);
        
        
        Info::CCashDbWorkerGBdtor_CCashDbWorkerGB23_ptr CCashDbWorkerGBdtor_CCashDbWorkerGB23_next(nullptr);
        Info::CCashDbWorkerGBdtor_CCashDbWorkerGB23_clbk CCashDbWorkerGBdtor_CCashDbWorkerGB23_user(nullptr);
        
        
        void CCashDbWorkerGBctor_CCashDbWorkerGB2_wrapper(struct CCashDbWorkerGB* _this)
        {
           CCashDbWorkerGBctor_CCashDbWorkerGB2_user(_this, CCashDbWorkerGBctor_CCashDbWorkerGB2_next);
        };
        void CCashDbWorkerGBCompleteWork4_wrapper(struct CCashDbWorkerGB* _this)
        {
           CCashDbWorkerGBCompleteWork4_user(_this, CCashDbWorkerGBCompleteWork4_next);
        };
        void CCashDbWorkerGBDoWork6_wrapper(struct CCashDbWorkerGB* _this)
        {
           CCashDbWorkerGBDoWork6_user(_this, CCashDbWorkerGBDoWork6_next);
        };
        void CCashDbWorkerGBGetUseCashQueryStr8_wrapper(struct CCashDbWorkerGB* _this, struct _param_cash_update* rParam, int nIdx, char* wszQuery, uint64_t tBufferSize)
        {
           CCashDbWorkerGBGetUseCashQueryStr8_user(_this, rParam, nIdx, wszQuery, tBufferSize, CCashDbWorkerGBGetUseCashQueryStr8_next);
        };
        bool CCashDbWorkerGBInitialize10_wrapper(struct CCashDbWorkerGB* _this)
        {
           return CCashDbWorkerGBInitialize10_user(_this, CCashDbWorkerGBInitialize10_next);
        };
        void CCashDbWorkerGBRelease12_wrapper(struct CCashDbWorkerGB* _this)
        {
           CCashDbWorkerGBRelease12_user(_this, CCashDbWorkerGBRelease12_next);
        };
        bool CCashDbWorkerGB_init_database14_wrapper(struct CCashDbWorkerGB* _this)
        {
           return CCashDbWorkerGB_init_database14_user(_this, CCashDbWorkerGB_init_database14_next);
        };
        int CCashDbWorkerGB_wait_tsk_cash_select16_wrapper(struct CCashDbWorkerGB* _this, struct Task* pkTsk, int nIdx)
        {
           return CCashDbWorkerGB_wait_tsk_cash_select16_user(_this, pkTsk, nIdx, CCashDbWorkerGB_wait_tsk_cash_select16_next);
        };
        int CCashDbWorkerGB_wait_tsk_cash_update18_wrapper(struct CCashDbWorkerGB* _this, struct Task* pkTsk, int nIdx)
        {
           return CCashDbWorkerGB_wait_tsk_cash_update18_user(_this, pkTsk, nIdx, CCashDbWorkerGB_wait_tsk_cash_update18_next);
        };
        
        void CCashDbWorkerGBdtor_CCashDbWorkerGB23_wrapper(struct CCashDbWorkerGB* _this)
        {
           CCashDbWorkerGBdtor_CCashDbWorkerGB23_user(_this, CCashDbWorkerGBdtor_CCashDbWorkerGB23_next);
        };
        
        ::std::array<hook_record, 10> CCashDbWorkerGB_functions = 
        {
            _hook_record {
                (LPVOID)0x14022c340L,
                (LPVOID *)&CCashDbWorkerGBctor_CCashDbWorkerGB2_user,
                (LPVOID *)&CCashDbWorkerGBctor_CCashDbWorkerGB2_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerGBctor_CCashDbWorkerGB2_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDbWorkerGB::*)())&CCashDbWorkerGB::ctor_CCashDbWorkerGB)
            },
            _hook_record {
                (LPVOID)0x140318ec0L,
                (LPVOID *)&CCashDbWorkerGBCompleteWork4_user,
                (LPVOID *)&CCashDbWorkerGBCompleteWork4_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerGBCompleteWork4_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDbWorkerGB::*)())&CCashDbWorkerGB::CompleteWork)
            },
            _hook_record {
                (LPVOID)0x1403193d0L,
                (LPVOID *)&CCashDbWorkerGBDoWork6_user,
                (LPVOID *)&CCashDbWorkerGBDoWork6_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerGBDoWork6_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDbWorkerGB::*)())&CCashDbWorkerGB::DoWork)
            },
            _hook_record {
                (LPVOID)0x1403190b0L,
                (LPVOID *)&CCashDbWorkerGBGetUseCashQueryStr8_user,
                (LPVOID *)&CCashDbWorkerGBGetUseCashQueryStr8_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerGBGetUseCashQueryStr8_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDbWorkerGB::*)(struct _param_cash_update*, int, char*, uint64_t))&CCashDbWorkerGB::GetUseCashQueryStr)
            },
            _hook_record {
                (LPVOID)0x140318e40L,
                (LPVOID *)&CCashDbWorkerGBInitialize10_user,
                (LPVOID *)&CCashDbWorkerGBInitialize10_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerGBInitialize10_wrapper),
                (LPVOID)cast_pointer_function((bool(CCashDbWorkerGB::*)())&CCashDbWorkerGB::Initialize)
            },
            _hook_record {
                (LPVOID)0x140318de0L,
                (LPVOID *)&CCashDbWorkerGBRelease12_user,
                (LPVOID *)&CCashDbWorkerGBRelease12_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerGBRelease12_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDbWorkerGB::*)())&CCashDbWorkerGB::Release)
            },
            _hook_record {
                (LPVOID)0x1403192e0L,
                (LPVOID *)&CCashDbWorkerGB_init_database14_user,
                (LPVOID *)&CCashDbWorkerGB_init_database14_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerGB_init_database14_wrapper),
                (LPVOID)cast_pointer_function((bool(CCashDbWorkerGB::*)())&CCashDbWorkerGB::_init_database)
            },
            _hook_record {
                (LPVOID)0x140319040L,
                (LPVOID *)&CCashDbWorkerGB_wait_tsk_cash_select16_user,
                (LPVOID *)&CCashDbWorkerGB_wait_tsk_cash_select16_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerGB_wait_tsk_cash_select16_wrapper),
                (LPVOID)cast_pointer_function((int(CCashDbWorkerGB::*)(struct Task*, int))&CCashDbWorkerGB::_wait_tsk_cash_select)
            },
            _hook_record {
                (LPVOID)0x140319200L,
                (LPVOID *)&CCashDbWorkerGB_wait_tsk_cash_update18_user,
                (LPVOID *)&CCashDbWorkerGB_wait_tsk_cash_update18_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerGB_wait_tsk_cash_update18_wrapper),
                (LPVOID)cast_pointer_function((int(CCashDbWorkerGB::*)(struct Task*, int))&CCashDbWorkerGB::_wait_tsk_cash_update)
            },
            _hook_record {
                (LPVOID)0x14022c410L,
                (LPVOID *)&CCashDbWorkerGBdtor_CCashDbWorkerGB23_user,
                (LPVOID *)&CCashDbWorkerGBdtor_CCashDbWorkerGB23_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerGBdtor_CCashDbWorkerGB23_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDbWorkerGB::*)())&CCashDbWorkerGB::dtor_CCashDbWorkerGB)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
