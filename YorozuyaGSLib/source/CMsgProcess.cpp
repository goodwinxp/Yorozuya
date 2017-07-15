#include <CMsgProcess.hpp>


START_ATF_NAMESPACE
    CMsgProcess::CMsgProcess(int nObjNum)
    {
        using org_ptr = void (WINAPIV*)(struct CMsgProcess*, int);
        (org_ptr(0x1401bfed0L))(this, nObjNum);
    };
    void CMsgProcess::ctor_CMsgProcess(int nObjNum)
    {
        using org_ptr = void (WINAPIV*)(struct CMsgProcess*, int);
        (org_ptr(0x1401bfed0L))(this, nObjNum);
    };
    CMsgProcess::CMsgProcess()
    {
        using org_ptr = void (WINAPIV*)(struct CMsgProcess*);
        (org_ptr(0x1401bff30L))(this);
    };
    void CMsgProcess::ctor_CMsgProcess()
    {
        using org_ptr = void (WINAPIV*)(struct CMsgProcess*);
        (org_ptr(0x1401bff30L))(this);
    };
    void CMsgProcess::ProcessMessage(struct _message* pMsg)
    {
        using org_ptr = void (WINAPIV*)(struct CMsgProcess*, struct _message*);
        (org_ptr(0x1401bffd0L))(this, pMsg);
    };
    CMsgProcess::~CMsgProcess()
    {
        using org_ptr = void (WINAPIV*)(struct CMsgProcess*);
        (org_ptr(0x1401bff80L))(this);
    };
    void CMsgProcess::dtor_CMsgProcess()
    {
        using org_ptr = void (WINAPIV*)(struct CMsgProcess*);
        (org_ptr(0x1401bff80L))(this);
    };
END_ATF_NAMESPACE
