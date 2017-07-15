#include <_character_disconnect_result_wrac.hpp>


START_ATF_NAMESPACE
    int _character_disconnect_result_wrac::size()
    {
        using org_ptr = int (WINAPIV*)(struct _character_disconnect_result_wrac*);
        return (org_ptr(0x1401d24e0L))(this);
    };
END_ATF_NAMESPACE
