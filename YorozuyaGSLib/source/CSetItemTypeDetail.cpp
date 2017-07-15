#include <CSetItemTypeDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CSetItemTypector_CSetItemType2_ptr CSetItemTypector_CSetItemType2_next(nullptr);
        Info::CSetItemTypector_CSetItemType2_clbk CSetItemTypector_CSetItemType2_user(nullptr);
        
        Info::CSetItemTypeClass_Init4_ptr CSetItemTypeClass_Init4_next(nullptr);
        Info::CSetItemTypeClass_Init4_clbk CSetItemTypeClass_Init4_user(nullptr);
        
        Info::CSetItemTypeGetEffectTypeCount6_ptr CSetItemTypeGetEffectTypeCount6_next(nullptr);
        Info::CSetItemTypeGetEffectTypeCount6_clbk CSetItemTypeGetEffectTypeCount6_user(nullptr);
        
        Info::CSetItemTypeGetsi_interpret8_ptr CSetItemTypeGetsi_interpret8_next(nullptr);
        Info::CSetItemTypeGetsi_interpret8_clbk CSetItemTypeGetsi_interpret8_user(nullptr);
        
        Info::CSetItemTypeSetItemType_Init10_ptr CSetItemTypeSetItemType_Init10_next(nullptr);
        Info::CSetItemTypeSetItemType_Init10_clbk CSetItemTypeSetItemType_Init10_user(nullptr);
        
        Info::CSetItemTypeSetItemType_UnInit12_ptr CSetItemTypeSetItemType_UnInit12_next(nullptr);
        Info::CSetItemTypeSetItemType_UnInit12_clbk CSetItemTypeSetItemType_UnInit12_user(nullptr);
        
        
        Info::CSetItemTypedtor_CSetItemType14_ptr CSetItemTypedtor_CSetItemType14_next(nullptr);
        Info::CSetItemTypedtor_CSetItemType14_clbk CSetItemTypedtor_CSetItemType14_user(nullptr);
        
        
        void CSetItemTypector_CSetItemType2_wrapper(struct CSetItemType* _this)
        {
           CSetItemTypector_CSetItemType2_user(_this, CSetItemTypector_CSetItemType2_next);
        };
        void CSetItemTypeClass_Init4_wrapper(struct CSetItemType* _this)
        {
           CSetItemTypeClass_Init4_user(_this, CSetItemTypeClass_Init4_next);
        };
        int CSetItemTypeGetEffectTypeCount6_wrapper(struct CSetItemType* _this)
        {
           return CSetItemTypeGetEffectTypeCount6_user(_this, CSetItemTypeGetEffectTypeCount6_next);
        };
        struct si_interpret* CSetItemTypeGetsi_interpret8_wrapper(struct CSetItemType* _this, int set_pos)
        {
           return CSetItemTypeGetsi_interpret8_user(_this, set_pos, CSetItemTypeGetsi_interpret8_next);
        };
        bool CSetItemTypeSetItemType_Init10_wrapper(struct CSetItemType* _this, struct CRecordData* prd)
        {
           return CSetItemTypeSetItemType_Init10_user(_this, prd, CSetItemTypeSetItemType_Init10_next);
        };
        bool CSetItemTypeSetItemType_UnInit12_wrapper(struct CSetItemType* _this)
        {
           return CSetItemTypeSetItemType_UnInit12_user(_this, CSetItemTypeSetItemType_UnInit12_next);
        };
        
        void CSetItemTypedtor_CSetItemType14_wrapper(struct CSetItemType* _this)
        {
           CSetItemTypedtor_CSetItemType14_user(_this, CSetItemTypedtor_CSetItemType14_next);
        };
        
        ::std::array<hook_record, 7> CSetItemType_functions = 
        {
            _hook_record {
                (LPVOID)0x1402e1cb0L,
                (LPVOID *)&CSetItemTypector_CSetItemType2_user,
                (LPVOID *)&CSetItemTypector_CSetItemType2_next,
                (LPVOID)cast_pointer_function(CSetItemTypector_CSetItemType2_wrapper),
                (LPVOID)cast_pointer_function((void(CSetItemType::*)())&CSetItemType::ctor_CSetItemType)
            },
            _hook_record {
                (LPVOID)0x1402e1fc0L,
                (LPVOID *)&CSetItemTypeClass_Init4_user,
                (LPVOID *)&CSetItemTypeClass_Init4_next,
                (LPVOID)cast_pointer_function(CSetItemTypeClass_Init4_wrapper),
                (LPVOID)cast_pointer_function((void(CSetItemType::*)())&CSetItemType::Class_Init)
            },
            _hook_record {
                (LPVOID)0x1402e2090L,
                (LPVOID *)&CSetItemTypeGetEffectTypeCount6_user,
                (LPVOID *)&CSetItemTypeGetEffectTypeCount6_next,
                (LPVOID)cast_pointer_function(CSetItemTypeGetEffectTypeCount6_wrapper),
                (LPVOID)cast_pointer_function((int(CSetItemType::*)())&CSetItemType::GetEffectTypeCount)
            },
            _hook_record {
                (LPVOID)0x1402e1f70L,
                (LPVOID *)&CSetItemTypeGetsi_interpret8_user,
                (LPVOID *)&CSetItemTypeGetsi_interpret8_next,
                (LPVOID)cast_pointer_function(CSetItemTypeGetsi_interpret8_wrapper),
                (LPVOID)cast_pointer_function((struct si_interpret*(CSetItemType::*)(int))&CSetItemType::Getsi_interpret)
            },
            _hook_record {
                (LPVOID)0x1402e1d40L,
                (LPVOID *)&CSetItemTypeSetItemType_Init10_user,
                (LPVOID *)&CSetItemTypeSetItemType_Init10_next,
                (LPVOID)cast_pointer_function(CSetItemTypeSetItemType_Init10_wrapper),
                (LPVOID)cast_pointer_function((bool(CSetItemType::*)(struct CRecordData*))&CSetItemType::SetItemType_Init)
            },
            _hook_record {
                (LPVOID)0x1402e1f30L,
                (LPVOID *)&CSetItemTypeSetItemType_UnInit12_user,
                (LPVOID *)&CSetItemTypeSetItemType_UnInit12_next,
                (LPVOID)cast_pointer_function(CSetItemTypeSetItemType_UnInit12_wrapper),
                (LPVOID)cast_pointer_function((bool(CSetItemType::*)())&CSetItemType::SetItemType_UnInit)
            },
            _hook_record {
                (LPVOID)0x1402e1d00L,
                (LPVOID *)&CSetItemTypedtor_CSetItemType14_user,
                (LPVOID *)&CSetItemTypedtor_CSetItemType14_next,
                (LPVOID)cast_pointer_function(CSetItemTypedtor_CSetItemType14_wrapper),
                (LPVOID)cast_pointer_function((void(CSetItemType::*)())&CSetItemType::dtor_CSetItemType)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
