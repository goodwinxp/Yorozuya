#include <GUILD_BATTLE__CGuildBattle.hpp>


START_ATF_NAMESPACE
    GUILD_BATTLE::CGuildBattle::CGuildBattle()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattle*);
        (org_ptr(0x1403eb010L))(this);
    };
    void GUILD_BATTLE::CGuildBattle::ctor_CGuildBattle()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattle*);
        (org_ptr(0x1403eb010L))(this);
    };
    int GUILD_BATTLE::CGuildBattle::GetObjType()
    {
        using org_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CGuildBattle*);
        return (org_ptr(0x1403eb060L))(this);
    };
    GUILD_BATTLE::CGuildBattle::~CGuildBattle()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattle*);
        (org_ptr(0x1403eb040L))(this);
    };
    void GUILD_BATTLE::CGuildBattle::dtor_CGuildBattle()
    {
        using org_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CGuildBattle*);
        (org_ptr(0x1403eb040L))(this);
    };
    
END_ATF_NAMESPACE
