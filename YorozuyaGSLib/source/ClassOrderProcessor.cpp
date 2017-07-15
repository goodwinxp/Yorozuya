#include <ClassOrderProcessor.hpp>


START_ATF_NAMESPACE
    ClassOrderProcessor::ClassOrderProcessor()
        : ElectProcessor(ProcessorType::_eClassOrderProcessor)
    {
        using org_ptr = void (WINAPIV*)(struct ClassOrderProcessor*);
        (org_ptr(0x1402b8010L))(this);
    };
    void ClassOrderProcessor::ctor_ClassOrderProcessor()
    {
        using org_ptr = void (WINAPIV*)(struct ClassOrderProcessor*);
        (org_ptr(0x1402b8010L))(this);
    };
    int ClassOrderProcessor::Doit(Cmd eCmd, struct CPlayer* pOne, char* pdata)
    {
        using org_ptr = int (WINAPIV*)(struct ClassOrderProcessor*, Cmd, struct CPlayer*, char*);
        return (org_ptr(0x1402b8360L))(this, eCmd, pOne, pdata);
    };
    bool ClassOrderProcessor::Initialize()
    {
        using org_ptr = bool (WINAPIV*)(struct ClassOrderProcessor*);
        return (org_ptr(0x1402b8250L))(this);
    };
    struct ClassOrderProcessor* ClassOrderProcessor::Instance()
    {
        using org_ptr = struct ClassOrderProcessor* (WINAPIV*)();
        return (org_ptr(0x1402b8190L))();
    };
    void ClassOrderProcessor::SendMsg_PatriarchInform(struct CPlayer* pOne)
    {
        using org_ptr = void (WINAPIV*)(struct ClassOrderProcessor*, struct CPlayer*);
        (org_ptr(0x1402b8f50L))(this, pOne);
    };
    void ClassOrderProcessor::SendMsg_QueryAppointResult(uint16_t wIndex, char byRet, char byClassType, char* pwszAvatorName)
    {
        using org_ptr = void (WINAPIV*)(struct ClassOrderProcessor*, uint16_t, char, char, char*);
        (org_ptr(0x1402b8e60L))(this, wIndex, byRet, byClassType, pwszAvatorName);
    };
    void ClassOrderProcessor::UpdatePacket(char byRace, char byClassType)
    {
        using org_ptr = void (WINAPIV*)(struct ClassOrderProcessor*, char, char);
        (org_ptr(0x1402b9180L))(this, byRace, byClassType);
    };
    int ClassOrderProcessor::_CheckUserInfo(char byRace, char byClassType, struct CPlayer* pUser)
    {
        using org_ptr = int (WINAPIV*)(struct ClassOrderProcessor*, char, char, struct CPlayer*);
        return (org_ptr(0x1402b9060L))(this, byRace, byClassType, pUser);
    };
    int ClassOrderProcessor::_QueryAppoint(struct CPlayer* pOne, char* pData)
    {
        using org_ptr = int (WINAPIV*)(struct ClassOrderProcessor*, struct CPlayer*, char*);
        return (org_ptr(0x1402b8460L))(this, pOne, pData);
    };
    int ClassOrderProcessor::_RequestAppoint(struct CPlayer* pOne, char* pData)
    {
        using org_ptr = int (WINAPIV*)(struct ClassOrderProcessor*, struct CPlayer*, char*);
        return (org_ptr(0x1402b85b0L))(this, pOne, pData);
    };
    int ClassOrderProcessor::_RequestDischarge(struct CPlayer* pOne, char* pData)
    {
        using org_ptr = int (WINAPIV*)(struct ClassOrderProcessor*, struct CPlayer*, char*);
        return (org_ptr(0x1402b8ac0L))(this, pOne, pData);
    };
    int ClassOrderProcessor::_ResponseAppoint(struct CPlayer* pOne, char* pData)
    {
        using org_ptr = int (WINAPIV*)(struct ClassOrderProcessor*, struct CPlayer*, char*);
        return (org_ptr(0x1402b87c0L))(this, pOne, pData);
    };
    ClassOrderProcessor::~ClassOrderProcessor()
    {
        using org_ptr = void (WINAPIV*)(struct ClassOrderProcessor*);
        (org_ptr(0x1402b8140L))(this);
    };
    void ClassOrderProcessor::dtor_ClassOrderProcessor()
    {
        using org_ptr = void (WINAPIV*)(struct ClassOrderProcessor*);
        (org_ptr(0x1402b8140L))(this);
    };
END_ATF_NAMESPACE
