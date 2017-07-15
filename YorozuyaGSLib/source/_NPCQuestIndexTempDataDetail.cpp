#include <_NPCQuestIndexTempDataDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_NPCQuestIndexTempDataInit2_ptr _NPCQuestIndexTempDataInit2_next(nullptr);
        Info::_NPCQuestIndexTempDataInit2_clbk _NPCQuestIndexTempDataInit2_user(nullptr);
        
        
        Info::_NPCQuestIndexTempDatactor__NPCQuestIndexTempData4_ptr _NPCQuestIndexTempDatactor__NPCQuestIndexTempData4_next(nullptr);
        Info::_NPCQuestIndexTempDatactor__NPCQuestIndexTempData4_clbk _NPCQuestIndexTempDatactor__NPCQuestIndexTempData4_user(nullptr);
        
        void _NPCQuestIndexTempDataInit2_wrapper(struct _NPCQuestIndexTempData* _this)
        {
           _NPCQuestIndexTempDataInit2_user(_this, _NPCQuestIndexTempDataInit2_next);
        };
        
        void _NPCQuestIndexTempDatactor__NPCQuestIndexTempData4_wrapper(struct _NPCQuestIndexTempData* _this)
        {
           _NPCQuestIndexTempDatactor__NPCQuestIndexTempData4_user(_this, _NPCQuestIndexTempDatactor__NPCQuestIndexTempData4_next);
        };
        
        ::std::array<hook_record, 2> _NPCQuestIndexTempData_functions = 
        {
            _hook_record {
                (LPVOID)0x140073ef0L,
                (LPVOID *)&_NPCQuestIndexTempDataInit2_user,
                (LPVOID *)&_NPCQuestIndexTempDataInit2_next,
                (LPVOID)cast_pointer_function(_NPCQuestIndexTempDataInit2_wrapper),
                (LPVOID)cast_pointer_function((void(_NPCQuestIndexTempData::*)())&_NPCQuestIndexTempData::Init)
            },
            _hook_record {
                (LPVOID)0x140073ea0L,
                (LPVOID *)&_NPCQuestIndexTempDatactor__NPCQuestIndexTempData4_user,
                (LPVOID *)&_NPCQuestIndexTempDatactor__NPCQuestIndexTempData4_next,
                (LPVOID)cast_pointer_function(_NPCQuestIndexTempDatactor__NPCQuestIndexTempData4_wrapper),
                (LPVOID)cast_pointer_function((void(_NPCQuestIndexTempData::*)())&_NPCQuestIndexTempData::ctor__NPCQuestIndexTempData)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
