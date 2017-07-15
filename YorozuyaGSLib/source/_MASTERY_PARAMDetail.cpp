#include <_MASTERY_PARAMDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_MASTERY_PARAMAlterCumPerMast2_ptr _MASTERY_PARAMAlterCumPerMast2_next(nullptr);
        Info::_MASTERY_PARAMAlterCumPerMast2_clbk _MASTERY_PARAMAlterCumPerMast2_user(nullptr);
        
        Info::_MASTERY_PARAMGetAveForceMasteryPerClass4_ptr _MASTERY_PARAMGetAveForceMasteryPerClass4_next(nullptr);
        Info::_MASTERY_PARAMGetAveForceMasteryPerClass4_clbk _MASTERY_PARAMGetAveForceMasteryPerClass4_user(nullptr);
        
        Info::_MASTERY_PARAMGetAveSkillMasteryPerClass6_ptr _MASTERY_PARAMGetAveSkillMasteryPerClass6_next(nullptr);
        Info::_MASTERY_PARAMGetAveSkillMasteryPerClass6_clbk _MASTERY_PARAMGetAveSkillMasteryPerClass6_user(nullptr);
        
        Info::_MASTERY_PARAMGetCumPerMast8_ptr _MASTERY_PARAMGetCumPerMast8_next(nullptr);
        Info::_MASTERY_PARAMGetCumPerMast8_clbk _MASTERY_PARAMGetCumPerMast8_user(nullptr);
        
        Info::_MASTERY_PARAMGetEquipMastery10_ptr _MASTERY_PARAMGetEquipMastery10_next(nullptr);
        Info::_MASTERY_PARAMGetEquipMastery10_clbk _MASTERY_PARAMGetEquipMastery10_user(nullptr);
        
        Info::_MASTERY_PARAMGetMasteryPerMast12_ptr _MASTERY_PARAMGetMasteryPerMast12_next(nullptr);
        Info::_MASTERY_PARAMGetMasteryPerMast12_clbk _MASTERY_PARAMGetMasteryPerMast12_user(nullptr);
        
        Info::_MASTERY_PARAMGetSkillLv14_ptr _MASTERY_PARAMGetSkillLv14_next(nullptr);
        Info::_MASTERY_PARAMGetSkillLv14_clbk _MASTERY_PARAMGetSkillLv14_user(nullptr);
        
        Info::_MASTERY_PARAMInit16_ptr _MASTERY_PARAMInit16_next(nullptr);
        Info::_MASTERY_PARAMInit16_clbk _MASTERY_PARAMInit16_user(nullptr);
        
        Info::_MASTERY_PARAMIsValidMasteryCode18_ptr _MASTERY_PARAMIsValidMasteryCode18_next(nullptr);
        Info::_MASTERY_PARAMIsValidMasteryCode18_clbk _MASTERY_PARAMIsValidMasteryCode18_user(nullptr);
        
        Info::_MASTERY_PARAMSetStaticMember20_ptr _MASTERY_PARAMSetStaticMember20_next(nullptr);
        Info::_MASTERY_PARAMSetStaticMember20_clbk _MASTERY_PARAMSetStaticMember20_user(nullptr);
        
        Info::_MASTERY_PARAMUpdateCumPerMast22_ptr _MASTERY_PARAMUpdateCumPerMast22_next(nullptr);
        Info::_MASTERY_PARAMUpdateCumPerMast22_clbk _MASTERY_PARAMUpdateCumPerMast22_user(nullptr);
        
        
        Info::_MASTERY_PARAMctor__MASTERY_PARAM24_ptr _MASTERY_PARAMctor__MASTERY_PARAM24_next(nullptr);
        Info::_MASTERY_PARAMctor__MASTERY_PARAM24_clbk _MASTERY_PARAMctor__MASTERY_PARAM24_user(nullptr);
        
        bool _MASTERY_PARAMAlterCumPerMast2_wrapper(struct _MASTERY_PARAM* _this, char byClass, char byIndex, unsigned int dwAlterCum, unsigned int* pdwAfterCum)
        {
           return _MASTERY_PARAMAlterCumPerMast2_user(_this, byClass, byIndex, dwAlterCum, pdwAfterCum, _MASTERY_PARAMAlterCumPerMast2_next);
        };
        float _MASTERY_PARAMGetAveForceMasteryPerClass4_wrapper(struct _MASTERY_PARAM* _this, char byClass)
        {
           return _MASTERY_PARAMGetAveForceMasteryPerClass4_user(_this, byClass, _MASTERY_PARAMGetAveForceMasteryPerClass4_next);
        };
        float _MASTERY_PARAMGetAveSkillMasteryPerClass6_wrapper(struct _MASTERY_PARAM* _this, char byClass)
        {
           return _MASTERY_PARAMGetAveSkillMasteryPerClass6_user(_this, byClass, _MASTERY_PARAMGetAveSkillMasteryPerClass6_next);
        };
        int _MASTERY_PARAMGetCumPerMast8_wrapper(struct _MASTERY_PARAM* _this, char byCode, char byMast)
        {
           return _MASTERY_PARAMGetCumPerMast8_user(_this, byCode, byMast, _MASTERY_PARAMGetCumPerMast8_next);
        };
        char _MASTERY_PARAMGetEquipMastery10_wrapper(struct _MASTERY_PARAM* _this, int nEquipMasteryCode)
        {
           return _MASTERY_PARAMGetEquipMastery10_user(_this, nEquipMasteryCode, _MASTERY_PARAMGetEquipMastery10_next);
        };
        int _MASTERY_PARAMGetMasteryPerMast12_wrapper(struct _MASTERY_PARAM* _this, char byCode, char byMast)
        {
           return _MASTERY_PARAMGetMasteryPerMast12_user(_this, byCode, byMast, _MASTERY_PARAMGetMasteryPerMast12_next);
        };
        int _MASTERY_PARAMGetSkillLv14_wrapper(struct _MASTERY_PARAM* _this, char bySkillIndex)
        {
           return _MASTERY_PARAMGetSkillLv14_user(_this, bySkillIndex, _MASTERY_PARAMGetSkillLv14_next);
        };
        bool _MASTERY_PARAMInit16_wrapper(struct _MASTERY_PARAM* _this, struct _STAT_DB_BASE* pStatBase, char byRaceCode)
        {
           return _MASTERY_PARAMInit16_user(_this, pStatBase, byRaceCode, _MASTERY_PARAMInit16_next);
        };
        bool _MASTERY_PARAMIsValidMasteryCode18_wrapper(char byCode, char byIndex)
        {
           return _MASTERY_PARAMIsValidMasteryCode18_user(byCode, byIndex, _MASTERY_PARAMIsValidMasteryCode18_next);
        };
        void _MASTERY_PARAMSetStaticMember20_wrapper(struct CRecordData* pSkillData, struct CRecordData* pForceData)
        {
           _MASTERY_PARAMSetStaticMember20_user(pSkillData, pForceData, _MASTERY_PARAMSetStaticMember20_next);
        };
        void _MASTERY_PARAMUpdateCumPerMast22_wrapper(struct _MASTERY_PARAM* _this, char byClass, char byIndex, unsigned int dwNewCum)
        {
           _MASTERY_PARAMUpdateCumPerMast22_user(_this, byClass, byIndex, dwNewCum, _MASTERY_PARAMUpdateCumPerMast22_next);
        };
        
        void _MASTERY_PARAMctor__MASTERY_PARAM24_wrapper(struct _MASTERY_PARAM* _this)
        {
           _MASTERY_PARAMctor__MASTERY_PARAM24_user(_this, _MASTERY_PARAMctor__MASTERY_PARAM24_next);
        };
        
        ::std::array<hook_record, 12> _MASTERY_PARAM_functions = 
        {
            _hook_record {
                (LPVOID)0x14007c770L,
                (LPVOID *)&_MASTERY_PARAMAlterCumPerMast2_user,
                (LPVOID *)&_MASTERY_PARAMAlterCumPerMast2_next,
                (LPVOID)cast_pointer_function(_MASTERY_PARAMAlterCumPerMast2_wrapper),
                (LPVOID)cast_pointer_function((bool(_MASTERY_PARAM::*)(char, char, unsigned int, unsigned int*))&_MASTERY_PARAM::AlterCumPerMast)
            },
            _hook_record {
                (LPVOID)0x14007d6f0L,
                (LPVOID *)&_MASTERY_PARAMGetAveForceMasteryPerClass4_user,
                (LPVOID *)&_MASTERY_PARAMGetAveForceMasteryPerClass4_next,
                (LPVOID)cast_pointer_function(_MASTERY_PARAMGetAveForceMasteryPerClass4_wrapper),
                (LPVOID)cast_pointer_function((float(_MASTERY_PARAM::*)(char))&_MASTERY_PARAM::GetAveForceMasteryPerClass)
            },
            _hook_record {
                (LPVOID)0x14007d7a0L,
                (LPVOID *)&_MASTERY_PARAMGetAveSkillMasteryPerClass6_user,
                (LPVOID *)&_MASTERY_PARAMGetAveSkillMasteryPerClass6_next,
                (LPVOID)cast_pointer_function(_MASTERY_PARAMGetAveSkillMasteryPerClass6_wrapper),
                (LPVOID)cast_pointer_function((float(_MASTERY_PARAM::*)(char))&_MASTERY_PARAM::GetAveSkillMasteryPerClass)
            },
            _hook_record {
                (LPVOID)0x1400349f0L,
                (LPVOID *)&_MASTERY_PARAMGetCumPerMast8_user,
                (LPVOID *)&_MASTERY_PARAMGetCumPerMast8_next,
                (LPVOID)cast_pointer_function(_MASTERY_PARAMGetCumPerMast8_wrapper),
                (LPVOID)cast_pointer_function((int(_MASTERY_PARAM::*)(char, char))&_MASTERY_PARAM::GetCumPerMast)
            },
            _hook_record {
                (LPVOID)0x14007c510L,
                (LPVOID *)&_MASTERY_PARAMGetEquipMastery10_user,
                (LPVOID *)&_MASTERY_PARAMGetEquipMastery10_next,
                (LPVOID)cast_pointer_function(_MASTERY_PARAMGetEquipMastery10_wrapper),
                (LPVOID)cast_pointer_function((char(_MASTERY_PARAM::*)(int))&_MASTERY_PARAM::GetEquipMastery)
            },
            _hook_record {
                (LPVOID)0x140034a30L,
                (LPVOID *)&_MASTERY_PARAMGetMasteryPerMast12_user,
                (LPVOID *)&_MASTERY_PARAMGetMasteryPerMast12_next,
                (LPVOID)cast_pointer_function(_MASTERY_PARAMGetMasteryPerMast12_wrapper),
                (LPVOID)cast_pointer_function((int(_MASTERY_PARAM::*)(char, char))&_MASTERY_PARAM::GetMasteryPerMast)
            },
            _hook_record {
                (LPVOID)0x140034a70L,
                (LPVOID *)&_MASTERY_PARAMGetSkillLv14_user,
                (LPVOID *)&_MASTERY_PARAMGetSkillLv14_next,
                (LPVOID)cast_pointer_function(_MASTERY_PARAMGetSkillLv14_wrapper),
                (LPVOID)cast_pointer_function((int(_MASTERY_PARAM::*)(char))&_MASTERY_PARAM::GetSkillLv)
            },
            _hook_record {
                (LPVOID)0x1400781d0L,
                (LPVOID *)&_MASTERY_PARAMInit16_user,
                (LPVOID *)&_MASTERY_PARAMInit16_next,
                (LPVOID)cast_pointer_function(_MASTERY_PARAMInit16_wrapper),
                (LPVOID)cast_pointer_function((bool(_MASTERY_PARAM::*)(struct _STAT_DB_BASE*, char))&_MASTERY_PARAM::Init)
            },
            _hook_record {
                (LPVOID)0x14028c930L,
                (LPVOID *)&_MASTERY_PARAMIsValidMasteryCode18_user,
                (LPVOID *)&_MASTERY_PARAMIsValidMasteryCode18_next,
                (LPVOID)cast_pointer_function(_MASTERY_PARAMIsValidMasteryCode18_wrapper),
                (LPVOID)cast_pointer_function((bool(*)(char, char))&_MASTERY_PARAM::IsValidMasteryCode)
            },
            _hook_record {
                (LPVOID)0x140204dd0L,
                (LPVOID *)&_MASTERY_PARAMSetStaticMember20_user,
                (LPVOID *)&_MASTERY_PARAMSetStaticMember20_next,
                (LPVOID)cast_pointer_function(_MASTERY_PARAMSetStaticMember20_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct CRecordData*, struct CRecordData*))&_MASTERY_PARAM::SetStaticMember)
            },
            _hook_record {
                (LPVOID)0x14007afa0L,
                (LPVOID *)&_MASTERY_PARAMUpdateCumPerMast22_user,
                (LPVOID *)&_MASTERY_PARAMUpdateCumPerMast22_next,
                (LPVOID)cast_pointer_function(_MASTERY_PARAMUpdateCumPerMast22_wrapper),
                (LPVOID)cast_pointer_function((void(_MASTERY_PARAM::*)(char, char, unsigned int))&_MASTERY_PARAM::UpdateCumPerMast)
            },
            _hook_record {
                (LPVOID)0x140074580L,
                (LPVOID *)&_MASTERY_PARAMctor__MASTERY_PARAM24_user,
                (LPVOID *)&_MASTERY_PARAMctor__MASTERY_PARAM24_next,
                (LPVOID)cast_pointer_function(_MASTERY_PARAMctor__MASTERY_PARAM24_wrapper),
                (LPVOID)cast_pointer_function((void(_MASTERY_PARAM::*)())&_MASTERY_PARAM::ctor__MASTERY_PARAM)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
