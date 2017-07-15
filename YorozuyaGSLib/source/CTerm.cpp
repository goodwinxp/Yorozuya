#include <CTerm.hpp>


START_ATF_NAMESPACE
    CTerm::CTerm()
    {
        using org_ptr = void (WINAPIV*)(struct CTerm*);
        (org_ptr(0x1404390a0L))(this);
    };
    void CTerm::ctor_CTerm()
    {
        using org_ptr = void (WINAPIV*)(struct CTerm*);
        (org_ptr(0x1404390a0L))(this);
    };
    unsigned int CTerm::GetTerm()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CTerm*);
        return (org_ptr(0x1404390f0L))(this);
    };
END_ATF_NAMESPACE
