#include <_npc_quest_list_result_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_npc_quest_list_result_zoclctor__npc_quest_list_result_zocl2_ptr _npc_quest_list_result_zoclctor__npc_quest_list_result_zocl2_next(nullptr);
        Info::_npc_quest_list_result_zoclctor__npc_quest_list_result_zocl2_clbk _npc_quest_list_result_zoclctor__npc_quest_list_result_zocl2_user(nullptr);
        
        
        void _npc_quest_list_result_zoclctor__npc_quest_list_result_zocl2_wrapper(struct _npc_quest_list_result_zocl* _this)
        {
           _npc_quest_list_result_zoclctor__npc_quest_list_result_zocl2_user(_this, _npc_quest_list_result_zoclctor__npc_quest_list_result_zocl2_next);
        };
        
        ::std::array<hook_record, 1> _npc_quest_list_result_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400efd20L,
                (LPVOID *)&_npc_quest_list_result_zoclctor__npc_quest_list_result_zocl2_user,
                (LPVOID *)&_npc_quest_list_result_zoclctor__npc_quest_list_result_zocl2_next,
                (LPVOID)cast_pointer_function(_npc_quest_list_result_zoclctor__npc_quest_list_result_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_npc_quest_list_result_zocl::*)())&_npc_quest_list_result_zocl::ctor__npc_quest_list_result_zocl)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
