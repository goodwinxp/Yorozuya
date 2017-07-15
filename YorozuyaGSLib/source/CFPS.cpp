#include <CFPS.hpp>


START_ATF_NAMESPACE
    CFPS::CFPS()
    {
        using org_ptr = void (WINAPIV*)(struct CFPS*);
        (org_ptr(0x140438f50L))(this);
    };
    void CFPS::ctor_CFPS()
    {
        using org_ptr = void (WINAPIV*)(struct CFPS*);
        (org_ptr(0x140438f50L))(this);
    };
    void CFPS::CalcFPS()
    {
        using org_ptr = void (WINAPIV*)(struct CFPS*);
        (org_ptr(0x140438fc0L))(this);
    };
    unsigned int CFPS::GetFPS()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CFPS*);
        return (org_ptr(0x140439080L))(this);
    };
    CFPS::~CFPS()
    {
        using org_ptr = void (WINAPIV*)(struct CFPS*);
        (org_ptr(0x14043a880L))(this);
    };
    void CFPS::dtor_CFPS()
    {
        using org_ptr = void (WINAPIV*)(struct CFPS*);
        (org_ptr(0x14043a880L))(this);
    };
END_ATF_NAMESPACE
