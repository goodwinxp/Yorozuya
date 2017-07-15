#include <Task.hpp>


START_ATF_NAMESPACE
    int Task::GetRetCode()
    {
        using org_ptr = int (WINAPIV*)(struct Task*);
        return (org_ptr(0x1402f2720L))(this);
    };
    char* Task::GetTaskBuf()
    {
        using org_ptr = char* (WINAPIV*)(struct Task*);
        return (org_ptr(0x1402f2700L))(this);
    };
    int Task::GetTaskCode()
    {
        using org_ptr = int (WINAPIV*)(struct Task*);
        return (org_ptr(0x1402f2510L))(this);
    };
    bool Task::Initialize(uint64_t nMaxBufSize)
    {
        using org_ptr = bool (WINAPIV*)(struct Task*, uint64_t);
        return (org_ptr(0x1403180a0L))(this, nMaxBufSize);
    };
    void Task::SetRetCode(int nCode)
    {
        using org_ptr = void (WINAPIV*)(struct Task*, int);
        (org_ptr(0x1402f2dd0L))(this, nCode);
    };
    void Task::SetTask(int nTaskCode, char* p, uint64_t size)
    {
        using org_ptr = void (WINAPIV*)(struct Task*, int, char*, uint64_t);
        (org_ptr(0x1402f23d0L))(this, nTaskCode, p, size);
    };
    Task::Task()
    {
        using org_ptr = void (WINAPIV*)(struct Task*);
        (org_ptr(0x140317f90L))(this);
    };
    void Task::ctor_Task()
    {
        using org_ptr = void (WINAPIV*)(struct Task*);
        (org_ptr(0x140317f90L))(this);
    };
    Task::~Task()
    {
        using org_ptr = void (WINAPIV*)(struct Task*);
        (org_ptr(0x140318090L))(this);
    };
    void Task::dtor_Task()
    {
        using org_ptr = void (WINAPIV*)(struct Task*);
        (org_ptr(0x140318090L))(this);
    };
END_ATF_NAMESPACE
