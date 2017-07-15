#include <_MASTERY_PARAM.hpp>


START_ATF_NAMESPACE
    bool _MASTERY_PARAM::AlterCumPerMast(char byClass, char byIndex, unsigned int dwAlterCum, unsigned int* pdwAfterCum)
    {
        using org_ptr = bool (WINAPIV*)(struct _MASTERY_PARAM*, char, char, unsigned int, unsigned int*);
        return (org_ptr(0x14007c770L))(this, byClass, byIndex, dwAlterCum, pdwAfterCum);
    };
    float _MASTERY_PARAM::GetAveForceMasteryPerClass(char byClass)
    {
        using org_ptr = float (WINAPIV*)(struct _MASTERY_PARAM*, char);
        return (org_ptr(0x14007d6f0L))(this, byClass);
    };
    float _MASTERY_PARAM::GetAveSkillMasteryPerClass(char byClass)
    {
        using org_ptr = float (WINAPIV*)(struct _MASTERY_PARAM*, char);
        return (org_ptr(0x14007d7a0L))(this, byClass);
    };
    int _MASTERY_PARAM::GetCumPerMast(char byCode, char byMast)
    {
        using org_ptr = int (WINAPIV*)(struct _MASTERY_PARAM*, char, char);
        return (org_ptr(0x1400349f0L))(this, byCode, byMast);
    };
    char _MASTERY_PARAM::GetEquipMastery(int nEquipMasteryCode)
    {
        using org_ptr = char (WINAPIV*)(struct _MASTERY_PARAM*, int);
        return (org_ptr(0x14007c510L))(this, nEquipMasteryCode);
    };
    int _MASTERY_PARAM::GetMasteryPerMast(char byCode, char byMast)
    {
        using org_ptr = int (WINAPIV*)(struct _MASTERY_PARAM*, char, char);
        return (org_ptr(0x140034a30L))(this, byCode, byMast);
    };
    int _MASTERY_PARAM::GetSkillLv(char bySkillIndex)
    {
        using org_ptr = int (WINAPIV*)(struct _MASTERY_PARAM*, char);
        return (org_ptr(0x140034a70L))(this, bySkillIndex);
    };
    bool _MASTERY_PARAM::Init(struct _STAT_DB_BASE* pStatBase, char byRaceCode)
    {
        using org_ptr = bool (WINAPIV*)(struct _MASTERY_PARAM*, struct _STAT_DB_BASE*, char);
        return (org_ptr(0x1400781d0L))(this, pStatBase, byRaceCode);
    };
    bool _MASTERY_PARAM::IsValidMasteryCode(char byCode, char byIndex)
    {
        using org_ptr = bool (WINAPIV*)(char, char);
        return (org_ptr(0x14028c930L))(byCode, byIndex);
    };
    void _MASTERY_PARAM::SetStaticMember(struct CRecordData* pSkillData, struct CRecordData* pForceData)
    {
        using org_ptr = void (WINAPIV*)(struct CRecordData*, struct CRecordData*);
        (org_ptr(0x140204dd0L))(pSkillData, pForceData);
    };
    void _MASTERY_PARAM::UpdateCumPerMast(char byClass, char byIndex, unsigned int dwNewCum)
    {
        using org_ptr = void (WINAPIV*)(struct _MASTERY_PARAM*, char, char, unsigned int);
        (org_ptr(0x14007afa0L))(this, byClass, byIndex, dwNewCum);
    };
    _MASTERY_PARAM::_MASTERY_PARAM()
    {
        using org_ptr = void (WINAPIV*)(struct _MASTERY_PARAM*);
        (org_ptr(0x140074580L))(this);
    };
    void _MASTERY_PARAM::ctor__MASTERY_PARAM()
    {
        using org_ptr = void (WINAPIV*)(struct _MASTERY_PARAM*);
        (org_ptr(0x140074580L))(this);
    };
END_ATF_NAMESPACE
