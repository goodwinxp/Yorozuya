#include <PotionInnerData.hpp>


START_ATF_NAMESPACE
    void PotionInnerData::Init()
    {
        using org_ptr = void (WINAPIV*)(struct PotionInnerData*);
        (org_ptr(0x1403a1280L))(this);
    };
    PotionInnerData::PotionInnerData()
    {
        using org_ptr = void (WINAPIV*)(struct PotionInnerData*);
        (org_ptr(0x1403a1220L))(this);
    };
    void PotionInnerData::ctor_PotionInnerData()
    {
        using org_ptr = void (WINAPIV*)(struct PotionInnerData*);
        (org_ptr(0x1403a1220L))(this);
    };
    PotionInnerData::~PotionInnerData()
    {
        using org_ptr = void (WINAPIV*)(struct PotionInnerData*);
        (org_ptr(0x1403a1270L))(this);
    };
    void PotionInnerData::dtor_PotionInnerData()
    {
        using org_ptr = void (WINAPIV*)(struct PotionInnerData*);
        (org_ptr(0x1403a1270L))(this);
    };
END_ATF_NAMESPACE
