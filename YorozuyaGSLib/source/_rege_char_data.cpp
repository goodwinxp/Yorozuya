#include <_rege_char_data.hpp>


START_ATF_NAMESPACE
    _rege_char_data::_rege_char_data()
    {
        using org_ptr = void (WINAPIV*)(struct _rege_char_data*);
        (org_ptr(0x1401bf550L))(this);
    };
    void _rege_char_data::ctor__rege_char_data()
    {
        using org_ptr = void (WINAPIV*)(struct _rege_char_data*);
        (org_ptr(0x1401bf550L))(this);
    };
    
END_ATF_NAMESPACE
