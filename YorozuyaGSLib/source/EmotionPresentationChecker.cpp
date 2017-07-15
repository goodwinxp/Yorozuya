#include <EmotionPresentationChecker.hpp>


START_ATF_NAMESPACE
    bool EmotionPresentationChecker::CheckEmotionState(struct CMonster* pThis, char byCheckType, struct CCharacter* pTarget)
    {
        using org_ptr = bool (WINAPIV*)(struct EmotionPresentationChecker*, struct CMonster*, char, struct CCharacter*);
        return (org_ptr(0x14015d250L))(this, pThis, byCheckType, pTarget);
    };
    EmotionPresentationChecker::EmotionPresentationChecker()
    {
        using org_ptr = void (WINAPIV*)(struct EmotionPresentationChecker*);
        (org_ptr(0x14014b720L))(this);
    };
    void EmotionPresentationChecker::ctor_EmotionPresentationChecker()
    {
        using org_ptr = void (WINAPIV*)(struct EmotionPresentationChecker*);
        (org_ptr(0x14014b720L))(this);
    };
    void EmotionPresentationChecker::ReSet()
    {
        using org_ptr = void (WINAPIV*)(struct EmotionPresentationChecker*);
        (org_ptr(0x14014be60L))(this);
    };
    
END_ATF_NAMESPACE
