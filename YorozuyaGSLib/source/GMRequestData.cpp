#include <GMRequestData.hpp>


START_ATF_NAMESPACE
    GMRequestData::GMRequestData()
    {
        using org_ptr = void (WINAPIV*)(struct GMRequestData*);
        (org_ptr(0x1402ab250L))(this);
    };
    void GMRequestData::ctor_GMRequestData()
    {
        using org_ptr = void (WINAPIV*)(struct GMRequestData*);
        (org_ptr(0x1402ab250L))(this);
    };
    void GMRequestData::Set(unsigned int dwSerial, char* pwszName, unsigned int dwTime)
    {
        using org_ptr = void (WINAPIV*)(struct GMRequestData*, unsigned int, char*, unsigned int);
        (org_ptr(0x1402ab5e0L))(this, dwSerial, pwszName, dwTime);
    };
    GMRequestData::~GMRequestData()
    {
        using org_ptr = void (WINAPIV*)(struct GMRequestData*);
        (org_ptr(0x1402ab510L))(this);
    };
    void GMRequestData::dtor_GMRequestData()
    {
        using org_ptr = void (WINAPIV*)(struct GMRequestData*);
        (org_ptr(0x1402ab510L))(this);
    };
END_ATF_NAMESPACE
