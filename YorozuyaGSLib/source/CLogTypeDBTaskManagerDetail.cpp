#include <CLogTypeDBTaskManagerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CLogTypeDBTaskManagerctor_CLogTypeDBTaskManager2_ptr CLogTypeDBTaskManagerctor_CLogTypeDBTaskManager2_next(nullptr);
        Info::CLogTypeDBTaskManagerctor_CLogTypeDBTaskManager2_clbk CLogTypeDBTaskManagerctor_CLogTypeDBTaskManager2_user(nullptr);
        
        Info::CLogTypeDBTaskManagerCleanUp4_ptr CLogTypeDBTaskManagerCleanUp4_next(nullptr);
        Info::CLogTypeDBTaskManagerCleanUp4_clbk CLogTypeDBTaskManagerCleanUp4_user(nullptr);
        
        Info::CLogTypeDBTaskManagerDBProcess6_ptr CLogTypeDBTaskManagerDBProcess6_next(nullptr);
        Info::CLogTypeDBTaskManagerDBProcess6_clbk CLogTypeDBTaskManagerDBProcess6_user(nullptr);
        
        Info::CLogTypeDBTaskManagerDestroy8_ptr CLogTypeDBTaskManagerDestroy8_next(nullptr);
        Info::CLogTypeDBTaskManagerDestroy8_clbk CLogTypeDBTaskManagerDestroy8_user(nullptr);
        
        Info::CLogTypeDBTaskManagerGetDBProc10_ptr CLogTypeDBTaskManagerGetDBProc10_next(nullptr);
        Info::CLogTypeDBTaskManagerGetDBProc10_clbk CLogTypeDBTaskManagerGetDBProc10_user(nullptr);
        
        Info::CLogTypeDBTaskManagerGetDBTaskConnectionStatus12_ptr CLogTypeDBTaskManagerGetDBTaskConnectionStatus12_next(nullptr);
        Info::CLogTypeDBTaskManagerGetDBTaskConnectionStatus12_clbk CLogTypeDBTaskManagerGetDBTaskConnectionStatus12_user(nullptr);
        
        Info::CLogTypeDBTaskManagerGetDBTaskDataStatus14_ptr CLogTypeDBTaskManagerGetDBTaskDataStatus14_next(nullptr);
        Info::CLogTypeDBTaskManagerGetDBTaskDataStatus14_clbk CLogTypeDBTaskManagerGetDBTaskDataStatus14_user(nullptr);
        
        Info::CLogTypeDBTaskManagerInit16_ptr CLogTypeDBTaskManagerInit16_next(nullptr);
        Info::CLogTypeDBTaskManagerInit16_clbk CLogTypeDBTaskManagerInit16_user(nullptr);
        
        Info::CLogTypeDBTaskManagerInitDB18_ptr CLogTypeDBTaskManagerInitDB18_next(nullptr);
        Info::CLogTypeDBTaskManagerInitDB18_clbk CLogTypeDBTaskManagerInitDB18_user(nullptr);
        
        Info::CLogTypeDBTaskManagerInitLogger20_ptr CLogTypeDBTaskManagerInitLogger20_next(nullptr);
        Info::CLogTypeDBTaskManagerInitLogger20_clbk CLogTypeDBTaskManagerInitLogger20_user(nullptr);
        
        Info::CLogTypeDBTaskManagerInstance22_ptr CLogTypeDBTaskManagerInstance22_next(nullptr);
        Info::CLogTypeDBTaskManagerInstance22_clbk CLogTypeDBTaskManagerInstance22_user(nullptr);
        
        Info::CLogTypeDBTaskManagerIsInitialized24_ptr CLogTypeDBTaskManagerIsInitialized24_next(nullptr);
        Info::CLogTypeDBTaskManagerIsInitialized24_clbk CLogTypeDBTaskManagerIsInitialized24_user(nullptr);
        
        Info::CLogTypeDBTaskManagerLog26_ptr CLogTypeDBTaskManagerLog26_next(nullptr);
        Info::CLogTypeDBTaskManagerLog26_clbk CLogTypeDBTaskManagerLog26_user(nullptr);
        
        Info::CLogTypeDBTaskManagerLoop28_ptr CLogTypeDBTaskManagerLoop28_next(nullptr);
        Info::CLogTypeDBTaskManagerLoop28_clbk CLogTypeDBTaskManagerLoop28_user(nullptr);
        
        Info::CLogTypeDBTaskManagerProcComplete30_ptr CLogTypeDBTaskManagerProcComplete30_next(nullptr);
        Info::CLogTypeDBTaskManagerProcComplete30_clbk CLogTypeDBTaskManagerProcComplete30_user(nullptr);
        
        Info::CLogTypeDBTaskManagerProcThread32_ptr CLogTypeDBTaskManagerProcThread32_next(nullptr);
        Info::CLogTypeDBTaskManagerProcThread32_clbk CLogTypeDBTaskManagerProcThread32_user(nullptr);
        
        Info::CLogTypeDBTaskManagerPush34_ptr CLogTypeDBTaskManagerPush34_next(nullptr);
        Info::CLogTypeDBTaskManagerPush34_clbk CLogTypeDBTaskManagerPush34_user(nullptr);
        
        
        Info::CLogTypeDBTaskManagerdtor_CLogTypeDBTaskManager38_ptr CLogTypeDBTaskManagerdtor_CLogTypeDBTaskManager38_next(nullptr);
        Info::CLogTypeDBTaskManagerdtor_CLogTypeDBTaskManager38_clbk CLogTypeDBTaskManagerdtor_CLogTypeDBTaskManager38_user(nullptr);
        
        
        void CLogTypeDBTaskManagerctor_CLogTypeDBTaskManager2_wrapper(struct CLogTypeDBTaskManager* _this)
        {
           CLogTypeDBTaskManagerctor_CLogTypeDBTaskManager2_user(_this, CLogTypeDBTaskManagerctor_CLogTypeDBTaskManager2_next);
        };
        void CLogTypeDBTaskManagerCleanUp4_wrapper(struct CLogTypeDBTaskManager* _this)
        {
           CLogTypeDBTaskManagerCleanUp4_user(_this, CLogTypeDBTaskManagerCleanUp4_next);
        };
        void CLogTypeDBTaskManagerDBProcess6_wrapper(struct CLogTypeDBTaskManager* _this)
        {
           CLogTypeDBTaskManagerDBProcess6_user(_this, CLogTypeDBTaskManagerDBProcess6_next);
        };
        void CLogTypeDBTaskManagerDestroy8_wrapper()
        {
           CLogTypeDBTaskManagerDestroy8_user(CLogTypeDBTaskManagerDestroy8_next);
        };
        bool CLogTypeDBTaskManagerGetDBProc10_wrapper(struct CLogTypeDBTaskManager* _this)
        {
           return CLogTypeDBTaskManagerGetDBProc10_user(_this, CLogTypeDBTaskManagerGetDBProc10_next);
        };
        bool CLogTypeDBTaskManagerGetDBTaskConnectionStatus12_wrapper(struct CLogTypeDBTaskManager* _this)
        {
           return CLogTypeDBTaskManagerGetDBTaskConnectionStatus12_user(_this, CLogTypeDBTaskManagerGetDBTaskConnectionStatus12_next);
        };
        bool CLogTypeDBTaskManagerGetDBTaskDataStatus14_wrapper(struct CLogTypeDBTaskManager* _this)
        {
           return CLogTypeDBTaskManagerGetDBTaskDataStatus14_user(_this, CLogTypeDBTaskManagerGetDBTaskDataStatus14_next);
        };
        bool CLogTypeDBTaskManagerInit16_wrapper(struct CLogTypeDBTaskManager* _this)
        {
           return CLogTypeDBTaskManagerInit16_user(_this, CLogTypeDBTaskManagerInit16_next);
        };
        bool CLogTypeDBTaskManagerInitDB18_wrapper(struct CLogTypeDBTaskManager* _this, char* szDBName, char* szDBIP)
        {
           return CLogTypeDBTaskManagerInitDB18_user(_this, szDBName, szDBIP, CLogTypeDBTaskManagerInitDB18_next);
        };
        bool CLogTypeDBTaskManagerInitLogger20_wrapper(struct CLogTypeDBTaskManager* _this)
        {
           return CLogTypeDBTaskManagerInitLogger20_user(_this, CLogTypeDBTaskManagerInitLogger20_next);
        };
        struct CLogTypeDBTaskManager* CLogTypeDBTaskManagerInstance22_wrapper()
        {
           return CLogTypeDBTaskManagerInstance22_user(CLogTypeDBTaskManagerInstance22_next);
        };
        bool CLogTypeDBTaskManagerIsInitialized24_wrapper(struct CLogTypeDBTaskManager* _this)
        {
           return CLogTypeDBTaskManagerIsInitialized24_user(_this, CLogTypeDBTaskManagerIsInitialized24_next);
        };
        void CLogTypeDBTaskManagerLog26_wrapper(struct CLogTypeDBTaskManager* _this, char* fmt)
        {
           CLogTypeDBTaskManagerLog26_user(_this, fmt, CLogTypeDBTaskManagerLog26_next);
        };
        void CLogTypeDBTaskManagerLoop28_wrapper(struct CLogTypeDBTaskManager* _this)
        {
           CLogTypeDBTaskManagerLoop28_user(_this, CLogTypeDBTaskManagerLoop28_next);
        };
        void CLogTypeDBTaskManagerProcComplete30_wrapper(struct CLogTypeDBTaskManager* _this)
        {
           CLogTypeDBTaskManagerProcComplete30_user(_this, CLogTypeDBTaskManagerProcComplete30_next);
        };
        void CLogTypeDBTaskManagerProcThread32_wrapper(void* pParam)
        {
           CLogTypeDBTaskManagerProcThread32_user(pParam, CLogTypeDBTaskManagerProcThread32_next);
        };
        bool CLogTypeDBTaskManagerPush34_wrapper(struct CLogTypeDBTaskManager* _this, char byQueryType, char* pcData, uint16_t wSize)
        {
           return CLogTypeDBTaskManagerPush34_user(_this, byQueryType, pcData, wSize, CLogTypeDBTaskManagerPush34_next);
        };
        
        void CLogTypeDBTaskManagerdtor_CLogTypeDBTaskManager38_wrapper(struct CLogTypeDBTaskManager* _this)
        {
           CLogTypeDBTaskManagerdtor_CLogTypeDBTaskManager38_user(_this, CLogTypeDBTaskManagerdtor_CLogTypeDBTaskManager38_next);
        };
        
        ::std::array<hook_record, 18> CLogTypeDBTaskManager_functions = 
        {
            _hook_record {
                (LPVOID)0x1402c2a90L,
                (LPVOID *)&CLogTypeDBTaskManagerctor_CLogTypeDBTaskManager2_user,
                (LPVOID *)&CLogTypeDBTaskManagerctor_CLogTypeDBTaskManager2_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskManagerctor_CLogTypeDBTaskManager2_wrapper),
                (LPVOID)cast_pointer_function((void(CLogTypeDBTaskManager::*)())&CLogTypeDBTaskManager::ctor_CLogTypeDBTaskManager)
            },
            _hook_record {
                (LPVOID)0x1402c3550L,
                (LPVOID *)&CLogTypeDBTaskManagerCleanUp4_user,
                (LPVOID *)&CLogTypeDBTaskManagerCleanUp4_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskManagerCleanUp4_wrapper),
                (LPVOID)cast_pointer_function((void(CLogTypeDBTaskManager::*)())&CLogTypeDBTaskManager::CleanUp)
            },
            _hook_record {
                (LPVOID)0x1402c3130L,
                (LPVOID *)&CLogTypeDBTaskManagerDBProcess6_user,
                (LPVOID *)&CLogTypeDBTaskManagerDBProcess6_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskManagerDBProcess6_wrapper),
                (LPVOID)cast_pointer_function((void(CLogTypeDBTaskManager::*)())&CLogTypeDBTaskManager::DBProcess)
            },
            _hook_record {
                (LPVOID)0x1402c2c50L,
                (LPVOID *)&CLogTypeDBTaskManagerDestroy8_user,
                (LPVOID *)&CLogTypeDBTaskManagerDestroy8_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskManagerDestroy8_wrapper),
                (LPVOID)cast_pointer_function((void(*)())&CLogTypeDBTaskManager::Destroy)
            },
            _hook_record {
                (LPVOID)0x1402c4360L,
                (LPVOID *)&CLogTypeDBTaskManagerGetDBProc10_user,
                (LPVOID *)&CLogTypeDBTaskManagerGetDBProc10_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskManagerGetDBProc10_wrapper),
                (LPVOID)cast_pointer_function((bool(CLogTypeDBTaskManager::*)())&CLogTypeDBTaskManager::GetDBProc)
            },
            _hook_record {
                (LPVOID)0x1402c3870L,
                (LPVOID *)&CLogTypeDBTaskManagerGetDBTaskConnectionStatus12_user,
                (LPVOID *)&CLogTypeDBTaskManagerGetDBTaskConnectionStatus12_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskManagerGetDBTaskConnectionStatus12_wrapper),
                (LPVOID)cast_pointer_function((bool(CLogTypeDBTaskManager::*)())&CLogTypeDBTaskManager::GetDBTaskConnectionStatus)
            },
            _hook_record {
                (LPVOID)0x1402c3850L,
                (LPVOID *)&CLogTypeDBTaskManagerGetDBTaskDataStatus14_user,
                (LPVOID *)&CLogTypeDBTaskManagerGetDBTaskDataStatus14_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskManagerGetDBTaskDataStatus14_wrapper),
                (LPVOID)cast_pointer_function((bool(CLogTypeDBTaskManager::*)())&CLogTypeDBTaskManager::GetDBTaskDataStatus)
            },
            _hook_record {
                (LPVOID)0x1402c2cd0L,
                (LPVOID *)&CLogTypeDBTaskManagerInit16_user,
                (LPVOID *)&CLogTypeDBTaskManagerInit16_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskManagerInit16_wrapper),
                (LPVOID)cast_pointer_function((bool(CLogTypeDBTaskManager::*)())&CLogTypeDBTaskManager::Init)
            },
            _hook_record {
                (LPVOID)0x1402c2e50L,
                (LPVOID *)&CLogTypeDBTaskManagerInitDB18_user,
                (LPVOID *)&CLogTypeDBTaskManagerInitDB18_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskManagerInitDB18_wrapper),
                (LPVOID)cast_pointer_function((bool(CLogTypeDBTaskManager::*)(char*, char*))&CLogTypeDBTaskManager::InitDB)
            },
            _hook_record {
                (LPVOID)0x1402c36e0L,
                (LPVOID *)&CLogTypeDBTaskManagerInitLogger20_user,
                (LPVOID *)&CLogTypeDBTaskManagerInitLogger20_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskManagerInitLogger20_wrapper),
                (LPVOID)cast_pointer_function((bool(CLogTypeDBTaskManager::*)())&CLogTypeDBTaskManager::InitLogger)
            },
            _hook_record {
                (LPVOID)0x1402c2b90L,
                (LPVOID *)&CLogTypeDBTaskManagerInstance22_user,
                (LPVOID *)&CLogTypeDBTaskManagerInstance22_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskManagerInstance22_wrapper),
                (LPVOID)cast_pointer_function((struct CLogTypeDBTaskManager*(*)())&CLogTypeDBTaskManager::Instance)
            },
            _hook_record {
                (LPVOID)0x140205810L,
                (LPVOID *)&CLogTypeDBTaskManagerIsInitialized24_user,
                (LPVOID *)&CLogTypeDBTaskManagerIsInitialized24_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskManagerIsInitialized24_wrapper),
                (LPVOID)cast_pointer_function((bool(CLogTypeDBTaskManager::*)())&CLogTypeDBTaskManager::IsInitialized)
            },
            _hook_record {
                (LPVOID)0x1402c3650L,
                (LPVOID *)&CLogTypeDBTaskManagerLog26_user,
                (LPVOID *)&CLogTypeDBTaskManagerLog26_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskManagerLog26_wrapper),
                (LPVOID)cast_pointer_function((void(CLogTypeDBTaskManager::*)(char*))&CLogTypeDBTaskManager::Log)
            },
            _hook_record {
                (LPVOID)0x1402c2f40L,
                (LPVOID *)&CLogTypeDBTaskManagerLoop28_user,
                (LPVOID *)&CLogTypeDBTaskManagerLoop28_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskManagerLoop28_wrapper),
                (LPVOID)cast_pointer_function((void(CLogTypeDBTaskManager::*)())&CLogTypeDBTaskManager::Loop)
            },
            _hook_record {
                (LPVOID)0x1402c3390L,
                (LPVOID *)&CLogTypeDBTaskManagerProcComplete30_user,
                (LPVOID *)&CLogTypeDBTaskManagerProcComplete30_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskManagerProcComplete30_wrapper),
                (LPVOID)cast_pointer_function((void(CLogTypeDBTaskManager::*)())&CLogTypeDBTaskManager::ProcComplete)
            },
            _hook_record {
                (LPVOID)0x1402c3480L,
                (LPVOID *)&CLogTypeDBTaskManagerProcThread32_user,
                (LPVOID *)&CLogTypeDBTaskManagerProcThread32_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskManagerProcThread32_wrapper),
                (LPVOID)cast_pointer_function((void(*)(void*))&CLogTypeDBTaskManager::ProcThread)
            },
            _hook_record {
                (LPVOID)0x1402c2fa0L,
                (LPVOID *)&CLogTypeDBTaskManagerPush34_user,
                (LPVOID *)&CLogTypeDBTaskManagerPush34_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskManagerPush34_wrapper),
                (LPVOID)cast_pointer_function((bool(CLogTypeDBTaskManager::*)(char, char*, uint16_t))&CLogTypeDBTaskManager::Push)
            },
            _hook_record {
                (LPVOID)0x1402c2b10L,
                (LPVOID *)&CLogTypeDBTaskManagerdtor_CLogTypeDBTaskManager38_user,
                (LPVOID *)&CLogTypeDBTaskManagerdtor_CLogTypeDBTaskManager38_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskManagerdtor_CLogTypeDBTaskManager38_wrapper),
                (LPVOID)cast_pointer_function((void(CLogTypeDBTaskManager::*)())&CLogTypeDBTaskManager::dtor_CLogTypeDBTaskManager)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
