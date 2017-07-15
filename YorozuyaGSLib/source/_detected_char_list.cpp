#include <_detected_char_list.hpp>


START_ATF_NAMESPACE
    int _detected_char_list::AddCharInfo(char byCharType, float* fPos)
    {
        using org_ptr = int (WINAPIV*)(struct _detected_char_list*, char, float*);
        return (org_ptr(0x1402e5860L))(this, byCharType, fPos);
    };
    _detected_char_list::_detected_char_list()
    {
        using org_ptr = void (WINAPIV*)(struct _detected_char_list*);
        (org_ptr(0x1402e57c0L))(this);
    };
    void _detected_char_list::ctor__detected_char_list()
    {
        using org_ptr = void (WINAPIV*)(struct _detected_char_list*);
        (org_ptr(0x1402e57c0L))(this);
    };
    void _detected_char_list::init()
    {
        using org_ptr = void (WINAPIV*)(struct _detected_char_list*);
        (org_ptr(0x1402e5810L))(this);
    };
    
END_ATF_NAMESPACE
