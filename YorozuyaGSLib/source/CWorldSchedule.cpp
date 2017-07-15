#include <CWorldSchedule.hpp>


START_ATF_NAMESPACE
    CWorldSchedule::CWorldSchedule()
    {
        using org_ptr = void (WINAPIV*)(struct CWorldSchedule*);
        (org_ptr(0x1403f34f0L))(this);
    };
    void CWorldSchedule::ctor_CWorldSchedule()
    {
        using org_ptr = void (WINAPIV*)(struct CWorldSchedule*);
        (org_ptr(0x1403f34f0L))(this);
    };
    int CWorldSchedule::CalcScheduleCursor(int nHour, int nMin)
    {
        using org_ptr = int (WINAPIV*)(struct CWorldSchedule*, int, int);
        return (org_ptr(0x1403f4180L))(this, nHour, nMin);
    };
    void CWorldSchedule::ChangeSchCursor(struct _WorldSchedule_fld* pFld, int nPassMin)
    {
        using org_ptr = void (WINAPIV*)(struct CWorldSchedule*, struct _WorldSchedule_fld*, int);
        (org_ptr(0x1403f3ee0L))(this, pFld, nPassMin);
    };
    void CWorldSchedule::CheckSch()
    {
        using org_ptr = void (WINAPIV*)(struct CWorldSchedule*);
        (org_ptr(0x1403f3aa0L))(this);
    };
    bool CWorldSchedule::DataCheck()
    {
        using org_ptr = bool (WINAPIV*)(struct CWorldSchedule*);
        return (org_ptr(0x1403f3ff0L))(this);
    };
    bool CWorldSchedule::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct CWorldSchedule*);
        return (org_ptr(0x1403f3590L))(this);
    };
    void CWorldSchedule::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CWorldSchedule*);
        (org_ptr(0x1403f3a30L))(this);
    };
    void CWorldSchedule::PassOneStep()
    {
        using org_ptr = void (WINAPIV*)(struct CWorldSchedule*);
        (org_ptr(0x1403f3e30L))(this);
    };
    CWorldSchedule::~CWorldSchedule()
    {
        using org_ptr = void (WINAPIV*)(struct CWorldSchedule*);
        (org_ptr(0x1403f4630L))(this);
    };
    void CWorldSchedule::dtor_CWorldSchedule()
    {
        using org_ptr = void (WINAPIV*)(struct CWorldSchedule*);
        (org_ptr(0x1403f4630L))(this);
    };
END_ATF_NAMESPACE
