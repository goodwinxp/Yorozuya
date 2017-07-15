#include <_limit_item_db_data.hpp>


START_ATF_NAMESPACE
    _limit_item_db_data::_limit_item_db_data()
    {
        using org_ptr = void (WINAPIV*)(struct _limit_item_db_data*);
        (org_ptr(0x14034bdd0L))(this);
    };
    void _limit_item_db_data::ctor__limit_item_db_data()
    {
        using org_ptr = void (WINAPIV*)(struct _limit_item_db_data*);
        (org_ptr(0x14034bdd0L))(this);
    };
END_ATF_NAMESPACE
