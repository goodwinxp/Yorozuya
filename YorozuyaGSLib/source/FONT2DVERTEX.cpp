#include <FONT2DVERTEX.hpp>


START_ATF_NAMESPACE
    FONT2DVERTEX::FONT2DVERTEX()
    {
        using org_ptr = int64_t (WINAPIV*)(struct FONT2DVERTEX*);
        (org_ptr(0x140526bb0L))(this);
    };
    int64_t FONT2DVERTEX::ctor_FONT2DVERTEX()
    {
        using org_ptr = int64_t (WINAPIV*)(struct FONT2DVERTEX*);
        return (org_ptr(0x140526bb0L))(this);
    };
END_ATF_NAMESPACE
