#include <_item_fanfare_zocl.hpp>


START_ATF_NAMESPACE
    void _item_fanfare_zocl::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _item_fanfare_zocl*);
        (org_ptr(0x1400f0560L))(this);
    };
    _item_fanfare_zocl::_item_fanfare_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _item_fanfare_zocl*);
        (org_ptr(0x1400f0510L))(this);
    };
    void _item_fanfare_zocl::ctor__item_fanfare_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _item_fanfare_zocl*);
        (org_ptr(0x1400f0510L))(this);
    };
    
    
    
END_ATF_NAMESPACE
