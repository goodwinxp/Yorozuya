#include <_STAT_DB_BASE.hpp>


START_ATF_NAMESPACE
    int _STAT_DB_BASE::GetStatIndex(char byMasteryClass, char byIndex)
    {
        using org_ptr = int (WINAPIV*)(char, char);
        return (org_ptr(0x14007c560L))(byMasteryClass, byIndex);
    };
    void _STAT_DB_BASE::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _STAT_DB_BASE*);
        (org_ptr(0x140074640L))(this);
    };
    bool _STAT_DB_BASE::IsRangePerMastery(char byMasteryClass, char byIndex)
    {
        using org_ptr = bool (WINAPIV*)(char, char);
        return (org_ptr(0x14007c660L))(byMasteryClass, byIndex);
    };
    _STAT_DB_BASE::_STAT_DB_BASE()
    {
        using org_ptr = void (WINAPIV*)(struct _STAT_DB_BASE*);
        (org_ptr(0x1400745f0L))(this);
    };
    void _STAT_DB_BASE::ctor__STAT_DB_BASE()
    {
        using org_ptr = void (WINAPIV*)(struct _STAT_DB_BASE*);
        (org_ptr(0x1400745f0L))(this);
    };
END_ATF_NAMESPACE
