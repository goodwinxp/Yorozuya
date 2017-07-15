#include <CCashDBWorkManagerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CCashDBWorkManagerctor_CCashDBWorkManager2_ptr CCashDBWorkManagerctor_CCashDBWorkManager2_next(nullptr);
        Info::CCashDBWorkManagerctor_CCashDBWorkManager2_clbk CCashDBWorkManagerctor_CCashDBWorkManager2_user(nullptr);
        
        Info::CCashDBWorkManagerCompleteWork4_ptr CCashDBWorkManagerCompleteWork4_next(nullptr);
        Info::CCashDBWorkManagerCompleteWork4_clbk CCashDBWorkManagerCompleteWork4_user(nullptr);
        
        Info::CCashDBWorkManagerGetBillingDBConnectionStatus6_ptr CCashDBWorkManagerGetBillingDBConnectionStatus6_next(nullptr);
        Info::CCashDBWorkManagerGetBillingDBConnectionStatus6_clbk CCashDBWorkManagerGetBillingDBConnectionStatus6_user(nullptr);
        
        Info::CCashDBWorkManagerGetUseCashQueryStr8_ptr CCashDBWorkManagerGetUseCashQueryStr8_next(nullptr);
        Info::CCashDBWorkManagerGetUseCashQueryStr8_clbk CCashDBWorkManagerGetUseCashQueryStr8_user(nullptr);
        
        Info::CCashDBWorkManagerInitialize10_ptr CCashDBWorkManagerInitialize10_next(nullptr);
        Info::CCashDBWorkManagerInitialize10_clbk CCashDBWorkManagerInitialize10_user(nullptr);
        
        Info::CCashDBWorkManagerInitializeWorker12_ptr CCashDBWorkManagerInitializeWorker12_next(nullptr);
        Info::CCashDBWorkManagerInitializeWorker12_clbk CCashDBWorkManagerInitializeWorker12_user(nullptr);
        
        Info::CCashDBWorkManagerPushTask14_ptr CCashDBWorkManagerPushTask14_next(nullptr);
        Info::CCashDBWorkManagerPushTask14_clbk CCashDBWorkManagerPushTask14_user(nullptr);
        
        Info::CCashDBWorkManagerStart16_ptr CCashDBWorkManagerStart16_next(nullptr);
        Info::CCashDBWorkManagerStart16_clbk CCashDBWorkManagerStart16_user(nullptr);
        
        
        Info::CCashDBWorkManagerdtor_CCashDBWorkManager21_ptr CCashDBWorkManagerdtor_CCashDBWorkManager21_next(nullptr);
        Info::CCashDBWorkManagerdtor_CCashDBWorkManager21_clbk CCashDBWorkManagerdtor_CCashDBWorkManager21_user(nullptr);
        
        
        void CCashDBWorkManagerctor_CCashDBWorkManager2_wrapper(struct CCashDBWorkManager* _this)
        {
           CCashDBWorkManagerctor_CCashDBWorkManager2_user(_this, CCashDBWorkManagerctor_CCashDBWorkManager2_next);
        };
        void CCashDBWorkManagerCompleteWork4_wrapper(struct CCashDBWorkManager* _this)
        {
           CCashDBWorkManagerCompleteWork4_user(_this, CCashDBWorkManagerCompleteWork4_next);
        };
        bool CCashDBWorkManagerGetBillingDBConnectionStatus6_wrapper(struct CCashDBWorkManager* _this)
        {
           return CCashDBWorkManagerGetBillingDBConnectionStatus6_user(_this, CCashDBWorkManagerGetBillingDBConnectionStatus6_next);
        };
        void CCashDBWorkManagerGetUseCashQueryStr8_wrapper(struct CCashDBWorkManager* _this, struct _param_cash_update* rParam, int nIdx, char* wszQuery, uint64_t tBufferSize)
        {
           CCashDBWorkManagerGetUseCashQueryStr8_user(_this, rParam, nIdx, wszQuery, tBufferSize, CCashDBWorkManagerGetUseCashQueryStr8_next);
        };
        bool CCashDBWorkManagerInitialize10_wrapper(struct CCashDBWorkManager* _this)
        {
           return CCashDBWorkManagerInitialize10_user(_this, CCashDBWorkManagerInitialize10_next);
        };
        bool CCashDBWorkManagerInitializeWorker12_wrapper(struct CCashDBWorkManager* _this)
        {
           return CCashDBWorkManagerInitializeWorker12_user(_this, CCashDBWorkManagerInitializeWorker12_next);
        };
        bool CCashDBWorkManagerPushTask14_wrapper(struct CCashDBWorkManager* _this, int nTaskCode, char* p, uint64_t size)
        {
           return CCashDBWorkManagerPushTask14_user(_this, nTaskCode, p, size, CCashDBWorkManagerPushTask14_next);
        };
        void CCashDBWorkManagerStart16_wrapper(struct CCashDBWorkManager* _this)
        {
           CCashDBWorkManagerStart16_user(_this, CCashDBWorkManagerStart16_next);
        };
        
        void CCashDBWorkManagerdtor_CCashDBWorkManager21_wrapper(struct CCashDBWorkManager* _this)
        {
           CCashDBWorkManagerdtor_CCashDBWorkManager21_user(_this, CCashDBWorkManagerdtor_CCashDBWorkManager21_next);
        };
        
        ::std::array<hook_record, 9> CCashDBWorkManager_functions = 
        {
            _hook_record {
                (LPVOID)0x1402f31b0L,
                (LPVOID *)&CCashDBWorkManagerctor_CCashDBWorkManager2_user,
                (LPVOID *)&CCashDBWorkManagerctor_CCashDBWorkManager2_next,
                (LPVOID)cast_pointer_function(CCashDBWorkManagerctor_CCashDBWorkManager2_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDBWorkManager::*)())&CCashDBWorkManager::ctor_CCashDBWorkManager)
            },
            _hook_record {
                (LPVOID)0x1402f33a0L,
                (LPVOID *)&CCashDBWorkManagerCompleteWork4_user,
                (LPVOID *)&CCashDBWorkManagerCompleteWork4_next,
                (LPVOID)cast_pointer_function(CCashDBWorkManagerCompleteWork4_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDBWorkManager::*)())&CCashDBWorkManager::CompleteWork)
            },
            _hook_record {
                (LPVOID)0x1402f33f0L,
                (LPVOID *)&CCashDBWorkManagerGetBillingDBConnectionStatus6_user,
                (LPVOID *)&CCashDBWorkManagerGetBillingDBConnectionStatus6_next,
                (LPVOID)cast_pointer_function(CCashDBWorkManagerGetBillingDBConnectionStatus6_wrapper),
                (LPVOID)cast_pointer_function((bool(CCashDBWorkManager::*)())&CCashDBWorkManager::GetBillingDBConnectionStatus)
            },
            _hook_record {
                (LPVOID)0x1402f3430L,
                (LPVOID *)&CCashDBWorkManagerGetUseCashQueryStr8_user,
                (LPVOID *)&CCashDBWorkManagerGetUseCashQueryStr8_next,
                (LPVOID)cast_pointer_function(CCashDBWorkManagerGetUseCashQueryStr8_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDBWorkManager::*)(struct _param_cash_update*, int, char*, uint64_t))&CCashDBWorkManager::GetUseCashQueryStr)
            },
            _hook_record {
                (LPVOID)0x1402f3210L,
                (LPVOID *)&CCashDBWorkManagerInitialize10_user,
                (LPVOID *)&CCashDBWorkManagerInitialize10_next,
                (LPVOID)cast_pointer_function(CCashDBWorkManagerInitialize10_wrapper),
                (LPVOID)cast_pointer_function((bool(CCashDBWorkManager::*)())&CCashDBWorkManager::Initialize)
            },
            _hook_record {
                (LPVOID)0x1402f32a0L,
                (LPVOID *)&CCashDBWorkManagerInitializeWorker12_user,
                (LPVOID *)&CCashDBWorkManagerInitializeWorker12_next,
                (LPVOID)cast_pointer_function(CCashDBWorkManagerInitializeWorker12_wrapper),
                (LPVOID)cast_pointer_function((bool(CCashDBWorkManager::*)())&CCashDBWorkManager::InitializeWorker)
            },
            _hook_record {
                (LPVOID)0x1402f3340L,
                (LPVOID *)&CCashDBWorkManagerPushTask14_user,
                (LPVOID *)&CCashDBWorkManagerPushTask14_next,
                (LPVOID)cast_pointer_function(CCashDBWorkManagerPushTask14_wrapper),
                (LPVOID)cast_pointer_function((bool(CCashDBWorkManager::*)(int, char*, uint64_t))&CCashDBWorkManager::PushTask)
            },
            _hook_record {
                (LPVOID)0x1402f3300L,
                (LPVOID *)&CCashDBWorkManagerStart16_user,
                (LPVOID *)&CCashDBWorkManagerStart16_next,
                (LPVOID)cast_pointer_function(CCashDBWorkManagerStart16_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDBWorkManager::*)())&CCashDBWorkManager::Start)
            },
            _hook_record {
                (LPVOID)0x1402f35d0L,
                (LPVOID *)&CCashDBWorkManagerdtor_CCashDBWorkManager21_user,
                (LPVOID *)&CCashDBWorkManagerdtor_CCashDBWorkManager21_next,
                (LPVOID)cast_pointer_function(CCashDBWorkManagerdtor_CCashDBWorkManager21_wrapper),
                (LPVOID)cast_pointer_function((void(CCashDBWorkManager::*)())&CCashDBWorkManager::dtor_CCashDBWorkManager)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
