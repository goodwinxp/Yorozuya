#include <CExtPotionBufDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CExtPotionBufctor_CExtPotionBuf2_ptr CExtPotionBufctor_CExtPotionBuf2_next(nullptr);
        Info::CExtPotionBufctor_CExtPotionBuf2_clbk CExtPotionBufctor_CExtPotionBuf2_user(nullptr);
        
        Info::CExtPotionBufCalcRemainTime4_ptr CExtPotionBufCalcRemainTime4_next(nullptr);
        Info::CExtPotionBufCalcRemainTime4_clbk CExtPotionBufCalcRemainTime4_user(nullptr);
        
        Info::CExtPotionBufCheckPotionTime6_ptr CExtPotionBufCheckPotionTime6_next(nullptr);
        Info::CExtPotionBufCheckPotionTime6_clbk CExtPotionBufCheckPotionTime6_user(nullptr);
        
        Info::CExtPotionBufIsExtPotionUse8_ptr CExtPotionBufIsExtPotionUse8_next(nullptr);
        Info::CExtPotionBufIsExtPotionUse8_clbk CExtPotionBufIsExtPotionUse8_user(nullptr);
        
        Info::CExtPotionBufSednMsg_RemovePotionContEffect10_ptr CExtPotionBufSednMsg_RemovePotionContEffect10_next(nullptr);
        Info::CExtPotionBufSednMsg_RemovePotionContEffect10_clbk CExtPotionBufSednMsg_RemovePotionContEffect10_user(nullptr);
        
        Info::CExtPotionBufSendMsg_RemainBufUseTime12_ptr CExtPotionBufSendMsg_RemainBufUseTime12_next(nullptr);
        Info::CExtPotionBufSendMsg_RemainBufUseTime12_clbk CExtPotionBufSendMsg_RemainBufUseTime12_user(nullptr);
        
        Info::CExtPotionBufSetExtPotionBufUse14_ptr CExtPotionBufSetExtPotionBufUse14_next(nullptr);
        Info::CExtPotionBufSetExtPotionBufUse14_clbk CExtPotionBufSetExtPotionBufUse14_user(nullptr);
        
        Info::CExtPotionBufSetExtPotionEndTime16_ptr CExtPotionBufSetExtPotionEndTime16_next(nullptr);
        Info::CExtPotionBufSetExtPotionEndTime16_clbk CExtPotionBufSetExtPotionEndTime16_user(nullptr);
        
        Info::CExtPotionBufUseBuffPotion18_ptr CExtPotionBufUseBuffPotion18_next(nullptr);
        Info::CExtPotionBufUseBuffPotion18_clbk CExtPotionBufUseBuffPotion18_user(nullptr);
        
        
        Info::CExtPotionBufdtor_CExtPotionBuf20_ptr CExtPotionBufdtor_CExtPotionBuf20_next(nullptr);
        Info::CExtPotionBufdtor_CExtPotionBuf20_clbk CExtPotionBufdtor_CExtPotionBuf20_user(nullptr);
        
        
        void CExtPotionBufctor_CExtPotionBuf2_wrapper(struct CExtPotionBuf* _this)
        {
           CExtPotionBufctor_CExtPotionBuf2_user(_this, CExtPotionBufctor_CExtPotionBuf2_next);
        };
        void CExtPotionBufCalcRemainTime4_wrapper(struct CExtPotionBuf* _this, uint16_t wInx, bool bUse)
        {
           CExtPotionBufCalcRemainTime4_user(_this, wInx, bUse, CExtPotionBufCalcRemainTime4_next);
        };
        void CExtPotionBufCheckPotionTime6_wrapper(struct CExtPotionBuf* _this, struct CPlayer* pOne)
        {
           CExtPotionBufCheckPotionTime6_user(_this, pOne, CExtPotionBufCheckPotionTime6_next);
        };
        bool CExtPotionBufIsExtPotionUse8_wrapper(struct CExtPotionBuf* _this)
        {
           return CExtPotionBufIsExtPotionUse8_user(_this, CExtPotionBufIsExtPotionUse8_next);
        };
        void CExtPotionBufSednMsg_RemovePotionContEffect10_wrapper(struct CExtPotionBuf* _this, uint16_t wPotionInx, uint16_t wIndex)
        {
           CExtPotionBufSednMsg_RemovePotionContEffect10_user(_this, wPotionInx, wIndex, CExtPotionBufSednMsg_RemovePotionContEffect10_next);
        };
        void CExtPotionBufSendMsg_RemainBufUseTime12_wrapper(struct CExtPotionBuf* _this, bool bUse, uint16_t wIndex, int nEndDay, int nEndHour, int nEndMin)
        {
           CExtPotionBufSendMsg_RemainBufUseTime12_user(_this, bUse, wIndex, nEndDay, nEndHour, nEndMin, CExtPotionBufSendMsg_RemainBufUseTime12_next);
        };
        void CExtPotionBufSetExtPotionBufUse14_wrapper(struct CExtPotionBuf* _this, bool bUse)
        {
           CExtPotionBufSetExtPotionBufUse14_user(_this, bUse, CExtPotionBufSetExtPotionBufUse14_next);
        };
        void CExtPotionBufSetExtPotionEndTime16_wrapper(struct CExtPotionBuf* _this, unsigned int dwEndTime)
        {
           CExtPotionBufSetExtPotionEndTime16_user(_this, dwEndTime, CExtPotionBufSetExtPotionEndTime16_next);
        };
        void CExtPotionBufUseBuffPotion18_wrapper(struct CExtPotionBuf* _this, struct CPlayer* pOne)
        {
           CExtPotionBufUseBuffPotion18_user(_this, pOne, CExtPotionBufUseBuffPotion18_next);
        };
        
        void CExtPotionBufdtor_CExtPotionBuf20_wrapper(struct CExtPotionBuf* _this)
        {
           CExtPotionBufdtor_CExtPotionBuf20_user(_this, CExtPotionBufdtor_CExtPotionBuf20_next);
        };
        
        ::std::array<hook_record, 10> CExtPotionBuf_functions = 
        {
            _hook_record {
                (LPVOID)0x14039fba0L,
                (LPVOID *)&CExtPotionBufctor_CExtPotionBuf2_user,
                (LPVOID *)&CExtPotionBufctor_CExtPotionBuf2_next,
                (LPVOID)cast_pointer_function(CExtPotionBufctor_CExtPotionBuf2_wrapper),
                (LPVOID)cast_pointer_function((void(CExtPotionBuf::*)())&CExtPotionBuf::ctor_CExtPotionBuf)
            },
            _hook_record {
                (LPVOID)0x14039fdc0L,
                (LPVOID *)&CExtPotionBufCalcRemainTime4_user,
                (LPVOID *)&CExtPotionBufCalcRemainTime4_next,
                (LPVOID)cast_pointer_function(CExtPotionBufCalcRemainTime4_wrapper),
                (LPVOID)cast_pointer_function((void(CExtPotionBuf::*)(uint16_t, bool))&CExtPotionBuf::CalcRemainTime)
            },
            _hook_record {
                (LPVOID)0x1403a0050L,
                (LPVOID *)&CExtPotionBufCheckPotionTime6_user,
                (LPVOID *)&CExtPotionBufCheckPotionTime6_next,
                (LPVOID)cast_pointer_function(CExtPotionBufCheckPotionTime6_wrapper),
                (LPVOID)cast_pointer_function((void(CExtPotionBuf::*)(struct CPlayer*))&CExtPotionBuf::CheckPotionTime)
            },
            _hook_record {
                (LPVOID)0x14007b9f0L,
                (LPVOID *)&CExtPotionBufIsExtPotionUse8_user,
                (LPVOID *)&CExtPotionBufIsExtPotionUse8_next,
                (LPVOID)cast_pointer_function(CExtPotionBufIsExtPotionUse8_wrapper),
                (LPVOID)cast_pointer_function((bool(CExtPotionBuf::*)())&CExtPotionBuf::IsExtPotionUse)
            },
            _hook_record {
                (LPVOID)0x14039fd30L,
                (LPVOID *)&CExtPotionBufSednMsg_RemovePotionContEffect10_user,
                (LPVOID *)&CExtPotionBufSednMsg_RemovePotionContEffect10_next,
                (LPVOID)cast_pointer_function(CExtPotionBufSednMsg_RemovePotionContEffect10_wrapper),
                (LPVOID)cast_pointer_function((void(CExtPotionBuf::*)(uint16_t, uint16_t))&CExtPotionBuf::SednMsg_RemovePotionContEffect)
            },
            _hook_record {
                (LPVOID)0x14039fc70L,
                (LPVOID *)&CExtPotionBufSendMsg_RemainBufUseTime12_user,
                (LPVOID *)&CExtPotionBufSendMsg_RemainBufUseTime12_next,
                (LPVOID)cast_pointer_function(CExtPotionBufSendMsg_RemainBufUseTime12_wrapper),
                (LPVOID)cast_pointer_function((void(CExtPotionBuf::*)(bool, uint16_t, int, int, int))&CExtPotionBuf::SendMsg_RemainBufUseTime)
            },
            _hook_record {
                (LPVOID)0x1400790b0L,
                (LPVOID *)&CExtPotionBufSetExtPotionBufUse14_user,
                (LPVOID *)&CExtPotionBufSetExtPotionBufUse14_next,
                (LPVOID)cast_pointer_function(CExtPotionBufSetExtPotionBufUse14_wrapper),
                (LPVOID)cast_pointer_function((void(CExtPotionBuf::*)(bool))&CExtPotionBuf::SetExtPotionBufUse)
            },
            _hook_record {
                (LPVOID)0x1400790d0L,
                (LPVOID *)&CExtPotionBufSetExtPotionEndTime16_user,
                (LPVOID *)&CExtPotionBufSetExtPotionEndTime16_next,
                (LPVOID)cast_pointer_function(CExtPotionBufSetExtPotionEndTime16_wrapper),
                (LPVOID)cast_pointer_function((void(CExtPotionBuf::*)(unsigned int))&CExtPotionBuf::SetExtPotionEndTime)
            },
            _hook_record {
                (LPVOID)0x14039fbd0L,
                (LPVOID *)&CExtPotionBufUseBuffPotion18_user,
                (LPVOID *)&CExtPotionBufUseBuffPotion18_next,
                (LPVOID)cast_pointer_function(CExtPotionBufUseBuffPotion18_wrapper),
                (LPVOID)cast_pointer_function((void(CExtPotionBuf::*)(struct CPlayer*))&CExtPotionBuf::UseBuffPotion)
            },
            _hook_record {
                (LPVOID)0x140072b40L,
                (LPVOID *)&CExtPotionBufdtor_CExtPotionBuf20_user,
                (LPVOID *)&CExtPotionBufdtor_CExtPotionBuf20_next,
                (LPVOID)cast_pointer_function(CExtPotionBufdtor_CExtPotionBuf20_wrapper),
                (LPVOID)cast_pointer_function((void(CExtPotionBuf::*)())&CExtPotionBuf::dtor_CExtPotionBuf)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
