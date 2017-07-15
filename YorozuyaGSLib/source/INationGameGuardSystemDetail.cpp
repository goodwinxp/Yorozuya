#include <INationGameGuardSystemDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::INationGameGuardSystemctor_INationGameGuardSystem2_ptr INationGameGuardSystemctor_INationGameGuardSystem2_next(nullptr);
        Info::INationGameGuardSystemctor_INationGameGuardSystem2_clbk INationGameGuardSystemctor_INationGameGuardSystem2_user(nullptr);
        
        
        Info::INationGameGuardSystemdtor_INationGameGuardSystem7_ptr INationGameGuardSystemdtor_INationGameGuardSystem7_next(nullptr);
        Info::INationGameGuardSystemdtor_INationGameGuardSystem7_clbk INationGameGuardSystemdtor_INationGameGuardSystem7_user(nullptr);
        
        
        void INationGameGuardSystemctor_INationGameGuardSystem2_wrapper(struct INationGameGuardSystem* _this)
        {
           INationGameGuardSystemctor_INationGameGuardSystem2_user(_this, INationGameGuardSystemctor_INationGameGuardSystem2_next);
        };
        
        void INationGameGuardSystemdtor_INationGameGuardSystem7_wrapper(struct INationGameGuardSystem* _this)
        {
           INationGameGuardSystemdtor_INationGameGuardSystem7_user(_this, INationGameGuardSystemdtor_INationGameGuardSystem7_next);
        };
        
        ::std::array<hook_record, 2> INationGameGuardSystem_functions = 
        {
            _hook_record {
                (LPVOID)0x140417660L,
                (LPVOID *)&INationGameGuardSystemctor_INationGameGuardSystem2_user,
                (LPVOID *)&INationGameGuardSystemctor_INationGameGuardSystem2_next,
                (LPVOID)cast_pointer_function(INationGameGuardSystemctor_INationGameGuardSystem2_wrapper),
                (LPVOID)cast_pointer_function((void(INationGameGuardSystem::*)())&INationGameGuardSystem::ctor_INationGameGuardSystem)
            },
            _hook_record {
                (LPVOID)0x140417690L,
                (LPVOID *)&INationGameGuardSystemdtor_INationGameGuardSystem7_user,
                (LPVOID *)&INationGameGuardSystemdtor_INationGameGuardSystem7_next,
                (LPVOID)cast_pointer_function(INationGameGuardSystemdtor_INationGameGuardSystem7_wrapper),
                (LPVOID)cast_pointer_function((void(INationGameGuardSystem::*)())&INationGameGuardSystem::dtor_INationGameGuardSystem)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
