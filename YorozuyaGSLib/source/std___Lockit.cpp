#include <std___Lockit.hpp>


START_ATF_NAMESPACE
    std::_Lockit::_Lockit(int arg_0)
    {
        using org_ptr = int64_t (WINAPIV*)(struct std::_Lockit*, int);
        (org_ptr(0x1404dbafcL))(this, arg_0);
    };
    int64_t std::_Lockit::ctor__Lockit(int arg_0)
    {
        using org_ptr = int64_t (WINAPIV*)(struct std::_Lockit*, int);
        return (org_ptr(0x1404dbafcL))(this, arg_0);
    };
    std::_Lockit::~_Lockit()
    {
        using org_ptr = int64_t (WINAPIV*)(struct std::_Lockit*);
        (org_ptr(0x1404dbaf6L))(this);
    };
    int64_t std::_Lockit::dtor__Lockit()
    {
        using org_ptr = int64_t (WINAPIV*)(struct std::_Lockit*);
        return (org_ptr(0x1404dbaf6L))(this);
    };
END_ATF_NAMESPACE
