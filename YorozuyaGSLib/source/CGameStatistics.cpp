#include <CGameStatistics.hpp>


START_ATF_NAMESPACE
    CGameStatistics::CGameStatistics()
    {
        using org_ptr = void (WINAPIV*)(struct CGameStatistics*);
        (org_ptr(0x1402325c0L))(this);
    };
    void CGameStatistics::ctor_CGameStatistics()
    {
        using org_ptr = void (WINAPIV*)(struct CGameStatistics*);
        (org_ptr(0x1402325c0L))(this);
    };
    void CGameStatistics::ConvertDay(char* pszWorldName)
    {
        using org_ptr = void (WINAPIV*)(struct CGameStatistics*, char*);
        (org_ptr(0x1402326d0L))(this, pszWorldName);
    };
    struct CGameStatistics::_DAY* CGameStatistics::CurWriteData()
    {
        using org_ptr = struct CGameStatistics::_DAY* (WINAPIV*)(struct CGameStatistics*);
        return (org_ptr(0x1402326b0L))(this);
    };
    void CGameStatistics::Init()
    {
        using org_ptr = void (WINAPIV*)(struct CGameStatistics*);
        (org_ptr(0x140232670L))(this);
    };
    void CGameStatistics::WriteDayData(char* pszWorldName)
    {
        using org_ptr = void (WINAPIV*)(struct CGameStatistics*, char*);
        (org_ptr(0x140232730L))(this, pszWorldName);
    };
    CGameStatistics::~CGameStatistics()
    {
        using org_ptr = void (WINAPIV*)(struct CGameStatistics*);
        (org_ptr(0x140232650L))(this);
    };
    void CGameStatistics::dtor_CGameStatistics()
    {
        using org_ptr = void (WINAPIV*)(struct CGameStatistics*);
        (org_ptr(0x140232650L))(this);
    };
    CGameStatistics::_map::_map()
    {
        using org_ptr = void (WINAPIV*)(struct CGameStatistics::_map*);
        (org_ptr(0x140232be0L))(this);
    };
    void CGameStatistics::_map::ctor__map()
    {
        using org_ptr = void (WINAPIV*)(struct CGameStatistics::_map*);
        (org_ptr(0x140232be0L))(this);
    };
    CGameStatistics::_DAY::_DAY()
    {
        using org_ptr = void (WINAPIV*)(struct CGameStatistics::_DAY*);
        (org_ptr(0x140232b60L))(this);
    };
    void CGameStatistics::_DAY::ctor__DAY()
    {
        using org_ptr = void (WINAPIV*)(struct CGameStatistics::_DAY*);
        (org_ptr(0x140232b60L))(this);
    };
    void CGameStatistics::_DAY::init()
    {
        using org_ptr = void (WINAPIV*)(struct CGameStatistics::_DAY*);
        (org_ptr(0x140232c00L))(this);
    };
END_ATF_NAMESPACE
