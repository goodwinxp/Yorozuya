#include <_talik_crystal_exchange_zoclDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_talik_crystal_exchange_zoclctor__talik_crystal_exchange_zocl2_ptr _talik_crystal_exchange_zoclctor__talik_crystal_exchange_zocl2_next(nullptr);
        Info::_talik_crystal_exchange_zoclctor__talik_crystal_exchange_zocl2_clbk _talik_crystal_exchange_zoclctor__talik_crystal_exchange_zocl2_user(nullptr);
        
        Info::_talik_crystal_exchange_zoclsize4_ptr _talik_crystal_exchange_zoclsize4_next(nullptr);
        Info::_talik_crystal_exchange_zoclsize4_clbk _talik_crystal_exchange_zoclsize4_user(nullptr);
        
        
        void _talik_crystal_exchange_zoclctor__talik_crystal_exchange_zocl2_wrapper(struct _talik_crystal_exchange_zocl* _this)
        {
           _talik_crystal_exchange_zoclctor__talik_crystal_exchange_zocl2_user(_this, _talik_crystal_exchange_zoclctor__talik_crystal_exchange_zocl2_next);
        };
        int _talik_crystal_exchange_zoclsize4_wrapper(struct _talik_crystal_exchange_zocl* _this)
        {
           return _talik_crystal_exchange_zoclsize4_user(_this, _talik_crystal_exchange_zoclsize4_next);
        };
        
        ::std::array<hook_record, 2> _talik_crystal_exchange_zocl_functions = 
        {
            _hook_record {
                (LPVOID)0x140432230L,
                (LPVOID *)&_talik_crystal_exchange_zoclctor__talik_crystal_exchange_zocl2_user,
                (LPVOID *)&_talik_crystal_exchange_zoclctor__talik_crystal_exchange_zocl2_next,
                (LPVOID)cast_pointer_function(_talik_crystal_exchange_zoclctor__talik_crystal_exchange_zocl2_wrapper),
                (LPVOID)cast_pointer_function((void(_talik_crystal_exchange_zocl::*)())&_talik_crystal_exchange_zocl::ctor__talik_crystal_exchange_zocl)
            },
            _hook_record {
                (LPVOID)0x140432280L,
                (LPVOID *)&_talik_crystal_exchange_zoclsize4_user,
                (LPVOID *)&_talik_crystal_exchange_zoclsize4_next,
                (LPVOID)cast_pointer_function(_talik_crystal_exchange_zoclsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_talik_crystal_exchange_zocl::*)())&_talik_crystal_exchange_zocl::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
