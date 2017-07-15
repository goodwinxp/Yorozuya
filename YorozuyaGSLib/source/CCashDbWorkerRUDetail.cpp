#include <CCashDbWorkerRUDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CCashDbWorkerRUctor_CCashDbWorkerRU2_ptr CCashDbWorkerRUctor_CCashDbWorkerRU2_next(nullptr);
        Info::CCashDbWorkerRUctor_CCashDbWorkerRU2_clbk CCashDbWorkerRUctor_CCashDbWorkerRU2_user(nullptr);
        
        Info::CCashDbWorkerRURelease4_ptr CCashDbWorkerRURelease4_next(nullptr);
        Info::CCashDbWorkerRURelease4_clbk CCashDbWorkerRURelease4_user(nullptr);
        
        Info::CCashDbWorkerRU_init_database6_ptr CCashDbWorkerRU_init_database6_next(nullptr);
        Info::CCashDbWorkerRU_init_database6_clbk CCashDbWorkerRU_init_database6_user(nullptr);
        
        Info::CCashDbWorkerRU_wait_tsk_cash_rollback8_ptr CCashDbWorkerRU_wait_tsk_cash_rollback8_next(nullptr);
        Info::CCashDbWorkerRU_wait_tsk_cash_rollback8_clbk CCashDbWorkerRU_wait_tsk_cash_rollback8_user(nullptr);
        
        Info::CCashDbWorkerRU_wait_tsk_cash_select10_ptr CCashDbWorkerRU_wait_tsk_cash_select10_next(nullptr);
        Info::CCashDbWorkerRU_wait_tsk_cash_select10_clbk CCashDbWorkerRU_wait_tsk_cash_select10_user(nullptr);
        
        Info::CCashDbWorkerRU_wait_tsk_cash_update12_ptr CCashDbWorkerRU_wait_tsk_cash_update12_next(nullptr);
        Info::CCashDbWorkerRU_wait_tsk_cash_update12_clbk CCashDbWorkerRU_wait_tsk_cash_update12_user(nullptr);
        
        
        Info::CCashDbWorkerRUdtor_CCashDbWorkerRU17_ptr CCashDbWorkerRUdtor_CCashDbWorkerRU17_next(nullptr);
        Info::CCashDbWorkerRUdtor_CCashDbWorkerRU17_clbk CCashDbWorkerRUdtor_CCashDbWorkerRU17_user(nullptr);
        
        
        void CCashDbWorkerRUctor_CCashDbWorkerRU2_wrapper(struct CCashDbWorkerRU* _this)
        {
           CCashDbWorkerRUctor_CCashDbWorkerRU2_user(_this, CCashDbWorkerRUctor_CCashDbWorkerRU2_next);
        };
        void CCashDbWorkerRURelease4_wrapper(struct CCashDbWorkerRU* _this)
        {
           CCashDbWorkerRURelease4_user(_this, CCashDbWorkerRURelease4_next);
        };
        bool CCashDbWorkerRU_init_database6_wrapper(struct CCashDbWorkerRU* _this)
        {
           return CCashDbWorkerRU_init_database6_user(_this, CCashDbWorkerRU_init_database6_next);
        };
        int CCashDbWorkerRU_wait_tsk_cash_rollback8_wrapper(struct CCashDbWorkerRU* _this, struct Task* pkTsk)
        {
           return CCashDbWorkerRU_wait_tsk_cash_rollback8_user(_this, pkTsk, CCashDbWorkerRU_wait_tsk_cash_rollback8_next);
        };
        int CCashDbWorkerRU_wait_tsk_cash_select10_wrapper(struct CCashDbWorkerRU* _this, struct Task* pkTsk)
        {
           return CCashDbWorkerRU_wait_tsk_cash_select10_user(_this, pkTsk, CCashDbWorkerRU_wait_tsk_cash_select10_next);
        };
        int CCashDbWorkerRU_wait_tsk_cash_update12_wrapper(struct CCashDbWorkerRU* _this, struct Task* pkTsk)
        {
           return CCashDbWorkerRU_wait_tsk_cash_update12_user(_this, pkTsk, CCashDbWorkerRU_wait_tsk_cash_update12_next);
        };
        
        void CCashDbWorkerRUdtor_CCashDbWorkerRU17_wrapper(struct CCashDbWorkerRU* _this)
        {
           CCashDbWorkerRUdtor_CCashDbWorkerRU17_user(_this, CCashDbWorkerRUdtor_CCashDbWorkerRU17_next);
        };
        
        ::std::array<hook_record, 7> CCashDbWorkerRU_functions = 
        {
            _hook_record {
                (LPVOID)0x14022ea70L,
                (LPVOID *)&CCashDbWorkerRUctor_CCashDbWorkerRU2_user,
                (LPVOID *)&CCashDbWorkerRUctor_CCashDbWorkerRU2_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerRUctor_CCashDbWorkerRU2_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDbWorkerRU::*)())&CCashDbWorkerRU::ctor_CCashDbWorkerRU)
            },
            _hook_record {
                (LPVOID)0x1403208d0L,
                (LPVOID *)&CCashDbWorkerRURelease4_user,
                (LPVOID *)&CCashDbWorkerRURelease4_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerRURelease4_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDbWorkerRU::*)())&CCashDbWorkerRU::Release)
            },
            _hook_record {
                (LPVOID)0x140320be0L,
                (LPVOID *)&CCashDbWorkerRU_init_database6_user,
                (LPVOID *)&CCashDbWorkerRU_init_database6_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerRU_init_database6_wrapper),
                (LPVOID)cast_pointer_function((bool(CCashDbWorkerRU::*)())&CCashDbWorkerRU::_init_database)
            },
            _hook_record {
                (LPVOID)0x140320a80L,
                (LPVOID *)&CCashDbWorkerRU_wait_tsk_cash_rollback8_user,
                (LPVOID *)&CCashDbWorkerRU_wait_tsk_cash_rollback8_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerRU_wait_tsk_cash_rollback8_wrapper),
                (LPVOID)cast_pointer_function((int(CCashDbWorkerRU::*)(struct Task*))&CCashDbWorkerRU::_wait_tsk_cash_rollback)
            },
            _hook_record {
                (LPVOID)0x140320930L,
                (LPVOID *)&CCashDbWorkerRU_wait_tsk_cash_select10_user,
                (LPVOID *)&CCashDbWorkerRU_wait_tsk_cash_select10_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerRU_wait_tsk_cash_select10_wrapper),
                (LPVOID)cast_pointer_function((int(CCashDbWorkerRU::*)(struct Task*))&CCashDbWorkerRU::_wait_tsk_cash_select)
            },
            _hook_record {
                (LPVOID)0x1403209a0L,
                (LPVOID *)&CCashDbWorkerRU_wait_tsk_cash_update12_user,
                (LPVOID *)&CCashDbWorkerRU_wait_tsk_cash_update12_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerRU_wait_tsk_cash_update12_wrapper),
                (LPVOID)cast_pointer_function((int(CCashDbWorkerRU::*)(struct Task*))&CCashDbWorkerRU::_wait_tsk_cash_update)
            },
            _hook_record {
                (LPVOID)0x14022eb40L,
                (LPVOID *)&CCashDbWorkerRUdtor_CCashDbWorkerRU17_user,
                (LPVOID *)&CCashDbWorkerRUdtor_CCashDbWorkerRU17_next,
                (LPVOID)cast_pointer_function(CCashDbWorkerRUdtor_CCashDbWorkerRU17_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDbWorkerRU::*)())&CCashDbWorkerRU::dtor_CCashDbWorkerRU)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
