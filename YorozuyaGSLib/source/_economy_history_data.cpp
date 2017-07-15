#include <_economy_history_data.hpp>


START_ATF_NAMESPACE
    void _economy_history_data::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _economy_history_data*);
        (org_ptr(0x1402058c0L))(this);
    };
    _economy_history_data::_economy_history_data()
    {
        using org_ptr = void (WINAPIV*)(struct _economy_history_data*);
        (org_ptr(0x140205870L))(this);
    };
    void _economy_history_data::ctor__economy_history_data()
    {
        using org_ptr = void (WINAPIV*)(struct _economy_history_data*);
        (org_ptr(0x140205870L))(this);
    };
END_ATF_NAMESPACE
