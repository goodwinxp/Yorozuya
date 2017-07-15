#include <_SKILL_IDX_PER_MASTERYDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_SKILL_IDX_PER_MASTERYctor__SKILL_IDX_PER_MASTERY2_ptr _SKILL_IDX_PER_MASTERYctor__SKILL_IDX_PER_MASTERY2_next(nullptr);
        Info::_SKILL_IDX_PER_MASTERYctor__SKILL_IDX_PER_MASTERY2_clbk _SKILL_IDX_PER_MASTERYctor__SKILL_IDX_PER_MASTERY2_user(nullptr);
        
        
        void _SKILL_IDX_PER_MASTERYctor__SKILL_IDX_PER_MASTERY2_wrapper(struct _SKILL_IDX_PER_MASTERY* _this)
        {
           _SKILL_IDX_PER_MASTERYctor__SKILL_IDX_PER_MASTERY2_user(_this, _SKILL_IDX_PER_MASTERYctor__SKILL_IDX_PER_MASTERY2_next);
        };
        
        ::std::array<hook_record, 1> _SKILL_IDX_PER_MASTERY_functions = 
        {
            _hook_record {
                (LPVOID)0x14007f1e0L,
                (LPVOID *)&_SKILL_IDX_PER_MASTERYctor__SKILL_IDX_PER_MASTERY2_user,
                (LPVOID *)&_SKILL_IDX_PER_MASTERYctor__SKILL_IDX_PER_MASTERY2_next,
                (LPVOID)cast_pointer_function(_SKILL_IDX_PER_MASTERYctor__SKILL_IDX_PER_MASTERY2_wrapper),
                (LPVOID)cast_pointer_function((void(_SKILL_IDX_PER_MASTERY::*)())&_SKILL_IDX_PER_MASTERY::ctor__SKILL_IDX_PER_MASTERY)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
