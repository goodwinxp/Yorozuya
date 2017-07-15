#include <_guild_battle_suggest_matter.hpp>


START_ATF_NAMESPACE
    void _guild_battle_suggest_matter::CancelSuggestedMatter()
    {
        using org_ptr = void (WINAPIV*)(struct _guild_battle_suggest_matter*);
        (org_ptr(0x14025d350L))(this);
    };
    void _guild_battle_suggest_matter::Clear()
    {
        using org_ptr = void (WINAPIV*)(struct _guild_battle_suggest_matter*);
        (org_ptr(0x1402075a0L))(this);
    };
    bool _guild_battle_suggest_matter::IsCompleteBattle()
    {
        using org_ptr = bool (WINAPIV*)(struct _guild_battle_suggest_matter*);
        return (org_ptr(0x1403d0800L))(this);
    };
    _guild_battle_suggest_matter::_guild_battle_suggest_matter()
    {
        using org_ptr = void (WINAPIV*)(struct _guild_battle_suggest_matter*);
        (org_ptr(0x14025cf40L))(this);
    };
    void _guild_battle_suggest_matter::ctor__guild_battle_suggest_matter()
    {
        using org_ptr = void (WINAPIV*)(struct _guild_battle_suggest_matter*);
        (org_ptr(0x14025cf40L))(this);
    };
    
END_ATF_NAMESPACE
