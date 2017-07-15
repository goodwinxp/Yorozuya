#include <CSetItemEffectDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CSetItemEffectAttach_Set2_ptr CSetItemEffectAttach_Set2_next(nullptr);
        Info::CSetItemEffectAttach_Set2_clbk CSetItemEffectAttach_Set2_user(nullptr);
        
        
        Info::CSetItemEffectctor_CSetItemEffect4_ptr CSetItemEffectctor_CSetItemEffect4_next(nullptr);
        Info::CSetItemEffectctor_CSetItemEffect4_clbk CSetItemEffectctor_CSetItemEffect4_user(nullptr);
        
        Info::CSetItemEffectCheck_Base_EquipItem6_ptr CSetItemEffectCheck_Base_EquipItem6_next(nullptr);
        Info::CSetItemEffectCheck_Base_EquipItem6_clbk CSetItemEffectCheck_Base_EquipItem6_user(nullptr);
        
        Info::CSetItemEffectCheck_EquipItem8_ptr CSetItemEffectCheck_EquipItem8_next(nullptr);
        Info::CSetItemEffectCheck_EquipItem8_clbk CSetItemEffectCheck_EquipItem8_user(nullptr);
        
        Info::CSetItemEffectCheck_Other_EquipItem10_ptr CSetItemEffectCheck_Other_EquipItem10_next(nullptr);
        Info::CSetItemEffectCheck_Other_EquipItem10_clbk CSetItemEffectCheck_Other_EquipItem10_user(nullptr);
        
        Info::CSetItemEffectDetach_Set12_ptr CSetItemEffectDetach_Set12_next(nullptr);
        Info::CSetItemEffectDetach_Set12_clbk CSetItemEffectDetach_Set12_user(nullptr);
        
        Info::CSetItemEffectGetResetEffectNum14_ptr CSetItemEffectGetResetEffectNum14_next(nullptr);
        Info::CSetItemEffectGetResetEffectNum14_clbk CSetItemEffectGetResetEffectNum14_user(nullptr);
        
        Info::CSetItemEffectGetResetIdx16_ptr CSetItemEffectGetResetIdx16_next(nullptr);
        Info::CSetItemEffectGetResetIdx16_clbk CSetItemEffectGetResetIdx16_user(nullptr);
        
        Info::CSetItemEffectGetResetItemNum18_ptr CSetItemEffectGetResetItemNum18_next(nullptr);
        Info::CSetItemEffectGetResetItemNum18_clbk CSetItemEffectGetResetItemNum18_user(nullptr);
        
        Info::CSetItemEffectInit_Data20_ptr CSetItemEffectInit_Data20_next(nullptr);
        Info::CSetItemEffectInit_Data20_clbk CSetItemEffectInit_Data20_user(nullptr);
        
        Info::CSetItemEffectInit_Info22_ptr CSetItemEffectInit_Info22_next(nullptr);
        Info::CSetItemEffectInit_Info22_clbk CSetItemEffectInit_Info22_user(nullptr);
        
        Info::CSetItemEffectIsSetOn24_ptr CSetItemEffectIsSetOn24_next(nullptr);
        Info::CSetItemEffectIsSetOn24_clbk CSetItemEffectIsSetOn24_user(nullptr);
        
        Info::CSetItemEffectIsSetOnComplete26_ptr CSetItemEffectIsSetOnComplete26_next(nullptr);
        Info::CSetItemEffectIsSetOnComplete26_clbk CSetItemEffectIsSetOnComplete26_user(nullptr);
        
        Info::CSetItemEffectReset_Set28_ptr CSetItemEffectReset_Set28_next(nullptr);
        Info::CSetItemEffectReset_Set28_clbk CSetItemEffectReset_Set28_user(nullptr);
        
        Info::CSetItemEffectSetOffEffect30_ptr CSetItemEffectSetOffEffect30_next(nullptr);
        Info::CSetItemEffectSetOffEffect30_clbk CSetItemEffectSetOffEffect30_user(nullptr);
        
        Info::CSetItemEffectSetOnEffect32_ptr CSetItemEffectSetOnEffect32_next(nullptr);
        Info::CSetItemEffectSetOnEffect32_clbk CSetItemEffectSetOnEffect32_user(nullptr);
        
        Info::CSetItemEffectSetResetInfo34_ptr CSetItemEffectSetResetInfo34_next(nullptr);
        Info::CSetItemEffectSetResetInfo34_clbk CSetItemEffectSetResetInfo34_user(nullptr);
        
        
        Info::CSetItemEffectdtor_CSetItemEffect36_ptr CSetItemEffectdtor_CSetItemEffect36_next(nullptr);
        Info::CSetItemEffectdtor_CSetItemEffect36_clbk CSetItemEffectdtor_CSetItemEffect36_user(nullptr);
        
        bool CSetItemEffectAttach_Set2_wrapper(struct CSetItemEffect* _this, unsigned int dwSetItem, char bySetItemNum, char bySetEffectNum)
        {
           return CSetItemEffectAttach_Set2_user(_this, dwSetItem, bySetItemNum, bySetEffectNum, CSetItemEffectAttach_Set2_next);
        };
        
        void CSetItemEffectctor_CSetItemEffect4_wrapper(struct CSetItemEffect* _this)
        {
           CSetItemEffectctor_CSetItemEffect4_user(_this, CSetItemEffectctor_CSetItemEffect4_next);
        };
        char CSetItemEffectCheck_Base_EquipItem6_wrapper(struct CSetItemEffect* _this, struct _AVATOR_DATA* pData, struct _SetItemEff_fld* pSetFld)
        {
           return CSetItemEffectCheck_Base_EquipItem6_user(_this, pData, pSetFld, CSetItemEffectCheck_Base_EquipItem6_next);
        };
        char CSetItemEffectCheck_EquipItem8_wrapper(struct CSetItemEffect* _this, struct _AVATOR_DATA* pData, struct _SetItemEff_fld* pSetFld)
        {
           return CSetItemEffectCheck_EquipItem8_user(_this, pData, pSetFld, CSetItemEffectCheck_EquipItem8_next);
        };
        char CSetItemEffectCheck_Other_EquipItem10_wrapper(struct CSetItemEffect* _this, struct _AVATOR_DATA* pData, struct _SetItemEff_fld* pSetFld)
        {
           return CSetItemEffectCheck_Other_EquipItem10_user(_this, pData, pSetFld, CSetItemEffectCheck_Other_EquipItem10_next);
        };
        bool CSetItemEffectDetach_Set12_wrapper(struct CSetItemEffect* _this, unsigned int dwSetItem)
        {
           return CSetItemEffectDetach_Set12_user(_this, dwSetItem, CSetItemEffectDetach_Set12_next);
        };
        char CSetItemEffectGetResetEffectNum14_wrapper(struct CSetItemEffect* _this)
        {
           return CSetItemEffectGetResetEffectNum14_user(_this, CSetItemEffectGetResetEffectNum14_next);
        };
        unsigned int CSetItemEffectGetResetIdx16_wrapper(struct CSetItemEffect* _this)
        {
           return CSetItemEffectGetResetIdx16_user(_this, CSetItemEffectGetResetIdx16_next);
        };
        char CSetItemEffectGetResetItemNum18_wrapper(struct CSetItemEffect* _this)
        {
           return CSetItemEffectGetResetItemNum18_user(_this, CSetItemEffectGetResetItemNum18_next);
        };
        void CSetItemEffectInit_Data20_wrapper(struct CSetItemEffect* _this, char byIdx)
        {
           CSetItemEffectInit_Data20_user(_this, byIdx, CSetItemEffectInit_Data20_next);
        };
        void CSetItemEffectInit_Info22_wrapper(struct CSetItemEffect* _this)
        {
           CSetItemEffectInit_Info22_user(_this, CSetItemEffectInit_Info22_next);
        };
        bool CSetItemEffectIsSetOn24_wrapper(struct CSetItemEffect* _this, unsigned int dwSetItem)
        {
           return CSetItemEffectIsSetOn24_user(_this, dwSetItem, CSetItemEffectIsSetOn24_next);
        };
        bool CSetItemEffectIsSetOnComplete26_wrapper(struct CSetItemEffect* _this, unsigned int dwSetItem, char bySetItemNum, char bySetEffectNum)
        {
           return CSetItemEffectIsSetOnComplete26_user(_this, dwSetItem, bySetItemNum, bySetEffectNum, CSetItemEffectIsSetOnComplete26_next);
        };
        bool CSetItemEffectReset_Set28_wrapper(struct CSetItemEffect* _this, unsigned int dwSetItem, char bySetItemNum, char bySetEffectNum)
        {
           return CSetItemEffectReset_Set28_user(_this, dwSetItem, bySetItemNum, bySetEffectNum, CSetItemEffectReset_Set28_next);
        };
        int CSetItemEffectSetOffEffect30_wrapper(struct CSetItemEffect* _this, unsigned int dwSetItem, char bySetItemNum, char bySetEffectNum)
        {
           return CSetItemEffectSetOffEffect30_user(_this, dwSetItem, bySetItemNum, bySetEffectNum, CSetItemEffectSetOffEffect30_next);
        };
        int CSetItemEffectSetOnEffect32_wrapper(struct CSetItemEffect* _this, struct _AVATOR_DATA* pData, unsigned int dwSetItem, char bySetItemNum, char bySetEffectNum)
        {
           return CSetItemEffectSetOnEffect32_user(_this, pData, dwSetItem, bySetItemNum, bySetEffectNum, CSetItemEffectSetOnEffect32_next);
        };
        void CSetItemEffectSetResetInfo34_wrapper(struct CSetItemEffect* _this, bool bSet, unsigned int dwSetItem, char bySetItemNum, char bySetEffectNum)
        {
           CSetItemEffectSetResetInfo34_user(_this, bSet, dwSetItem, bySetItemNum, bySetEffectNum, CSetItemEffectSetResetInfo34_next);
        };
        
        void CSetItemEffectdtor_CSetItemEffect36_wrapper(struct CSetItemEffect* _this)
        {
           CSetItemEffectdtor_CSetItemEffect36_user(_this, CSetItemEffectdtor_CSetItemEffect36_next);
        };
        
        ::std::array<hook_record, 18> CSetItemEffect_functions = 
        {
            _hook_record {
                (LPVOID)0x1402e2c80L,
                (LPVOID *)&CSetItemEffectAttach_Set2_user,
                (LPVOID *)&CSetItemEffectAttach_Set2_next,
                (LPVOID)cast_pointer_function(CSetItemEffectAttach_Set2_wrapper),
                (LPVOID)cast_pointer_function((bool(CSetItemEffect::*)(unsigned int, char, char))&CSetItemEffect::Attach_Set)
            },
            _hook_record {
                (LPVOID)0x1402e20b0L,
                (LPVOID *)&CSetItemEffectctor_CSetItemEffect4_user,
                (LPVOID *)&CSetItemEffectctor_CSetItemEffect4_next,
                (LPVOID)cast_pointer_function(CSetItemEffectctor_CSetItemEffect4_wrapper),
                (LPVOID)cast_pointer_function((void(CSetItemEffect::*)())&CSetItemEffect::ctor_CSetItemEffect)
            },
            _hook_record {
                (LPVOID)0x1402e25b0L,
                (LPVOID *)&CSetItemEffectCheck_Base_EquipItem6_user,
                (LPVOID *)&CSetItemEffectCheck_Base_EquipItem6_next,
                (LPVOID)cast_pointer_function(CSetItemEffectCheck_Base_EquipItem6_wrapper),
                (LPVOID)cast_pointer_function((char(CSetItemEffect::*)(struct _AVATOR_DATA*, struct _SetItemEff_fld*))&CSetItemEffect::Check_Base_EquipItem)
            },
            _hook_record {
                (LPVOID)0x1402e2510L,
                (LPVOID *)&CSetItemEffectCheck_EquipItem8_user,
                (LPVOID *)&CSetItemEffectCheck_EquipItem8_next,
                (LPVOID)cast_pointer_function(CSetItemEffectCheck_EquipItem8_wrapper),
                (LPVOID)cast_pointer_function((char(CSetItemEffect::*)(struct _AVATOR_DATA*, struct _SetItemEff_fld*))&CSetItemEffect::Check_EquipItem)
            },
            _hook_record {
                (LPVOID)0x1402e28a0L,
                (LPVOID *)&CSetItemEffectCheck_Other_EquipItem10_user,
                (LPVOID *)&CSetItemEffectCheck_Other_EquipItem10_next,
                (LPVOID)cast_pointer_function(CSetItemEffectCheck_Other_EquipItem10_wrapper),
                (LPVOID)cast_pointer_function((char(CSetItemEffect::*)(struct _AVATOR_DATA*, struct _SetItemEff_fld*))&CSetItemEffect::Check_Other_EquipItem)
            },
            _hook_record {
                (LPVOID)0x1402e2db0L,
                (LPVOID *)&CSetItemEffectDetach_Set12_user,
                (LPVOID *)&CSetItemEffectDetach_Set12_next,
                (LPVOID)cast_pointer_function(CSetItemEffectDetach_Set12_wrapper),
                (LPVOID)cast_pointer_function((bool(CSetItemEffect::*)(unsigned int))&CSetItemEffect::Detach_Set)
            },
            _hook_record {
                (LPVOID)0x1402e3090L,
                (LPVOID *)&CSetItemEffectGetResetEffectNum14_user,
                (LPVOID *)&CSetItemEffectGetResetEffectNum14_next,
                (LPVOID)cast_pointer_function(CSetItemEffectGetResetEffectNum14_wrapper),
                (LPVOID)cast_pointer_function((char(CSetItemEffect::*)())&CSetItemEffect::GetResetEffectNum)
            },
            _hook_record {
                (LPVOID)0x1402e3030L,
                (LPVOID *)&CSetItemEffectGetResetIdx16_user,
                (LPVOID *)&CSetItemEffectGetResetIdx16_next,
                (LPVOID)cast_pointer_function(CSetItemEffectGetResetIdx16_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CSetItemEffect::*)())&CSetItemEffect::GetResetIdx)
            },
            _hook_record {
                (LPVOID)0x1402e3060L,
                (LPVOID *)&CSetItemEffectGetResetItemNum18_user,
                (LPVOID *)&CSetItemEffectGetResetItemNum18_next,
                (LPVOID)cast_pointer_function(CSetItemEffectGetResetItemNum18_wrapper),
                (LPVOID)cast_pointer_function((char(CSetItemEffect::*)())&CSetItemEffect::GetResetItemNum)
            },
            _hook_record {
                (LPVOID)0x1402e2490L,
                (LPVOID *)&CSetItemEffectInit_Data20_user,
                (LPVOID *)&CSetItemEffectInit_Data20_next,
                (LPVOID)cast_pointer_function(CSetItemEffectInit_Data20_wrapper),
                (LPVOID)cast_pointer_function((void(CSetItemEffect::*)(char))&CSetItemEffect::Init_Data)
            },
            _hook_record {
                (LPVOID)0x1402e2420L,
                (LPVOID *)&CSetItemEffectInit_Info22_user,
                (LPVOID *)&CSetItemEffectInit_Info22_next,
                (LPVOID)cast_pointer_function(CSetItemEffectInit_Info22_wrapper),
                (LPVOID)cast_pointer_function((void(CSetItemEffect::*)())&CSetItemEffect::Init_Info)
            },
            _hook_record {
                (LPVOID)0x1402e2bf0L,
                (LPVOID *)&CSetItemEffectIsSetOn24_user,
                (LPVOID *)&CSetItemEffectIsSetOn24_next,
                (LPVOID)cast_pointer_function(CSetItemEffectIsSetOn24_wrapper),
                (LPVOID)cast_pointer_function((bool(CSetItemEffect::*)(unsigned int))&CSetItemEffect::IsSetOn)
            },
            _hook_record {
                (LPVOID)0x1402e2b20L,
                (LPVOID *)&CSetItemEffectIsSetOnComplete26_user,
                (LPVOID *)&CSetItemEffectIsSetOnComplete26_next,
                (LPVOID)cast_pointer_function(CSetItemEffectIsSetOnComplete26_wrapper),
                (LPVOID)cast_pointer_function((bool(CSetItemEffect::*)(unsigned int, char, char))&CSetItemEffect::IsSetOnComplete)
            },
            _hook_record {
                (LPVOID)0x1402e2e90L,
                (LPVOID *)&CSetItemEffectReset_Set28_user,
                (LPVOID *)&CSetItemEffectReset_Set28_next,
                (LPVOID)cast_pointer_function(CSetItemEffectReset_Set28_wrapper),
                (LPVOID)cast_pointer_function((bool(CSetItemEffect::*)(unsigned int, char, char))&CSetItemEffect::Reset_Set)
            },
            _hook_record {
                (LPVOID)0x1402e2390L,
                (LPVOID *)&CSetItemEffectSetOffEffect30_user,
                (LPVOID *)&CSetItemEffectSetOffEffect30_next,
                (LPVOID)cast_pointer_function(CSetItemEffectSetOffEffect30_wrapper),
                (LPVOID)cast_pointer_function((int(CSetItemEffect::*)(unsigned int, char, char))&CSetItemEffect::SetOffEffect)
            },
            _hook_record {
                (LPVOID)0x1402e2130L,
                (LPVOID *)&CSetItemEffectSetOnEffect32_user,
                (LPVOID *)&CSetItemEffectSetOnEffect32_next,
                (LPVOID)cast_pointer_function(CSetItemEffectSetOnEffect32_wrapper),
                (LPVOID)cast_pointer_function((int(CSetItemEffect::*)(struct _AVATOR_DATA*, unsigned int, char, char))&CSetItemEffect::SetOnEffect)
            },
            _hook_record {
                (LPVOID)0x1402e2fb0L,
                (LPVOID *)&CSetItemEffectSetResetInfo34_user,
                (LPVOID *)&CSetItemEffectSetResetInfo34_next,
                (LPVOID)cast_pointer_function(CSetItemEffectSetResetInfo34_wrapper),
                (LPVOID)cast_pointer_function((void(CSetItemEffect::*)(bool, unsigned int, char, char))&CSetItemEffect::SetResetInfo)
            },
            _hook_record {
                (LPVOID)0x1402e20f0L,
                (LPVOID *)&CSetItemEffectdtor_CSetItemEffect36_user,
                (LPVOID *)&CSetItemEffectdtor_CSetItemEffect36_next,
                (LPVOID)cast_pointer_function(CSetItemEffectdtor_CSetItemEffect36_wrapper),
                (LPVOID)cast_pointer_function((void(CSetItemEffect::*)())&CSetItemEffect::dtor_CSetItemEffect)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
