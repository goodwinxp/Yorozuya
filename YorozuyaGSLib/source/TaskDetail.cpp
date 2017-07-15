#include <TaskDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::TaskGetRetCode2_ptr TaskGetRetCode2_next(nullptr);
        Info::TaskGetRetCode2_clbk TaskGetRetCode2_user(nullptr);
        
        Info::TaskGetTaskBuf4_ptr TaskGetTaskBuf4_next(nullptr);
        Info::TaskGetTaskBuf4_clbk TaskGetTaskBuf4_user(nullptr);
        
        Info::TaskGetTaskCode6_ptr TaskGetTaskCode6_next(nullptr);
        Info::TaskGetTaskCode6_clbk TaskGetTaskCode6_user(nullptr);
        
        Info::TaskInitialize8_ptr TaskInitialize8_next(nullptr);
        Info::TaskInitialize8_clbk TaskInitialize8_user(nullptr);
        
        Info::TaskSetRetCode10_ptr TaskSetRetCode10_next(nullptr);
        Info::TaskSetRetCode10_clbk TaskSetRetCode10_user(nullptr);
        
        Info::TaskSetTask12_ptr TaskSetTask12_next(nullptr);
        Info::TaskSetTask12_clbk TaskSetTask12_user(nullptr);
        
        
        Info::Taskctor_Task14_ptr Taskctor_Task14_next(nullptr);
        Info::Taskctor_Task14_clbk Taskctor_Task14_user(nullptr);
        
        
        Info::Taskdtor_Task18_ptr Taskdtor_Task18_next(nullptr);
        Info::Taskdtor_Task18_clbk Taskdtor_Task18_user(nullptr);
        
        int TaskGetRetCode2_wrapper(struct Task* _this)
        {
           return TaskGetRetCode2_user(_this, TaskGetRetCode2_next);
        };
        char* TaskGetTaskBuf4_wrapper(struct Task* _this)
        {
           return TaskGetTaskBuf4_user(_this, TaskGetTaskBuf4_next);
        };
        int TaskGetTaskCode6_wrapper(struct Task* _this)
        {
           return TaskGetTaskCode6_user(_this, TaskGetTaskCode6_next);
        };
        bool TaskInitialize8_wrapper(struct Task* _this, uint64_t nMaxBufSize)
        {
           return TaskInitialize8_user(_this, nMaxBufSize, TaskInitialize8_next);
        };
        void TaskSetRetCode10_wrapper(struct Task* _this, int nCode)
        {
           TaskSetRetCode10_user(_this, nCode, TaskSetRetCode10_next);
        };
        void TaskSetTask12_wrapper(struct Task* _this, int nTaskCode, char* p, uint64_t size)
        {
           TaskSetTask12_user(_this, nTaskCode, p, size, TaskSetTask12_next);
        };
        
        void Taskctor_Task14_wrapper(struct Task* _this)
        {
           Taskctor_Task14_user(_this, Taskctor_Task14_next);
        };
        
        void Taskdtor_Task18_wrapper(struct Task* _this)
        {
           Taskdtor_Task18_user(_this, Taskdtor_Task18_next);
        };
        
        ::std::array<hook_record, 8> Task_functions = 
        {
            _hook_record {
                (LPVOID)0x1402f2720L,
                (LPVOID *)&TaskGetRetCode2_user,
                (LPVOID *)&TaskGetRetCode2_next,
                (LPVOID)cast_pointer_function(TaskGetRetCode2_wrapper),
                (LPVOID)cast_pointer_function((int(Task::*)())&Task::GetRetCode)
            },
            _hook_record {
                (LPVOID)0x1402f2700L,
                (LPVOID *)&TaskGetTaskBuf4_user,
                (LPVOID *)&TaskGetTaskBuf4_next,
                (LPVOID)cast_pointer_function(TaskGetTaskBuf4_wrapper),
                (LPVOID)cast_pointer_function((char*(Task::*)())&Task::GetTaskBuf)
            },
            _hook_record {
                (LPVOID)0x1402f2510L,
                (LPVOID *)&TaskGetTaskCode6_user,
                (LPVOID *)&TaskGetTaskCode6_next,
                (LPVOID)cast_pointer_function(TaskGetTaskCode6_wrapper),
                (LPVOID)cast_pointer_function((int(Task::*)())&Task::GetTaskCode)
            },
            _hook_record {
                (LPVOID)0x1403180a0L,
                (LPVOID *)&TaskInitialize8_user,
                (LPVOID *)&TaskInitialize8_next,
                (LPVOID)cast_pointer_function(TaskInitialize8_wrapper),
                (LPVOID)cast_pointer_function((bool(Task::*)(uint64_t))&Task::Initialize)
            },
            _hook_record {
                (LPVOID)0x1402f2dd0L,
                (LPVOID *)&TaskSetRetCode10_user,
                (LPVOID *)&TaskSetRetCode10_next,
                (LPVOID)cast_pointer_function(TaskSetRetCode10_wrapper),
                (LPVOID)cast_pointer_function((void(Task::*)(int))&Task::SetRetCode)
            },
            _hook_record {
                (LPVOID)0x1402f23d0L,
                (LPVOID *)&TaskSetTask12_user,
                (LPVOID *)&TaskSetTask12_next,
                (LPVOID)cast_pointer_function(TaskSetTask12_wrapper),
                (LPVOID)cast_pointer_function((void(Task::*)(int, char*, uint64_t))&Task::SetTask)
            },
            _hook_record {
                (LPVOID)0x140317f90L,
                (LPVOID *)&Taskctor_Task14_user,
                (LPVOID *)&Taskctor_Task14_next,
                (LPVOID)cast_pointer_function(Taskctor_Task14_wrapper),
                (LPVOID)cast_pointer_function((void(Task::*)())&Task::ctor_Task)
            },
            _hook_record {
                (LPVOID)0x140318090L,
                (LPVOID *)&Taskdtor_Task18_user,
                (LPVOID *)&Taskdtor_Task18_next,
                (LPVOID)cast_pointer_function(Taskdtor_Task18_wrapper),
                (LPVOID)cast_pointer_function((void(Task::*)())&Task::dtor_Task)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
