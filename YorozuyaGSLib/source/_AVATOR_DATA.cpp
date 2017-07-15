#include <_AVATOR_DATA.hpp>


START_ATF_NAMESPACE
    void _AVATOR_DATA::InitData()
    {
        using org_ptr = void (WINAPIV*)(struct _AVATOR_DATA*);
        (org_ptr(0x140077a00L))(this);
    };
    void _AVATOR_DATA::PostUpdateInit()
    {
        using org_ptr = void (WINAPIV*)(struct _AVATOR_DATA*);
        (org_ptr(0x14011fc00L))(this);
    };
    _AVATOR_DATA::_AVATOR_DATA()
    {
        using org_ptr = void (WINAPIV*)(struct _AVATOR_DATA*);
        (org_ptr(0x140075130L))(this);
    };
    void _AVATOR_DATA::ctor__AVATOR_DATA()
    {
        using org_ptr = void (WINAPIV*)(struct _AVATOR_DATA*);
        (org_ptr(0x140075130L))(this);
    };
    _AVATOR_DATA::~_AVATOR_DATA()
    {
        using org_ptr = void (WINAPIV*)(struct _AVATOR_DATA*);
        (org_ptr(0x140078a90L))(this);
    };
    void _AVATOR_DATA::dtor__AVATOR_DATA()
    {
        using org_ptr = void (WINAPIV*)(struct _AVATOR_DATA*);
        (org_ptr(0x140078a90L))(this);
    };
END_ATF_NAMESPACE
