#include <_SFCONT_DB_BASE.hpp>


START_ATF_NAMESPACE
    void _SFCONT_DB_BASE::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _SFCONT_DB_BASE*);
        (org_ptr(0x140076b00L))(this);
    };
    _SFCONT_DB_BASE::_SFCONT_DB_BASE()
    {
        using org_ptr = void (WINAPIV*)(struct _SFCONT_DB_BASE*);
        (org_ptr(0x140076ab0L))(this);
    };
    void _SFCONT_DB_BASE::ctor__SFCONT_DB_BASE()
    {
        using org_ptr = void (WINAPIV*)(struct _SFCONT_DB_BASE*);
        (org_ptr(0x140076ab0L))(this);
    };
    char _SFCONT_DB_BASE::_LIST::GetEffectCode()
    {
        using org_ptr = char (WINAPIV*)(struct _SFCONT_DB_BASE::_LIST*);
        return (org_ptr(0x14007a480L))(this);
    };
    uint16_t _SFCONT_DB_BASE::_LIST::GetEffectIndex()
    {
        using org_ptr = uint16_t (WINAPIV*)(struct _SFCONT_DB_BASE::_LIST*);
        return (org_ptr(0x14007a4a0L))(this);
    };
    uint16_t _SFCONT_DB_BASE::_LIST::GetLeftTime()
    {
        using org_ptr = uint16_t (WINAPIV*)(struct _SFCONT_DB_BASE::_LIST*);
        return (org_ptr(0x14007a4e0L))(this);
    };
    char _SFCONT_DB_BASE::_LIST::GetLv()
    {
        using org_ptr = char (WINAPIV*)(struct _SFCONT_DB_BASE::_LIST*);
        return (org_ptr(0x14007a4c0L))(this);
    };
    char _SFCONT_DB_BASE::_LIST::GetOrder()
    {
        using org_ptr = char (WINAPIV*)(struct _SFCONT_DB_BASE::_LIST*);
        return (org_ptr(0x14007a460L))(this);
    };
    void _SFCONT_DB_BASE::_LIST::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _SFCONT_DB_BASE::_LIST*);
        (org_ptr(0x140076bb0L))(this);
    };
    bool _SFCONT_DB_BASE::_LIST::IsFilled()
    {
        using org_ptr = bool (WINAPIV*)(struct _SFCONT_DB_BASE::_LIST*);
        return (org_ptr(0x14007a500L))(this);
    };
    void _SFCONT_DB_BASE::_LIST::SetKey(char pl_byOrder, char pl_byEffectCode, uint16_t pl_wEffectIndex, char pl_byLv, uint16_t pl_wLeftTime)
    {
        using org_ptr = void (WINAPIV*)(struct _SFCONT_DB_BASE::_LIST*, char, char, uint16_t, char, uint16_t);
        (org_ptr(0x140120b60L))(this, pl_byOrder, pl_byEffectCode, pl_wEffectIndex, pl_byLv, pl_wLeftTime);
    };
    void _SFCONT_DB_BASE::_LIST::SetLeftTime(uint16_t pl_wLeftTime)
    {
        using org_ptr = void (WINAPIV*)(struct _SFCONT_DB_BASE::_LIST*, uint16_t);
        (org_ptr(0x140120c30L))(this, pl_wLeftTime);
    };
    void _SFCONT_DB_BASE::_LIST::SetOrder(char pl_byOrder)
    {
        using org_ptr = void (WINAPIV*)(struct _SFCONT_DB_BASE::_LIST*, char);
        (org_ptr(0x14007d320L))(this, pl_byOrder);
    };
END_ATF_NAMESPACE
