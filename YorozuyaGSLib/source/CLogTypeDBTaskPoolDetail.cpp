#include <CLogTypeDBTaskPoolDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CLogTypeDBTaskPoolctor_CLogTypeDBTaskPool2_ptr CLogTypeDBTaskPoolctor_CLogTypeDBTaskPool2_next(nullptr);
        Info::CLogTypeDBTaskPoolctor_CLogTypeDBTaskPool2_clbk CLogTypeDBTaskPoolctor_CLogTypeDBTaskPool2_user(nullptr);
        
        Info::CLogTypeDBTaskPoolDestroy4_ptr CLogTypeDBTaskPoolDestroy4_next(nullptr);
        Info::CLogTypeDBTaskPoolDestroy4_clbk CLogTypeDBTaskPoolDestroy4_user(nullptr);
        
        Info::CLogTypeDBTaskPoolGetComplete6_ptr CLogTypeDBTaskPoolGetComplete6_next(nullptr);
        Info::CLogTypeDBTaskPoolGetComplete6_clbk CLogTypeDBTaskPoolGetComplete6_user(nullptr);
        
        Info::CLogTypeDBTaskPoolGetEmpty8_ptr CLogTypeDBTaskPoolGetEmpty8_next(nullptr);
        Info::CLogTypeDBTaskPoolGetEmpty8_clbk CLogTypeDBTaskPoolGetEmpty8_user(nullptr);
        
        Info::CLogTypeDBTaskPoolGetProc10_ptr CLogTypeDBTaskPoolGetProc10_next(nullptr);
        Info::CLogTypeDBTaskPoolGetProc10_clbk CLogTypeDBTaskPoolGetProc10_user(nullptr);
        
        Info::CLogTypeDBTaskPoolInit12_ptr CLogTypeDBTaskPoolInit12_next(nullptr);
        Info::CLogTypeDBTaskPoolInit12_clbk CLogTypeDBTaskPoolInit12_user(nullptr);
        
        Info::CLogTypeDBTaskPoolSetComplete14_ptr CLogTypeDBTaskPoolSetComplete14_next(nullptr);
        Info::CLogTypeDBTaskPoolSetComplete14_clbk CLogTypeDBTaskPoolSetComplete14_user(nullptr);
        
        Info::CLogTypeDBTaskPoolSetEmpty16_ptr CLogTypeDBTaskPoolSetEmpty16_next(nullptr);
        Info::CLogTypeDBTaskPoolSetEmpty16_clbk CLogTypeDBTaskPoolSetEmpty16_user(nullptr);
        
        Info::CLogTypeDBTaskPoolSetProc18_ptr CLogTypeDBTaskPoolSetProc18_next(nullptr);
        Info::CLogTypeDBTaskPoolSetProc18_clbk CLogTypeDBTaskPoolSetProc18_user(nullptr);
        
        
        Info::CLogTypeDBTaskPooldtor_CLogTypeDBTaskPool20_ptr CLogTypeDBTaskPooldtor_CLogTypeDBTaskPool20_next(nullptr);
        Info::CLogTypeDBTaskPooldtor_CLogTypeDBTaskPool20_clbk CLogTypeDBTaskPooldtor_CLogTypeDBTaskPool20_user(nullptr);
        
        
        void CLogTypeDBTaskPoolctor_CLogTypeDBTaskPool2_wrapper(struct CLogTypeDBTaskPool* _this)
        {
           CLogTypeDBTaskPoolctor_CLogTypeDBTaskPool2_user(_this, CLogTypeDBTaskPoolctor_CLogTypeDBTaskPool2_next);
        };
        void CLogTypeDBTaskPoolDestroy4_wrapper(struct CLogTypeDBTaskPool* _this)
        {
           CLogTypeDBTaskPoolDestroy4_user(_this, CLogTypeDBTaskPoolDestroy4_next);
        };
        struct CLogTypeDBTask* CLogTypeDBTaskPoolGetComplete6_wrapper(struct CLogTypeDBTaskPool* _this)
        {
           return CLogTypeDBTaskPoolGetComplete6_user(_this, CLogTypeDBTaskPoolGetComplete6_next);
        };
        struct CLogTypeDBTask* CLogTypeDBTaskPoolGetEmpty8_wrapper(struct CLogTypeDBTaskPool* _this)
        {
           return CLogTypeDBTaskPoolGetEmpty8_user(_this, CLogTypeDBTaskPoolGetEmpty8_next);
        };
        struct CLogTypeDBTask* CLogTypeDBTaskPoolGetProc10_wrapper(struct CLogTypeDBTaskPool* _this)
        {
           return CLogTypeDBTaskPoolGetProc10_user(_this, CLogTypeDBTaskPoolGetProc10_next);
        };
        bool CLogTypeDBTaskPoolInit12_wrapper(struct CLogTypeDBTaskPool* _this, unsigned int uiBuffSize, unsigned int uiMaxCnt, struct CLogFile* kLogger)
        {
           return CLogTypeDBTaskPoolInit12_user(_this, uiBuffSize, uiMaxCnt, kLogger, CLogTypeDBTaskPoolInit12_next);
        };
        bool CLogTypeDBTaskPoolSetComplete14_wrapper(struct CLogTypeDBTaskPool* _this, struct CLogTypeDBTask* pTask, struct CLogFile* kLogger)
        {
           return CLogTypeDBTaskPoolSetComplete14_user(_this, pTask, kLogger, CLogTypeDBTaskPoolSetComplete14_next);
        };
        bool CLogTypeDBTaskPoolSetEmpty16_wrapper(struct CLogTypeDBTaskPool* _this, struct CLogTypeDBTask* pTask, struct CLogFile* kLogger)
        {
           return CLogTypeDBTaskPoolSetEmpty16_user(_this, pTask, kLogger, CLogTypeDBTaskPoolSetEmpty16_next);
        };
        bool CLogTypeDBTaskPoolSetProc18_wrapper(struct CLogTypeDBTaskPool* _this, struct CLogTypeDBTask* pTask, struct CLogFile* kLogger)
        {
           return CLogTypeDBTaskPoolSetProc18_user(_this, pTask, kLogger, CLogTypeDBTaskPoolSetProc18_next);
        };
        
        void CLogTypeDBTaskPooldtor_CLogTypeDBTaskPool20_wrapper(struct CLogTypeDBTaskPool* _this)
        {
           CLogTypeDBTaskPooldtor_CLogTypeDBTaskPool20_user(_this, CLogTypeDBTaskPooldtor_CLogTypeDBTaskPool20_next);
        };
        
        ::std::array<hook_record, 10> CLogTypeDBTaskPool_functions = 
        {
            _hook_record {
                (LPVOID)0x1402c1ea0L,
                (LPVOID *)&CLogTypeDBTaskPoolctor_CLogTypeDBTaskPool2_user,
                (LPVOID *)&CLogTypeDBTaskPoolctor_CLogTypeDBTaskPool2_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskPoolctor_CLogTypeDBTaskPool2_wrapper),
                (LPVOID)cast_pointer_function((void(CLogTypeDBTaskPool::*)())&CLogTypeDBTaskPool::ctor_CLogTypeDBTaskPool)
            },
            _hook_record {
                (LPVOID)0x1402c28d0L,
                (LPVOID *)&CLogTypeDBTaskPoolDestroy4_user,
                (LPVOID *)&CLogTypeDBTaskPoolDestroy4_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskPoolDestroy4_wrapper),
                (LPVOID)cast_pointer_function((void(CLogTypeDBTaskPool::*)())&CLogTypeDBTaskPool::Destroy)
            },
            _hook_record {
                (LPVOID)0x1402c25d0L,
                (LPVOID *)&CLogTypeDBTaskPoolGetComplete6_user,
                (LPVOID *)&CLogTypeDBTaskPoolGetComplete6_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskPoolGetComplete6_wrapper),
                (LPVOID)cast_pointer_function((struct CLogTypeDBTask*(CLogTypeDBTaskPool::*)())&CLogTypeDBTaskPool::GetComplete)
            },
            _hook_record {
                (LPVOID)0x1402c2430L,
                (LPVOID *)&CLogTypeDBTaskPoolGetEmpty8_user,
                (LPVOID *)&CLogTypeDBTaskPoolGetEmpty8_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskPoolGetEmpty8_wrapper),
                (LPVOID)cast_pointer_function((struct CLogTypeDBTask*(CLogTypeDBTaskPool::*)())&CLogTypeDBTaskPool::GetEmpty)
            },
            _hook_record {
                (LPVOID)0x1402c2510L,
                (LPVOID *)&CLogTypeDBTaskPoolGetProc10_user,
                (LPVOID *)&CLogTypeDBTaskPoolGetProc10_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskPoolGetProc10_wrapper),
                (LPVOID)cast_pointer_function((struct CLogTypeDBTask*(CLogTypeDBTaskPool::*)())&CLogTypeDBTaskPool::GetProc)
            },
            _hook_record {
                (LPVOID)0x1402c2110L,
                (LPVOID *)&CLogTypeDBTaskPoolInit12_user,
                (LPVOID *)&CLogTypeDBTaskPoolInit12_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskPoolInit12_wrapper),
                (LPVOID)cast_pointer_function((bool(CLogTypeDBTaskPool::*)(unsigned int, unsigned int, struct CLogFile*))&CLogTypeDBTaskPool::Init)
            },
            _hook_record {
                (LPVOID)0x1402c2750L,
                (LPVOID *)&CLogTypeDBTaskPoolSetComplete14_user,
                (LPVOID *)&CLogTypeDBTaskPoolSetComplete14_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskPoolSetComplete14_wrapper),
                (LPVOID)cast_pointer_function((bool(CLogTypeDBTaskPool::*)(struct CLogTypeDBTask*, struct CLogFile*))&CLogTypeDBTaskPool::SetComplete)
            },
            _hook_record {
                (LPVOID)0x1402c2810L,
                (LPVOID *)&CLogTypeDBTaskPoolSetEmpty16_user,
                (LPVOID *)&CLogTypeDBTaskPoolSetEmpty16_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskPoolSetEmpty16_wrapper),
                (LPVOID)cast_pointer_function((bool(CLogTypeDBTaskPool::*)(struct CLogTypeDBTask*, struct CLogFile*))&CLogTypeDBTaskPool::SetEmpty)
            },
            _hook_record {
                (LPVOID)0x1402c2690L,
                (LPVOID *)&CLogTypeDBTaskPoolSetProc18_user,
                (LPVOID *)&CLogTypeDBTaskPoolSetProc18_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskPoolSetProc18_wrapper),
                (LPVOID)cast_pointer_function((bool(CLogTypeDBTaskPool::*)(struct CLogTypeDBTask*, struct CLogFile*))&CLogTypeDBTaskPool::SetProc)
            },
            _hook_record {
                (LPVOID)0x1402c1fc0L,
                (LPVOID *)&CLogTypeDBTaskPooldtor_CLogTypeDBTaskPool20_user,
                (LPVOID *)&CLogTypeDBTaskPooldtor_CLogTypeDBTaskPool20_next,
                (LPVOID)cast_pointer_function(CLogTypeDBTaskPooldtor_CLogTypeDBTaskPool20_wrapper),
                (LPVOID)cast_pointer_function((void(CLogTypeDBTaskPool::*)())&CLogTypeDBTaskPool::dtor_CLogTypeDBTaskPool)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
