#include <CCashDbWorkerPH.hpp>


START_ATF_NAMESPACE
    CCashDbWorkerPH::CCashDbWorkerPH()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerPH*);
        (org_ptr(0x14022e130L))(this);
    };
    void CCashDbWorkerPH::ctor_CCashDbWorkerPH()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerPH*);
        (org_ptr(0x14022e130L))(this);
    };
    CCashDbWorkerPH::~CCashDbWorkerPH()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerPH*);
        (org_ptr(0x14022e200L))(this);
    };
    void CCashDbWorkerPH::dtor_CCashDbWorkerPH()
    {
        using org_ptr = void (WINAPIV*)(struct CCashDbWorkerPH*);
        (org_ptr(0x14022e200L))(this);
    };
END_ATF_NAMESPACE
