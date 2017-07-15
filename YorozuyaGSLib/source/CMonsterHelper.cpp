#include <CMonsterHelper.hpp>


START_ATF_NAMESPACE
    int CMonsterHelper::CheckPreAttackRangeTargetAbleCharacter(struct CMonster* pMon, struct CGameObject* pTarget)
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*, struct CGameObject*);
        return (org_ptr(0x140158430L))(pMon, pTarget);
    };
    float CMonsterHelper::GetAngle(float* mon, float* plr)
    {
        using org_ptr = float (WINAPIV*)(float*, float*);
        return (org_ptr(0x1401597a0L))(mon, plr);
    };
    void CMonsterHelper::GetDirection(float** cur, float** tar, float** out, float deg)
    {
        using org_ptr = void (WINAPIV*)(float**, float**, float**, float);
        (org_ptr(0x1401598e0L))(cur, tar, out, deg);
    };
    void CMonsterHelper::HierarcyHelpCast(struct CMonster* pMon)
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*);
        (org_ptr(0x14015a480L))(pMon);
    };
    int CMonsterHelper::IsInSector(float* chkpos, float* src, float* dest, float angle, float radius, float* pfDist)
    {
        using org_ptr = int (WINAPIV*)(float*, float*, float*, float, float, float*);
        return (org_ptr(0x140158160L))(chkpos, src, dest, angle, radius, pfDist);
    };
    unsigned int CMonsterHelper::SearchNearMonster(struct CMonster* pMon, struct _NEAR_DATA* NearChar, unsigned int dwArSize, int bTargetIgnore)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CMonster*, struct _NEAR_DATA*, unsigned int, int);
        return (org_ptr(0x140158de0L))(pMon, NearChar, dwArSize, bTargetIgnore);
    };
    struct CMonster* CMonsterHelper::SearchNearMonsterByDistance(struct CMonster* pMon, unsigned int dwDist)
    {
        using org_ptr = struct CMonster* (WINAPIV*)(struct CMonster*, unsigned int);
        return (org_ptr(0x140159540L))(pMon, dwDist);
    };
    struct CPlayer* CMonsterHelper::SearchNearPlayer(struct CMonster* pMon, int nType)
    {
        using org_ptr = struct CPlayer* (WINAPIV*)(struct CMonster*, int);
        return (org_ptr(0x140158540L))(pMon, nType);
    };
    int CMonsterHelper::SearchPatrolMovePos(struct CMonster* mon, float** NewTar)
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*, float**);
        return (org_ptr(0x140159f20L))(mon, NewTar);
    };
    int CMonsterHelper::SearchTargetMovePos_MovingTarget(struct CMonster* pMon, struct CCharacter* pTargetCharacter, float** tarPos)
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*, struct CCharacter*, float**);
        return (org_ptr(0x140159e50L))(pMon, pTargetCharacter, tarPos);
    };
    int CMonsterHelper::SearchTargetMovePos_StopTarget(struct CMonster* pMon, struct CCharacter* pTargetCharacter, float** tarPos)
    {
        using org_ptr = int (WINAPIV*)(struct CMonster*, struct CCharacter*, float**);
        return (org_ptr(0x1401599b0L))(pMon, pTargetCharacter, tarPos);
    };
    void CMonsterHelper::TransPort(struct CMonster* mon, float* tarPos)
    {
        using org_ptr = void (WINAPIV*)(struct CMonster*, float*);
        (org_ptr(0x14015a310L))(mon, tarPos);
    };
END_ATF_NAMESPACE
