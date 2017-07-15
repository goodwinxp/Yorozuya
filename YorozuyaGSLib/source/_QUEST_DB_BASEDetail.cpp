#include <_QUEST_DB_BASEDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_QUEST_DB_BASEInit2_ptr _QUEST_DB_BASEInit2_next(nullptr);
        Info::_QUEST_DB_BASEInit2_clbk _QUEST_DB_BASEInit2_user(nullptr);
        
        
        Info::_QUEST_DB_BASEctor__QUEST_DB_BASE4_ptr _QUEST_DB_BASEctor__QUEST_DB_BASE4_next(nullptr);
        Info::_QUEST_DB_BASEctor__QUEST_DB_BASE4_clbk _QUEST_DB_BASEctor__QUEST_DB_BASE4_user(nullptr);
        
        void _QUEST_DB_BASEInit2_wrapper(struct _QUEST_DB_BASE* _this)
        {
           _QUEST_DB_BASEInit2_user(_this, _QUEST_DB_BASEInit2_next);
        };
        
        void _QUEST_DB_BASEctor__QUEST_DB_BASE4_wrapper(struct _QUEST_DB_BASE* _this)
        {
           _QUEST_DB_BASEctor__QUEST_DB_BASE4_user(_this, _QUEST_DB_BASEctor__QUEST_DB_BASE4_next);
        };
        
        ::std::array<hook_record, 2> _QUEST_DB_BASE_functions = 
        {
            _hook_record {
                (LPVOID)0x140076a30L,
                (LPVOID *)&_QUEST_DB_BASEInit2_user,
                (LPVOID *)&_QUEST_DB_BASEInit2_next,
                (LPVOID)cast_pointer_function(_QUEST_DB_BASEInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_QUEST_DB_BASE::*)())&_QUEST_DB_BASE::Init)
            },
            _hook_record {
                (LPVOID)0x140076800L,
                (LPVOID *)&_QUEST_DB_BASEctor__QUEST_DB_BASE4_user,
                (LPVOID *)&_QUEST_DB_BASEctor__QUEST_DB_BASE4_next,
                (LPVOID)cast_pointer_function(_QUEST_DB_BASEctor__QUEST_DB_BASE4_wrapper),
                (LPVOID)cast_pointer_function((void(_QUEST_DB_BASE::*)())&_QUEST_DB_BASE::ctor__QUEST_DB_BASE)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
