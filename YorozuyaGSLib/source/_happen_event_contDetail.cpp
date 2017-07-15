#include <_happen_event_contDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_happen_event_contctor__happen_event_cont2_ptr _happen_event_contctor__happen_event_cont2_next(nullptr);
        Info::_happen_event_contctor__happen_event_cont2_clbk _happen_event_contctor__happen_event_cont2_user(nullptr);
        
        Info::_happen_event_continit4_ptr _happen_event_continit4_next(nullptr);
        Info::_happen_event_continit4_clbk _happen_event_continit4_user(nullptr);
        
        Info::_happen_event_contisset6_ptr _happen_event_contisset6_next(nullptr);
        Info::_happen_event_contisset6_clbk _happen_event_contisset6_user(nullptr);
        
        Info::_happen_event_contset8_ptr _happen_event_contset8_next(nullptr);
        Info::_happen_event_contset8_clbk _happen_event_contset8_user(nullptr);
        
        
        void _happen_event_contctor__happen_event_cont2_wrapper(struct _happen_event_cont* _this)
        {
           _happen_event_contctor__happen_event_cont2_user(_this, _happen_event_contctor__happen_event_cont2_next);
        };
        void _happen_event_continit4_wrapper(struct _happen_event_cont* _this)
        {
           _happen_event_continit4_user(_this, _happen_event_continit4_next);
        };
        bool _happen_event_contisset6_wrapper(struct _happen_event_cont* _this)
        {
           return _happen_event_contisset6_user(_this, _happen_event_contisset6_next);
        };
        void _happen_event_contset8_wrapper(struct _happen_event_cont* _this, struct _happen_event_node* pPoint, QUEST_HAPPEN QtHpType, int nIndexInType, int nRaceCode)
        {
           _happen_event_contset8_user(_this, pPoint, QtHpType, nIndexInType, nRaceCode, _happen_event_contset8_next);
        };
        
        ::std::array<hook_record, 4> _happen_event_cont_functions = 
        {
            _hook_record {
                (LPVOID)0x1400cfb70L,
                (LPVOID *)&_happen_event_contctor__happen_event_cont2_user,
                (LPVOID *)&_happen_event_contctor__happen_event_cont2_next,
                (LPVOID)cast_pointer_function(_happen_event_contctor__happen_event_cont2_wrapper),
                (LPVOID)cast_pointer_function((void(_happen_event_cont::*)())&_happen_event_cont::ctor__happen_event_cont)
            },
            _hook_record {
                (LPVOID)0x1400cfbc0L,
                (LPVOID *)&_happen_event_continit4_user,
                (LPVOID *)&_happen_event_continit4_next,
                (LPVOID)cast_pointer_function(_happen_event_continit4_wrapper),
                (LPVOID)cast_pointer_function((void(_happen_event_cont::*)())&_happen_event_cont::init)
            },
            _hook_record {
                (LPVOID)0x1400cfc10L,
                (LPVOID *)&_happen_event_contisset6_user,
                (LPVOID *)&_happen_event_contisset6_next,
                (LPVOID)cast_pointer_function(_happen_event_contisset6_wrapper),
                (LPVOID)cast_pointer_function((bool(_happen_event_cont::*)())&_happen_event_cont::isset)
            },
            _hook_record {
                (LPVOID)0x14028c8d0L,
                (LPVOID *)&_happen_event_contset8_user,
                (LPVOID *)&_happen_event_contset8_next,
                (LPVOID)cast_pointer_function(_happen_event_contset8_wrapper),
                (LPVOID)cast_pointer_function((void(_happen_event_cont::*)(struct _happen_event_node*, QUEST_HAPPEN, int, int))&_happen_event_cont::set)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
