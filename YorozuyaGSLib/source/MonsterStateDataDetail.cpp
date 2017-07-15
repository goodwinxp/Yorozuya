#include <MonsterStateDataDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::MonsterStateDataGetStateChunk2_ptr MonsterStateDataGetStateChunk2_next(nullptr);
        Info::MonsterStateDataGetStateChunk2_clbk MonsterStateDataGetStateChunk2_user(nullptr);
        
        
        Info::MonsterStateDatactor_MonsterStateData4_ptr MonsterStateDatactor_MonsterStateData4_next(nullptr);
        Info::MonsterStateDatactor_MonsterStateData4_clbk MonsterStateDatactor_MonsterStateData4_user(nullptr);
        
        uint16_t MonsterStateDataGetStateChunk2_wrapper(struct MonsterStateData* _this)
        {
           return MonsterStateDataGetStateChunk2_user(_this, MonsterStateDataGetStateChunk2_next);
        };
        
        void MonsterStateDatactor_MonsterStateData4_wrapper(struct MonsterStateData* _this)
        {
           MonsterStateDatactor_MonsterStateData4_user(_this, MonsterStateDatactor_MonsterStateData4_next);
        };
        
        ::std::array<hook_record, 2> MonsterStateData_functions = 
        {
            _hook_record {
                (LPVOID)0x14014c450L,
                (LPVOID *)&MonsterStateDataGetStateChunk2_user,
                (LPVOID *)&MonsterStateDataGetStateChunk2_next,
                (LPVOID)cast_pointer_function(MonsterStateDataGetStateChunk2_wrapper),
                (LPVOID)cast_pointer_function((uint16_t(MonsterStateData::*)())&MonsterStateData::GetStateChunk)
            },
            _hook_record {
                (LPVOID)0x14014b700L,
                (LPVOID *)&MonsterStateDatactor_MonsterStateData4_user,
                (LPVOID *)&MonsterStateDatactor_MonsterStateData4_next,
                (LPVOID)cast_pointer_function(MonsterStateDatactor_MonsterStateData4_wrapper),
                (LPVOID)cast_pointer_function((void(MonsterStateData::*)())&MonsterStateData::ctor_MonsterStateData)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
