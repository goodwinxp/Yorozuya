#include <_react_area.hpp>


START_ATF_NAMESPACE
    _react_area::_react_area()
    {
        using org_ptr = void (WINAPIV*)(struct _react_area*);
        (org_ptr(0x14027a340L))(this);
    };
    void _react_area::ctor__react_area()
    {
        using org_ptr = void (WINAPIV*)(struct _react_area*);
        (org_ptr(0x14027a340L))(this);
    };
    void _react_area::copy(struct _react_area* pObj)
    {
        using org_ptr = void (WINAPIV*)(struct _react_area*, struct _react_area*);
        (org_ptr(0x14027a390L))(this, pObj);
    };
    
    
    
END_ATF_NAMESPACE
