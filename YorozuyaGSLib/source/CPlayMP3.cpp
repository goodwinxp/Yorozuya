#include <CPlayMP3.hpp>


START_ATF_NAMESPACE
    int64_t CPlayMP3::IsLoadedMP3()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CPlayMP3*);
        return (org_ptr(0x14050f720L))(this);
    };
END_ATF_NAMESPACE
