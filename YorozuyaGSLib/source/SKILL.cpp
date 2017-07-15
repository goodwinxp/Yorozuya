#include <SKILL.hpp>


START_ATF_NAMESPACE
    int SKILL::GetDmg(float fDamRate)
    {
        using org_ptr = int (WINAPIV*)(struct SKILL*, float);
        return (org_ptr(0x14012d250L))(this, fDamRate);
    };
    void SKILL::Init(int type, int dmg, int minprob, int maxprob, int len, int castdelay, int delay, int el)
    {
        using org_ptr = void (WINAPIV*)(struct SKILL*, int, int, int, int, int, int, int, int);
        (org_ptr(0x14012cf80L))(this, type, dmg, minprob, maxprob, len, castdelay, delay, el);
    };
    SKILL::SKILL()
    {
        using org_ptr = void (WINAPIV*)(struct SKILL*);
        (org_ptr(0x14012cc10L))(this);
    };
    void SKILL::ctor_SKILL()
    {
        using org_ptr = void (WINAPIV*)(struct SKILL*);
        (org_ptr(0x14012cc10L))(this);
    };
END_ATF_NAMESPACE
