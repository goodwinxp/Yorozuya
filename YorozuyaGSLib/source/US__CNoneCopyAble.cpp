#include <US__CNoneCopyAble.hpp>


START_ATF_NAMESPACE
    US::CNoneCopyAble::CNoneCopyAble()
    {
        using org_ptr = void (WINAPIV*)(struct US::CNoneCopyAble*);
        (org_ptr(0x14041d6d0L))(this);
    };
    void US::CNoneCopyAble::ctor_CNoneCopyAble()
    {
        using org_ptr = void (WINAPIV*)(struct US::CNoneCopyAble*);
        (org_ptr(0x14041d6d0L))(this);
    };
    US::CNoneCopyAble::~CNoneCopyAble()
    {
        using org_ptr = void (WINAPIV*)(struct US::CNoneCopyAble*);
        (org_ptr(0x14041d760L))(this);
    };
    void US::CNoneCopyAble::dtor_CNoneCopyAble()
    {
        using org_ptr = void (WINAPIV*)(struct US::CNoneCopyAble*);
        (org_ptr(0x14041d760L))(this);
    };
END_ATF_NAMESPACE
