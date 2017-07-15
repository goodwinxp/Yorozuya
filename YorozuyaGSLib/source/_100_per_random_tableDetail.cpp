#include <_100_per_random_tableDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_100_per_random_tableGetRand2_ptr _100_per_random_tableGetRand2_next(nullptr);
        Info::_100_per_random_tableGetRand2_clbk _100_per_random_tableGetRand2_user(nullptr);
        
        
        Info::_100_per_random_tablector__100_per_random_table4_ptr _100_per_random_tablector__100_per_random_table4_next(nullptr);
        Info::_100_per_random_tablector__100_per_random_table4_clbk _100_per_random_tablector__100_per_random_table4_user(nullptr);
        
        Info::_100_per_random_tablereset6_ptr _100_per_random_tablereset6_next(nullptr);
        Info::_100_per_random_tablereset6_clbk _100_per_random_tablereset6_user(nullptr);
        
        uint16_t _100_per_random_tableGetRand2_wrapper(struct _100_per_random_table* _this)
        {
           return _100_per_random_tableGetRand2_user(_this, _100_per_random_tableGetRand2_next);
        };
        
        void _100_per_random_tablector__100_per_random_table4_wrapper(struct _100_per_random_table* _this)
        {
           _100_per_random_tablector__100_per_random_table4_user(_this, _100_per_random_tablector__100_per_random_table4_next);
        };
        void _100_per_random_tablereset6_wrapper(struct _100_per_random_table* _this)
        {
           _100_per_random_tablereset6_user(_this, _100_per_random_tablereset6_next);
        };
        
        ::std::array<hook_record, 3> _100_per_random_table_functions = 
        {
            _hook_record {
                (LPVOID)0x1400b81d0L,
                (LPVOID *)&_100_per_random_tableGetRand2_user,
                (LPVOID *)&_100_per_random_tableGetRand2_next,
                (LPVOID)cast_pointer_function(_100_per_random_tableGetRand2_wrapper),
                (LPVOID)cast_pointer_function((uint16_t(_100_per_random_table::*)())&_100_per_random_table::GetRand)
            },
            _hook_record {
                (LPVOID)0x1400726c0L,
                (LPVOID *)&_100_per_random_tablector__100_per_random_table4_user,
                (LPVOID *)&_100_per_random_tablector__100_per_random_table4_next,
                (LPVOID)cast_pointer_function(_100_per_random_tablector__100_per_random_table4_wrapper),
                (LPVOID)cast_pointer_function((void(_100_per_random_table::*)())&_100_per_random_table::ctor__100_per_random_table)
            },
            _hook_record {
                (LPVOID)0x1400727e0L,
                (LPVOID *)&_100_per_random_tablereset6_user,
                (LPVOID *)&_100_per_random_tablereset6_next,
                (LPVOID)cast_pointer_function(_100_per_random_tablereset6_wrapper),
                (LPVOID)cast_pointer_function((void(_100_per_random_table::*)())&_100_per_random_table::reset)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
