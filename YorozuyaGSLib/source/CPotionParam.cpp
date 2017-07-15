#include <CPotionParam.hpp>


START_ATF_NAMESPACE
    CPotionParam::CPotionParam()
    {
        using org_ptr = void (WINAPIV*)(struct CPotionParam*);
        (org_ptr(0x1400729f0L))(this);
    };
    void CPotionParam::ctor_CPotionParam()
    {
        using org_ptr = void (WINAPIV*)(struct CPotionParam*);
        (org_ptr(0x1400729f0L))(this);
    };
    void CPotionParam::Init(struct CPlayer* pMaster)
    {
        using org_ptr = void (WINAPIV*)(struct CPotionParam*, struct CPlayer*);
        (org_ptr(0x140078c90L))(this, pMaster);
    };
    bool CPotionParam::IsUsableActDelay(char byPotionClass, unsigned int dwCurrTime)
    {
        using org_ptr = bool (WINAPIV*)(struct CPotionParam*, char, unsigned int);
        return (org_ptr(0x1403a1030L))(this, byPotionClass, dwCurrTime);
    };
    void CPotionParam::SetPotionActDelay(char byPotionClass, unsigned int dwCurrTime, unsigned int dwActDelay)
    {
        using org_ptr = void (WINAPIV*)(struct CPotionParam*, char, unsigned int, unsigned int);
        (org_ptr(0x1400750b0L))(this, byPotionClass, dwCurrTime, dwActDelay);
    };
    CPotionParam::~CPotionParam()
    {
        using org_ptr = void (WINAPIV*)(struct CPotionParam*);
        (org_ptr(0x140072b30L))(this);
    };
    void CPotionParam::dtor_CPotionParam()
    {
        using org_ptr = void (WINAPIV*)(struct CPotionParam*);
        (org_ptr(0x140072b30L))(this);
    };
END_ATF_NAMESPACE
