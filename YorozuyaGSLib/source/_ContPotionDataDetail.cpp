#include <_ContPotionDataDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_ContPotionDataGetEffectIndex2_ptr _ContPotionDataGetEffectIndex2_next(nullptr);
        Info::_ContPotionDataGetEffectIndex2_clbk _ContPotionDataGetEffectIndex2_user(nullptr);
        
        Info::_ContPotionDataInit4_ptr _ContPotionDataInit4_next(nullptr);
        Info::_ContPotionDataInit4_clbk _ContPotionDataInit4_user(nullptr);
        
        Info::_ContPotionDataIsLive6_ptr _ContPotionDataIsLive6_next(nullptr);
        Info::_ContPotionDataIsLive6_clbk _ContPotionDataIsLive6_user(nullptr);
        
        Info::_ContPotionDataSet8_ptr _ContPotionDataSet8_next(nullptr);
        Info::_ContPotionDataSet8_clbk _ContPotionDataSet8_user(nullptr);
        
        
        Info::_ContPotionDatactor__ContPotionData10_ptr _ContPotionDatactor__ContPotionData10_next(nullptr);
        Info::_ContPotionDatactor__ContPotionData10_clbk _ContPotionDatactor__ContPotionData10_user(nullptr);
        
        unsigned int _ContPotionDataGetEffectIndex2_wrapper(struct _ContPotionData* _this)
        {
           return _ContPotionDataGetEffectIndex2_user(_this, _ContPotionDataGetEffectIndex2_next);
        };
        void _ContPotionDataInit4_wrapper(struct _ContPotionData* _this)
        {
           _ContPotionDataInit4_user(_this, _ContPotionDataInit4_next);
        };
        bool _ContPotionDataIsLive6_wrapper(struct _ContPotionData* _this)
        {
           return _ContPotionDataIsLive6_user(_this, _ContPotionDataIsLive6_next);
        };
        void _ContPotionDataSet8_wrapper(struct _ContPotionData* _this, unsigned int dwPotionIndex, unsigned int dwStartTime, unsigned int wDurCapSec)
        {
           _ContPotionDataSet8_user(_this, dwPotionIndex, dwStartTime, wDurCapSec, _ContPotionDataSet8_next);
        };
        
        void _ContPotionDatactor__ContPotionData10_wrapper(struct _ContPotionData* _this)
        {
           _ContPotionDatactor__ContPotionData10_user(_this, _ContPotionDatactor__ContPotionData10_next);
        };
        
        ::std::array<hook_record, 5> _ContPotionData_functions = 
        {
            _hook_record {
                (LPVOID)0x1403a1010L,
                (LPVOID *)&_ContPotionDataGetEffectIndex2_user,
                (LPVOID *)&_ContPotionDataGetEffectIndex2_next,
                (LPVOID)cast_pointer_function(_ContPotionDataGetEffectIndex2_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(_ContPotionData::*)())&_ContPotionData::GetEffectIndex)
            },
            _hook_record {
                (LPVOID)0x140072af0L,
                (LPVOID *)&_ContPotionDataInit4_user,
                (LPVOID *)&_ContPotionDataInit4_next,
                (LPVOID)cast_pointer_function(_ContPotionDataInit4_wrapper),
                (LPVOID)cast_pointer_function((void(_ContPotionData::*)())&_ContPotionData::Init)
            },
            _hook_record {
                (LPVOID)0x1403a0fb0L,
                (LPVOID *)&_ContPotionDataIsLive6_user,
                (LPVOID *)&_ContPotionDataIsLive6_next,
                (LPVOID)cast_pointer_function(_ContPotionDataIsLive6_wrapper),
                (LPVOID)cast_pointer_function((bool(_ContPotionData::*)())&_ContPotionData::IsLive)
            },
            _hook_record {
                (LPVOID)0x1403a10d0L,
                (LPVOID *)&_ContPotionDataSet8_user,
                (LPVOID *)&_ContPotionDataSet8_next,
                (LPVOID)cast_pointer_function(_ContPotionDataSet8_wrapper),
                (LPVOID)cast_pointer_function((void(_ContPotionData::*)(unsigned int, unsigned int, unsigned int))&_ContPotionData::Set)
            },
            _hook_record {
                (LPVOID)0x140072a80L,
                (LPVOID *)&_ContPotionDatactor__ContPotionData10_user,
                (LPVOID *)&_ContPotionDatactor__ContPotionData10_next,
                (LPVOID)cast_pointer_function(_ContPotionDatactor__ContPotionData10_wrapper),
                (LPVOID)cast_pointer_function((void(_ContPotionData::*)())&_ContPotionData::ctor__ContPotionData)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
