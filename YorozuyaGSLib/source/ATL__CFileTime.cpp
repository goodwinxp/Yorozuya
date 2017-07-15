#include <ATL__CFileTime.hpp>


START_ATF_NAMESPACE
    ATL::CFileTime::CFileTime(struct _FILETIME* ft)
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CFileTime*, struct _FILETIME*);
        (org_ptr(0x140673920L))(this, ft);
    };
    void ATL::CFileTime::ctor_CFileTime(struct _FILETIME* ft)
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CFileTime*, struct _FILETIME*);
        (org_ptr(0x140673920L))(this, ft);
    };
    ATL::CFileTime::CFileTime(uint64_t nTime)
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CFileTime*, uint64_t);
        (org_ptr(0x140673960L))(this, nTime);
    };
    void ATL::CFileTime::ctor_CFileTime(uint64_t nTime)
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CFileTime*, uint64_t);
        (org_ptr(0x140673960L))(this, nTime);
    };
    ATL::CFileTime::CFileTime()
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CFileTime*);
        (org_ptr(0x1406738f0L))(this);
    };
    void ATL::CFileTime::ctor_CFileTime()
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CFileTime*);
        (org_ptr(0x1406738f0L))(this);
    };
    struct ATL::CFileTime* ATL::CFileTime::GetTickCount(struct ATL::CFileTime* result)
    {
        using org_ptr = struct ATL::CFileTime* (WINAPIV*)(struct ATL::CFileTime*);
        return (org_ptr(0x1406739e0L))(result);
    };
    uint64_t ATL::CFileTime::GetTime()
    {
        using org_ptr = uint64_t (WINAPIV*)(struct ATL::CFileTime*);
        return (org_ptr(0x140673e20L))(this);
    };
    struct ATL::CFileTime* ATL::CFileTime::LocalToUTC(struct ATL::CFileTime* result)
    {
        using org_ptr = struct ATL::CFileTime* (WINAPIV*)(struct ATL::CFileTime*, struct ATL::CFileTime*);
        return (org_ptr(0x140673ed0L))(this, result);
    };
    void ATL::CFileTime::SetTime(uint64_t nTime)
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CFileTime*, uint64_t);
        (org_ptr(0x140673e50L))(this, nTime);
    };
    struct ATL::CFileTime* ATL::CFileTime::UTCToLocal(struct ATL::CFileTime* result)
    {
        using org_ptr = struct ATL::CFileTime* (WINAPIV*)(struct ATL::CFileTime*, struct ATL::CFileTime*);
        return (org_ptr(0x140673e80L))(this, result);
    };
END_ATF_NAMESPACE
