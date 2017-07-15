#include <AreaDataDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::AreaDatactor_AreaData2_ptr AreaDatactor_AreaData2_next(nullptr);
        Info::AreaDatactor_AreaData2_clbk AreaDatactor_AreaData2_user(nullptr);
        
        
        Info::AreaDatactor_AreaData4_ptr AreaDatactor_AreaData4_next(nullptr);
        Info::AreaDatactor_AreaData4_clbk AreaDatactor_AreaData4_user(nullptr);
        
        
        Info::AreaDatadtor_AreaData10_ptr AreaDatadtor_AreaData10_next(nullptr);
        Info::AreaDatadtor_AreaData10_clbk AreaDatadtor_AreaData10_user(nullptr);
        
        
        void AreaDatactor_AreaData2_wrapper(struct AreaData* _this, struct AreaData* __that)
        {
           AreaDatactor_AreaData2_user(_this, __that, AreaDatactor_AreaData2_next);
        };
        
        void AreaDatactor_AreaData4_wrapper(struct AreaData* _this)
        {
           AreaDatactor_AreaData4_user(_this, AreaDatactor_AreaData4_next);
        };
        
        void AreaDatadtor_AreaData10_wrapper(struct AreaData* _this)
        {
           AreaDatadtor_AreaData10_user(_this, AreaDatadtor_AreaData10_next);
        };
        
        ::std::array<hook_record, 3> AreaData_functions = 
        {
            _hook_record {
                (LPVOID)0x14018bdb0L,
                (LPVOID *)&AreaDatactor_AreaData2_user,
                (LPVOID *)&AreaDatactor_AreaData2_next,
                (LPVOID)cast_pointer_function(AreaDatactor_AreaData2_wrapper),
                (LPVOID)cast_pointer_function((void(AreaData::*)(struct AreaData*))&AreaData::ctor_AreaData)
            },
            _hook_record {
                (LPVOID)0x14018bd50L,
                (LPVOID *)&AreaDatactor_AreaData4_user,
                (LPVOID *)&AreaDatactor_AreaData4_next,
                (LPVOID)cast_pointer_function(AreaDatactor_AreaData4_wrapper),
                (LPVOID)cast_pointer_function((void(AreaData::*)())&AreaData::ctor_AreaData)
            },
            _hook_record {
                (LPVOID)0x14018bd00L,
                (LPVOID *)&AreaDatadtor_AreaData10_user,
                (LPVOID *)&AreaDatadtor_AreaData10_next,
                (LPVOID)cast_pointer_function(AreaDatadtor_AreaData10_wrapper),
                (LPVOID)cast_pointer_function((void(AreaData::*)())&AreaData::dtor_AreaData)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
