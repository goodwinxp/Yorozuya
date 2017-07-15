#include <_PARTICLE_ELEMENTDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_PARTICLE_ELEMENTUpDate1_ptr _PARTICLE_ELEMENTUpDate1_next(nullptr);
        Info::_PARTICLE_ELEMENTUpDate1_clbk _PARTICLE_ELEMENTUpDate1_user(nullptr);
        
        void _PARTICLE_ELEMENTUpDate1_wrapper(struct _PARTICLE_ELEMENT* _this, float arg_0)
        {
           _PARTICLE_ELEMENTUpDate1_user(_this, arg_0, _PARTICLE_ELEMENTUpDate1_next);
        };
        
        ::std::array<hook_record, 1> _PARTICLE_ELEMENT_functions = 
        {
            _hook_record {
                (LPVOID)0x1405172a0L,
                (LPVOID *)&_PARTICLE_ELEMENTUpDate1_user,
                (LPVOID *)&_PARTICLE_ELEMENTUpDate1_next,
                (LPVOID)cast_pointer_function(_PARTICLE_ELEMENTUpDate1_wrapper),
                (LPVOID)cast_pointer_function((void(_PARTICLE_ELEMENT::*)(float))&_PARTICLE_ELEMENT::UpDate)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
