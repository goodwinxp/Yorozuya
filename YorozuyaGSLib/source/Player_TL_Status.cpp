#include <Player_TL_Status.hpp>


START_ATF_NAMESPACE
    char Player_TL_Status::GetTLStatus()
    {
        using org_ptr = char (WINAPIV*)(struct Player_TL_Status*);
        return (org_ptr(0x1403947c0L))(this);
    };
END_ATF_NAMESPACE
