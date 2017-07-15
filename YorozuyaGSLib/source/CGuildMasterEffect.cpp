#include <CGuildMasterEffect.hpp>


START_ATF_NAMESPACE
    CGuildMasterEffect::CGuildMasterEffect()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildMasterEffect*);
        (org_ptr(0x1403f46e0L))(this);
    };
    void CGuildMasterEffect::ctor_CGuildMasterEffect()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildMasterEffect*);
        (org_ptr(0x1403f46e0L))(this);
    };
    struct CGuildMasterEffect* CGuildMasterEffect::GetInstance()
    {
        using org_ptr = struct CGuildMasterEffect* (WINAPIV*)();
        return (org_ptr(0x140078f80L))();
    };
    void CGuildMasterEffect::adjust_effect(struct CPlayer* pP, char byGrade, bool bAdd)
    {
        using org_ptr = void (WINAPIV*)(struct CGuildMasterEffect*, struct CPlayer*, char, bool);
        (org_ptr(0x1403f4b10L))(this, pP, byGrade, bAdd);
    };
    bool CGuildMasterEffect::change_player(struct CPlayer* pP, char byBeforeGrade, char byAfterGrade)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildMasterEffect*, struct CPlayer*, char, char);
        return (org_ptr(0x1403f4a00L))(this, pP, byBeforeGrade, byAfterGrade);
    };
    char CGuildMasterEffect::get_AdjustableGrade()
    {
        using org_ptr = char (WINAPIV*)(struct CGuildMasterEffect*);
        return (org_ptr(0x1400ef310L))(this);
    };
    char CGuildMasterEffect::get_AttactValueByGrade(char byGrade)
    {
        using org_ptr = char (WINAPIV*)(struct CGuildMasterEffect*, char);
        return (org_ptr(0x1403f4bd0L))(this, byGrade);
    };
    char CGuildMasterEffect::get_DefenceValueByGrade(char byGrade)
    {
        using org_ptr = char (WINAPIV*)(struct CGuildMasterEffect*, char);
        return (org_ptr(0x1403f4c60L))(this, byGrade);
    };
    bool CGuildMasterEffect::in_player(struct CPlayer* pP, char byGrade)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildMasterEffect*, struct CPlayer*, char);
        return (org_ptr(0x1403f4850L))(this, pP, byGrade);
    };
    bool CGuildMasterEffect::init()
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildMasterEffect*);
        return (org_ptr(0x1403f4720L))(this);
    };
    bool CGuildMasterEffect::out_player(struct CPlayer* pP, char byGrade)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildMasterEffect*, struct CPlayer*, char);
        return (org_ptr(0x1403f4940L))(this, pP, byGrade);
    };
    void CGuildMasterEffect::show_to_all(struct CPlayer* pP, char byBeforeGrade, char byGrade, char byState)
    {
        using org_ptr = void (WINAPIV*)(struct CGuildMasterEffect*, struct CPlayer*, char, char, char);
        (org_ptr(0x1403f4cf0L))(this, pP, byBeforeGrade, byGrade, byState);
    };
END_ATF_NAMESPACE
