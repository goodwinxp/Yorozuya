#include <TimeLimitJade.hpp>


START_ATF_NAMESPACE
    int TimeLimitJade::CheckEndTime()
    {
        using org_ptr = int (WINAPIV*)(struct TimeLimitJade*);
        return (org_ptr(0x1403fa240L))(this);
    };
    int TimeLimitJade::CheckStartTime()
    {
        using org_ptr = int (WINAPIV*)(struct TimeLimitJade*);
        return (org_ptr(0x1403fa340L))(this);
    };
    bool TimeLimitJade::DeleteUseList(struct _STORAGE_LIST::_db_con* pkItem, bool bItemDel)
    {
        using org_ptr = bool (WINAPIV*)(struct TimeLimitJade*, struct _STORAGE_LIST::_db_con*, bool);
        return (org_ptr(0x1403fa860L))(this, pkItem, bItemDel);
    };
    bool TimeLimitJade::DeleteWaitList(struct _STORAGE_LIST::_db_con* pkItem)
    {
        using org_ptr = bool (WINAPIV*)(struct TimeLimitJade*, struct _STORAGE_LIST::_db_con*);
        return (org_ptr(0x1403fa710L))(this, pkItem);
    };
    bool TimeLimitJade::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct TimeLimitJade*);
        return (org_ptr(0x1403fa1e0L))(this);
    };
    bool TimeLimitJade::InitUse()
    {
        using org_ptr = bool (WINAPIV*)(struct TimeLimitJade*);
        return (org_ptr(0x1403fb280L))(this);
    };
    bool TimeLimitJade::InitWait()
    {
        using org_ptr = bool (WINAPIV*)(struct TimeLimitJade*);
        return (org_ptr(0x1403fb230L))(this);
    };
    bool TimeLimitJade::InsertUseList(struct _STORAGE_LIST::_db_con* pkItem, unsigned int dwStart, unsigned int dwEnd)
    {
        using org_ptr = bool (WINAPIV*)(struct TimeLimitJade*, struct _STORAGE_LIST::_db_con*, unsigned int, unsigned int);
        return (org_ptr(0x1403fa7d0L))(this, pkItem, dwStart, dwEnd);
    };
    bool TimeLimitJade::InsertWaitList(struct _STORAGE_LIST::_db_con* pkItem)
    {
        using org_ptr = bool (WINAPIV*)(struct TimeLimitJade*, struct _STORAGE_LIST::_db_con*);
        return (org_ptr(0x1403fa640L))(this, pkItem);
    };
    void TimeLimitJade::Release()
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitJade*);
        (org_ptr(0x1403fb7f0L))(this);
    };
    TimeLimitJade::TimeLimitJade(struct CPlayer* p)
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitJade*, struct CPlayer*);
        (org_ptr(0x1403fb400L))(this, p);
    };
    void TimeLimitJade::ctor_TimeLimitJade(struct CPlayer* p)
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitJade*, struct CPlayer*);
        (org_ptr(0x1403fb400L))(this, p);
    };
    TimeLimitJade::~TimeLimitJade()
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitJade*);
        (org_ptr(0x1403fb8c0L))(this);
    };
    void TimeLimitJade::dtor_TimeLimitJade()
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitJade*);
        (org_ptr(0x1403fb8c0L))(this);
    };
    
    TimeLimitJade::WaitCell::WaitCell(struct _STORAGE_LIST::_db_con* pItem)
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitJade::WaitCell*, struct _STORAGE_LIST::_db_con*);
        (org_ptr(0x1403fb340L))(this, pItem);
    };
    void TimeLimitJade::WaitCell::ctor_WaitCell(struct _STORAGE_LIST::_db_con* pItem)
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitJade::WaitCell*, struct _STORAGE_LIST::_db_con*);
        (org_ptr(0x1403fb340L))(this, pItem);
    };
    TimeLimitJade::WaitCell::WaitCell(struct _STORAGE_LIST::_db_con* pItem, uint16_t wStartTime, unsigned int dwUseTime)
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitJade::WaitCell*, struct _STORAGE_LIST::_db_con*, uint16_t, unsigned int);
        (org_ptr(0x1403fb2e0L))(this, pItem, wStartTime, dwUseTime);
    };
    void TimeLimitJade::WaitCell::ctor_WaitCell(struct _STORAGE_LIST::_db_con* pItem, uint16_t wStartTime, unsigned int dwUseTime)
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitJade::WaitCell*, struct _STORAGE_LIST::_db_con*, uint16_t, unsigned int);
        (org_ptr(0x1403fb2e0L))(this, pItem, wStartTime, dwUseTime);
    };
    TimeLimitJade::WaitCell::WaitCell()
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitJade::WaitCell*);
        (org_ptr(0x1403fc4c0L))(this);
    };
    void TimeLimitJade::WaitCell::ctor_WaitCell()
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitJade::WaitCell*);
        (org_ptr(0x1403fc4c0L))(this);
    };
    TimeLimitJade::UseCell::UseCell(struct _STORAGE_LIST::_db_con* pItem)
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitJade::UseCell*, struct _STORAGE_LIST::_db_con*);
        (org_ptr(0x1403fb3d0L))(this, pItem);
    };
    void TimeLimitJade::UseCell::ctor_UseCell(struct _STORAGE_LIST::_db_con* pItem)
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitJade::UseCell*, struct _STORAGE_LIST::_db_con*);
        (org_ptr(0x1403fb3d0L))(this, pItem);
    };
    TimeLimitJade::UseCell::UseCell(struct _STORAGE_LIST::_db_con* pItem, uint16_t wStartTime, unsigned int dwUseTime)
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitJade::UseCell*, struct _STORAGE_LIST::_db_con*, uint16_t, unsigned int);
        (org_ptr(0x1403fb370L))(this, pItem, wStartTime, dwUseTime);
    };
    void TimeLimitJade::UseCell::ctor_UseCell(struct _STORAGE_LIST::_db_con* pItem, uint16_t wStartTime, unsigned int dwUseTime)
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitJade::UseCell*, struct _STORAGE_LIST::_db_con*, uint16_t, unsigned int);
        (org_ptr(0x1403fb370L))(this, pItem, wStartTime, dwUseTime);
    };
    TimeLimitJade::UseCell::UseCell()
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitJade::UseCell*);
        (org_ptr(0x1403fcf00L))(this);
    };
    void TimeLimitJade::UseCell::ctor_UseCell()
    {
        using org_ptr = void (WINAPIV*)(struct TimeLimitJade::UseCell*);
        (org_ptr(0x1403fcf00L))(this);
    };
END_ATF_NAMESPACE
