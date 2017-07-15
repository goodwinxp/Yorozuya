#include <TimeItem.hpp>


START_ATF_NAMESPACE
    bool TimeItem::CheckGoods()
    {
        using org_ptr = bool (WINAPIV*)(struct TimeItem*);
        return (org_ptr(0x14030e7d0L))(this);
    };
    struct _TimeItem_fld* TimeItem::FindTimeRec(int nTbl, int nIdx)
    {
        using org_ptr = struct _TimeItem_fld* (WINAPIV*)(int, int);
        return (org_ptr(0x14030e510L))(nTbl, nIdx);
    };
    bool TimeItem::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct TimeItem*);
        return (org_ptr(0x14030e160L))(this);
    };
    struct TimeItem* TimeItem::Instance()
    {
        using org_ptr = struct TimeItem* (WINAPIV*)();
        return (org_ptr(0x14030e0a0L))();
    };
    bool TimeItem::MakeLinkTable(char* szMsg, int nSize)
    {
        using org_ptr = bool (WINAPIV*)(struct TimeItem*, char*, int);
        return (org_ptr(0x14030e270L))(this, szMsg, nSize);
    };
    bool TimeItem::ReadGoods()
    {
        using org_ptr = bool (WINAPIV*)(struct TimeItem*);
        return (org_ptr(0x14030e6b0L))(this);
    };
    TimeItem::TimeItem()
    {
        using org_ptr = void (WINAPIV*)(struct TimeItem*);
        (org_ptr(0x14030f3e0L))(this);
    };
    void TimeItem::ctor_TimeItem()
    {
        using org_ptr = void (WINAPIV*)(struct TimeItem*);
        (org_ptr(0x14030f3e0L))(this);
    };
END_ATF_NAMESPACE
