#include <_guild_battle_suggest_matterDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_guild_battle_suggest_matterCancelSuggestedMatter2_ptr _guild_battle_suggest_matterCancelSuggestedMatter2_next(nullptr);
        Info::_guild_battle_suggest_matterCancelSuggestedMatter2_clbk _guild_battle_suggest_matterCancelSuggestedMatter2_user(nullptr);
        
        Info::_guild_battle_suggest_matterClear4_ptr _guild_battle_suggest_matterClear4_next(nullptr);
        Info::_guild_battle_suggest_matterClear4_clbk _guild_battle_suggest_matterClear4_user(nullptr);
        
        Info::_guild_battle_suggest_matterIsCompleteBattle6_ptr _guild_battle_suggest_matterIsCompleteBattle6_next(nullptr);
        Info::_guild_battle_suggest_matterIsCompleteBattle6_clbk _guild_battle_suggest_matterIsCompleteBattle6_user(nullptr);
        
        
        Info::_guild_battle_suggest_matterctor__guild_battle_suggest_matter8_ptr _guild_battle_suggest_matterctor__guild_battle_suggest_matter8_next(nullptr);
        Info::_guild_battle_suggest_matterctor__guild_battle_suggest_matter8_clbk _guild_battle_suggest_matterctor__guild_battle_suggest_matter8_user(nullptr);
        
        void _guild_battle_suggest_matterCancelSuggestedMatter2_wrapper(struct _guild_battle_suggest_matter* _this)
        {
           _guild_battle_suggest_matterCancelSuggestedMatter2_user(_this, _guild_battle_suggest_matterCancelSuggestedMatter2_next);
        };
        void _guild_battle_suggest_matterClear4_wrapper(struct _guild_battle_suggest_matter* _this)
        {
           _guild_battle_suggest_matterClear4_user(_this, _guild_battle_suggest_matterClear4_next);
        };
        bool _guild_battle_suggest_matterIsCompleteBattle6_wrapper(struct _guild_battle_suggest_matter* _this)
        {
           return _guild_battle_suggest_matterIsCompleteBattle6_user(_this, _guild_battle_suggest_matterIsCompleteBattle6_next);
        };
        
        void _guild_battle_suggest_matterctor__guild_battle_suggest_matter8_wrapper(struct _guild_battle_suggest_matter* _this)
        {
           _guild_battle_suggest_matterctor__guild_battle_suggest_matter8_user(_this, _guild_battle_suggest_matterctor__guild_battle_suggest_matter8_next);
        };
        
        ::std::array<hook_record, 4> _guild_battle_suggest_matter_functions = 
        {
            _hook_record {
                (LPVOID)0x14025d350L,
                (LPVOID *)&_guild_battle_suggest_matterCancelSuggestedMatter2_user,
                (LPVOID *)&_guild_battle_suggest_matterCancelSuggestedMatter2_next,
                (LPVOID)cast_pointer_function(_guild_battle_suggest_matterCancelSuggestedMatter2_wrapper),
                (LPVOID)cast_pointer_function((void(_guild_battle_suggest_matter::*)())&_guild_battle_suggest_matter::CancelSuggestedMatter)
            },
            _hook_record {
                (LPVOID)0x1402075a0L,
                (LPVOID *)&_guild_battle_suggest_matterClear4_user,
                (LPVOID *)&_guild_battle_suggest_matterClear4_next,
                (LPVOID)cast_pointer_function(_guild_battle_suggest_matterClear4_wrapper),
                (LPVOID)cast_pointer_function((void(_guild_battle_suggest_matter::*)())&_guild_battle_suggest_matter::Clear)
            },
            _hook_record {
                (LPVOID)0x1403d0800L,
                (LPVOID *)&_guild_battle_suggest_matterIsCompleteBattle6_user,
                (LPVOID *)&_guild_battle_suggest_matterIsCompleteBattle6_next,
                (LPVOID)cast_pointer_function(_guild_battle_suggest_matterIsCompleteBattle6_wrapper),
                (LPVOID)cast_pointer_function((bool(_guild_battle_suggest_matter::*)())&_guild_battle_suggest_matter::IsCompleteBattle)
            },
            _hook_record {
                (LPVOID)0x14025cf40L,
                (LPVOID *)&_guild_battle_suggest_matterctor__guild_battle_suggest_matter8_user,
                (LPVOID *)&_guild_battle_suggest_matterctor__guild_battle_suggest_matter8_next,
                (LPVOID)cast_pointer_function(_guild_battle_suggest_matterctor__guild_battle_suggest_matter8_wrapper),
                (LPVOID)cast_pointer_function((void(_guild_battle_suggest_matter::*)())&_guild_battle_suggest_matter::ctor__guild_battle_suggest_matter)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
