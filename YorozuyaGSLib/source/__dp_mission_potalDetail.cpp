#include <__dp_mission_potalDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::__dp_mission_potalctor___dp_mission_potal2_ptr __dp_mission_potalctor___dp_mission_potal2_next(nullptr);
        Info::__dp_mission_potalctor___dp_mission_potal2_clbk __dp_mission_potalctor___dp_mission_potal2_user(nullptr);
        
        Info::__dp_mission_potalfind4_ptr __dp_mission_potalfind4_next(nullptr);
        Info::__dp_mission_potalfind4_clbk __dp_mission_potalfind4_user(nullptr);
        
        Info::__dp_mission_potalset6_ptr __dp_mission_potalset6_next(nullptr);
        Info::__dp_mission_potalset6_clbk __dp_mission_potalset6_user(nullptr);
        
        
        Info::__dp_mission_potaldtor___dp_mission_potal8_ptr __dp_mission_potaldtor___dp_mission_potal8_next(nullptr);
        Info::__dp_mission_potaldtor___dp_mission_potal8_clbk __dp_mission_potaldtor___dp_mission_potal8_user(nullptr);
        
        
        void __dp_mission_potalctor___dp_mission_potal2_wrapper(struct __dp_mission_potal* _this)
        {
           __dp_mission_potalctor___dp_mission_potal2_user(_this, __dp_mission_potalctor___dp_mission_potal2_next);
        };
        bool __dp_mission_potalfind4_wrapper(struct __dp_mission_potal* _this, char* pcode)
        {
           return __dp_mission_potalfind4_user(_this, pcode, __dp_mission_potalfind4_next);
        };
        void __dp_mission_potalset6_wrapper(struct __dp_mission_potal* _this, char* szCode)
        {
           __dp_mission_potalset6_user(_this, szCode, __dp_mission_potalset6_next);
        };
        
        void __dp_mission_potaldtor___dp_mission_potal8_wrapper(struct __dp_mission_potal* _this)
        {
           __dp_mission_potaldtor___dp_mission_potal8_user(_this, __dp_mission_potaldtor___dp_mission_potal8_next);
        };
        
        ::std::array<hook_record, 4> __dp_mission_potal_functions = 
        {
            _hook_record {
                (LPVOID)0x140272d20L,
                (LPVOID *)&__dp_mission_potalctor___dp_mission_potal2_user,
                (LPVOID *)&__dp_mission_potalctor___dp_mission_potal2_next,
                (LPVOID)cast_pointer_function(__dp_mission_potalctor___dp_mission_potal2_wrapper),
                (LPVOID)cast_pointer_function((void(__dp_mission_potal::*)())&__dp_mission_potal::ctor___dp_mission_potal)
            },
            _hook_record {
                (LPVOID)0x14026f780L,
                (LPVOID *)&__dp_mission_potalfind4_user,
                (LPVOID *)&__dp_mission_potalfind4_next,
                (LPVOID)cast_pointer_function(__dp_mission_potalfind4_wrapper),
                (LPVOID)cast_pointer_function((bool(__dp_mission_potal::*)(char*))&__dp_mission_potal::find)
            },
            _hook_record {
                (LPVOID)0x14027a190L,
                (LPVOID *)&__dp_mission_potalset6_user,
                (LPVOID *)&__dp_mission_potalset6_next,
                (LPVOID)cast_pointer_function(__dp_mission_potalset6_wrapper),
                (LPVOID)cast_pointer_function((void(__dp_mission_potal::*)(char*))&__dp_mission_potal::set)
            },
            _hook_record {
                (LPVOID)0x140272de0L,
                (LPVOID *)&__dp_mission_potaldtor___dp_mission_potal8_user,
                (LPVOID *)&__dp_mission_potaldtor___dp_mission_potal8_next,
                (LPVOID)cast_pointer_function(__dp_mission_potaldtor___dp_mission_potal8_wrapper),
                (LPVOID)cast_pointer_function((void(__dp_mission_potal::*)())&__dp_mission_potal::dtor___dp_mission_potal)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
