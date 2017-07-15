#include <Worker.hpp>


START_ATF_NAMESPACE
    bool Worker::Initialize(int nLoop, int nTerm)
    {
        using org_ptr = bool (WINAPIV*)(struct Worker*, int, int);
        return (org_ptr(0x1403182f0L))(this, nLoop, nTerm);
    };
    void Worker::Start()
    {
        using org_ptr = void (WINAPIV*)(struct Worker*);
        (org_ptr(0x140318550L))(this);
    };
    void Worker::Stop()
    {
        using org_ptr = void (WINAPIV*)(struct Worker*);
        (org_ptr(0x1403185a0L))(this);
    };
    Worker::Worker(char* pWorkerName, int nMaxTskNum, int nMaxTskBufSize)
    {
        using org_ptr = void (WINAPIV*)(struct Worker*, char*, int, int);
        (org_ptr(0x140318200L))(this, pWorkerName, nMaxTskNum, nMaxTskBufSize);
    };
    void Worker::ctor_Worker(char* pWorkerName, int nMaxTskNum, int nMaxTskBufSize)
    {
        using org_ptr = void (WINAPIV*)(struct Worker*, char*, int, int);
        (org_ptr(0x140318200L))(this, pWorkerName, nMaxTskNum, nMaxTskBufSize);
    };
    void Worker::s_loop(void* pArg)
    {
        using org_ptr = void (WINAPIV*)(void*);
        (org_ptr(0x140318450L))(pArg);
    };
    Worker::~Worker()
    {
        using org_ptr = void (WINAPIV*)(struct Worker*);
        (org_ptr(0x1403182a0L))(this);
    };
    void Worker::dtor_Worker()
    {
        using org_ptr = void (WINAPIV*)(struct Worker*);
        (org_ptr(0x1403182a0L))(this);
    };
END_ATF_NAMESPACE
