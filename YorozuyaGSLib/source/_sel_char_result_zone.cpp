#include <_sel_char_result_zone.hpp>


START_ATF_NAMESPACE
    int _sel_char_result_zone::size()
    {
        using org_ptr = int (WINAPIV*)(struct _sel_char_result_zone*);
        return (org_ptr(0x14011f8d0L))(this);
    };
END_ATF_NAMESPACE
