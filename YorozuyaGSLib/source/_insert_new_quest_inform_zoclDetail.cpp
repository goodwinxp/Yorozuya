#include <_insert_new_quest_inform_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_insert_new_quest_inform_zoclctor__insert_new_quest_inform_zocl2_ptr _insert_new_quest_inform_zoclctor__insert_new_quest_inform_zocl2_next(nullptr);
        Info::_insert_new_quest_inform_zoclctor__insert_new_quest_inform_zocl2_clbk _insert_new_quest_inform_zoclctor__insert_new_quest_inform_zocl2_user(nullptr);
        
        
        void _insert_new_quest_inform_zoclctor__insert_new_quest_inform_zocl2_wrapper(struct _insert_new_quest_inform_zocl* _this)
        {
           _insert_new_quest_inform_zoclctor__insert_new_quest_inform_zocl2_user(_this, _insert_new_quest_inform_zoclctor__insert_new_quest_inform_zocl2_next);
        };
        
        ::std::array<hook_record, 1> _insert_new_quest_inform_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x1400efe60L,
                (LPVOID *)&_insert_new_quest_inform_zoclctor__insert_new_quest_inform_zocl2_user,
                (LPVOID *)&_insert_new_quest_inform_zoclctor__insert_new_quest_inform_zocl2_next,
                (LPVOID)cast_pointer_function(_insert_new_quest_inform_zoclctor__insert_new_quest_inform_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_insert_new_quest_inform_zocl::*)())&_insert_new_quest_inform_zocl::ctor__insert_new_quest_inform_zocl)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
