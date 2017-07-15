#include <_PCBANG_PLAY_TIME.hpp>


START_ATF_NAMESPACE
    void _PCBANG_PLAY_TIME::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _PCBANG_PLAY_TIME*);
        (org_ptr(0x140077da0L))(this);
    };
END_ATF_NAMESPACE
