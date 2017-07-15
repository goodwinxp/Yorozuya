#include <ULI.hpp>


START_ATF_NAMESPACE
    void ULI::Link()
    {
        using org_ptr = void (WINAPIV*)(struct ULI*);
        (org_ptr(0x1406764dcL))(this);
    };
    ULI::ULI(struct ImgDelayDescr* pidd_)
    {
        using org_ptr = void (WINAPIV*)(struct ULI*, struct ImgDelayDescr*);
        (org_ptr(0x1406765b0L))(this, pidd_);
    };
    void ULI::ctor_ULI(struct ImgDelayDescr* pidd_)
    {
        using org_ptr = void (WINAPIV*)(struct ULI*, struct ImgDelayDescr*);
        (org_ptr(0x1406765b0L))(this, pidd_);
    };
    void ULI::Unlink()
    {
        using org_ptr = void (WINAPIV*)(struct ULI*);
        (org_ptr(0x1406764acL))(this);
    };
    ULI::~ULI()
    {
        using org_ptr = void (WINAPIV*)(struct ULI*);
        (org_ptr(0x1406765ccL))(this);
    };
    void ULI::dtor_ULI()
    {
        using org_ptr = void (WINAPIV*)(struct ULI*);
        (org_ptr(0x1406765ccL))(this);
    };
END_ATF_NAMESPACE
