#include <_limit_item_info.hpp>


START_ATF_NAMESPACE
    _limit_item_info::_limit_item_info()
    {
        using org_ptr = void (WINAPIV*)(struct _limit_item_info*);
        (org_ptr(0x140263760L))(this);
    };
    void _limit_item_info::ctor__limit_item_info()
    {
        using org_ptr = void (WINAPIV*)(struct _limit_item_info*);
        (org_ptr(0x140263760L))(this);
    };
    void _limit_item_info::init()
    {
        using org_ptr = void (WINAPIV*)(struct _limit_item_info*);
        (org_ptr(0x1402637c0L))(this);
    };
END_ATF_NAMESPACE
