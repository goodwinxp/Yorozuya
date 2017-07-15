#include <MonsterSetInfoDataDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::MonsterSetInfoDataGetLevelContSFTime2_ptr MonsterSetInfoDataGetLevelContSFTime2_next(nullptr);
        Info::MonsterSetInfoDataGetLevelContSFTime2_clbk MonsterSetInfoDataGetLevelContSFTime2_user(nullptr);
        
        Info::MonsterSetInfoDataGetLostMonsterTargetDistance4_ptr MonsterSetInfoDataGetLostMonsterTargetDistance4_next(nullptr);
        Info::MonsterSetInfoDataGetLostMonsterTargetDistance4_clbk MonsterSetInfoDataGetLostMonsterTargetDistance4_user(nullptr);
        
        Info::MonsterSetInfoDataGetMaxToleranceProbMax6_ptr MonsterSetInfoDataGetMaxToleranceProbMax6_next(nullptr);
        Info::MonsterSetInfoDataGetMaxToleranceProbMax6_clbk MonsterSetInfoDataGetMaxToleranceProbMax6_user(nullptr);
        
        Info::MonsterSetInfoDataGetMonsterDropRate8_ptr MonsterSetInfoDataGetMonsterDropRate8_next(nullptr);
        Info::MonsterSetInfoDataGetMonsterDropRate8_clbk MonsterSetInfoDataGetMonsterDropRate8_user(nullptr);
        
        Info::MonsterSetInfoDataGetMonsterForcePowerRate10_ptr MonsterSetInfoDataGetMonsterForcePowerRate10_next(nullptr);
        Info::MonsterSetInfoDataGetMonsterForcePowerRate10_clbk MonsterSetInfoDataGetMonsterForcePowerRate10_user(nullptr);
        
        Info::MonsterSetInfoDataInit12_ptr MonsterSetInfoDataInit12_next(nullptr);
        Info::MonsterSetInfoDataInit12_clbk MonsterSetInfoDataInit12_user(nullptr);
        
        Info::MonsterSetInfoDataIsRotateBlock14_ptr MonsterSetInfoDataIsRotateBlock14_next(nullptr);
        Info::MonsterSetInfoDataIsRotateBlock14_clbk MonsterSetInfoDataIsRotateBlock14_user(nullptr);
        
        Info::MonsterSetInfoDataLoad16_ptr MonsterSetInfoDataLoad16_next(nullptr);
        Info::MonsterSetInfoDataLoad16_clbk MonsterSetInfoDataLoad16_user(nullptr);
        
        
        Info::MonsterSetInfoDatactor_MonsterSetInfoData18_ptr MonsterSetInfoDatactor_MonsterSetInfoData18_next(nullptr);
        Info::MonsterSetInfoDatactor_MonsterSetInfoData18_clbk MonsterSetInfoDatactor_MonsterSetInfoData18_user(nullptr);
        
        char MonsterSetInfoDataGetLevelContSFTime2_wrapper(struct MonsterSetInfoData* _this, char byEffectCode, char byLevel)
        {
           return MonsterSetInfoDataGetLevelContSFTime2_user(_this, byEffectCode, byLevel, MonsterSetInfoDataGetLevelContSFTime2_next);
        };
        int MonsterSetInfoDataGetLostMonsterTargetDistance4_wrapper(struct MonsterSetInfoData* _this)
        {
           return MonsterSetInfoDataGetLostMonsterTargetDistance4_user(_this, MonsterSetInfoDataGetLostMonsterTargetDistance4_next);
        };
        float MonsterSetInfoDataGetMaxToleranceProbMax6_wrapper(struct MonsterSetInfoData* _this, int nMonGrade)
        {
           return MonsterSetInfoDataGetMaxToleranceProbMax6_user(_this, nMonGrade, MonsterSetInfoDataGetMaxToleranceProbMax6_next);
        };
        unsigned int MonsterSetInfoDataGetMonsterDropRate8_wrapper(struct MonsterSetInfoData* _this, int iDiffLevel)
        {
           return MonsterSetInfoDataGetMonsterDropRate8_user(_this, iDiffLevel, MonsterSetInfoDataGetMonsterDropRate8_next);
        };
        float MonsterSetInfoDataGetMonsterForcePowerRate10_wrapper(struct MonsterSetInfoData* _this)
        {
           return MonsterSetInfoDataGetMonsterForcePowerRate10_user(_this, MonsterSetInfoDataGetMonsterForcePowerRate10_next);
        };
        void MonsterSetInfoDataInit12_wrapper(struct MonsterSetInfoData* _this)
        {
           MonsterSetInfoDataInit12_user(_this, MonsterSetInfoDataInit12_next);
        };
        bool MonsterSetInfoDataIsRotateBlock14_wrapper(struct MonsterSetInfoData* _this, struct _mon_block* pBlock)
        {
           return MonsterSetInfoDataIsRotateBlock14_user(_this, pBlock, MonsterSetInfoDataIsRotateBlock14_next);
        };
        int MonsterSetInfoDataLoad16_wrapper(struct MonsterSetInfoData* _this, char* strFileName)
        {
           return MonsterSetInfoDataLoad16_user(_this, strFileName, MonsterSetInfoDataLoad16_next);
        };
        
        void MonsterSetInfoDatactor_MonsterSetInfoData18_wrapper(struct MonsterSetInfoData* _this)
        {
           MonsterSetInfoDatactor_MonsterSetInfoData18_user(_this, MonsterSetInfoDatactor_MonsterSetInfoData18_next);
        };
        
        ::std::array<hook_record, 9> MonsterSetInfoData_functions = 
        {
            _hook_record {
                (LPVOID)0x14015d4a0L,
                (LPVOID *)&MonsterSetInfoDataGetLevelContSFTime2_user,
                (LPVOID *)&MonsterSetInfoDataGetLevelContSFTime2_next,
                (LPVOID)cast_pointer_function(MonsterSetInfoDataGetLevelContSFTime2_wrapper),
                (LPVOID)cast_pointer_function((char(MonsterSetInfoData::*)(char, char))&MonsterSetInfoData::GetLevelContSFTime)
            },
            _hook_record {
                (LPVOID)0x140155670L,
                (LPVOID *)&MonsterSetInfoDataGetLostMonsterTargetDistance4_user,
                (LPVOID *)&MonsterSetInfoDataGetLostMonsterTargetDistance4_next,
                (LPVOID)cast_pointer_function(MonsterSetInfoDataGetLostMonsterTargetDistance4_wrapper),
                (LPVOID)cast_pointer_function((int(MonsterSetInfoData::*)())&MonsterSetInfoData::GetLostMonsterTargetDistance)
            },
            _hook_record {
                (LPVOID)0x14014bdf0L,
                (LPVOID *)&MonsterSetInfoDataGetMaxToleranceProbMax6_user,
                (LPVOID *)&MonsterSetInfoDataGetMaxToleranceProbMax6_next,
                (LPVOID)cast_pointer_function(MonsterSetInfoDataGetMaxToleranceProbMax6_wrapper),
                (LPVOID)cast_pointer_function((float(MonsterSetInfoData::*)(int))&MonsterSetInfoData::GetMaxToleranceProbMax)
            },
            _hook_record {
                (LPVOID)0x14015d510L,
                (LPVOID *)&MonsterSetInfoDataGetMonsterDropRate8_user,
                (LPVOID *)&MonsterSetInfoDataGetMonsterDropRate8_next,
                (LPVOID)cast_pointer_function(MonsterSetInfoDataGetMonsterDropRate8_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(MonsterSetInfoData::*)(int))&MonsterSetInfoData::GetMonsterDropRate)
            },
            _hook_record {
                (LPVOID)0x140161640L,
                (LPVOID *)&MonsterSetInfoDataGetMonsterForcePowerRate10_user,
                (LPVOID *)&MonsterSetInfoDataGetMonsterForcePowerRate10_next,
                (LPVOID)cast_pointer_function(MonsterSetInfoDataGetMonsterForcePowerRate10_wrapper),
                (LPVOID)cast_pointer_function((float(MonsterSetInfoData::*)())&MonsterSetInfoData::GetMonsterForcePowerRate)
            },
            _hook_record {
                (LPVOID)0x14015d010L,
                (LPVOID *)&MonsterSetInfoDataInit12_user,
                (LPVOID *)&MonsterSetInfoDataInit12_next,
                (LPVOID)cast_pointer_function(MonsterSetInfoDataInit12_wrapper),
                (LPVOID)cast_pointer_function((void(MonsterSetInfoData::*)())&MonsterSetInfoData::Init)
            },
            _hook_record {
                (LPVOID)0x14015d110L,
                (LPVOID *)&MonsterSetInfoDataIsRotateBlock14_user,
                (LPVOID *)&MonsterSetInfoDataIsRotateBlock14_next,
                (LPVOID)cast_pointer_function(MonsterSetInfoDataIsRotateBlock14_wrapper),
                (LPVOID)cast_pointer_function((bool(MonsterSetInfoData::*)(struct _mon_block*))&MonsterSetInfoData::IsRotateBlock)
            },
            _hook_record {
                (LPVOID)0x14015c7e0L,
                (LPVOID *)&MonsterSetInfoDataLoad16_user,
                (LPVOID *)&MonsterSetInfoDataLoad16_next,
                (LPVOID)cast_pointer_function(MonsterSetInfoDataLoad16_wrapper),
                (LPVOID)cast_pointer_function((int(MonsterSetInfoData::*)(char*))&MonsterSetInfoData::Load)
            },
            _hook_record {
                (LPVOID)0x140161980L,
                (LPVOID *)&MonsterSetInfoDatactor_MonsterSetInfoData18_user,
                (LPVOID *)&MonsterSetInfoDatactor_MonsterSetInfoData18_next,
                (LPVOID)cast_pointer_function(MonsterSetInfoDatactor_MonsterSetInfoData18_wrapper),
                (LPVOID)cast_pointer_function((void(MonsterSetInfoData::*)())&MonsterSetInfoData::ctor_MonsterSetInfoData)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
