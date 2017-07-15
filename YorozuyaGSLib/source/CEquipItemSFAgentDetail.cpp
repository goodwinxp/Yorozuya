#include <CEquipItemSFAgentDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CEquipItemSFAgentAllEndContSF2_ptr CEquipItemSFAgentAllEndContSF2_next(nullptr);
        Info::CEquipItemSFAgentAllEndContSF2_clbk CEquipItemSFAgentAllEndContSF2_user(nullptr);
        
        
        Info::CEquipItemSFAgentctor_CEquipItemSFAgent4_ptr CEquipItemSFAgentctor_CEquipItemSFAgent4_next(nullptr);
        Info::CEquipItemSFAgentctor_CEquipItemSFAgent4_clbk CEquipItemSFAgentctor_CEquipItemSFAgent4_user(nullptr);
        
        Info::CEquipItemSFAgentEndContSF6_ptr CEquipItemSFAgentEndContSF6_next(nullptr);
        Info::CEquipItemSFAgentEndContSF6_clbk CEquipItemSFAgentEndContSF6_user(nullptr);
        
        Info::CEquipItemSFAgentGetBoosterAddSpeed8_ptr CEquipItemSFAgentGetBoosterAddSpeed8_next(nullptr);
        Info::CEquipItemSFAgentGetBoosterAddSpeed8_clbk CEquipItemSFAgentGetBoosterAddSpeed8_user(nullptr);
        
        Info::CEquipItemSFAgentGetEquip10_ptr CEquipItemSFAgentGetEquip10_next(nullptr);
        Info::CEquipItemSFAgentGetEquip10_clbk CEquipItemSFAgentGetEquip10_user(nullptr);
        
        Info::CEquipItemSFAgentGetEquipSFCont12_ptr CEquipItemSFAgentGetEquipSFCont12_next(nullptr);
        Info::CEquipItemSFAgentGetEquipSFCont12_clbk CEquipItemSFAgentGetEquipSFCont12_user(nullptr);
        
        Info::CEquipItemSFAgentGetRequireSFSlot14_ptr CEquipItemSFAgentGetRequireSFSlot14_next(nullptr);
        Info::CEquipItemSFAgentGetRequireSFSlot14_clbk CEquipItemSFAgentGetRequireSFSlot14_user(nullptr);
        
        Info::CEquipItemSFAgentInit16_ptr CEquipItemSFAgentInit16_next(nullptr);
        Info::CEquipItemSFAgentInit16_clbk CEquipItemSFAgentInit16_user(nullptr);
        
        Info::CEquipItemSFAgentIsEnableSkill18_ptr CEquipItemSFAgentIsEnableSkill18_next(nullptr);
        Info::CEquipItemSFAgentIsEnableSkill18_clbk CEquipItemSFAgentIsEnableSkill18_user(nullptr);
        
        Info::CEquipItemSFAgentIsEnableSkill20_ptr CEquipItemSFAgentIsEnableSkill20_next(nullptr);
        Info::CEquipItemSFAgentIsEnableSkill20_clbk CEquipItemSFAgentIsEnableSkill20_user(nullptr);
        
        Info::CEquipItemSFAgentIsUseBooster22_ptr CEquipItemSFAgentIsUseBooster22_next(nullptr);
        Info::CEquipItemSFAgentIsUseBooster22_clbk CEquipItemSFAgentIsUseBooster22_user(nullptr);
        
        Info::CEquipItemSFAgentReleaseSFCont24_ptr CEquipItemSFAgentReleaseSFCont24_next(nullptr);
        Info::CEquipItemSFAgentReleaseSFCont24_clbk CEquipItemSFAgentReleaseSFCont24_user(nullptr);
        
        Info::CEquipItemSFAgentSearchItemAddSpeed26_ptr CEquipItemSFAgentSearchItemAddSpeed26_next(nullptr);
        Info::CEquipItemSFAgentSearchItemAddSpeed26_clbk CEquipItemSFAgentSearchItemAddSpeed26_user(nullptr);
        
        Info::CEquipItemSFAgentSetSFCont28_ptr CEquipItemSFAgentSetSFCont28_next(nullptr);
        Info::CEquipItemSFAgentSetSFCont28_clbk CEquipItemSFAgentSetSFCont28_user(nullptr);
        
        Info::CEquipItemSFAgentStartContSF30_ptr CEquipItemSFAgentStartContSF30_next(nullptr);
        Info::CEquipItemSFAgentStartContSF30_clbk CEquipItemSFAgentStartContSF30_user(nullptr);
        
        
        Info::CEquipItemSFAgentdtor_CEquipItemSFAgent32_ptr CEquipItemSFAgentdtor_CEquipItemSFAgent32_next(nullptr);
        Info::CEquipItemSFAgentdtor_CEquipItemSFAgent32_clbk CEquipItemSFAgentdtor_CEquipItemSFAgent32_user(nullptr);
        
        void CEquipItemSFAgentAllEndContSF2_wrapper(struct CEquipItemSFAgent* _this)
        {
           CEquipItemSFAgentAllEndContSF2_user(_this, CEquipItemSFAgentAllEndContSF2_next);
        };
        
        void CEquipItemSFAgentctor_CEquipItemSFAgent4_wrapper(struct CEquipItemSFAgent* _this)
        {
           CEquipItemSFAgentctor_CEquipItemSFAgent4_user(_this, CEquipItemSFAgentctor_CEquipItemSFAgent4_next);
        };
        void CEquipItemSFAgentEndContSF6_wrapper(struct CEquipItemSFAgent* _this, struct _sf_continous* pSF_Cont)
        {
           CEquipItemSFAgentEndContSF6_user(_this, pSF_Cont, CEquipItemSFAgentEndContSF6_next);
        };
        float CEquipItemSFAgentGetBoosterAddSpeed8_wrapper(struct CEquipItemSFAgent* _this)
        {
           return CEquipItemSFAgentGetBoosterAddSpeed8_user(_this, CEquipItemSFAgentGetBoosterAddSpeed8_next);
        };
        _STORAGE_LIST::_db_con* CEquipItemSFAgentGetEquip10_wrapper(struct CEquipItemSFAgent* _this, int nEquipTblIndex)
        {
           return CEquipItemSFAgentGetEquip10_user(_this, nEquipTblIndex, CEquipItemSFAgentGetEquip10_next);
        };
        struct _sf_continous* CEquipItemSFAgentGetEquipSFCont12_wrapper(struct CEquipItemSFAgent* _this, int nEquipTblIndex)
        {
           return CEquipItemSFAgentGetEquipSFCont12_user(_this, nEquipTblIndex, CEquipItemSFAgentGetEquipSFCont12_next);
        };
        bool CEquipItemSFAgentGetRequireSFSlot14_wrapper(struct CEquipItemSFAgent* _this, struct CEquipItemSFAgent::_requireSlot* pSlot, struct _skill_fld* pSkillFld)
        {
           return CEquipItemSFAgentGetRequireSFSlot14_user(_this, pSlot, pSkillFld, CEquipItemSFAgentGetRequireSFSlot14_next);
        };
        void CEquipItemSFAgentInit16_wrapper(struct CEquipItemSFAgent* _this, struct CPlayer* pMaster)
        {
           CEquipItemSFAgentInit16_user(_this, pMaster, CEquipItemSFAgentInit16_next);
        };
        char CEquipItemSFAgentIsEnableSkill18_wrapper(struct CEquipItemSFAgent* _this, struct _skill_fld* pSkill)
        {
           return CEquipItemSFAgentIsEnableSkill18_user(_this, pSkill, CEquipItemSFAgentIsEnableSkill18_next);
        };
        char CEquipItemSFAgentIsEnableSkill20_wrapper(struct CEquipItemSFAgent* _this, int nEquipTblIndex, struct _skill_fld* pSkill)
        {
           return CEquipItemSFAgentIsEnableSkill20_user(_this, nEquipTblIndex, pSkill, CEquipItemSFAgentIsEnableSkill20_next);
        };
        bool CEquipItemSFAgentIsUseBooster22_wrapper(struct CEquipItemSFAgent* _this)
        {
           return CEquipItemSFAgentIsUseBooster22_user(_this, CEquipItemSFAgentIsUseBooster22_next);
        };
        void CEquipItemSFAgentReleaseSFCont24_wrapper(struct CEquipItemSFAgent* _this, int nEquipTblIndex)
        {
           CEquipItemSFAgentReleaseSFCont24_user(_this, nEquipTblIndex, CEquipItemSFAgentReleaseSFCont24_next);
        };
        float CEquipItemSFAgentSearchItemAddSpeed26_wrapper(struct CEquipItemSFAgent* _this, _STORAGE_LIST::_db_con* pItem)
        {
           return CEquipItemSFAgentSearchItemAddSpeed26_user(_this, pItem, CEquipItemSFAgentSearchItemAddSpeed26_next);
        };
        void CEquipItemSFAgentSetSFCont28_wrapper(struct CEquipItemSFAgent* _this, int nEquipTblIndex, struct _sf_continous* pSF)
        {
           CEquipItemSFAgentSetSFCont28_user(_this, nEquipTblIndex, pSF, CEquipItemSFAgentSetSFCont28_next);
        };
        void CEquipItemSFAgentStartContSF30_wrapper(struct CEquipItemSFAgent* _this, struct _sf_continous* pSF_Cont)
        {
           CEquipItemSFAgentStartContSF30_user(_this, pSF_Cont, CEquipItemSFAgentStartContSF30_next);
        };
        
        void CEquipItemSFAgentdtor_CEquipItemSFAgent32_wrapper(struct CEquipItemSFAgent* _this)
        {
           CEquipItemSFAgentdtor_CEquipItemSFAgent32_user(_this, CEquipItemSFAgentdtor_CEquipItemSFAgent32_next);
        };
        
        ::std::array<hook_record, 16> CEquipItemSFAgent_functions = 
        {
            _hook_record {
                (LPVOID)0x140121040L,
                (LPVOID *)&CEquipItemSFAgentAllEndContSF2_user,
                (LPVOID *)&CEquipItemSFAgentAllEndContSF2_next,
                (LPVOID)cast_pointer_function(CEquipItemSFAgentAllEndContSF2_wrapper),
                (LPVOID)cast_pointer_function((void(CEquipItemSFAgent::*)())&CEquipItemSFAgent::AllEndContSF)
            },
            _hook_record {
                (LPVOID)0x140120f90L,
                (LPVOID *)&CEquipItemSFAgentctor_CEquipItemSFAgent4_user,
                (LPVOID *)&CEquipItemSFAgentctor_CEquipItemSFAgent4_next,
                (LPVOID)cast_pointer_function(CEquipItemSFAgentctor_CEquipItemSFAgent4_wrapper),
                (LPVOID)cast_pointer_function((void(CEquipItemSFAgent::*)())&CEquipItemSFAgent::ctor_CEquipItemSFAgent)
            },
            _hook_record {
                (LPVOID)0x1401215e0L,
                (LPVOID *)&CEquipItemSFAgentEndContSF6_user,
                (LPVOID *)&CEquipItemSFAgentEndContSF6_next,
                (LPVOID)cast_pointer_function(CEquipItemSFAgentEndContSF6_wrapper),
                (LPVOID)cast_pointer_function((void(CEquipItemSFAgent::*)(struct _sf_continous*))&CEquipItemSFAgent::EndContSF)
            },
            _hook_record {
                (LPVOID)0x140121890L,
                (LPVOID *)&CEquipItemSFAgentGetBoosterAddSpeed8_user,
                (LPVOID *)&CEquipItemSFAgentGetBoosterAddSpeed8_next,
                (LPVOID)cast_pointer_function(CEquipItemSFAgentGetBoosterAddSpeed8_wrapper),
                (LPVOID)cast_pointer_function((float(CEquipItemSFAgent::*)())&CEquipItemSFAgent::GetBoosterAddSpeed)
            },
            _hook_record {
                (LPVOID)0x1401210a0L,
                (LPVOID *)&CEquipItemSFAgentGetEquip10_user,
                (LPVOID *)&CEquipItemSFAgentGetEquip10_next,
                (LPVOID)cast_pointer_function(CEquipItemSFAgentGetEquip10_wrapper),
                (LPVOID)cast_pointer_function((_STORAGE_LIST::_db_con*(CEquipItemSFAgent::*)(int))&CEquipItemSFAgent::GetEquip)
            },
            _hook_record {
                (LPVOID)0x140121140L,
                (LPVOID *)&CEquipItemSFAgentGetEquipSFCont12_user,
                (LPVOID *)&CEquipItemSFAgentGetEquipSFCont12_next,
                (LPVOID)cast_pointer_function(CEquipItemSFAgentGetEquipSFCont12_wrapper),
                (LPVOID)cast_pointer_function((struct _sf_continous*(CEquipItemSFAgent::*)(int))&CEquipItemSFAgent::GetEquipSFCont)
            },
            _hook_record {
                (LPVOID)0x140121290L,
                (LPVOID *)&CEquipItemSFAgentGetRequireSFSlot14_user,
                (LPVOID *)&CEquipItemSFAgentGetRequireSFSlot14_next,
                (LPVOID)cast_pointer_function(CEquipItemSFAgentGetRequireSFSlot14_wrapper),
                (LPVOID)cast_pointer_function((bool(CEquipItemSFAgent::*)(struct CEquipItemSFAgent::_requireSlot*, struct _skill_fld*))&CEquipItemSFAgent::GetRequireSFSlot)
            },
            _hook_record {
                (LPVOID)0x140120fe0L,
                (LPVOID *)&CEquipItemSFAgentInit16_user,
                (LPVOID *)&CEquipItemSFAgentInit16_next,
                (LPVOID)cast_pointer_function(CEquipItemSFAgentInit16_wrapper),
                (LPVOID)cast_pointer_function((void(CEquipItemSFAgent::*)(struct CPlayer*))&CEquipItemSFAgent::Init)
            },
            _hook_record {
                (LPVOID)0x140121180L,
                (LPVOID *)&CEquipItemSFAgentIsEnableSkill18_user,
                (LPVOID *)&CEquipItemSFAgentIsEnableSkill18_next,
                (LPVOID)cast_pointer_function(CEquipItemSFAgentIsEnableSkill18_wrapper),
                (LPVOID)cast_pointer_function((char(CEquipItemSFAgent::*)(struct _skill_fld*))&CEquipItemSFAgent::IsEnableSkill)
            },
            _hook_record {
                (LPVOID)0x140121200L,
                (LPVOID *)&CEquipItemSFAgentIsEnableSkill20_user,
                (LPVOID *)&CEquipItemSFAgentIsEnableSkill20_next,
                (LPVOID)cast_pointer_function(CEquipItemSFAgentIsEnableSkill20_wrapper),
                (LPVOID)cast_pointer_function((char(CEquipItemSFAgent::*)(int, struct _skill_fld*))&CEquipItemSFAgent::IsEnableSkill)
            },
            _hook_record {
                (LPVOID)0x140121780L,
                (LPVOID *)&CEquipItemSFAgentIsUseBooster22_user,
                (LPVOID *)&CEquipItemSFAgentIsUseBooster22_next,
                (LPVOID)cast_pointer_function(CEquipItemSFAgentIsUseBooster22_wrapper),
                (LPVOID)cast_pointer_function((bool(CEquipItemSFAgent::*)())&CEquipItemSFAgent::IsUseBooster)
            },
            _hook_record {
                (LPVOID)0x140121670L,
                (LPVOID *)&CEquipItemSFAgentReleaseSFCont24_user,
                (LPVOID *)&CEquipItemSFAgentReleaseSFCont24_next,
                (LPVOID)cast_pointer_function(CEquipItemSFAgentReleaseSFCont24_wrapper),
                (LPVOID)cast_pointer_function((void(CEquipItemSFAgent::*)(int))&CEquipItemSFAgent::ReleaseSFCont)
            },
            _hook_record {
                (LPVOID)0x1401217e0L,
                (LPVOID *)&CEquipItemSFAgentSearchItemAddSpeed26_user,
                (LPVOID *)&CEquipItemSFAgentSearchItemAddSpeed26_next,
                (LPVOID)cast_pointer_function(CEquipItemSFAgentSearchItemAddSpeed26_wrapper),
                (LPVOID)cast_pointer_function((float(CEquipItemSFAgent::*)(_STORAGE_LIST::_db_con*))&CEquipItemSFAgent::SearchItemAddSpeed)
            },
            _hook_record {
                (LPVOID)0x1401212e0L,
                (LPVOID *)&CEquipItemSFAgentSetSFCont28_user,
                (LPVOID *)&CEquipItemSFAgentSetSFCont28_next,
                (LPVOID)cast_pointer_function(CEquipItemSFAgentSetSFCont28_wrapper),
                (LPVOID)cast_pointer_function((void(CEquipItemSFAgent::*)(int, struct _sf_continous*))&CEquipItemSFAgent::SetSFCont)
            },
            _hook_record {
                (LPVOID)0x140121490L,
                (LPVOID *)&CEquipItemSFAgentStartContSF30_user,
                (LPVOID *)&CEquipItemSFAgentStartContSF30_next,
                (LPVOID)cast_pointer_function(CEquipItemSFAgentStartContSF30_wrapper),
                (LPVOID)cast_pointer_function((void(CEquipItemSFAgent::*)(struct _sf_continous*))&CEquipItemSFAgent::StartContSF)
            },
            _hook_record {
                (LPVOID)0x140073b00L,
                (LPVOID *)&CEquipItemSFAgentdtor_CEquipItemSFAgent32_user,
                (LPVOID *)&CEquipItemSFAgentdtor_CEquipItemSFAgent32_next,
                (LPVOID)cast_pointer_function(CEquipItemSFAgentdtor_CEquipItemSFAgent32_wrapper),
                (LPVOID)cast_pointer_function((void(CEquipItemSFAgent::*)())&CEquipItemSFAgent::dtor_CEquipItemSFAgent)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
