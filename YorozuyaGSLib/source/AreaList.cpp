#include <AreaList.hpp>


START_ATF_NAMESPACE
    AreaList::AreaList(struct AreaList* __that)
    {
        using org_ptr = void (WINAPIV*)(struct AreaList*, struct AreaList*);
        (org_ptr(0x14018ee90L))(this, __that);
    };
    void AreaList::ctor_AreaList(struct AreaList* __that)
    {
        using org_ptr = void (WINAPIV*)(struct AreaList*, struct AreaList*);
        (org_ptr(0x14018ee90L))(this, __that);
    };
    AreaList::AreaList()
    {
        using org_ptr = void (WINAPIV*)(struct AreaList*);
        (org_ptr(0x14018b960L))(this);
    };
    void AreaList::ctor_AreaList()
    {
        using org_ptr = void (WINAPIV*)(struct AreaList*);
        (org_ptr(0x14018b960L))(this);
    };
    void AreaList::ExtractData()
    {
        using org_ptr = void (WINAPIV*)(struct AreaList*);
        (org_ptr(0x14018bba0L))(this);
    };
    void AreaList::Push(struct AreaData adata)
    {
        using org_ptr = void (WINAPIV*)(struct AreaList*, struct AreaData);
        (org_ptr(0x14018bad0L))(this, adata);
    };
    AreaList::~AreaList()
    {
        using org_ptr = void (WINAPIV*)(struct AreaList*);
        (org_ptr(0x14018ba10L))(this);
    };
    void AreaList::dtor_AreaList()
    {
        using org_ptr = void (WINAPIV*)(struct AreaList*);
        (org_ptr(0x14018ba10L))(this);
    };
END_ATF_NAMESPACE
