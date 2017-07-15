#include <ATL__CFileTimeSpan.hpp>


START_ATF_NAMESPACE
    ATL::CFileTimeSpan::CFileTimeSpan(struct ATL::CFileTimeSpan* span)
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CFileTimeSpan*, struct ATL::CFileTimeSpan*);
        (org_ptr(0x1406735a0L))(this, span);
    };
    void ATL::CFileTimeSpan::ctor_CFileTimeSpan(struct ATL::CFileTimeSpan* span)
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CFileTimeSpan*, struct ATL::CFileTimeSpan*);
        (org_ptr(0x1406735a0L))(this, span);
    };
    ATL::CFileTimeSpan::CFileTimeSpan(int64_t nSpan)
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CFileTimeSpan*, int64_t);
        (org_ptr(0x1406735d0L))(this, nSpan);
    };
    void ATL::CFileTimeSpan::ctor_CFileTimeSpan(int64_t nSpan)
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CFileTimeSpan*, int64_t);
        (org_ptr(0x1406735d0L))(this, nSpan);
    };
    ATL::CFileTimeSpan::CFileTimeSpan()
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CFileTimeSpan*);
        (org_ptr(0x140673580L))(this);
    };
    void ATL::CFileTimeSpan::ctor_CFileTimeSpan()
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CFileTimeSpan*);
        (org_ptr(0x140673580L))(this);
    };
    int64_t ATL::CFileTimeSpan::GetTimeSpan()
    {
        using org_ptr = int64_t (WINAPIV*)(struct ATL::CFileTimeSpan*);
        return (org_ptr(0x1406738b0L))(this);
    };
    void ATL::CFileTimeSpan::SetTimeSpan(int64_t nSpan)
    {
        using org_ptr = void (WINAPIV*)(struct ATL::CFileTimeSpan*, int64_t);
        (org_ptr(0x1406738d0L))(this, nSpan);
    };
END_ATF_NAMESPACE
