#include <BASE_HACKSHEILD_PARAM.hpp>


START_ATF_NAMESPACE
    BASE_HACKSHEILD_PARAM::BASE_HACKSHEILD_PARAM()
    {
        using org_ptr = void (WINAPIV*)(struct BASE_HACKSHEILD_PARAM*);
        (org_ptr(0x140417930L))(this);
    };
    void BASE_HACKSHEILD_PARAM::ctor_BASE_HACKSHEILD_PARAM()
    {
        using org_ptr = void (WINAPIV*)(struct BASE_HACKSHEILD_PARAM*);
        (org_ptr(0x140417930L))(this);
    };
END_ATF_NAMESPACE
