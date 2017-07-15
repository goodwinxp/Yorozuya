#include <_event_participant_classrefineDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_event_participant_classrefineIsChanged2_ptr _event_participant_classrefineIsChanged2_next(nullptr);
        Info::_event_participant_classrefineIsChanged2_clbk _event_participant_classrefineIsChanged2_user(nullptr);
        
        Info::_event_participant_classrefinesize4_ptr _event_participant_classrefinesize4_next(nullptr);
        Info::_event_participant_classrefinesize4_clbk _event_participant_classrefinesize4_user(nullptr);
        
        bool _event_participant_classrefineIsChanged2_wrapper(struct _event_participant_classrefine* _this)
        {
           return _event_participant_classrefineIsChanged2_user(_this, _event_participant_classrefineIsChanged2_next);
        };
        int _event_participant_classrefinesize4_wrapper(struct _event_participant_classrefine* _this)
        {
           return _event_participant_classrefinesize4_user(_this, _event_participant_classrefinesize4_next);
        };
        
        ::std::array<hook_record, 2> _event_participant_classrefine_functions = 
        {
            _hook_record {
                (LPVOID)0x140329680L,
                (LPVOID *)&_event_participant_classrefineIsChanged2_user,
                (LPVOID *)&_event_participant_classrefineIsChanged2_next,
                (LPVOID)cast_pointer_function(_event_participant_classrefineIsChanged2_wrapper),
                (LPVOID)cast_pointer_function((bool(_event_participant_classrefine::*)())&_event_participant_classrefine::IsChanged)
            },
            _hook_record {
                (LPVOID)0x1401bfec0L,
                (LPVOID *)&_event_participant_classrefinesize4_user,
                (LPVOID *)&_event_participant_classrefinesize4_next,
                (LPVOID)cast_pointer_function(_event_participant_classrefinesize4_wrapper),
                (LPVOID)cast_pointer_function((int(_event_participant_classrefine::*)())&_event_participant_classrefine::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
