#include <ControllerTaxRate.hpp>


START_ATF_NAMESPACE
    ControllerTaxRate::ControllerTaxRate()
    {
        using org_ptr = void (WINAPIV*)(struct ControllerTaxRate*);
        (org_ptr(0x1402d96e0L))(this);
    };
    void ControllerTaxRate::ctor_ControllerTaxRate()
    {
        using org_ptr = void (WINAPIV*)(struct ControllerTaxRate*);
        (org_ptr(0x1402d96e0L))(this);
    };
    unsigned int ControllerTaxRate::calcTaxRate(unsigned int dalant)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct ControllerTaxRate*, unsigned int);
        return (org_ptr(0x1402d98c0L))(this, dalant);
    };
    bool ControllerTaxRate::checkLimitTaxRate(float fTaxRate)
    {
        using org_ptr = bool (WINAPIV*)(struct ControllerTaxRate*, float);
        return (org_ptr(0x1402d9b80L))(this, fTaxRate);
    };
    float ControllerTaxRate::getCurTaxRate()
    {
        using org_ptr = float (WINAPIV*)(struct ControllerTaxRate*);
        return (org_ptr(0x1402d9950L))(this);
    };
    void ControllerTaxRate::setCurTaxRate(float fTaxRate)
    {
        using org_ptr = void (WINAPIV*)(struct ControllerTaxRate*, float);
        (org_ptr(0x1402d9b50L))(this, fTaxRate);
    };
    void ControllerTaxRate::setLimitTaxRate(float fMin, float fMax)
    {
        using org_ptr = void (WINAPIV*)(struct ControllerTaxRate*, float, float);
        (org_ptr(0x1402d9870L))(this, fMin, fMax);
    };
    ControllerTaxRate::~ControllerTaxRate()
    {
        using org_ptr = void (WINAPIV*)(struct ControllerTaxRate*);
        (org_ptr(0x1402d9730L))(this);
    };
    void ControllerTaxRate::dtor_ControllerTaxRate()
    {
        using org_ptr = void (WINAPIV*)(struct ControllerTaxRate*);
        (org_ptr(0x1402d9730L))(this);
    };
END_ATF_NAMESPACE
