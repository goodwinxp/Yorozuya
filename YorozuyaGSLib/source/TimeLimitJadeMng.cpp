#include <TimeLimitJadeMng.hpp>


START_ATF_NAMESPACE
    bool TimeLimitJadeMng::DeleteList(uint16_t wIdx, struct _STORAGE_LIST::_db_con* pkItem)
    {
        using org_ptr = bool (WINAPIV*)(struct TimeLimitJadeMng*, uint16_t, struct _STORAGE_LIST::_db_con*);
        return (org_ptr(0x1403fac50L))(this, wIdx, pkItem);
    };
    struct TimeLimitJade* TimeLimitJadeMng::GetSheet(uint16_t wIndex)
    {
        using org_ptr = struct TimeLimitJade* (WINAPIV*)(struct TimeLimitJadeMng*, uint16_t);
        return (org_ptr(0x14007c160L))(this, wIndex);
    };
    bool TimeLimitJadeMng::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct TimeLimitJadeMng*);
        return (org_ptr(0x1403fa980L))(this);
    };
    bool TimeLimitJadeMng::InsertList(uint16_t wIdx, struct _STORAGE_LIST::_db_con* pkItem)
    {
        using org_ptr = bool (WINAPIV*)(struct TimeLimitJadeMng*, uint16_t, struct _STORAGE_LIST::_db_con*);
        return (org_ptr(0x1403fabd0L))(this, wIdx, pkItem);
    };
    struct TimeLimitJadeMng* TimeLimitJadeMng::Instance()
    {
        using org_ptr = struct TimeLimitJadeMng* (WINAPIV*)();
        return (org_ptr(0x14007a2d0L))();
    };
    void TimeLimitJadeMng::Release(uint16_t wIdx)
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitJadeMng*, uint16_t);
        (org_ptr(0x1403fad40L))(this, wIdx);
    };
    void TimeLimitJadeMng::ReleaseAll()
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitJadeMng*);
        (org_ptr(0x1403fada0L))(this);
    };
    TimeLimitJadeMng::TimeLimitJadeMng()
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitJadeMng*);
        (org_ptr(0x14007a3b0L))(this);
    };
    void TimeLimitJadeMng::ctor_TimeLimitJadeMng()
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitJadeMng*);
        (org_ptr(0x14007a3b0L))(this);
    };
    TimeLimitJadeMng::~TimeLimitJadeMng()
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitJadeMng*);
        (org_ptr(0x1403fba90L))(this);
    };
    void TimeLimitJadeMng::dtor_TimeLimitJadeMng()
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitJadeMng*);
        (org_ptr(0x1403fba90L))(this);
    };
END_ATF_NAMESPACE
