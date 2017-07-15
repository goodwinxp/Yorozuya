#include <_DB_LOAD_AUTOMINE_MACHINEDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::_DB_LOAD_AUTOMINE_MACHINEctor__DB_LOAD_AUTOMINE_MACHINE2_ptr _DB_LOAD_AUTOMINE_MACHINEctor__DB_LOAD_AUTOMINE_MACHINE2_next(nullptr);
        Info::_DB_LOAD_AUTOMINE_MACHINEctor__DB_LOAD_AUTOMINE_MACHINE2_clbk _DB_LOAD_AUTOMINE_MACHINEctor__DB_LOAD_AUTOMINE_MACHINE2_user(nullptr);
        
        Info::_DB_LOAD_AUTOMINE_MACHINEsize4_ptr _DB_LOAD_AUTOMINE_MACHINEsize4_next(nullptr);
        Info::_DB_LOAD_AUTOMINE_MACHINEsize4_clbk _DB_LOAD_AUTOMINE_MACHINEsize4_user(nullptr);
        
        
        void _DB_LOAD_AUTOMINE_MACHINEctor__DB_LOAD_AUTOMINE_MACHINE2_wrapper(struct _DB_LOAD_AUTOMINE_MACHINE* _this)
        {
           _DB_LOAD_AUTOMINE_MACHINEctor__DB_LOAD_AUTOMINE_MACHINE2_user(_this, _DB_LOAD_AUTOMINE_MACHINEctor__DB_LOAD_AUTOMINE_MACHINE2_next);
        };
        int _DB_LOAD_AUTOMINE_MACHINEsize4_wrapper(struct _DB_LOAD_AUTOMINE_MACHINE* _this)
        {
           return _DB_LOAD_AUTOMINE_MACHINEsize4_user(_this, _DB_LOAD_AUTOMINE_MACHINEsize4_next);
        };
        
        ::std::array<hook_record, 2> _DB_LOAD_AUTOMINE_MACHINE_functions = 
        {
            _hook_record {
                (LPVOID)0x1402d4100L,
                (LPVOID *)&_DB_LOAD_AUTOMINE_MACHINEctor__DB_LOAD_AUTOMINE_MACHINE2_user,
                (LPVOID *)&_DB_LOAD_AUTOMINE_MACHINEctor__DB_LOAD_AUTOMINE_MACHINE2_next,
                (LPVOID)cast_pointer_function(_DB_LOAD_AUTOMINE_MACHINEctor__DB_LOAD_AUTOMINE_MACHINE2_wrapper),
                (LPVOID)cast_pointer_function((void(_DB_LOAD_AUTOMINE_MACHINE::*)())&_DB_LOAD_AUTOMINE_MACHINE::ctor__DB_LOAD_AUTOMINE_MACHINE)
            },
            _hook_record {
                (LPVOID)0x1402d4070L,
                (LPVOID *)&_DB_LOAD_AUTOMINE_MACHINEsize4_user,
                (LPVOID *)&_DB_LOAD_AUTOMINE_MACHINEsize4_next,
                (LPVOID)cast_pointer_function(_DB_LOAD_AUTOMINE_MACHINEsize4_wrapper),
                (LPVOID)cast_pointer_function((int(_DB_LOAD_AUTOMINE_MACHINE::*)())&_DB_LOAD_AUTOMINE_MACHINE::size)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
