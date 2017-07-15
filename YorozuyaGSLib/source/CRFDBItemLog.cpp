#include <CRFDBItemLog.hpp>


START_ATF_NAMESPACE
    CRFDBItemLog::CRFDBItemLog(unsigned int dwLocalDate)
    {
        using org_ptr = void (WINAPIV*)(struct CRFDBItemLog*, unsigned int);
        (org_ptr(0x140485420L))(this, dwLocalDate);
    };
    void CRFDBItemLog::ctor_CRFDBItemLog(unsigned int dwLocalDate)
    {
        using org_ptr = void (WINAPIV*)(struct CRFDBItemLog*, unsigned int);
        (org_ptr(0x140485420L))(this, dwLocalDate);
    };
    bool CRFDBItemLog::CreateTblLtd(int nKorTime)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFDBItemLog*, int);
        return (org_ptr(0x140485500L))(this, nKorTime);
    };
    bool CRFDBItemLog::CreateTblLtd_Expend(int nKorTime)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFDBItemLog*, int);
        return (org_ptr(0x140485730L))(this, nKorTime);
    };
    bool CRFDBItemLog::CreateTblLtd_ItemInfo(int nKorTime)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFDBItemLog*, int);
        return (org_ptr(0x140485630L))(this, nKorTime);
    };
    void CRFDBItemLog::SetKorTime(unsigned int dwKorTime)
    {
        using org_ptr = void (WINAPIV*)(struct CRFDBItemLog*, unsigned int);
        (org_ptr(0x14024bf20L))(this, dwKorTime);
    };
    bool CRFDBItemLog::insert_expend(struct _LTD_EXPEND* pe)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFDBItemLog*, struct _LTD_EXPEND*);
        return (org_ptr(0x140485b80L))(this, pe);
    };
    bool CRFDBItemLog::insert_iteminfo(struct _LTD_ITEMINFO* pi, char byIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFDBItemLog*, struct _LTD_ITEMINFO*, char);
        return (org_ptr(0x1404859a0L))(this, pi, byIndex);
    };
    bool CRFDBItemLog::insert_ltd(struct _LTD* pl)
    {
        using org_ptr = bool (WINAPIV*)(struct CRFDBItemLog*, struct _LTD*);
        return (org_ptr(0x140485810L))(this, pl);
    };
    CRFDBItemLog::~CRFDBItemLog()
    {
        using org_ptr = void (WINAPIV*)(struct CRFDBItemLog*);
        (org_ptr(0x1404854b0L))(this);
    };
    void CRFDBItemLog::dtor_CRFDBItemLog()
    {
        using org_ptr = void (WINAPIV*)(struct CRFDBItemLog*);
        (org_ptr(0x1404854b0L))(this);
    };
END_ATF_NAMESPACE
