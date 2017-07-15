#include <ElectProcessor.hpp>


START_ATF_NAMESPACE
    int ElectProcessor::Doit(Cmd eCmd, struct CPlayer* pOne, char* pdata)
    {
        using org_ptr = int (WINAPIV*)(struct ElectProcessor*, Cmd, struct CPlayer*, char*);
        return (org_ptr(0x1402b7c20L))(this, eCmd, pOne, pdata);
    };
    ElectProcessor::ElectProcessor(ElectProcessor::ProcessorType nProcessorType)
    {
        using org_ptr = void (WINAPIV*)(struct ElectProcessor*, ElectProcessor::ProcessorType);
        (org_ptr(0x1402b7c40L))(this, nProcessorType);
    };
    void ElectProcessor::ctor_ElectProcessor(ElectProcessor::ProcessorType nProcessorType)
    {
        using org_ptr = void (WINAPIV*)(struct ElectProcessor*, ElectProcessor::ProcessorType);
        (org_ptr(0x1402b7c40L))(this, nProcessorType);
    };
    ElectProcessor::ProcessorType ElectProcessor::GetProcessorType()
    {
        using org_ptr = ElectProcessor::ProcessorType (WINAPIV*)(struct ElectProcessor*);
        return (org_ptr(0x1402bd3f0L))(this);
    };
    bool ElectProcessor::Initialize()
    {
        using org_ptr = bool (WINAPIV*)(struct ElectProcessor*);
        return (org_ptr(0x1402b7c00L))(this);
    };
    ElectProcessor::~ElectProcessor()
    {
        using org_ptr = void (WINAPIV*)(struct ElectProcessor*);
        (org_ptr(0x1402b7ba0L))(this);
    };
    void ElectProcessor::dtor_ElectProcessor()
    {
        using org_ptr = void (WINAPIV*)(struct ElectProcessor*);
        (org_ptr(0x1402b7ba0L))(this);
    };
    
END_ATF_NAMESPACE
