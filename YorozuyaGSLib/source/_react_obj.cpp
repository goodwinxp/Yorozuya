#include <_react_obj.hpp>


START_ATF_NAMESPACE
    _react_obj::_react_obj()
    {
        using org_ptr = void (WINAPIV*)(struct _react_obj*);
        (org_ptr(0x14027a230L))(this);
    };
    void _react_obj::ctor__react_obj()
    {
        using org_ptr = void (WINAPIV*)(struct _react_obj*);
        (org_ptr(0x14027a230L))(this);
    };
    void _react_obj::copy(struct _react_obj* pObj)
    {
        using org_ptr = void (WINAPIV*)(struct _react_obj*, struct _react_obj*);
        (org_ptr(0x14027a280L))(this, pObj);
    };
    
    
    
    
END_ATF_NAMESPACE
