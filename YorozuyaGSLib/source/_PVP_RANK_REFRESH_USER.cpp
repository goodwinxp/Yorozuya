#include <_PVP_RANK_REFRESH_USER.hpp>


START_ATF_NAMESPACE
    void _PVP_RANK_REFRESH_USER::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _PVP_RANK_REFRESH_USER*);
        (org_ptr(0x140336aa0L))(this);
    };
    bool _PVP_RANK_REFRESH_USER::IsFilled()
    {
        using org_ptr = bool (WINAPIV*)(struct _PVP_RANK_REFRESH_USER*);
        return (org_ptr(0x140336ac0L))(this);
    };
    void _PVP_RANK_REFRESH_USER::SetData(unsigned int dwSerialP, char byLvP, char byRaceP)
    {
        using org_ptr = void (WINAPIV*)(struct _PVP_RANK_REFRESH_USER*, unsigned int, char, char);
        (org_ptr(0x140336ae0L))(this, dwSerialP, byLvP, byRaceP);
    };
END_ATF_NAMESPACE
