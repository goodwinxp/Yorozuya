#include <TaskPool.hpp>


START_ATF_NAMESPACE
    TaskPool::RCODE TaskPool::Initialize(int nTskMaxNum, int nMaxTskSize)
    {
        using org_ptr = TaskPool::RCODE (WINAPIV*)(struct TaskPool*, int, int);
        return (org_ptr(0x140317d60L))(this, nTskMaxNum, nMaxTskSize);
    };
    bool TaskPool::IsEmpty()
    {
        using org_ptr = bool (WINAPIV*)(struct TaskPool*);
        return (org_ptr(0x1403188c0L))(this);
    };
    struct Task* TaskPool::PopCompleteTsk(unsigned int* nIdx)
    {
        using org_ptr = struct Task* (WINAPIV*)(struct TaskPool*, unsigned int*);
        return (org_ptr(0x1402f2530L))(this, nIdx);
    };
    struct Task* TaskPool::PopWaitTsk(unsigned int* nIdx)
    {
        using org_ptr = struct Task* (WINAPIV*)(struct TaskPool*, unsigned int*);
        return (org_ptr(0x1402f2df0L))(this, nIdx);
    };
    TaskPool::RCODE TaskPool::PushCompleteTsk(unsigned int nIdx)
    {
        using org_ptr = TaskPool::RCODE (WINAPIV*)(struct TaskPool*, unsigned int);
        return (org_ptr(0x1402f2ea0L))(this, nIdx);
    };
    TaskPool::RCODE TaskPool::PushEmptyTsk(unsigned int nIdx)
    {
        using org_ptr = TaskPool::RCODE (WINAPIV*)(struct TaskPool*, unsigned int);
        return (org_ptr(0x1402f25e0L))(this, nIdx);
    };
    TaskPool::RCODE TaskPool::PushWaitTsk(int nTaskCode, char* p, uint64_t size)
    {
        using org_ptr = TaskPool::RCODE (WINAPIV*)(struct TaskPool*, int, char*, uint64_t);
        return (org_ptr(0x1402f22c0L))(this, nTaskCode, p, size);
    };
    void TaskPool::Release()
    {
        using org_ptr = void (WINAPIV*)(struct TaskPool*);
        (org_ptr(0x140317df0L))(this);
    };
    TaskPool::TaskPool()
    {
        using org_ptr = void (WINAPIV*)(struct TaskPool*);
        (org_ptr(0x1403187b0L))(this);
    };
    void TaskPool::ctor_TaskPool()
    {
        using org_ptr = void (WINAPIV*)(struct TaskPool*);
        (org_ptr(0x1403187b0L))(this);
    };
    bool TaskPool::_create_task(int nMaxTskSize)
    {
        using org_ptr = bool (WINAPIV*)(struct TaskPool*, int);
        return (org_ptr(0x140317a50L))(this, nMaxTskSize);
    };
    bool TaskPool::_init_index_lists()
    {
        using org_ptr = bool (WINAPIV*)(struct TaskPool*);
        return (org_ptr(0x140317c60L))(this);
    };
    
END_ATF_NAMESPACE
