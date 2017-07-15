#include <_R3ENGINE_STATE.hpp>


START_ATF_NAMESPACE
    _R3ENGINE_STATE::_R3ENGINE_STATE()
    {
        using org_ptr = int64_t (WINAPIV*)(struct _R3ENGINE_STATE*);
        (org_ptr(0x1404ec4b0L))(this);
    };
    int64_t _R3ENGINE_STATE::ctor__R3ENGINE_STATE()
    {
        using org_ptr = int64_t (WINAPIV*)(struct _R3ENGINE_STATE*);
        return (org_ptr(0x1404ec4b0L))(this);
    };
END_ATF_NAMESPACE
