#include <CHolyStoneDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CHolyStoneAutoRecover2_ptr CHolyStoneAutoRecover2_next(nullptr);
        Info::CHolyStoneAutoRecover2_clbk CHolyStoneAutoRecover2_user(nullptr);
        
        
        Info::CHolyStonector_CHolyStone4_ptr CHolyStonector_CHolyStone4_next(nullptr);
        Info::CHolyStonector_CHolyStone4_clbk CHolyStonector_CHolyStone4_user(nullptr);
        
        Info::CHolyStoneCalcCurHPRate6_ptr CHolyStoneCalcCurHPRate6_next(nullptr);
        Info::CHolyStoneCalcCurHPRate6_clbk CHolyStoneCalcCurHPRate6_user(nullptr);
        
        Info::CHolyStoneCreate8_ptr CHolyStoneCreate8_next(nullptr);
        Info::CHolyStoneCreate8_clbk CHolyStoneCreate8_user(nullptr);
        
        Info::CHolyStoneDestroy10_ptr CHolyStoneDestroy10_next(nullptr);
        Info::CHolyStoneDestroy10_clbk CHolyStoneDestroy10_user(nullptr);
        
        Info::CHolyStoneDropItem12_ptr CHolyStoneDropItem12_next(nullptr);
        Info::CHolyStoneDropItem12_clbk CHolyStoneDropItem12_user(nullptr);
        
        Info::CHolyStoneGetAddCountWithPlayer14_ptr CHolyStoneGetAddCountWithPlayer14_next(nullptr);
        Info::CHolyStoneGetAddCountWithPlayer14_clbk CHolyStoneGetAddCountWithPlayer14_user(nullptr);
        
        Info::CHolyStoneGetAttackDP16_ptr CHolyStoneGetAttackDP16_next(nullptr);
        Info::CHolyStoneGetAttackDP16_clbk CHolyStoneGetAttackDP16_user(nullptr);
        
        Info::CHolyStoneGetDefFC18_ptr CHolyStoneGetDefFC18_next(nullptr);
        Info::CHolyStoneGetDefFC18_clbk CHolyStoneGetDefFC18_user(nullptr);
        
        Info::CHolyStoneGetDefFacing20_ptr CHolyStoneGetDefFacing20_next(nullptr);
        Info::CHolyStoneGetDefFacing20_clbk CHolyStoneGetDefFacing20_user(nullptr);
        
        Info::CHolyStoneGetDefGap22_ptr CHolyStoneGetDefGap22_next(nullptr);
        Info::CHolyStoneGetDefGap22_clbk CHolyStoneGetDefGap22_user(nullptr);
        
        Info::CHolyStoneGetDefSkill24_ptr CHolyStoneGetDefSkill24_next(nullptr);
        Info::CHolyStoneGetDefSkill24_clbk CHolyStoneGetDefSkill24_user(nullptr);
        
        Info::CHolyStoneGetFireTol26_ptr CHolyStoneGetFireTol26_next(nullptr);
        Info::CHolyStoneGetFireTol26_clbk CHolyStoneGetFireTol26_user(nullptr);
        
        Info::CHolyStoneGetHP28_ptr CHolyStoneGetHP28_next(nullptr);
        Info::CHolyStoneGetHP28_clbk CHolyStoneGetHP28_user(nullptr);
        
        Info::CHolyStoneGetLevel30_ptr CHolyStoneGetLevel30_next(nullptr);
        Info::CHolyStoneGetLevel30_clbk CHolyStoneGetLevel30_user(nullptr);
        
        Info::CHolyStoneGetMaxHP32_ptr CHolyStoneGetMaxHP32_next(nullptr);
        Info::CHolyStoneGetMaxHP32_clbk CHolyStoneGetMaxHP32_user(nullptr);
        
        Info::CHolyStoneGetNewStoneSerial34_ptr CHolyStoneGetNewStoneSerial34_next(nullptr);
        Info::CHolyStoneGetNewStoneSerial34_clbk CHolyStoneGetNewStoneSerial34_user(nullptr);
        
        Info::CHolyStoneGetObjName36_ptr CHolyStoneGetObjName36_next(nullptr);
        Info::CHolyStoneGetObjName36_clbk CHolyStoneGetObjName36_user(nullptr);
        
        Info::CHolyStoneGetObjRace38_ptr CHolyStoneGetObjRace38_next(nullptr);
        Info::CHolyStoneGetObjRace38_clbk CHolyStoneGetObjRace38_user(nullptr);
        
        Info::CHolyStoneGetSoilTol40_ptr CHolyStoneGetSoilTol40_next(nullptr);
        Info::CHolyStoneGetSoilTol40_clbk CHolyStoneGetSoilTol40_user(nullptr);
        
        Info::CHolyStoneGetWaterTol42_ptr CHolyStoneGetWaterTol42_next(nullptr);
        Info::CHolyStoneGetWaterTol42_clbk CHolyStoneGetWaterTol42_user(nullptr);
        
        Info::CHolyStoneGetWeaponAdjust44_ptr CHolyStoneGetWeaponAdjust44_next(nullptr);
        Info::CHolyStoneGetWeaponAdjust44_clbk CHolyStoneGetWeaponAdjust44_user(nullptr);
        
        Info::CHolyStoneGetWidth46_ptr CHolyStoneGetWidth46_next(nullptr);
        Info::CHolyStoneGetWidth46_clbk CHolyStoneGetWidth46_user(nullptr);
        
        Info::CHolyStoneGetWindTol48_ptr CHolyStoneGetWindTol48_next(nullptr);
        Info::CHolyStoneGetWindTol48_clbk CHolyStoneGetWindTol48_user(nullptr);
        
        Info::CHolyStoneInit50_ptr CHolyStoneInit50_next(nullptr);
        Info::CHolyStoneInit50_clbk CHolyStoneInit50_user(nullptr);
        
        Info::CHolyStoneIsBeAttackedAble52_ptr CHolyStoneIsBeAttackedAble52_next(nullptr);
        Info::CHolyStoneIsBeAttackedAble52_clbk CHolyStoneIsBeAttackedAble52_user(nullptr);
        
        Info::CHolyStoneIsBeDamagedAble54_ptr CHolyStoneIsBeDamagedAble54_next(nullptr);
        Info::CHolyStoneIsBeDamagedAble54_clbk CHolyStoneIsBeDamagedAble54_user(nullptr);
        
        Info::CHolyStoneIsChangedHP56_ptr CHolyStoneIsChangedHP56_next(nullptr);
        Info::CHolyStoneIsChangedHP56_clbk CHolyStoneIsChangedHP56_user(nullptr);
        
        Info::CHolyStoneLoop58_ptr CHolyStoneLoop58_next(nullptr);
        Info::CHolyStoneLoop58_clbk CHolyStoneLoop58_user(nullptr);
        
        Info::CHolyStoneOutOfSec60_ptr CHolyStoneOutOfSec60_next(nullptr);
        Info::CHolyStoneOutOfSec60_clbk CHolyStoneOutOfSec60_user(nullptr);
        
        Info::CHolyStoneSendMsg_Create62_ptr CHolyStoneSendMsg_Create62_next(nullptr);
        Info::CHolyStoneSendMsg_Create62_clbk CHolyStoneSendMsg_Create62_user(nullptr);
        
        Info::CHolyStoneSendMsg_Destroy64_ptr CHolyStoneSendMsg_Destroy64_next(nullptr);
        Info::CHolyStoneSendMsg_Destroy64_clbk CHolyStoneSendMsg_Destroy64_user(nullptr);
        
        Info::CHolyStoneSendMsg_FixPosition66_ptr CHolyStoneSendMsg_FixPosition66_next(nullptr);
        Info::CHolyStoneSendMsg_FixPosition66_clbk CHolyStoneSendMsg_FixPosition66_user(nullptr);
        
        Info::CHolyStoneSendMsg_StoneAlterOper68_ptr CHolyStoneSendMsg_StoneAlterOper68_next(nullptr);
        Info::CHolyStoneSendMsg_StoneAlterOper68_clbk CHolyStoneSendMsg_StoneAlterOper68_user(nullptr);
        
        Info::CHolyStoneSetDamage70_ptr CHolyStoneSetDamage70_next(nullptr);
        Info::CHolyStoneSetDamage70_clbk CHolyStoneSetDamage70_user(nullptr);
        
        Info::CHolyStoneSetDropItem72_ptr CHolyStoneSetDropItem72_next(nullptr);
        Info::CHolyStoneSetDropItem72_clbk CHolyStoneSetDropItem72_user(nullptr);
        
        Info::CHolyStoneSetHP74_ptr CHolyStoneSetHP74_next(nullptr);
        Info::CHolyStoneSetHP74_clbk CHolyStoneSetHP74_user(nullptr);
        
        Info::CHolyStoneSetOper76_ptr CHolyStoneSetOper76_next(nullptr);
        Info::CHolyStoneSetOper76_clbk CHolyStoneSetOper76_user(nullptr);
        
        
        Info::CHolyStonedtor_CHolyStone82_ptr CHolyStonedtor_CHolyStone82_next(nullptr);
        Info::CHolyStonedtor_CHolyStone82_clbk CHolyStonedtor_CHolyStone82_user(nullptr);
        
        void CHolyStoneAutoRecover2_wrapper(struct CHolyStone* _this)
        {
           CHolyStoneAutoRecover2_user(_this, CHolyStoneAutoRecover2_next);
        };
        
        void CHolyStonector_CHolyStone4_wrapper(struct CHolyStone* _this)
        {
           CHolyStonector_CHolyStone4_user(_this, CHolyStonector_CHolyStone4_next);
        };
        uint16_t CHolyStoneCalcCurHPRate6_wrapper(struct CHolyStone* _this)
        {
           return CHolyStoneCalcCurHPRate6_user(_this, CHolyStoneCalcCurHPRate6_next);
        };
        bool CHolyStoneCreate8_wrapper(struct CHolyStone* _this, struct _stone_create_setdata* pData)
        {
           return CHolyStoneCreate8_user(_this, pData, CHolyStoneCreate8_next);
        };
        bool CHolyStoneDestroy10_wrapper(struct CHolyStone* _this, char byDestroyCode, struct CCharacter* pAtter)
        {
           return CHolyStoneDestroy10_user(_this, byDestroyCode, pAtter, CHolyStoneDestroy10_next);
        };
        void CHolyStoneDropItem12_wrapper(struct CHolyStone* _this)
        {
           CHolyStoneDropItem12_user(_this, CHolyStoneDropItem12_next);
        };
        uint16_t CHolyStoneGetAddCountWithPlayer14_wrapper(struct CHolyStone* _this)
        {
           return CHolyStoneGetAddCountWithPlayer14_user(_this, CHolyStoneGetAddCountWithPlayer14_next);
        };
        int CHolyStoneGetAttackDP16_wrapper(struct CHolyStone* _this)
        {
           return CHolyStoneGetAttackDP16_user(_this, CHolyStoneGetAttackDP16_next);
        };
        int CHolyStoneGetDefFC18_wrapper(struct CHolyStone* _this, int nAttactPart, struct CCharacter* pAttChar, int* pnConvertPart)
        {
           return CHolyStoneGetDefFC18_user(_this, nAttactPart, pAttChar, pnConvertPart, CHolyStoneGetDefFC18_next);
        };
        float CHolyStoneGetDefFacing20_wrapper(struct CHolyStone* _this, int nPart)
        {
           return CHolyStoneGetDefFacing20_user(_this, nPart, CHolyStoneGetDefFacing20_next);
        };
        float CHolyStoneGetDefGap22_wrapper(struct CHolyStone* _this, int nPart)
        {
           return CHolyStoneGetDefGap22_user(_this, nPart, CHolyStoneGetDefGap22_next);
        };
        int CHolyStoneGetDefSkill24_wrapper(struct CHolyStone* _this, bool bBackAttack)
        {
           return CHolyStoneGetDefSkill24_user(_this, bBackAttack, CHolyStoneGetDefSkill24_next);
        };
        int CHolyStoneGetFireTol26_wrapper(struct CHolyStone* _this)
        {
           return CHolyStoneGetFireTol26_user(_this, CHolyStoneGetFireTol26_next);
        };
        int CHolyStoneGetHP28_wrapper(struct CHolyStone* _this)
        {
           return CHolyStoneGetHP28_user(_this, CHolyStoneGetHP28_next);
        };
        int CHolyStoneGetLevel30_wrapper(struct CHolyStone* _this)
        {
           return CHolyStoneGetLevel30_user(_this, CHolyStoneGetLevel30_next);
        };
        int CHolyStoneGetMaxHP32_wrapper(struct CHolyStone* _this)
        {
           return CHolyStoneGetMaxHP32_user(_this, CHolyStoneGetMaxHP32_next);
        };
        unsigned int CHolyStoneGetNewStoneSerial34_wrapper()
        {
           return CHolyStoneGetNewStoneSerial34_user(CHolyStoneGetNewStoneSerial34_next);
        };
        char* CHolyStoneGetObjName36_wrapper(struct CHolyStone* _this)
        {
           return CHolyStoneGetObjName36_user(_this, CHolyStoneGetObjName36_next);
        };
        int CHolyStoneGetObjRace38_wrapper(struct CHolyStone* _this)
        {
           return CHolyStoneGetObjRace38_user(_this, CHolyStoneGetObjRace38_next);
        };
        int CHolyStoneGetSoilTol40_wrapper(struct CHolyStone* _this)
        {
           return CHolyStoneGetSoilTol40_user(_this, CHolyStoneGetSoilTol40_next);
        };
        int CHolyStoneGetWaterTol42_wrapper(struct CHolyStone* _this)
        {
           return CHolyStoneGetWaterTol42_user(_this, CHolyStoneGetWaterTol42_next);
        };
        float CHolyStoneGetWeaponAdjust44_wrapper(struct CHolyStone* _this)
        {
           return CHolyStoneGetWeaponAdjust44_user(_this, CHolyStoneGetWeaponAdjust44_next);
        };
        float CHolyStoneGetWidth46_wrapper(struct CHolyStone* _this)
        {
           return CHolyStoneGetWidth46_user(_this, CHolyStoneGetWidth46_next);
        };
        int CHolyStoneGetWindTol48_wrapper(struct CHolyStone* _this)
        {
           return CHolyStoneGetWindTol48_user(_this, CHolyStoneGetWindTol48_next);
        };
        bool CHolyStoneInit50_wrapper(struct CHolyStone* _this, struct _object_id* pID)
        {
           return CHolyStoneInit50_user(_this, pID, CHolyStoneInit50_next);
        };
        bool CHolyStoneIsBeAttackedAble52_wrapper(struct CHolyStone* _this, bool bFirst)
        {
           return CHolyStoneIsBeAttackedAble52_user(_this, bFirst, CHolyStoneIsBeAttackedAble52_next);
        };
        bool CHolyStoneIsBeDamagedAble54_wrapper(struct CHolyStone* _this, struct CCharacter* pAtter)
        {
           return CHolyStoneIsBeDamagedAble54_user(_this, pAtter, CHolyStoneIsBeDamagedAble54_next);
        };
        bool CHolyStoneIsChangedHP56_wrapper(struct CHolyStone* _this, uint16_t wAlterRate)
        {
           return CHolyStoneIsChangedHP56_user(_this, wAlterRate, CHolyStoneIsChangedHP56_next);
        };
        void CHolyStoneLoop58_wrapper(struct CHolyStone* _this)
        {
           CHolyStoneLoop58_user(_this, CHolyStoneLoop58_next);
        };
        void CHolyStoneOutOfSec60_wrapper(struct CHolyStone* _this)
        {
           CHolyStoneOutOfSec60_user(_this, CHolyStoneOutOfSec60_next);
        };
        void CHolyStoneSendMsg_Create62_wrapper(struct CHolyStone* _this)
        {
           CHolyStoneSendMsg_Create62_user(_this, CHolyStoneSendMsg_Create62_next);
        };
        void CHolyStoneSendMsg_Destroy64_wrapper(struct CHolyStone* _this, char byDestroyCode, unsigned int dwDestroySerial)
        {
           CHolyStoneSendMsg_Destroy64_user(_this, byDestroyCode, dwDestroySerial, CHolyStoneSendMsg_Destroy64_next);
        };
        void CHolyStoneSendMsg_FixPosition66_wrapper(struct CHolyStone* _this, int n)
        {
           CHolyStoneSendMsg_FixPosition66_user(_this, n, CHolyStoneSendMsg_FixPosition66_next);
        };
        void CHolyStoneSendMsg_StoneAlterOper68_wrapper(struct CHolyStone* _this)
        {
           CHolyStoneSendMsg_StoneAlterOper68_user(_this, CHolyStoneSendMsg_StoneAlterOper68_next);
        };
        int CHolyStoneSetDamage70_wrapper(struct CHolyStone* _this, int nDam, struct CCharacter* pDst, int nDstLv, bool bCrt, int nAttackType, unsigned int dwAttackSerial, bool bJadeReturn)
        {
           return CHolyStoneSetDamage70_user(_this, nDam, pDst, nDstLv, bCrt, nAttackType, dwAttackSerial, bJadeReturn, CHolyStoneSetDamage70_next);
        };
        void CHolyStoneSetDropItem72_wrapper(struct CHolyStone* _this)
        {
           CHolyStoneSetDropItem72_user(_this, CHolyStoneSetDropItem72_next);
        };
        bool CHolyStoneSetHP74_wrapper(struct CHolyStone* _this, int nHP, bool bOver)
        {
           return CHolyStoneSetHP74_user(_this, nHP, bOver, CHolyStoneSetHP74_next);
        };
        void CHolyStoneSetOper76_wrapper(struct CHolyStone* _this, bool bOper, float fHPRate)
        {
           CHolyStoneSetOper76_user(_this, bOper, fHPRate, CHolyStoneSetOper76_next);
        };
        
        void CHolyStonedtor_CHolyStone82_wrapper(struct CHolyStone* _this)
        {
           CHolyStonedtor_CHolyStone82_user(_this, CHolyStonedtor_CHolyStone82_next);
        };
        
        ::std::array<hook_record, 39> CHolyStone_functions = 
        {
            _hook_record {
                (LPVOID)0x1401373d0L,
                (LPVOID *)&CHolyStoneAutoRecover2_user,
                (LPVOID *)&CHolyStoneAutoRecover2_next,
                (LPVOID)cast_pointer_function(CHolyStoneAutoRecover2_wrapper),
                (LPVOID)cast_pointer_function((void(CHolyStone::*)())&CHolyStone::AutoRecover)
            },
            _hook_record {
                (LPVOID)0x140136d10L,
                (LPVOID *)&CHolyStonector_CHolyStone4_user,
                (LPVOID *)&CHolyStonector_CHolyStone4_next,
                (LPVOID)cast_pointer_function(CHolyStonector_CHolyStone4_wrapper),
                (LPVOID)cast_pointer_function((void(CHolyStone::*)())&CHolyStone::ctor_CHolyStone)
            },
            _hook_record {
                (LPVOID)0x140138f10L,
                (LPVOID *)&CHolyStoneCalcCurHPRate6_user,
                (LPVOID *)&CHolyStoneCalcCurHPRate6_next,
                (LPVOID)cast_pointer_function(CHolyStoneCalcCurHPRate6_wrapper),
                (LPVOID)cast_pointer_function((uint16_t(CHolyStone::*)())&CHolyStone::CalcCurHPRate)
            },
            _hook_record {
                (LPVOID)0x140136fa0L,
                (LPVOID *)&CHolyStoneCreate8_user,
                (LPVOID *)&CHolyStoneCreate8_next,
                (LPVOID)cast_pointer_function(CHolyStoneCreate8_wrapper),
                (LPVOID)cast_pointer_function((bool(CHolyStone::*)(struct _stone_create_setdata*))&CHolyStone::Create)
            },
            _hook_record {
                (LPVOID)0x140137140L,
                (LPVOID *)&CHolyStoneDestroy10_user,
                (LPVOID *)&CHolyStoneDestroy10_next,
                (LPVOID)cast_pointer_function(CHolyStoneDestroy10_wrapper),
                (LPVOID)cast_pointer_function((bool(CHolyStone::*)(char, struct CCharacter*))&CHolyStone::Destroy)
            },
            _hook_record {
                (LPVOID)0x140137fa0L,
                (LPVOID *)&CHolyStoneDropItem12_user,
                (LPVOID *)&CHolyStoneDropItem12_next,
                (LPVOID)cast_pointer_function(CHolyStoneDropItem12_wrapper),
                (LPVOID)cast_pointer_function((void(CHolyStone::*)())&CHolyStone::DropItem)
            },
            _hook_record {
                (LPVOID)0x140137ee0L,
                (LPVOID *)&CHolyStoneGetAddCountWithPlayer14_user,
                (LPVOID *)&CHolyStoneGetAddCountWithPlayer14_next,
                (LPVOID)cast_pointer_function(CHolyStoneGetAddCountWithPlayer14_wrapper),
                (LPVOID)cast_pointer_function((uint16_t(CHolyStone::*)())&CHolyStone::GetAddCountWithPlayer)
            },
            _hook_record {
                (LPVOID)0x140138eb0L,
                (LPVOID *)&CHolyStoneGetAttackDP16_user,
                (LPVOID *)&CHolyStoneGetAttackDP16_next,
                (LPVOID)cast_pointer_function(CHolyStoneGetAttackDP16_wrapper),
                (LPVOID)cast_pointer_function((int(CHolyStone::*)())&CHolyStone::GetAttackDP)
            },
            _hook_record {
                (LPVOID)0x1401376f0L,
                (LPVOID *)&CHolyStoneGetDefFC18_user,
                (LPVOID *)&CHolyStoneGetDefFC18_next,
                (LPVOID)cast_pointer_function(CHolyStoneGetDefFC18_wrapper),
                (LPVOID)cast_pointer_function((int(CHolyStone::*)(int, struct CCharacter*, int*))&CHolyStone::GetDefFC)
            },
            _hook_record {
                (LPVOID)0x140138e00L,
                (LPVOID *)&CHolyStoneGetDefFacing20_user,
                (LPVOID *)&CHolyStoneGetDefFacing20_next,
                (LPVOID)cast_pointer_function(CHolyStoneGetDefFacing20_wrapper),
                (LPVOID)cast_pointer_function((float(CHolyStone::*)(int))&CHolyStone::GetDefFacing)
            },
            _hook_record {
                (LPVOID)0x140138da0L,
                (LPVOID *)&CHolyStoneGetDefGap22_user,
                (LPVOID *)&CHolyStoneGetDefGap22_next,
                (LPVOID)cast_pointer_function(CHolyStoneGetDefGap22_wrapper),
                (LPVOID)cast_pointer_function((float(CHolyStone::*)(int))&CHolyStone::GetDefGap)
            },
            _hook_record {
                (LPVOID)0x140138cb0L,
                (LPVOID *)&CHolyStoneGetDefSkill24_user,
                (LPVOID *)&CHolyStoneGetDefSkill24_next,
                (LPVOID)cast_pointer_function(CHolyStoneGetDefSkill24_wrapper),
                (LPVOID)cast_pointer_function((int(CHolyStone::*)(bool))&CHolyStone::GetDefSkill)
            },
            _hook_record {
                (LPVOID)0x140138ce0L,
                (LPVOID *)&CHolyStoneGetFireTol26_user,
                (LPVOID *)&CHolyStoneGetFireTol26_next,
                (LPVOID)cast_pointer_function(CHolyStoneGetFireTol26_wrapper),
                (LPVOID)cast_pointer_function((int(CHolyStone::*)())&CHolyStone::GetFireTol)
            },
            _hook_record {
                (LPVOID)0x140138be0L,
                (LPVOID *)&CHolyStoneGetHP28_user,
                (LPVOID *)&CHolyStoneGetHP28_next,
                (LPVOID)cast_pointer_function(CHolyStoneGetHP28_wrapper),
                (LPVOID)cast_pointer_function((int(CHolyStone::*)())&CHolyStone::GetHP)
            },
            _hook_record {
                (LPVOID)0x140138c80L,
                (LPVOID *)&CHolyStoneGetLevel30_user,
                (LPVOID *)&CHolyStoneGetLevel30_next,
                (LPVOID)cast_pointer_function(CHolyStoneGetLevel30_wrapper),
                (LPVOID)cast_pointer_function((int(CHolyStone::*)())&CHolyStone::GetLevel)
            },
            _hook_record {
                (LPVOID)0x140138c00L,
                (LPVOID *)&CHolyStoneGetMaxHP32_user,
                (LPVOID *)&CHolyStoneGetMaxHP32_next,
                (LPVOID)cast_pointer_function(CHolyStoneGetMaxHP32_wrapper),
                (LPVOID)cast_pointer_function((int(CHolyStone::*)())&CHolyStone::GetMaxHP)
            },
            _hook_record {
                (LPVOID)0x140138fc0L,
                (LPVOID *)&CHolyStoneGetNewStoneSerial34_user,
                (LPVOID *)&CHolyStoneGetNewStoneSerial34_next,
                (LPVOID)cast_pointer_function(CHolyStoneGetNewStoneSerial34_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(*)())&CHolyStone::GetNewStoneSerial)
            },
            _hook_record {
                (LPVOID)0x1401378e0L,
                (LPVOID *)&CHolyStoneGetObjName36_user,
                (LPVOID *)&CHolyStoneGetObjName36_next,
                (LPVOID)cast_pointer_function(CHolyStoneGetObjName36_wrapper),
                (LPVOID)cast_pointer_function((char*(CHolyStone::*)())&CHolyStone::GetObjName)
            },
            _hook_record {
                (LPVOID)0x140138ef0L,
                (LPVOID *)&CHolyStoneGetObjRace38_user,
                (LPVOID *)&CHolyStoneGetObjRace38_next,
                (LPVOID)cast_pointer_function(CHolyStoneGetObjRace38_wrapper),
                (LPVOID)cast_pointer_function((int(CHolyStone::*)())&CHolyStone::GetObjRace)
            },
            _hook_record {
                (LPVOID)0x140138d40L,
                (LPVOID *)&CHolyStoneGetSoilTol40_user,
                (LPVOID *)&CHolyStoneGetSoilTol40_next,
                (LPVOID)cast_pointer_function(CHolyStoneGetSoilTol40_wrapper),
                (LPVOID)cast_pointer_function((int(CHolyStone::*)())&CHolyStone::GetSoilTol)
            },
            _hook_record {
                (LPVOID)0x140138d10L,
                (LPVOID *)&CHolyStoneGetWaterTol42_user,
                (LPVOID *)&CHolyStoneGetWaterTol42_next,
                (LPVOID)cast_pointer_function(CHolyStoneGetWaterTol42_wrapper),
                (LPVOID)cast_pointer_function((int(CHolyStone::*)())&CHolyStone::GetWaterTol)
            },
            _hook_record {
                (LPVOID)0x140138e60L,
                (LPVOID *)&CHolyStoneGetWeaponAdjust44_user,
                (LPVOID *)&CHolyStoneGetWeaponAdjust44_next,
                (LPVOID)cast_pointer_function(CHolyStoneGetWeaponAdjust44_wrapper),
                (LPVOID)cast_pointer_function((float(CHolyStone::*)())&CHolyStone::GetWeaponAdjust)
            },
            _hook_record {
                (LPVOID)0x140138c30L,
                (LPVOID *)&CHolyStoneGetWidth46_user,
                (LPVOID *)&CHolyStoneGetWidth46_next,
                (LPVOID)cast_pointer_function(CHolyStoneGetWidth46_wrapper),
                (LPVOID)cast_pointer_function((float(CHolyStone::*)())&CHolyStone::GetWidth)
            },
            _hook_record {
                (LPVOID)0x140138d70L,
                (LPVOID *)&CHolyStoneGetWindTol48_user,
                (LPVOID *)&CHolyStoneGetWindTol48_next,
                (LPVOID)cast_pointer_function(CHolyStoneGetWindTol48_wrapper),
                (LPVOID)cast_pointer_function((int(CHolyStone::*)())&CHolyStone::GetWindTol)
            },
            _hook_record {
                (LPVOID)0x140136e40L,
                (LPVOID *)&CHolyStoneInit50_user,
                (LPVOID *)&CHolyStoneInit50_next,
                (LPVOID)cast_pointer_function(CHolyStoneInit50_wrapper),
                (LPVOID)cast_pointer_function((bool(CHolyStone::*)(struct _object_id*))&CHolyStone::Init)
            },
            _hook_record {
                (LPVOID)0x140138ed0L,
                (LPVOID *)&CHolyStoneIsBeAttackedAble52_user,
                (LPVOID *)&CHolyStoneIsBeAttackedAble52_next,
                (LPVOID)cast_pointer_function(CHolyStoneIsBeAttackedAble52_wrapper),
                (LPVOID)cast_pointer_function((bool(CHolyStone::*)(bool))&CHolyStone::IsBeAttackedAble)
            },
            _hook_record {
                (LPVOID)0x140137770L,
                (LPVOID *)&CHolyStoneIsBeDamagedAble54_user,
                (LPVOID *)&CHolyStoneIsBeDamagedAble54_next,
                (LPVOID)cast_pointer_function(CHolyStoneIsBeDamagedAble54_wrapper),
                (LPVOID)cast_pointer_function((bool(CHolyStone::*)(struct CCharacter*))&CHolyStone::IsBeDamagedAble)
            },
            _hook_record {
                (LPVOID)0x1402847d0L,
                (LPVOID *)&CHolyStoneIsChangedHP56_user,
                (LPVOID *)&CHolyStoneIsChangedHP56_next,
                (LPVOID)cast_pointer_function(CHolyStoneIsChangedHP56_wrapper),
                (LPVOID)cast_pointer_function((bool(CHolyStone::*)(uint16_t))&CHolyStone::IsChangedHP)
            },
            _hook_record {
                (LPVOID)0x140137370L,
                (LPVOID *)&CHolyStoneLoop58_user,
                (LPVOID *)&CHolyStoneLoop58_next,
                (LPVOID)cast_pointer_function(CHolyStoneLoop58_wrapper),
                (LPVOID)cast_pointer_function((void(CHolyStone::*)())&CHolyStone::Loop)
            },
            _hook_record {
                (LPVOID)0x140138b90L,
                (LPVOID *)&CHolyStoneOutOfSec60_user,
                (LPVOID *)&CHolyStoneOutOfSec60_next,
                (LPVOID)cast_pointer_function(CHolyStoneOutOfSec60_wrapper),
                (LPVOID)cast_pointer_function((void(CHolyStone::*)())&CHolyStone::OutOfSec)
            },
            _hook_record {
                (LPVOID)0x1401379d0L,
                (LPVOID *)&CHolyStoneSendMsg_Create62_user,
                (LPVOID *)&CHolyStoneSendMsg_Create62_next,
                (LPVOID)cast_pointer_function(CHolyStoneSendMsg_Create62_wrapper),
                (LPVOID)cast_pointer_function((void(CHolyStone::*)())&CHolyStone::SendMsg_Create)
            },
            _hook_record {
                (LPVOID)0x140137ad0L,
                (LPVOID *)&CHolyStoneSendMsg_Destroy64_user,
                (LPVOID *)&CHolyStoneSendMsg_Destroy64_next,
                (LPVOID)cast_pointer_function(CHolyStoneSendMsg_Destroy64_wrapper),
                (LPVOID)cast_pointer_function((void(CHolyStone::*)(char, unsigned int))&CHolyStone::SendMsg_Destroy)
            },
            _hook_record {
                (LPVOID)0x140137b80L,
                (LPVOID *)&CHolyStoneSendMsg_FixPosition66_user,
                (LPVOID *)&CHolyStoneSendMsg_FixPosition66_next,
                (LPVOID)cast_pointer_function(CHolyStoneSendMsg_FixPosition66_wrapper),
                (LPVOID)cast_pointer_function((void(CHolyStone::*)(int))&CHolyStone::SendMsg_FixPosition)
            },
            _hook_record {
                (LPVOID)0x140137cd0L,
                (LPVOID *)&CHolyStoneSendMsg_StoneAlterOper68_user,
                (LPVOID *)&CHolyStoneSendMsg_StoneAlterOper68_next,
                (LPVOID)cast_pointer_function(CHolyStoneSendMsg_StoneAlterOper68_wrapper),
                (LPVOID)cast_pointer_function((void(CHolyStone::*)())&CHolyStone::SendMsg_StoneAlterOper)
            },
            _hook_record {
                (LPVOID)0x140137590L,
                (LPVOID *)&CHolyStoneSetDamage70_user,
                (LPVOID *)&CHolyStoneSetDamage70_next,
                (LPVOID)cast_pointer_function(CHolyStoneSetDamage70_wrapper),
                (LPVOID)cast_pointer_function((int(CHolyStone::*)(int, struct CCharacter*, int, bool, int, unsigned int, bool))&CHolyStone::SetDamage)
            },
            _hook_record {
                (LPVOID)0x140137d80L,
                (LPVOID *)&CHolyStoneSetDropItem72_user,
                (LPVOID *)&CHolyStoneSetDropItem72_next,
                (LPVOID)cast_pointer_function(CHolyStoneSetDropItem72_wrapper),
                (LPVOID)cast_pointer_function((void(CHolyStone::*)())&CHolyStone::SetDropItem)
            },
            _hook_record {
                (LPVOID)0x140137510L,
                (LPVOID *)&CHolyStoneSetHP74_user,
                (LPVOID *)&CHolyStoneSetHP74_next,
                (LPVOID)cast_pointer_function(CHolyStoneSetHP74_wrapper),
                (LPVOID)cast_pointer_function((bool(CHolyStone::*)(int, bool))&CHolyStone::SetHP)
            },
            _hook_record {
                (LPVOID)0x140137290L,
                (LPVOID *)&CHolyStoneSetOper76_user,
                (LPVOID *)&CHolyStoneSetOper76_next,
                (LPVOID)cast_pointer_function(CHolyStoneSetOper76_wrapper),
                (LPVOID)cast_pointer_function((void(CHolyStone::*)(bool, float))&CHolyStone::SetOper)
            },
            _hook_record {
                (LPVOID)0x140136db0L,
                (LPVOID *)&CHolyStonedtor_CHolyStone82_user,
                (LPVOID *)&CHolyStonedtor_CHolyStone82_next,
                (LPVOID)cast_pointer_function(CHolyStonedtor_CHolyStone82_wrapper),
                (LPVOID)cast_pointer_function((void(CHolyStone::*)())&CHolyStone::dtor_CHolyStone)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
