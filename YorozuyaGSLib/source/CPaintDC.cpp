#include <CPaintDC.hpp>


START_ATF_NAMESPACE
    CPaintDC::~CPaintDC()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CPaintDC*);
        (org_ptr(0x1404dbefeL))(this);
    };
    int64_t CPaintDC::dtor_CPaintDC()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CPaintDC*);
        return (org_ptr(0x1404dbefeL))(this);
    };
END_ATF_NAMESPACE
