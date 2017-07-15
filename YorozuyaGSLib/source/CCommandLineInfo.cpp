#include <CCommandLineInfo.hpp>


START_ATF_NAMESPACE
    CCommandLineInfo::~CCommandLineInfo()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CCommandLineInfo*);
        (org_ptr(0x1404dbffaL))(this);
    };
    int64_t CCommandLineInfo::dtor_CCommandLineInfo()
    {
        using org_ptr = int64_t (WINAPIV*)(struct CCommandLineInfo*);
        return (org_ptr(0x1404dbffaL))(this);
    };
END_ATF_NAMESPACE
