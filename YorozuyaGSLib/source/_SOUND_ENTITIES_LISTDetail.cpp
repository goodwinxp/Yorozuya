#include <_SOUND_ENTITIES_LISTDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_SOUND_ENTITIES_LISTGetBoxIntensity1_ptr _SOUND_ENTITIES_LISTGetBoxIntensity1_next(nullptr);
        Info::_SOUND_ENTITIES_LISTGetBoxIntensity1_clbk _SOUND_ENTITIES_LISTGetBoxIntensity1_user(nullptr);
        
        Info::_SOUND_ENTITIES_LISTGetPan2_ptr _SOUND_ENTITIES_LISTGetPan2_next(nullptr);
        Info::_SOUND_ENTITIES_LISTGetPan2_clbk _SOUND_ENTITIES_LISTGetPan2_user(nullptr);
        
        Info::_SOUND_ENTITIES_LISTGetVolume3_ptr _SOUND_ENTITIES_LISTGetVolume3_next(nullptr);
        Info::_SOUND_ENTITIES_LISTGetVolume3_clbk _SOUND_ENTITIES_LISTGetVolume3_user(nullptr);
        
        float _SOUND_ENTITIES_LISTGetBoxIntensity1_wrapper(struct _SOUND_ENTITIES_LIST* _this, float* arg_0)
        {
           return _SOUND_ENTITIES_LISTGetBoxIntensity1_user(_this, arg_0, _SOUND_ENTITIES_LISTGetBoxIntensity1_next);
        };
        float _SOUND_ENTITIES_LISTGetPan2_wrapper(struct _SOUND_ENTITIES_LIST* _this, float* arg_0)
        {
           return _SOUND_ENTITIES_LISTGetPan2_user(_this, arg_0, _SOUND_ENTITIES_LISTGetPan2_next);
        };
        float _SOUND_ENTITIES_LISTGetVolume3_wrapper(struct _SOUND_ENTITIES_LIST* _this, float* arg_0)
        {
           return _SOUND_ENTITIES_LISTGetVolume3_user(_this, arg_0, _SOUND_ENTITIES_LISTGetVolume3_next);
        };
        
        ::std::array<hook_record, 3> _SOUND_ENTITIES_LIST_functions = 
        {
            _hook_record {
                (LPVOID)0x140520540L,
                (LPVOID *)&_SOUND_ENTITIES_LISTGetBoxIntensity1_user,
                (LPVOID *)&_SOUND_ENTITIES_LISTGetBoxIntensity1_next,
                (LPVOID)cast_pointer_function(_SOUND_ENTITIES_LISTGetBoxIntensity1_wrapper),
                (LPVOID)cast_pointer_function((float(_SOUND_ENTITIES_LIST::*)(float*))&_SOUND_ENTITIES_LIST::GetBoxIntensity)
            },
            _hook_record {
                (LPVOID)0x1405203f0L,
                (LPVOID *)&_SOUND_ENTITIES_LISTGetPan2_user,
                (LPVOID *)&_SOUND_ENTITIES_LISTGetPan2_next,
                (LPVOID)cast_pointer_function(_SOUND_ENTITIES_LISTGetPan2_wrapper),
                (LPVOID)cast_pointer_function((float(_SOUND_ENTITIES_LIST::*)(float*))&_SOUND_ENTITIES_LIST::GetPan)
            },
            _hook_record {
                (LPVOID)0x140520360L,
                (LPVOID *)&_SOUND_ENTITIES_LISTGetVolume3_user,
                (LPVOID *)&_SOUND_ENTITIES_LISTGetVolume3_next,
                (LPVOID)cast_pointer_function(_SOUND_ENTITIES_LISTGetVolume3_wrapper),
                (LPVOID)cast_pointer_function((float(_SOUND_ENTITIES_LIST::*)(float*))&_SOUND_ENTITIES_LIST::GetVolume)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
