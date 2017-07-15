#include <US__AbstractThread.hpp>


START_ATF_NAMESPACE
    US::AbstractThread::AbstractThread()
    {
        using org_ptr = void (WINAPIV*)(struct US::AbstractThread*);
        (org_ptr(0x14041d660L))(this);
    };
    void US::AbstractThread::ctor_AbstractThread()
    {
        using org_ptr = void (WINAPIV*)(struct US::AbstractThread*);
        (org_ptr(0x14041d660L))(this);
    };
    US::AbstractThread::~AbstractThread()
    {
        using org_ptr = void (WINAPIV*)(struct US::AbstractThread*);
        (org_ptr(0x14041d6e0L))(this);
    };
    void US::AbstractThread::dtor_AbstractThread()
    {
        using org_ptr = void (WINAPIV*)(struct US::AbstractThread*);
        (org_ptr(0x14041d6e0L))(this);
    };
END_ATF_NAMESPACE
