#include <CHolyStoneSaveDataDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CHolyStoneSaveDataDefaultInit2_ptr CHolyStoneSaveDataDefaultInit2_next(nullptr);
        Info::CHolyStoneSaveDataDefaultInit2_clbk CHolyStoneSaveDataDefaultInit2_user(nullptr);
        
        void CHolyStoneSaveDataDefaultInit2_wrapper(struct CHolyStoneSaveData* _this, struct CHolyScheduleData::__HolyScheduleNode* ScheduleNode)
        {
           CHolyStoneSaveDataDefaultInit2_user(_this, ScheduleNode, CHolyStoneSaveDataDefaultInit2_next);
        };
        
        ::std::array<hook_record, 1> CHolyStoneSaveData_functions = 
        {
            _hook_record {
                (LPVOID)0x140284350L,
                (LPVOID *)&CHolyStoneSaveDataDefaultInit2_user,
                (LPVOID *)&CHolyStoneSaveDataDefaultInit2_next,
                (LPVOID)cast_pointer_function(CHolyStoneSaveDataDefaultInit2_wrapper),
                (LPVOID)cast_pointer_function((void(CHolyStoneSaveData::*)(struct CHolyScheduleData::__HolyScheduleNode*))&CHolyStoneSaveData::DefaultInit)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
