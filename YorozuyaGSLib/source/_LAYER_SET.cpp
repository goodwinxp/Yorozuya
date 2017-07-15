#include <_LAYER_SET.hpp>


START_ATF_NAMESPACE
    void _LAYER_SET::ActiveLayer(struct _MULTI_BLOCK* pMB)
    {
        using org_ptr = void (WINAPIV*)(struct _LAYER_SET*, struct _MULTI_BLOCK*);
        (org_ptr(0x140188e30L))(this, pMB);
    };
    void _LAYER_SET::CreateLayer(int nSecNum)
    {
        using org_ptr = void (WINAPIV*)(struct _LAYER_SET*, int);
        (org_ptr(0x140188930L))(this, nSecNum);
    };
    bool _LAYER_SET::InertLayer()
    {
        using org_ptr = bool (WINAPIV*)(struct _LAYER_SET*);
        return (org_ptr(0x14026f200L))(this);
    };
    bool _LAYER_SET::IsActiveLayer()
    {
        using org_ptr = bool (WINAPIV*)(struct _LAYER_SET*);
        return (org_ptr(0x14007aa70L))(this);
    };
    _LAYER_SET::_LAYER_SET()
    {
        using org_ptr = void (WINAPIV*)(struct _LAYER_SET*);
        (org_ptr(0x1401887f0L))(this);
    };
    void _LAYER_SET::ctor__LAYER_SET()
    {
        using org_ptr = void (WINAPIV*)(struct _LAYER_SET*);
        (org_ptr(0x1401887f0L))(this);
    };
    _LAYER_SET::~_LAYER_SET()
    {
        using org_ptr = void (WINAPIV*)(struct _LAYER_SET*);
        (org_ptr(0x140188220L))(this);
    };
    void _LAYER_SET::dtor__LAYER_SET()
    {
        using org_ptr = void (WINAPIV*)(struct _LAYER_SET*);
        (org_ptr(0x140188220L))(this);
    };
END_ATF_NAMESPACE
