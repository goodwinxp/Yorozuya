#include <CGdiObject.hpp>


START_ATF_NAMESPACE
    int64_t CGdiObject::DeleteObject()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CGdiObject*);
        return (org_ptr(0x1404dc3fcL))(this);
    };
END_ATF_NAMESPACE
