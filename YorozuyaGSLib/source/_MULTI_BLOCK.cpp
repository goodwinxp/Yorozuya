#include <_MULTI_BLOCK.hpp>


START_ATF_NAMESPACE
    _MULTI_BLOCK::_MULTI_BLOCK()
    {
        using org_ptr = void (WINAPIV*)(struct _MULTI_BLOCK*);
        (org_ptr(0x1401887b0L))(this);
    };
    void _MULTI_BLOCK::ctor__MULTI_BLOCK()
    {
        using org_ptr = void (WINAPIV*)(struct _MULTI_BLOCK*);
        (org_ptr(0x1401887b0L))(this);
    };
    _MULTI_BLOCK::~_MULTI_BLOCK()
    {
        using org_ptr = void (WINAPIV*)(struct _MULTI_BLOCK*);
        (org_ptr(0x140188590L))(this);
    };
    void _MULTI_BLOCK::dtor__MULTI_BLOCK()
    {
        using org_ptr = void (WINAPIV*)(struct _MULTI_BLOCK*);
        (org_ptr(0x140188590L))(this);
    };
END_ATF_NAMESPACE
