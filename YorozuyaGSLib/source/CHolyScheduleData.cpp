#include <CHolyScheduleData.hpp>


START_ATF_NAMESPACE
    CHolyScheduleData::CHolyScheduleData()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyScheduleData*);
        (org_ptr(0x140284100L))(this);
    };
    void CHolyScheduleData::ctor_CHolyScheduleData()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyScheduleData*);
        (org_ptr(0x140284100L))(this);
    };
    struct CHolyScheduleData::__HolyScheduleNode* CHolyScheduleData::GetIndex(int nNumOfTime)
    {
        using org_ptr = struct CHolyScheduleData::__HolyScheduleNode* (WINAPIV*)(struct CHolyScheduleData*, int);
        return (org_ptr(0x1402842f0L))(this, nNumOfTime);
    };
    unsigned int CHolyScheduleData::GetTotalSceduleTerm(int nNumOfTime)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CHolyScheduleData*, int);
        return (org_ptr(0x140284610L))(this, nNumOfTime);
    };
    void CHolyScheduleData::Init()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyScheduleData*);
        (org_ptr(0x1402841a0L))(this);
    };
    CHolyScheduleData::~CHolyScheduleData()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyScheduleData*);
        (org_ptr(0x140284160L))(this);
    };
    void CHolyScheduleData::dtor_CHolyScheduleData()
    {
        using org_ptr = void (WINAPIV*)(struct CHolyScheduleData*);
        (org_ptr(0x140284160L))(this);
    };
    
    
END_ATF_NAMESPACE
