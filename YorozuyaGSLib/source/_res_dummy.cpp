#include <_res_dummy.hpp>


START_ATF_NAMESPACE
    int _res_dummy::GetDelay(char bySector, bool bIsPcbang)
    {
        using org_ptr = int (WINAPIV*)(struct _res_dummy*, char, bool);
        return (org_ptr(0x1400d3c70L))(this, bySector, bIsPcbang);
    };
    char _res_dummy::GetQualityGrade()
    {
        using org_ptr = char (WINAPIV*)(struct _res_dummy*);
        return (org_ptr(0x1400d3db0L))(this);
    };
    bool _res_dummy::SetDummy(struct _dummy_position* pDumPos, char byQualityGrade)
    {
        using org_ptr = bool (WINAPIV*)(struct _res_dummy*, struct _dummy_position*, char);
        return (org_ptr(0x140189540L))(this, pDumPos, byQualityGrade);
    };
    void _res_dummy::SetRangeGrade()
    {
        using org_ptr = void (WINAPIV*)(struct _res_dummy*);
        (org_ptr(0x140189000L))(this);
    };
    _res_dummy::_res_dummy()
    {
        using org_ptr = void (WINAPIV*)(struct _res_dummy*);
        (org_ptr(0x1401894b0L))(this);
    };
    void _res_dummy::ctor__res_dummy()
    {
        using org_ptr = void (WINAPIV*)(struct _res_dummy*);
        (org_ptr(0x1401894b0L))(this);
    };
END_ATF_NAMESPACE
