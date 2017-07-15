#include <AreaData.hpp>


START_ATF_NAMESPACE
    AreaData::AreaData(struct AreaData* __that)
    {
        using org_ptr = void (WINAPIV*)(struct AreaData*, struct AreaData*);
        (org_ptr(0x14018bdb0L))(this, __that);
    };
    void AreaData::ctor_AreaData(struct AreaData* __that)
    {
        using org_ptr = void (WINAPIV*)(struct AreaData*, struct AreaData*);
        (org_ptr(0x14018bdb0L))(this, __that);
    };
    AreaData::AreaData()
    {
        using org_ptr = void (WINAPIV*)(struct AreaData*);
        (org_ptr(0x14018bd50L))(this);
    };
    void AreaData::ctor_AreaData()
    {
        using org_ptr = void (WINAPIV*)(struct AreaData*);
        (org_ptr(0x14018bd50L))(this);
    };
    AreaData::~AreaData()
    {
        using org_ptr = void (WINAPIV*)(struct AreaData*);
        (org_ptr(0x14018bd00L))(this);
    };
    void AreaData::dtor_AreaData()
    {
        using org_ptr = void (WINAPIV*)(struct AreaData*);
        (org_ptr(0x14018bd00L))(this);
    };
END_ATF_NAMESPACE
