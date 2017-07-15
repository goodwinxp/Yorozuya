#include <CRealMoveRequestDelayChecker.hpp>


START_ATF_NAMESPACE
    CRealMoveRequestDelayChecker::CRealMoveRequestDelayChecker()
    {
        using org_ptr = void (WINAPIV*)(struct CRealMoveRequestDelayChecker*);
        (org_ptr(0x140073be0L))(this);
    };
    void CRealMoveRequestDelayChecker::ctor_CRealMoveRequestDelayChecker()
    {
        using org_ptr = void (WINAPIV*)(struct CRealMoveRequestDelayChecker*);
        (org_ptr(0x140073be0L))(this);
    };
    bool CRealMoveRequestDelayChecker::Check(struct CPlayer* pkUser)
    {
        using org_ptr = bool (WINAPIV*)(struct CRealMoveRequestDelayChecker*, struct CPlayer*);
        return (org_ptr(0x140122240L))(this, pkUser);
    };
    bool CRealMoveRequestDelayChecker::CheckDelay(unsigned int dwCurTime, unsigned int dwIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CRealMoveRequestDelayChecker*, unsigned int, unsigned int);
        return (org_ptr(0x140122780L))(this, dwCurTime, dwIndex);
    };
    bool CRealMoveRequestDelayChecker::GetCurInx(unsigned int* pInx)
    {
        using org_ptr = bool (WINAPIV*)(struct CRealMoveRequestDelayChecker*, unsigned int*);
        return (org_ptr(0x1401226c0L))(this, pInx);
    };
    void CRealMoveRequestDelayChecker::IncNodeIndex()
    {
        using org_ptr = void (WINAPIV*)(struct CRealMoveRequestDelayChecker*);
        (org_ptr(0x140122810L))(this);
    };
    bool CRealMoveRequestDelayChecker::Init(unsigned int dwListCnt)
    {
        using org_ptr = bool (WINAPIV*)(struct CRealMoveRequestDelayChecker*, unsigned int);
        return (org_ptr(0x1401220e0L))(this, dwListCnt);
    };
    void CRealMoveRequestDelayChecker::Reset()
    {
        using org_ptr = void (WINAPIV*)(struct CRealMoveRequestDelayChecker*);
        (org_ptr(0x1401221a0L))(this);
    };
    CRealMoveRequestDelayChecker::~CRealMoveRequestDelayChecker()
    {
        using org_ptr = void (WINAPIV*)(struct CRealMoveRequestDelayChecker*);
        (org_ptr(0x140073cf0L))(this);
    };
    void CRealMoveRequestDelayChecker::dtor_CRealMoveRequestDelayChecker()
    {
        using org_ptr = void (WINAPIV*)(struct CRealMoveRequestDelayChecker*);
        (org_ptr(0x140073cf0L))(this);
    };
    
END_ATF_NAMESPACE
