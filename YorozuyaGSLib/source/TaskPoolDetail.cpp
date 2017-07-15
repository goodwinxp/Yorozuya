#include <TaskPoolDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::TaskPoolInitialize2_ptr TaskPoolInitialize2_next(nullptr);
        Info::TaskPoolInitialize2_clbk TaskPoolInitialize2_user(nullptr);
        
        Info::TaskPoolIsEmpty4_ptr TaskPoolIsEmpty4_next(nullptr);
        Info::TaskPoolIsEmpty4_clbk TaskPoolIsEmpty4_user(nullptr);
        
        Info::TaskPoolPopCompleteTsk6_ptr TaskPoolPopCompleteTsk6_next(nullptr);
        Info::TaskPoolPopCompleteTsk6_clbk TaskPoolPopCompleteTsk6_user(nullptr);
        
        Info::TaskPoolPopWaitTsk8_ptr TaskPoolPopWaitTsk8_next(nullptr);
        Info::TaskPoolPopWaitTsk8_clbk TaskPoolPopWaitTsk8_user(nullptr);
        
        Info::TaskPoolPushCompleteTsk10_ptr TaskPoolPushCompleteTsk10_next(nullptr);
        Info::TaskPoolPushCompleteTsk10_clbk TaskPoolPushCompleteTsk10_user(nullptr);
        
        Info::TaskPoolPushEmptyTsk12_ptr TaskPoolPushEmptyTsk12_next(nullptr);
        Info::TaskPoolPushEmptyTsk12_clbk TaskPoolPushEmptyTsk12_user(nullptr);
        
        Info::TaskPoolPushWaitTsk14_ptr TaskPoolPushWaitTsk14_next(nullptr);
        Info::TaskPoolPushWaitTsk14_clbk TaskPoolPushWaitTsk14_user(nullptr);
        
        Info::TaskPoolRelease16_ptr TaskPoolRelease16_next(nullptr);
        Info::TaskPoolRelease16_clbk TaskPoolRelease16_user(nullptr);
        
        
        Info::TaskPoolctor_TaskPool18_ptr TaskPoolctor_TaskPool18_next(nullptr);
        Info::TaskPoolctor_TaskPool18_clbk TaskPoolctor_TaskPool18_user(nullptr);
        
        Info::TaskPool_create_task20_ptr TaskPool_create_task20_next(nullptr);
        Info::TaskPool_create_task20_clbk TaskPool_create_task20_user(nullptr);
        
        Info::TaskPool_init_index_lists22_ptr TaskPool_init_index_lists22_next(nullptr);
        Info::TaskPool_init_index_lists22_clbk TaskPool_init_index_lists22_user(nullptr);
        
        TaskPool::RCODE TaskPoolInitialize2_wrapper(struct TaskPool* _this, int nTskMaxNum, int nMaxTskSize)
        {
           return TaskPoolInitialize2_user(_this, nTskMaxNum, nMaxTskSize, TaskPoolInitialize2_next);
        };
        bool TaskPoolIsEmpty4_wrapper(struct TaskPool* _this)
        {
           return TaskPoolIsEmpty4_user(_this, TaskPoolIsEmpty4_next);
        };
        struct Task* TaskPoolPopCompleteTsk6_wrapper(struct TaskPool* _this, unsigned int* nIdx)
        {
           return TaskPoolPopCompleteTsk6_user(_this, nIdx, TaskPoolPopCompleteTsk6_next);
        };
        struct Task* TaskPoolPopWaitTsk8_wrapper(struct TaskPool* _this, unsigned int* nIdx)
        {
           return TaskPoolPopWaitTsk8_user(_this, nIdx, TaskPoolPopWaitTsk8_next);
        };
        TaskPool::RCODE TaskPoolPushCompleteTsk10_wrapper(struct TaskPool* _this, unsigned int nIdx)
        {
           return TaskPoolPushCompleteTsk10_user(_this, nIdx, TaskPoolPushCompleteTsk10_next);
        };
        TaskPool::RCODE TaskPoolPushEmptyTsk12_wrapper(struct TaskPool* _this, unsigned int nIdx)
        {
           return TaskPoolPushEmptyTsk12_user(_this, nIdx, TaskPoolPushEmptyTsk12_next);
        };
        TaskPool::RCODE TaskPoolPushWaitTsk14_wrapper(struct TaskPool* _this, int nTaskCode, char* p, uint64_t size)
        {
           return TaskPoolPushWaitTsk14_user(_this, nTaskCode, p, size, TaskPoolPushWaitTsk14_next);
        };
        void TaskPoolRelease16_wrapper(struct TaskPool* _this)
        {
           TaskPoolRelease16_user(_this, TaskPoolRelease16_next);
        };
        
        void TaskPoolctor_TaskPool18_wrapper(struct TaskPool* _this)
        {
           TaskPoolctor_TaskPool18_user(_this, TaskPoolctor_TaskPool18_next);
        };
        bool TaskPool_create_task20_wrapper(struct TaskPool* _this, int nMaxTskSize)
        {
           return TaskPool_create_task20_user(_this, nMaxTskSize, TaskPool_create_task20_next);
        };
        bool TaskPool_init_index_lists22_wrapper(struct TaskPool* _this)
        {
           return TaskPool_init_index_lists22_user(_this, TaskPool_init_index_lists22_next);
        };
        
        ::std::array<hook_record, 11> TaskPool_functions = 
        {
            _hook_record {
                (LPVOID)0x140317d60L,
                (LPVOID *)&TaskPoolInitialize2_user,
                (LPVOID *)&TaskPoolInitialize2_next,
                (LPVOID)cast_pointer_function(TaskPoolInitialize2_wrapper),
                (LPVOID)cast_pointer_function((TaskPool::RCODE(TaskPool::*)(int, int))&TaskPool::Initialize)
            },
            _hook_record {
                (LPVOID)0x1403188c0L,
                (LPVOID *)&TaskPoolIsEmpty4_user,
                (LPVOID *)&TaskPoolIsEmpty4_next,
                (LPVOID)cast_pointer_function(TaskPoolIsEmpty4_wrapper),
                (LPVOID)cast_pointer_function((bool(TaskPool::*)())&TaskPool::IsEmpty)
            },
            _hook_record {
                (LPVOID)0x1402f2530L,
                (LPVOID *)&TaskPoolPopCompleteTsk6_user,
                (LPVOID *)&TaskPoolPopCompleteTsk6_next,
                (LPVOID)cast_pointer_function(TaskPoolPopCompleteTsk6_wrapper),
                (LPVOID)cast_pointer_function((struct Task*(TaskPool::*)(unsigned int*))&TaskPool::PopCompleteTsk)
            },
            _hook_record {
                (LPVOID)0x1402f2df0L,
                (LPVOID *)&TaskPoolPopWaitTsk8_user,
                (LPVOID *)&TaskPoolPopWaitTsk8_next,
                (LPVOID)cast_pointer_function(TaskPoolPopWaitTsk8_wrapper),
                (LPVOID)cast_pointer_function((struct Task*(TaskPool::*)(unsigned int*))&TaskPool::PopWaitTsk)
            },
            _hook_record {
                (LPVOID)0x1402f2ea0L,
                (LPVOID *)&TaskPoolPushCompleteTsk10_user,
                (LPVOID *)&TaskPoolPushCompleteTsk10_next,
                (LPVOID)cast_pointer_function(TaskPoolPushCompleteTsk10_wrapper),
                (LPVOID)cast_pointer_function((TaskPool::RCODE(TaskPool::*)(unsigned int))&TaskPool::PushCompleteTsk)
            },
            _hook_record {
                (LPVOID)0x1402f25e0L,
                (LPVOID *)&TaskPoolPushEmptyTsk12_user,
                (LPVOID *)&TaskPoolPushEmptyTsk12_next,
                (LPVOID)cast_pointer_function(TaskPoolPushEmptyTsk12_wrapper),
                (LPVOID)cast_pointer_function((TaskPool::RCODE(TaskPool::*)(unsigned int))&TaskPool::PushEmptyTsk)
            },
            _hook_record {
                (LPVOID)0x1402f22c0L,
                (LPVOID *)&TaskPoolPushWaitTsk14_user,
                (LPVOID *)&TaskPoolPushWaitTsk14_next,
                (LPVOID)cast_pointer_function(TaskPoolPushWaitTsk14_wrapper),
                (LPVOID)cast_pointer_function((TaskPool::RCODE(TaskPool::*)(int, char*, uint64_t))&TaskPool::PushWaitTsk)
            },
            _hook_record {
                (LPVOID)0x140317df0L,
                (LPVOID *)&TaskPoolRelease16_user,
                (LPVOID *)&TaskPoolRelease16_next,
                (LPVOID)cast_pointer_function(TaskPoolRelease16_wrapper),
                (LPVOID)cast_pointer_function((void(TaskPool::*)())&TaskPool::Release)
            },
            _hook_record {
                (LPVOID)0x1403187b0L,
                (LPVOID *)&TaskPoolctor_TaskPool18_user,
                (LPVOID *)&TaskPoolctor_TaskPool18_next,
                (LPVOID)cast_pointer_function(TaskPoolctor_TaskPool18_wrapper),
                (LPVOID)cast_pointer_function((void(TaskPool::*)())&TaskPool::ctor_TaskPool)
            },
            _hook_record {
                (LPVOID)0x140317a50L,
                (LPVOID *)&TaskPool_create_task20_user,
                (LPVOID *)&TaskPool_create_task20_next,
                (LPVOID)cast_pointer_function(TaskPool_create_task20_wrapper),
                (LPVOID)cast_pointer_function((bool(TaskPool::*)(int))&TaskPool::_create_task)
            },
            _hook_record {
                (LPVOID)0x140317c60L,
                (LPVOID *)&TaskPool_init_index_lists22_user,
                (LPVOID *)&TaskPool_init_index_lists22_next,
                (LPVOID)cast_pointer_function(TaskPool_init_index_lists22_wrapper),
                (LPVOID)cast_pointer_function((bool(TaskPool::*)())&TaskPool::_init_index_lists)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
