#include <CPvpPointLimiter.hpp>


START_ATF_NAMESPACE
    CPvpPointLimiter::CPvpPointLimiter()
    {
        using org_ptr = void (WINAPIV*)(struct CPvpPointLimiter*);
        (org_ptr(0x1401250f0L))(this);
    };
    void CPvpPointLimiter::ctor_CPvpPointLimiter()
    {
        using org_ptr = void (WINAPIV*)(struct CPvpPointLimiter*);
        (org_ptr(0x1401250f0L))(this);
    };
    void CPvpPointLimiter::CheatUpdate(long double dOriginalPvpPoint)
    {
        using org_ptr = void (WINAPIV*)(struct CPvpPointLimiter*, long double);
        (org_ptr(0x140125b60L))(this, dOriginalPvpPoint);
    };
    void CPvpPointLimiter::Clear(int64_t tUpdateTime, long double dOriginalPvpPoint, struct CPlayer* pkSelf)
    {
        using org_ptr = void (WINAPIV*)(struct CPvpPointLimiter*, int64_t, long double, struct CPlayer*);
        (org_ptr(0x140125850L))(this, tUpdateTime, dOriginalPvpPoint, pkSelf);
    };
    bool CPvpPointLimiter::Set(long double dOriginalPvpPoint, struct _PVPPOINT_LIMIT_DB_BASE* pkInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct CPvpPointLimiter*, long double, struct _PVPPOINT_LIMIT_DB_BASE*);
        return (org_ptr(0x140125120L))(this, dOriginalPvpPoint, pkInfo);
    };
    bool CPvpPointLimiter::TakePvpPoint(long double* dPvpPoint, struct CPlayer* pkSelf, struct CPlayer* pkDest)
    {
        using org_ptr = bool (WINAPIV*)(struct CPvpPointLimiter*, long double*, struct CPlayer*, struct CPlayer*);
        return (org_ptr(0x140125300L))(this, dPvpPoint, pkSelf, pkDest);
    };
    void CPvpPointLimiter::Update(int64_t tUpdateTime, long double dOriginalPvpPoint, long double dUsePoint, bool bUseUp)
    {
        using org_ptr = void (WINAPIV*)(struct CPvpPointLimiter*, int64_t, long double, long double, bool);
        (org_ptr(0x140125a10L))(this, tUpdateTime, dOriginalPvpPoint, dUsePoint, bUseUp);
    };
    CPvpPointLimiter::~CPvpPointLimiter()
    {
        using org_ptr = void (WINAPIV*)(struct CPvpPointLimiter*);
        (org_ptr(0x140125110L))(this);
    };
    void CPvpPointLimiter::dtor_CPvpPointLimiter()
    {
        using org_ptr = void (WINAPIV*)(struct CPvpPointLimiter*);
        (org_ptr(0x140125110L))(this);
    };
END_ATF_NAMESPACE
