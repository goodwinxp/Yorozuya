#include <_reged_char_result_zone.hpp>


START_ATF_NAMESPACE
    _reged_char_result_zone::_reged_char_result_zone()
    {
        using org_ptr = void (WINAPIV*)(struct _reged_char_result_zone*);
        (org_ptr(0x14011f680L))(this);
    };
    void _reged_char_result_zone::ctor__reged_char_result_zone()
    {
        using org_ptr = void (WINAPIV*)(struct _reged_char_result_zone*);
        (org_ptr(0x14011f680L))(this);
    };
    int _reged_char_result_zone::size()
    {
        using org_ptr = int (WINAPIV*)(struct _reged_char_result_zone*);
        return (org_ptr(0x14011f6f0L))(this);
    };
    
END_ATF_NAMESPACE
