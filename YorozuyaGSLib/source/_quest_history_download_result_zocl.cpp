#include <_quest_history_download_result_zocl.hpp>


START_ATF_NAMESPACE
    _quest_history_download_result_zocl::_quest_history_download_result_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _quest_history_download_result_zocl*);
        (org_ptr(0x1400ef6c0L))(this);
    };
    void _quest_history_download_result_zocl::ctor__quest_history_download_result_zocl()
    {
        using org_ptr = void (WINAPIV*)(struct _quest_history_download_result_zocl*);
        (org_ptr(0x1400ef6c0L))(this);
    };
    int _quest_history_download_result_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _quest_history_download_result_zocl*);
        return (org_ptr(0x1400ef6e0L))(this);
    };
    
END_ATF_NAMESPACE
