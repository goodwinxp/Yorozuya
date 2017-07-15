#include <CHolyKeeperDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CHolyKeeperctor_CHolyKeeper2_ptr CHolyKeeperctor_CHolyKeeper2_next(nullptr);
        Info::CHolyKeeperctor_CHolyKeeper2_clbk CHolyKeeperctor_CHolyKeeper2_user(nullptr);
        
        Info::CHolyKeeperCheckAttack4_ptr CHolyKeeperCheckAttack4_next(nullptr);
        Info::CHolyKeeperCheckAttack4_clbk CHolyKeeperCheckAttack4_user(nullptr);
        
        Info::CHolyKeeperCheckCurPos6_ptr CHolyKeeperCheckCurPos6_next(nullptr);
        Info::CHolyKeeperCheckCurPos6_clbk CHolyKeeperCheckCurPos6_user(nullptr);
        
        Info::CHolyKeeperCheckExit8_ptr CHolyKeeperCheckExit8_next(nullptr);
        Info::CHolyKeeperCheckExit8_clbk CHolyKeeperCheckExit8_user(nullptr);
        
        Info::CHolyKeeperCheckMove10_ptr CHolyKeeperCheckMove10_next(nullptr);
        Info::CHolyKeeperCheckMove10_clbk CHolyKeeperCheckMove10_user(nullptr);
        
        Info::CHolyKeeperCreate12_ptr CHolyKeeperCreate12_next(nullptr);
        Info::CHolyKeeperCreate12_clbk CHolyKeeperCreate12_user(nullptr);
        
        Info::CHolyKeeperDestroy14_ptr CHolyKeeperDestroy14_next(nullptr);
        Info::CHolyKeeperDestroy14_clbk CHolyKeeperDestroy14_user(nullptr);
        
        Info::CHolyKeeperDropItem16_ptr CHolyKeeperDropItem16_next(nullptr);
        Info::CHolyKeeperDropItem16_clbk CHolyKeeperDropItem16_user(nullptr);
        
        Info::CHolyKeeperExit18_ptr CHolyKeeperExit18_next(nullptr);
        Info::CHolyKeeperExit18_clbk CHolyKeeperExit18_user(nullptr);
        
        Info::CHolyKeeperGetAttackDP20_ptr CHolyKeeperGetAttackDP20_next(nullptr);
        Info::CHolyKeeperGetAttackDP20_clbk CHolyKeeperGetAttackDP20_user(nullptr);
        
        Info::CHolyKeeperGetAttackPivot22_ptr CHolyKeeperGetAttackPivot22_next(nullptr);
        Info::CHolyKeeperGetAttackPivot22_clbk CHolyKeeperGetAttackPivot22_user(nullptr);
        
        Info::CHolyKeeperGetAttackRange24_ptr CHolyKeeperGetAttackRange24_next(nullptr);
        Info::CHolyKeeperGetAttackRange24_clbk CHolyKeeperGetAttackRange24_user(nullptr);
        
        Info::CHolyKeeperGetDefFC26_ptr CHolyKeeperGetDefFC26_next(nullptr);
        Info::CHolyKeeperGetDefFC26_clbk CHolyKeeperGetDefFC26_user(nullptr);
        
        Info::CHolyKeeperGetDefFacing28_ptr CHolyKeeperGetDefFacing28_next(nullptr);
        Info::CHolyKeeperGetDefFacing28_clbk CHolyKeeperGetDefFacing28_user(nullptr);
        
        Info::CHolyKeeperGetDefGap30_ptr CHolyKeeperGetDefGap30_next(nullptr);
        Info::CHolyKeeperGetDefGap30_clbk CHolyKeeperGetDefGap30_user(nullptr);
        
        Info::CHolyKeeperGetDefSkill32_ptr CHolyKeeperGetDefSkill32_next(nullptr);
        Info::CHolyKeeperGetDefSkill32_clbk CHolyKeeperGetDefSkill32_user(nullptr);
        
        Info::CHolyKeeperGetFireTol34_ptr CHolyKeeperGetFireTol34_next(nullptr);
        Info::CHolyKeeperGetFireTol34_clbk CHolyKeeperGetFireTol34_user(nullptr);
        
        Info::CHolyKeeperGetGenAttackProb36_ptr CHolyKeeperGetGenAttackProb36_next(nullptr);
        Info::CHolyKeeperGetGenAttackProb36_clbk CHolyKeeperGetGenAttackProb36_user(nullptr);
        
        Info::CHolyKeeperGetHP38_ptr CHolyKeeperGetHP38_next(nullptr);
        Info::CHolyKeeperGetHP38_clbk CHolyKeeperGetHP38_user(nullptr);
        
        Info::CHolyKeeperGetLevel40_ptr CHolyKeeperGetLevel40_next(nullptr);
        Info::CHolyKeeperGetLevel40_clbk CHolyKeeperGetLevel40_user(nullptr);
        
        Info::CHolyKeeperGetMaxHP42_ptr CHolyKeeperGetMaxHP42_next(nullptr);
        Info::CHolyKeeperGetMaxHP42_clbk CHolyKeeperGetMaxHP42_user(nullptr);
        
        Info::CHolyKeeperGetObjName44_ptr CHolyKeeperGetObjName44_next(nullptr);
        Info::CHolyKeeperGetObjName44_clbk CHolyKeeperGetObjName44_user(nullptr);
        
        Info::CHolyKeeperGetObjRace46_ptr CHolyKeeperGetObjRace46_next(nullptr);
        Info::CHolyKeeperGetObjRace46_clbk CHolyKeeperGetObjRace46_user(nullptr);
        
        Info::CHolyKeeperGetSoilTol48_ptr CHolyKeeperGetSoilTol48_next(nullptr);
        Info::CHolyKeeperGetSoilTol48_clbk CHolyKeeperGetSoilTol48_user(nullptr);
        
        Info::CHolyKeeperGetWaterTol50_ptr CHolyKeeperGetWaterTol50_next(nullptr);
        Info::CHolyKeeperGetWaterTol50_clbk CHolyKeeperGetWaterTol50_user(nullptr);
        
        Info::CHolyKeeperGetWeaponAdjust52_ptr CHolyKeeperGetWeaponAdjust52_next(nullptr);
        Info::CHolyKeeperGetWeaponAdjust52_clbk CHolyKeeperGetWeaponAdjust52_user(nullptr);
        
        Info::CHolyKeeperGetWeaponClass54_ptr CHolyKeeperGetWeaponClass54_next(nullptr);
        Info::CHolyKeeperGetWeaponClass54_clbk CHolyKeeperGetWeaponClass54_user(nullptr);
        
        Info::CHolyKeeperGetWidth56_ptr CHolyKeeperGetWidth56_next(nullptr);
        Info::CHolyKeeperGetWidth56_clbk CHolyKeeperGetWidth56_user(nullptr);
        
        Info::CHolyKeeperGetWindTol58_ptr CHolyKeeperGetWindTol58_next(nullptr);
        Info::CHolyKeeperGetWindTol58_clbk CHolyKeeperGetWindTol58_user(nullptr);
        
        Info::CHolyKeeperInit60_ptr CHolyKeeperInit60_next(nullptr);
        Info::CHolyKeeperInit60_clbk CHolyKeeperInit60_user(nullptr);
        
        Info::CHolyKeeperIsBeAttackedAble62_ptr CHolyKeeperIsBeAttackedAble62_next(nullptr);
        Info::CHolyKeeperIsBeAttackedAble62_clbk CHolyKeeperIsBeAttackedAble62_user(nullptr);
        
        Info::CHolyKeeperIsBeDamagedAble64_ptr CHolyKeeperIsBeDamagedAble64_next(nullptr);
        Info::CHolyKeeperIsBeDamagedAble64_clbk CHolyKeeperIsBeDamagedAble64_user(nullptr);
        
        Info::CHolyKeeperLoop66_ptr CHolyKeeperLoop66_next(nullptr);
        Info::CHolyKeeperLoop66_clbk CHolyKeeperLoop66_user(nullptr);
        
        Info::CHolyKeeperOutOfSec68_ptr CHolyKeeperOutOfSec68_next(nullptr);
        Info::CHolyKeeperOutOfSec68_clbk CHolyKeeperOutOfSec68_user(nullptr);
        
        Info::CHolyKeeperSearchAttackTarget70_ptr CHolyKeeperSearchAttackTarget70_next(nullptr);
        Info::CHolyKeeperSearchAttackTarget70_clbk CHolyKeeperSearchAttackTarget70_user(nullptr);
        
        Info::CHolyKeeperSearchMoveTarget72_ptr CHolyKeeperSearchMoveTarget72_next(nullptr);
        Info::CHolyKeeperSearchMoveTarget72_clbk CHolyKeeperSearchMoveTarget72_user(nullptr);
        
        Info::CHolyKeeperSendMsg_Attack74_ptr CHolyKeeperSendMsg_Attack74_next(nullptr);
        Info::CHolyKeeperSendMsg_Attack74_clbk CHolyKeeperSendMsg_Attack74_user(nullptr);
        
        Info::CHolyKeeperSendMsg_Create76_ptr CHolyKeeperSendMsg_Create76_next(nullptr);
        Info::CHolyKeeperSendMsg_Create76_clbk CHolyKeeperSendMsg_Create76_user(nullptr);
        
        Info::CHolyKeeperSendMsg_Destroy78_ptr CHolyKeeperSendMsg_Destroy78_next(nullptr);
        Info::CHolyKeeperSendMsg_Destroy78_clbk CHolyKeeperSendMsg_Destroy78_user(nullptr);
        
        Info::CHolyKeeperSendMsg_FixPosition80_ptr CHolyKeeperSendMsg_FixPosition80_next(nullptr);
        Info::CHolyKeeperSendMsg_FixPosition80_clbk CHolyKeeperSendMsg_FixPosition80_user(nullptr);
        
        Info::CHolyKeeperSendMsg_Move82_ptr CHolyKeeperSendMsg_Move82_next(nullptr);
        Info::CHolyKeeperSendMsg_Move82_clbk CHolyKeeperSendMsg_Move82_user(nullptr);
        
        Info::CHolyKeeperSendMsg_RealMovePoint84_ptr CHolyKeeperSendMsg_RealMovePoint84_next(nullptr);
        Info::CHolyKeeperSendMsg_RealMovePoint84_clbk CHolyKeeperSendMsg_RealMovePoint84_user(nullptr);
        
        Info::CHolyKeeperSetDamage86_ptr CHolyKeeperSetDamage86_next(nullptr);
        Info::CHolyKeeperSetDamage86_clbk CHolyKeeperSetDamage86_user(nullptr);
        
        Info::CHolyKeeperSetDamageAbleState88_ptr CHolyKeeperSetDamageAbleState88_next(nullptr);
        Info::CHolyKeeperSetDamageAbleState88_clbk CHolyKeeperSetDamageAbleState88_user(nullptr);
        
        Info::CHolyKeeperSetDropItem90_ptr CHolyKeeperSetDropItem90_next(nullptr);
        Info::CHolyKeeperSetDropItem90_clbk CHolyKeeperSetDropItem90_user(nullptr);
        
        Info::CHolyKeeperSetHP92_ptr CHolyKeeperSetHP92_next(nullptr);
        Info::CHolyKeeperSetHP92_clbk CHolyKeeperSetHP92_user(nullptr);
        
        Info::CHolyKeeperSetMaxHP94_ptr CHolyKeeperSetMaxHP94_next(nullptr);
        Info::CHolyKeeperSetMaxHP94_clbk CHolyKeeperSetMaxHP94_user(nullptr);
        
        Info::CHolyKeeperSetStateChaos96_ptr CHolyKeeperSetStateChaos96_next(nullptr);
        Info::CHolyKeeperSetStateChaos96_clbk CHolyKeeperSetStateChaos96_user(nullptr);
        
        
        Info::CHolyKeeperdtor_CHolyKeeper102_ptr CHolyKeeperdtor_CHolyKeeper102_next(nullptr);
        Info::CHolyKeeperdtor_CHolyKeeper102_clbk CHolyKeeperdtor_CHolyKeeper102_user(nullptr);
        
        
        void CHolyKeeperctor_CHolyKeeper2_wrapper(struct CHolyKeeper* _this)
        {
           CHolyKeeperctor_CHolyKeeper2_user(_this, CHolyKeeperctor_CHolyKeeper2_next);
        };
        bool CHolyKeeperCheckAttack4_wrapper(struct CHolyKeeper* _this)
        {
           return CHolyKeeperCheckAttack4_user(_this, CHolyKeeperCheckAttack4_next);
        };
        void CHolyKeeperCheckCurPos6_wrapper(struct CHolyKeeper* _this)
        {
           CHolyKeeperCheckCurPos6_user(_this, CHolyKeeperCheckCurPos6_next);
        };
        void CHolyKeeperCheckExit8_wrapper(struct CHolyKeeper* _this)
        {
           CHolyKeeperCheckExit8_user(_this, CHolyKeeperCheckExit8_next);
        };
        void CHolyKeeperCheckMove10_wrapper(struct CHolyKeeper* _this)
        {
           CHolyKeeperCheckMove10_user(_this, CHolyKeeperCheckMove10_next);
        };
        bool CHolyKeeperCreate12_wrapper(struct CHolyKeeper* _this, struct _keeper_create_setdata* pData, int nCreateType)
        {
           return CHolyKeeperCreate12_user(_this, pData, nCreateType, CHolyKeeperCreate12_next);
        };
        bool CHolyKeeperDestroy14_wrapper(struct CHolyKeeper* _this, char byDestroyCode, struct CCharacter* pAtter)
        {
           return CHolyKeeperDestroy14_user(_this, byDestroyCode, pAtter, CHolyKeeperDestroy14_next);
        };
        void CHolyKeeperDropItem16_wrapper(struct CHolyKeeper* _this)
        {
           CHolyKeeperDropItem16_user(_this, CHolyKeeperDropItem16_next);
        };
        bool CHolyKeeperExit18_wrapper(struct CHolyKeeper* _this)
        {
           return CHolyKeeperExit18_user(_this, CHolyKeeperExit18_next);
        };
        int CHolyKeeperGetAttackDP20_wrapper(struct CHolyKeeper* _this)
        {
           return CHolyKeeperGetAttackDP20_user(_this, CHolyKeeperGetAttackDP20_next);
        };
        float* CHolyKeeperGetAttackPivot22_wrapper(struct CHolyKeeper* _this)
        {
           return CHolyKeeperGetAttackPivot22_user(_this, CHolyKeeperGetAttackPivot22_next);
        };
        float CHolyKeeperGetAttackRange24_wrapper(struct CHolyKeeper* _this)
        {
           return CHolyKeeperGetAttackRange24_user(_this, CHolyKeeperGetAttackRange24_next);
        };
        int CHolyKeeperGetDefFC26_wrapper(struct CHolyKeeper* _this, int nAttactPart, struct CCharacter* pAttChar, int* pnConvertPart)
        {
           return CHolyKeeperGetDefFC26_user(_this, nAttactPart, pAttChar, pnConvertPart, CHolyKeeperGetDefFC26_next);
        };
        float CHolyKeeperGetDefFacing28_wrapper(struct CHolyKeeper* _this, int nPart)
        {
           return CHolyKeeperGetDefFacing28_user(_this, nPart, CHolyKeeperGetDefFacing28_next);
        };
        float CHolyKeeperGetDefGap30_wrapper(struct CHolyKeeper* _this, int nPart)
        {
           return CHolyKeeperGetDefGap30_user(_this, nPart, CHolyKeeperGetDefGap30_next);
        };
        int CHolyKeeperGetDefSkill32_wrapper(struct CHolyKeeper* _this, bool bBackAttack)
        {
           return CHolyKeeperGetDefSkill32_user(_this, bBackAttack, CHolyKeeperGetDefSkill32_next);
        };
        int CHolyKeeperGetFireTol34_wrapper(struct CHolyKeeper* _this)
        {
           return CHolyKeeperGetFireTol34_user(_this, CHolyKeeperGetFireTol34_next);
        };
        int CHolyKeeperGetGenAttackProb36_wrapper(struct CHolyKeeper* _this, struct CCharacter* pDst, int nPart, bool bBackAttack)
        {
           return CHolyKeeperGetGenAttackProb36_user(_this, pDst, nPart, bBackAttack, CHolyKeeperGetGenAttackProb36_next);
        };
        int CHolyKeeperGetHP38_wrapper(struct CHolyKeeper* _this)
        {
           return CHolyKeeperGetHP38_user(_this, CHolyKeeperGetHP38_next);
        };
        int CHolyKeeperGetLevel40_wrapper(struct CHolyKeeper* _this)
        {
           return CHolyKeeperGetLevel40_user(_this, CHolyKeeperGetLevel40_next);
        };
        int CHolyKeeperGetMaxHP42_wrapper(struct CHolyKeeper* _this)
        {
           return CHolyKeeperGetMaxHP42_user(_this, CHolyKeeperGetMaxHP42_next);
        };
        char* CHolyKeeperGetObjName44_wrapper(struct CHolyKeeper* _this)
        {
           return CHolyKeeperGetObjName44_user(_this, CHolyKeeperGetObjName44_next);
        };
        int CHolyKeeperGetObjRace46_wrapper(struct CHolyKeeper* _this)
        {
           return CHolyKeeperGetObjRace46_user(_this, CHolyKeeperGetObjRace46_next);
        };
        int CHolyKeeperGetSoilTol48_wrapper(struct CHolyKeeper* _this)
        {
           return CHolyKeeperGetSoilTol48_user(_this, CHolyKeeperGetSoilTol48_next);
        };
        int CHolyKeeperGetWaterTol50_wrapper(struct CHolyKeeper* _this)
        {
           return CHolyKeeperGetWaterTol50_user(_this, CHolyKeeperGetWaterTol50_next);
        };
        float CHolyKeeperGetWeaponAdjust52_wrapper(struct CHolyKeeper* _this)
        {
           return CHolyKeeperGetWeaponAdjust52_user(_this, CHolyKeeperGetWeaponAdjust52_next);
        };
        int CHolyKeeperGetWeaponClass54_wrapper(struct CHolyKeeper* _this)
        {
           return CHolyKeeperGetWeaponClass54_user(_this, CHolyKeeperGetWeaponClass54_next);
        };
        float CHolyKeeperGetWidth56_wrapper(struct CHolyKeeper* _this)
        {
           return CHolyKeeperGetWidth56_user(_this, CHolyKeeperGetWidth56_next);
        };
        int CHolyKeeperGetWindTol58_wrapper(struct CHolyKeeper* _this)
        {
           return CHolyKeeperGetWindTol58_user(_this, CHolyKeeperGetWindTol58_next);
        };
        bool CHolyKeeperInit60_wrapper(struct CHolyKeeper* _this, struct _object_id* pID)
        {
           return CHolyKeeperInit60_user(_this, pID, CHolyKeeperInit60_next);
        };
        bool CHolyKeeperIsBeAttackedAble62_wrapper(struct CHolyKeeper* _this, bool bFirst)
        {
           return CHolyKeeperIsBeAttackedAble62_user(_this, bFirst, CHolyKeeperIsBeAttackedAble62_next);
        };
        bool CHolyKeeperIsBeDamagedAble64_wrapper(struct CHolyKeeper* _this, struct CCharacter* pAtter)
        {
           return CHolyKeeperIsBeDamagedAble64_user(_this, pAtter, CHolyKeeperIsBeDamagedAble64_next);
        };
        void CHolyKeeperLoop66_wrapper(struct CHolyKeeper* _this)
        {
           CHolyKeeperLoop66_user(_this, CHolyKeeperLoop66_next);
        };
        void CHolyKeeperOutOfSec68_wrapper(struct CHolyKeeper* _this)
        {
           CHolyKeeperOutOfSec68_user(_this, CHolyKeeperOutOfSec68_next);
        };
        struct CCharacter* CHolyKeeperSearchAttackTarget70_wrapper(struct CHolyKeeper* _this)
        {
           return CHolyKeeperSearchAttackTarget70_user(_this, CHolyKeeperSearchAttackTarget70_next);
        };
        struct CPlayer* CHolyKeeperSearchMoveTarget72_wrapper(struct CHolyKeeper* _this)
        {
           return CHolyKeeperSearchMoveTarget72_user(_this, CHolyKeeperSearchMoveTarget72_next);
        };
        void CHolyKeeperSendMsg_Attack74_wrapper(struct CHolyKeeper* _this)
        {
           CHolyKeeperSendMsg_Attack74_user(_this, CHolyKeeperSendMsg_Attack74_next);
        };
        void CHolyKeeperSendMsg_Create76_wrapper(struct CHolyKeeper* _this)
        {
           CHolyKeeperSendMsg_Create76_user(_this, CHolyKeeperSendMsg_Create76_next);
        };
        void CHolyKeeperSendMsg_Destroy78_wrapper(struct CHolyKeeper* _this, char byDesType)
        {
           CHolyKeeperSendMsg_Destroy78_user(_this, byDesType, CHolyKeeperSendMsg_Destroy78_next);
        };
        void CHolyKeeperSendMsg_FixPosition80_wrapper(struct CHolyKeeper* _this, int n)
        {
           CHolyKeeperSendMsg_FixPosition80_user(_this, n, CHolyKeeperSendMsg_FixPosition80_next);
        };
        void CHolyKeeperSendMsg_Move82_wrapper(struct CHolyKeeper* _this)
        {
           CHolyKeeperSendMsg_Move82_user(_this, CHolyKeeperSendMsg_Move82_next);
        };
        void CHolyKeeperSendMsg_RealMovePoint84_wrapper(struct CHolyKeeper* _this, int n)
        {
           CHolyKeeperSendMsg_RealMovePoint84_user(_this, n, CHolyKeeperSendMsg_RealMovePoint84_next);
        };
        int CHolyKeeperSetDamage86_wrapper(struct CHolyKeeper* _this, int nDam, struct CCharacter* pDst, int nDstLv, bool bCrt, int nAttackType, unsigned int dwAttackSerial, bool bJadeReturn)
        {
           return CHolyKeeperSetDamage86_user(_this, nDam, pDst, nDstLv, bCrt, nAttackType, dwAttackSerial, bJadeReturn, CHolyKeeperSetDamage86_next);
        };
        void CHolyKeeperSetDamageAbleState88_wrapper(struct CHolyKeeper* _this, bool bDamageAbState)
        {
           CHolyKeeperSetDamageAbleState88_user(_this, bDamageAbState, CHolyKeeperSetDamageAbleState88_next);
        };
        void CHolyKeeperSetDropItem90_wrapper(struct CHolyKeeper* _this)
        {
           CHolyKeeperSetDropItem90_user(_this, CHolyKeeperSetDropItem90_next);
        };
        void CHolyKeeperSetHP92_wrapper(struct CHolyKeeper* _this, int nHP)
        {
           CHolyKeeperSetHP92_user(_this, nHP, CHolyKeeperSetHP92_next);
        };
        void CHolyKeeperSetMaxHP94_wrapper(struct CHolyKeeper* _this, int nMaxHP)
        {
           CHolyKeeperSetMaxHP94_user(_this, nMaxHP, CHolyKeeperSetMaxHP94_next);
        };
        void CHolyKeeperSetStateChaos96_wrapper(struct CHolyKeeper* _this)
        {
           CHolyKeeperSetStateChaos96_user(_this, CHolyKeeperSetStateChaos96_next);
        };
        
        void CHolyKeeperdtor_CHolyKeeper102_wrapper(struct CHolyKeeper* _this)
        {
           CHolyKeeperdtor_CHolyKeeper102_user(_this, CHolyKeeperdtor_CHolyKeeper102_next);
        };
        
        ::std::array<hook_record, 49> CHolyKeeper_functions = 
        {
            _hook_record {
                (LPVOID)0x140132b00L,
                (LPVOID *)&CHolyKeeperctor_CHolyKeeper2_user,
                (LPVOID *)&CHolyKeeperctor_CHolyKeeper2_next,
                (LPVOID)cast_pointer_function(CHolyKeeperctor_CHolyKeeper2_wrapper),
                (LPVOID)cast_pointer_function((void(CHolyKeeper::*)())&CHolyKeeper::ctor_CHolyKeeper)
            },
            _hook_record {
                (LPVOID)0x1401338d0L,
                (LPVOID *)&CHolyKeeperCheckAttack4_user,
                (LPVOID *)&CHolyKeeperCheckAttack4_next,
                (LPVOID)cast_pointer_function(CHolyKeeperCheckAttack4_wrapper),
                (LPVOID)cast_pointer_function((bool(CHolyKeeper::*)())&CHolyKeeper::CheckAttack)
            },
            _hook_record {
                (LPVOID)0x140133cc0L,
                (LPVOID *)&CHolyKeeperCheckCurPos6_user,
                (LPVOID *)&CHolyKeeperCheckCurPos6_next,
                (LPVOID)cast_pointer_function(CHolyKeeperCheckCurPos6_wrapper),
                (LPVOID)cast_pointer_function((void(CHolyKeeper::*)())&CHolyKeeper::CheckCurPos)
            },
            _hook_record {
                (LPVOID)0x140133bf0L,
                (LPVOID *)&CHolyKeeperCheckExit8_user,
                (LPVOID *)&CHolyKeeperCheckExit8_next,
                (LPVOID)cast_pointer_function(CHolyKeeperCheckExit8_wrapper),
                (LPVOID)cast_pointer_function((void(CHolyKeeper::*)())&CHolyKeeper::CheckExit)
            },
            _hook_record {
                (LPVOID)0x140133470L,
                (LPVOID *)&CHolyKeeperCheckMove10_user,
                (LPVOID *)&CHolyKeeperCheckMove10_next,
                (LPVOID)cast_pointer_function(CHolyKeeperCheckMove10_wrapper),
                (LPVOID)cast_pointer_function((void(CHolyKeeper::*)())&CHolyKeeper::CheckMove)
            },
            _hook_record {
                (LPVOID)0x140132e20L,
                (LPVOID *)&CHolyKeeperCreate12_user,
                (LPVOID *)&CHolyKeeperCreate12_next,
                (LPVOID)cast_pointer_function(CHolyKeeperCreate12_wrapper),
                (LPVOID)cast_pointer_function((bool(CHolyKeeper::*)(struct _keeper_create_setdata*, int))&CHolyKeeper::Create)
            },
            _hook_record {
                (LPVOID)0x1401332e0L,
                (LPVOID *)&CHolyKeeperDestroy14_user,
                (LPVOID *)&CHolyKeeperDestroy14_next,
                (LPVOID)cast_pointer_function(CHolyKeeperDestroy14_wrapper),
                (LPVOID)cast_pointer_function((bool(CHolyKeeper::*)(char, struct CCharacter*))&CHolyKeeper::Destroy)
            },
            _hook_record {
                (LPVOID)0x140135540L,
                (LPVOID *)&CHolyKeeperDropItem16_user,
                (LPVOID *)&CHolyKeeperDropItem16_next,
                (LPVOID)cast_pointer_function(CHolyKeeperDropItem16_wrapper),
                (LPVOID)cast_pointer_function((void(CHolyKeeper::*)())&CHolyKeeper::DropItem)
            },
            _hook_record {
                (LPVOID)0x1401333d0L,
                (LPVOID *)&CHolyKeeperExit18_user,
                (LPVOID *)&CHolyKeeperExit18_next,
                (LPVOID)cast_pointer_function(CHolyKeeperExit18_wrapper),
                (LPVOID)cast_pointer_function((bool(CHolyKeeper::*)())&CHolyKeeper::Exit)
            },
            _hook_record {
                (LPVOID)0x140136b30L,
                (LPVOID *)&CHolyKeeperGetAttackDP20_user,
                (LPVOID *)&CHolyKeeperGetAttackDP20_next,
                (LPVOID)cast_pointer_function(CHolyKeeperGetAttackDP20_wrapper),
                (LPVOID)cast_pointer_function((int(CHolyKeeper::*)())&CHolyKeeper::GetAttackDP)
            },
            _hook_record {
                (LPVOID)0x140133e40L,
                (LPVOID *)&CHolyKeeperGetAttackPivot22_user,
                (LPVOID *)&CHolyKeeperGetAttackPivot22_next,
                (LPVOID)cast_pointer_function(CHolyKeeperGetAttackPivot22_wrapper),
                (LPVOID)cast_pointer_function((float*(CHolyKeeper::*)())&CHolyKeeper::GetAttackPivot)
            },
            _hook_record {
                (LPVOID)0x140136880L,
                (LPVOID *)&CHolyKeeperGetAttackRange24_user,
                (LPVOID *)&CHolyKeeperGetAttackRange24_next,
                (LPVOID)cast_pointer_function(CHolyKeeperGetAttackRange24_wrapper),
                (LPVOID)cast_pointer_function((float(CHolyKeeper::*)())&CHolyKeeper::GetAttackRange)
            },
            _hook_record {
                (LPVOID)0x140134ac0L,
                (LPVOID *)&CHolyKeeperGetDefFC26_user,
                (LPVOID *)&CHolyKeeperGetDefFC26_next,
                (LPVOID)cast_pointer_function(CHolyKeeperGetDefFC26_wrapper),
                (LPVOID)cast_pointer_function((int(CHolyKeeper::*)(int, struct CCharacter*, int*))&CHolyKeeper::GetDefFC)
            },
            _hook_record {
                (LPVOID)0x140136a50L,
                (LPVOID *)&CHolyKeeperGetDefFacing28_user,
                (LPVOID *)&CHolyKeeperGetDefFacing28_next,
                (LPVOID)cast_pointer_function(CHolyKeeperGetDefFacing28_wrapper),
                (LPVOID)cast_pointer_function((float(CHolyKeeper::*)(int))&CHolyKeeper::GetDefFacing)
            },
            _hook_record {
                (LPVOID)0x1401369f0L,
                (LPVOID *)&CHolyKeeperGetDefGap30_user,
                (LPVOID *)&CHolyKeeperGetDefGap30_next,
                (LPVOID)cast_pointer_function(CHolyKeeperGetDefGap30_wrapper),
                (LPVOID)cast_pointer_function((float(CHolyKeeper::*)(int))&CHolyKeeper::GetDefGap)
            },
            _hook_record {
                (LPVOID)0x140136900L,
                (LPVOID *)&CHolyKeeperGetDefSkill32_user,
                (LPVOID *)&CHolyKeeperGetDefSkill32_next,
                (LPVOID)cast_pointer_function(CHolyKeeperGetDefSkill32_wrapper),
                (LPVOID)cast_pointer_function((int(CHolyKeeper::*)(bool))&CHolyKeeper::GetDefSkill)
            },
            _hook_record {
                (LPVOID)0x140136930L,
                (LPVOID *)&CHolyKeeperGetFireTol34_user,
                (LPVOID *)&CHolyKeeperGetFireTol34_next,
                (LPVOID)cast_pointer_function(CHolyKeeperGetFireTol34_wrapper),
                (LPVOID)cast_pointer_function((int(CHolyKeeper::*)())&CHolyKeeper::GetFireTol)
            },
            _hook_record {
                (LPVOID)0x140134b40L,
                (LPVOID *)&CHolyKeeperGetGenAttackProb36_user,
                (LPVOID *)&CHolyKeeperGetGenAttackProb36_next,
                (LPVOID)cast_pointer_function(CHolyKeeperGetGenAttackProb36_wrapper),
                (LPVOID)cast_pointer_function((int(CHolyKeeper::*)(struct CCharacter*, int, bool))&CHolyKeeper::GetGenAttackProb)
            },
            _hook_record {
                (LPVOID)0x140136780L,
                (LPVOID *)&CHolyKeeperGetHP38_user,
                (LPVOID *)&CHolyKeeperGetHP38_next,
                (LPVOID)cast_pointer_function(CHolyKeeperGetHP38_wrapper),
                (LPVOID)cast_pointer_function((int(CHolyKeeper::*)())&CHolyKeeper::GetHP)
            },
            _hook_record {
                (LPVOID)0x1401368d0L,
                (LPVOID *)&CHolyKeeperGetLevel40_user,
                (LPVOID *)&CHolyKeeperGetLevel40_next,
                (LPVOID)cast_pointer_function(CHolyKeeperGetLevel40_wrapper),
                (LPVOID)cast_pointer_function((int(CHolyKeeper::*)())&CHolyKeeper::GetLevel)
            },
            _hook_record {
                (LPVOID)0x1401367a0L,
                (LPVOID *)&CHolyKeeperGetMaxHP42_user,
                (LPVOID *)&CHolyKeeperGetMaxHP42_next,
                (LPVOID)cast_pointer_function(CHolyKeeperGetMaxHP42_wrapper),
                (LPVOID)cast_pointer_function((int(CHolyKeeper::*)())&CHolyKeeper::GetMaxHP)
            },
            _hook_record {
                (LPVOID)0x140134c80L,
                (LPVOID *)&CHolyKeeperGetObjName44_user,
                (LPVOID *)&CHolyKeeperGetObjName44_next,
                (LPVOID)cast_pointer_function(CHolyKeeperGetObjName44_wrapper),
                (LPVOID)cast_pointer_function((char*(CHolyKeeper::*)())&CHolyKeeper::GetObjName)
            },
            _hook_record {
                (LPVOID)0x140136b50L,
                (LPVOID *)&CHolyKeeperGetObjRace46_user,
                (LPVOID *)&CHolyKeeperGetObjRace46_next,
                (LPVOID)cast_pointer_function(CHolyKeeperGetObjRace46_wrapper),
                (LPVOID)cast_pointer_function((int(CHolyKeeper::*)())&CHolyKeeper::GetObjRace)
            },
            _hook_record {
                (LPVOID)0x140136990L,
                (LPVOID *)&CHolyKeeperGetSoilTol48_user,
                (LPVOID *)&CHolyKeeperGetSoilTol48_next,
                (LPVOID)cast_pointer_function(CHolyKeeperGetSoilTol48_wrapper),
                (LPVOID)cast_pointer_function((int(CHolyKeeper::*)())&CHolyKeeper::GetSoilTol)
            },
            _hook_record {
                (LPVOID)0x140136960L,
                (LPVOID *)&CHolyKeeperGetWaterTol50_user,
                (LPVOID *)&CHolyKeeperGetWaterTol50_next,
                (LPVOID)cast_pointer_function(CHolyKeeperGetWaterTol50_wrapper),
                (LPVOID)cast_pointer_function((int(CHolyKeeper::*)())&CHolyKeeper::GetWaterTol)
            },
            _hook_record {
                (LPVOID)0x140136ab0L,
                (LPVOID *)&CHolyKeeperGetWeaponAdjust52_user,
                (LPVOID *)&CHolyKeeperGetWeaponAdjust52_next,
                (LPVOID)cast_pointer_function(CHolyKeeperGetWeaponAdjust52_wrapper),
                (LPVOID)cast_pointer_function((float(CHolyKeeper::*)())&CHolyKeeper::GetWeaponAdjust)
            },
            _hook_record {
                (LPVOID)0x140136b20L,
                (LPVOID *)&CHolyKeeperGetWeaponClass54_user,
                (LPVOID *)&CHolyKeeperGetWeaponClass54_next,
                (LPVOID)cast_pointer_function(CHolyKeeperGetWeaponClass54_wrapper),
                (LPVOID)cast_pointer_function((int(CHolyKeeper::*)())&CHolyKeeper::GetWeaponClass)
            },
            _hook_record {
                (LPVOID)0x140136830L,
                (LPVOID *)&CHolyKeeperGetWidth56_user,
                (LPVOID *)&CHolyKeeperGetWidth56_next,
                (LPVOID)cast_pointer_function(CHolyKeeperGetWidth56_wrapper),
                (LPVOID)cast_pointer_function((float(CHolyKeeper::*)())&CHolyKeeper::GetWidth)
            },
            _hook_record {
                (LPVOID)0x1401369c0L,
                (LPVOID *)&CHolyKeeperGetWindTol58_user,
                (LPVOID *)&CHolyKeeperGetWindTol58_next,
                (LPVOID)cast_pointer_function(CHolyKeeperGetWindTol58_wrapper),
                (LPVOID)cast_pointer_function((int(CHolyKeeper::*)())&CHolyKeeper::GetWindTol)
            },
            _hook_record {
                (LPVOID)0x140132c90L,
                (LPVOID *)&CHolyKeeperInit60_user,
                (LPVOID *)&CHolyKeeperInit60_next,
                (LPVOID)cast_pointer_function(CHolyKeeperInit60_wrapper),
                (LPVOID)cast_pointer_function((bool(CHolyKeeper::*)(struct _object_id*))&CHolyKeeper::Init)
            },
            _hook_record {
                (LPVOID)0x140136b00L,
                (LPVOID *)&CHolyKeeperIsBeAttackedAble62_user,
                (LPVOID *)&CHolyKeeperIsBeAttackedAble62_next,
                (LPVOID)cast_pointer_function(CHolyKeeperIsBeAttackedAble62_wrapper),
                (LPVOID)cast_pointer_function((bool(CHolyKeeper::*)(bool))&CHolyKeeper::IsBeAttackedAble)
            },
            _hook_record {
                (LPVOID)0x140133d90L,
                (LPVOID *)&CHolyKeeperIsBeDamagedAble64_user,
                (LPVOID *)&CHolyKeeperIsBeDamagedAble64_next,
                (LPVOID)cast_pointer_function(CHolyKeeperIsBeDamagedAble64_wrapper),
                (LPVOID)cast_pointer_function((bool(CHolyKeeper::*)(struct CCharacter*))&CHolyKeeper::IsBeDamagedAble)
            },
            _hook_record {
                (LPVOID)0x140134920L,
                (LPVOID *)&CHolyKeeperLoop66_user,
                (LPVOID *)&CHolyKeeperLoop66_next,
                (LPVOID)cast_pointer_function(CHolyKeeperLoop66_wrapper),
                (LPVOID)cast_pointer_function((void(CHolyKeeper::*)())&CHolyKeeper::Loop)
            },
            _hook_record {
                (LPVOID)0x140136730L,
                (LPVOID *)&CHolyKeeperOutOfSec68_user,
                (LPVOID *)&CHolyKeeperOutOfSec68_next,
                (LPVOID)cast_pointer_function(CHolyKeeperOutOfSec68_wrapper),
                (LPVOID)cast_pointer_function((void(CHolyKeeper::*)())&CHolyKeeper::OutOfSec)
            },
            _hook_record {
                (LPVOID)0x140133f70L,
                (LPVOID *)&CHolyKeeperSearchAttackTarget70_user,
                (LPVOID *)&CHolyKeeperSearchAttackTarget70_next,
                (LPVOID)cast_pointer_function(CHolyKeeperSearchAttackTarget70_wrapper),
                (LPVOID)cast_pointer_function((struct CCharacter*(CHolyKeeper::*)())&CHolyKeeper::SearchAttackTarget)
            },
            _hook_record {
                (LPVOID)0x140134660L,
                (LPVOID *)&CHolyKeeperSearchMoveTarget72_user,
                (LPVOID *)&CHolyKeeperSearchMoveTarget72_next,
                (LPVOID)cast_pointer_function(CHolyKeeperSearchMoveTarget72_wrapper),
                (LPVOID)cast_pointer_function((struct CPlayer*(CHolyKeeper::*)())&CHolyKeeper::SearchMoveTarget)
            },
            _hook_record {
                (LPVOID)0x140134ef0L,
                (LPVOID *)&CHolyKeeperSendMsg_Attack74_user,
                (LPVOID *)&CHolyKeeperSendMsg_Attack74_next,
                (LPVOID)cast_pointer_function(CHolyKeeperSendMsg_Attack74_wrapper),
                (LPVOID)cast_pointer_function((void(CHolyKeeper::*)())&CHolyKeeper::SendMsg_Attack)
            },
            _hook_record {
                (LPVOID)0x140134d70L,
                (LPVOID *)&CHolyKeeperSendMsg_Create76_user,
                (LPVOID *)&CHolyKeeperSendMsg_Create76_next,
                (LPVOID)cast_pointer_function(CHolyKeeperSendMsg_Create76_wrapper),
                (LPVOID)cast_pointer_function((void(CHolyKeeper::*)())&CHolyKeeper::SendMsg_Create)
            },
            _hook_record {
                (LPVOID)0x140134e60L,
                (LPVOID *)&CHolyKeeperSendMsg_Destroy78_user,
                (LPVOID *)&CHolyKeeperSendMsg_Destroy78_next,
                (LPVOID)cast_pointer_function(CHolyKeeperSendMsg_Destroy78_wrapper),
                (LPVOID)cast_pointer_function((void(CHolyKeeper::*)(char))&CHolyKeeper::SendMsg_Destroy)
            },
            _hook_record {
                (LPVOID)0x1401351d0L,
                (LPVOID *)&CHolyKeeperSendMsg_FixPosition80_user,
                (LPVOID *)&CHolyKeeperSendMsg_FixPosition80_next,
                (LPVOID)cast_pointer_function(CHolyKeeperSendMsg_FixPosition80_wrapper),
                (LPVOID)cast_pointer_function((void(CHolyKeeper::*)(int))&CHolyKeeper::SendMsg_FixPosition)
            },
            _hook_record {
                (LPVOID)0x1401350a0L,
                (LPVOID *)&CHolyKeeperSendMsg_Move82_user,
                (LPVOID *)&CHolyKeeperSendMsg_Move82_next,
                (LPVOID)cast_pointer_function(CHolyKeeperSendMsg_Move82_wrapper),
                (LPVOID)cast_pointer_function((void(CHolyKeeper::*)())&CHolyKeeper::SendMsg_Move)
            },
            _hook_record {
                (LPVOID)0x1401352d0L,
                (LPVOID *)&CHolyKeeperSendMsg_RealMovePoint84_user,
                (LPVOID *)&CHolyKeeperSendMsg_RealMovePoint84_next,
                (LPVOID)cast_pointer_function(CHolyKeeperSendMsg_RealMovePoint84_wrapper),
                (LPVOID)cast_pointer_function((void(CHolyKeeper::*)(int))&CHolyKeeper::SendMsg_RealMovePoint)
            },
            _hook_record {
                (LPVOID)0x1401349b0L,
                (LPVOID *)&CHolyKeeperSetDamage86_user,
                (LPVOID *)&CHolyKeeperSetDamage86_next,
                (LPVOID)cast_pointer_function(CHolyKeeperSetDamage86_wrapper),
                (LPVOID)cast_pointer_function((int(CHolyKeeper::*)(int, struct CCharacter*, int, bool, int, unsigned int, bool))&CHolyKeeper::SetDamage)
            },
            _hook_record {
                (LPVOID)0x140284770L,
                (LPVOID *)&CHolyKeeperSetDamageAbleState88_user,
                (LPVOID *)&CHolyKeeperSetDamageAbleState88_next,
                (LPVOID)cast_pointer_function(CHolyKeeperSetDamageAbleState88_wrapper),
                (LPVOID)cast_pointer_function((void(CHolyKeeper::*)(bool))&CHolyKeeper::SetDamageAbleState)
            },
            _hook_record {
                (LPVOID)0x1401353f0L,
                (LPVOID *)&CHolyKeeperSetDropItem90_user,
                (LPVOID *)&CHolyKeeperSetDropItem90_next,
                (LPVOID)cast_pointer_function(CHolyKeeperSetDropItem90_wrapper),
                (LPVOID)cast_pointer_function((void(CHolyKeeper::*)())&CHolyKeeper::SetDropItem)
            },
            _hook_record {
                (LPVOID)0x1401367d0L,
                (LPVOID *)&CHolyKeeperSetHP92_user,
                (LPVOID *)&CHolyKeeperSetHP92_next,
                (LPVOID)cast_pointer_function(CHolyKeeperSetHP92_wrapper),
                (LPVOID)cast_pointer_function((void(CHolyKeeper::*)(int))&CHolyKeeper::SetHP)
            },
            _hook_record {
                (LPVOID)0x140136800L,
                (LPVOID *)&CHolyKeeperSetMaxHP94_user,
                (LPVOID *)&CHolyKeeperSetMaxHP94_next,
                (LPVOID)cast_pointer_function(CHolyKeeperSetMaxHP94_wrapper),
                (LPVOID)cast_pointer_function((void(CHolyKeeper::*)(int))&CHolyKeeper::SetMaxHP)
            },
            _hook_record {
                (LPVOID)0x140133e00L,
                (LPVOID *)&CHolyKeeperSetStateChaos96_user,
                (LPVOID *)&CHolyKeeperSetStateChaos96_next,
                (LPVOID)cast_pointer_function(CHolyKeeperSetStateChaos96_wrapper),
                (LPVOID)cast_pointer_function((void(CHolyKeeper::*)())&CHolyKeeper::SetStateChaos)
            },
            _hook_record {
                (LPVOID)0x140132bc0L,
                (LPVOID *)&CHolyKeeperdtor_CHolyKeeper102_user,
                (LPVOID *)&CHolyKeeperdtor_CHolyKeeper102_next,
                (LPVOID)cast_pointer_function(CHolyKeeperdtor_CHolyKeeper102_wrapper),
                (LPVOID)cast_pointer_function((void(CHolyKeeper::*)())&CHolyKeeper::dtor_CHolyKeeper)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
