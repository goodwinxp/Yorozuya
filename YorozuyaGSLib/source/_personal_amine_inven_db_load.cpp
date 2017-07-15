#include <_personal_amine_inven_db_load.hpp>


START_ATF_NAMESPACE
    _personal_amine_inven_db_load::_personal_amine_inven_db_load()
    {
        using org_ptr = void (WINAPIV*)(struct _personal_amine_inven_db_load*);
        (org_ptr(0x14010deb0L))(this);
    };
    void _personal_amine_inven_db_load::ctor__personal_amine_inven_db_load()
    {
        using org_ptr = void (WINAPIV*)(struct _personal_amine_inven_db_load*);
        (org_ptr(0x14010deb0L))(this);
    };
END_ATF_NAMESPACE
