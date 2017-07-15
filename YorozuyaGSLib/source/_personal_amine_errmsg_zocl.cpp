#include <_personal_amine_errmsg_zocl.hpp>


START_ATF_NAMESPACE
    _personal_amine_errmsg_zocl::_personal_amine_errmsg_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _personal_amine_errmsg_zocl*);
        (org_ptr(0x1402de350L))(this);
    };
    void _personal_amine_errmsg_zocl::ctor__personal_amine_errmsg_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _personal_amine_errmsg_zocl*);
        (org_ptr(0x1402de350L))(this);
    };
    int _personal_amine_errmsg_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _personal_amine_errmsg_zocl*);
        return (org_ptr(0x1402de370L))(this);
    };
END_ATF_NAMESPACE
