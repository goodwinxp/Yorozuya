#include <_nuclear_bomb_current_state_zocl.hpp>


START_ATF_NAMESPACE
    int _nuclear_bomb_current_state_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _nuclear_bomb_current_state_zocl*);
        return (org_ptr(0x14013e150L))(this);
    };
    
END_ATF_NAMESPACE
