#include <_worlddb_npc_quest_complete_historyDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_worlddb_npc_quest_complete_historyctor__worlddb_npc_quest_complete_history2_ptr _worlddb_npc_quest_complete_historyctor__worlddb_npc_quest_complete_history2_next(nullptr);
        Info::_worlddb_npc_quest_complete_historyctor__worlddb_npc_quest_complete_history2_clbk _worlddb_npc_quest_complete_historyctor__worlddb_npc_quest_complete_history2_user(nullptr);
        
        
        void _worlddb_npc_quest_complete_historyctor__worlddb_npc_quest_complete_history2_wrapper(struct _worlddb_npc_quest_complete_history* _this)
        {
           _worlddb_npc_quest_complete_historyctor__worlddb_npc_quest_complete_history2_user(_this, _worlddb_npc_quest_complete_historyctor__worlddb_npc_quest_complete_history2_next);
        };
        
        ::std::array<hook_record, 1> _worlddb_npc_quest_complete_history_functions = 
        {
            _hook_record {
                (LPVOID)0x1401bf130L,
                (LPVOID *)&_worlddb_npc_quest_complete_historyctor__worlddb_npc_quest_complete_history2_user,
                (LPVOID *)&_worlddb_npc_quest_complete_historyctor__worlddb_npc_quest_complete_history2_next,
                (LPVOID)cast_pointer_function(_worlddb_npc_quest_complete_historyctor__worlddb_npc_quest_complete_history2_wrapper),
                (LPVOID)cast_pointer_function((void(_worlddb_npc_quest_complete_history::*)())&_worlddb_npc_quest_complete_history::ctor__worlddb_npc_quest_complete_history)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
