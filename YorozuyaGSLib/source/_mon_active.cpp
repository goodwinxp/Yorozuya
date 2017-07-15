#include <_mon_active.hpp>


START_ATF_NAMESPACE
    void _mon_active::BossScheduleSave()
    {
        using org_ptr = void (WINAPIV*)(struct _mon_active*);
        (org_ptr(0x14018aaa0L))(this);
    };
    struct BossSchedule* _mon_active::GetBossSchedule()
    {
        using org_ptr = struct BossSchedule* (WINAPIV*)(struct _mon_active*);
        return (org_ptr(0x14018ae90L))(this);
    };
    bool _mon_active::SetActive(struct _mon_active_fld* pRec, struct _mon_block* pBlk, int nMonRecIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct _mon_active*, struct _mon_active_fld*, struct _mon_block*, int);
        return (org_ptr(0x140189170L))(this, pRec, pBlk, nMonRecIndex);
    };
    void _mon_active::SetBossSchedule(struct BossSchedule* pBossSchedule)
    {
        using org_ptr = void (WINAPIV*)(struct _mon_active*, struct BossSchedule*);
        (org_ptr(0x14041b6f0L))(this, pBossSchedule);
    };
    bool _mon_active::SetCurMonNum(int nAlter)
    {
        using org_ptr = bool (WINAPIV*)(struct _mon_active*, int);
        return (org_ptr(0x14014bd60L))(this, nAlter);
    };
    void _mon_active::SetZeroMonNum()
    {
        using org_ptr = void (WINAPIV*)(struct _mon_active*);
        (org_ptr(0x140188fc0L))(this);
    };
    _mon_active::_mon_active()
    {
        using org_ptr = void (WINAPIV*)(struct _mon_active*);
        (org_ptr(0x1401888c0L))(this);
    };
    void _mon_active::ctor__mon_active()
    {
        using org_ptr = void (WINAPIV*)(struct _mon_active*);
        (org_ptr(0x1401888c0L))(this);
    };
END_ATF_NAMESPACE
