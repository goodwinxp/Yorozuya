#include <__dp_mission_potal.hpp>


START_ATF_NAMESPACE
    __dp_mission_potal::__dp_mission_potal()
    {
        using org_ptr = void (WINAPIV*)(struct __dp_mission_potal*);
        (org_ptr(0x140272d20L))(this);
    };
    void __dp_mission_potal::ctor___dp_mission_potal()
    {
        using org_ptr = void (WINAPIV*)(struct __dp_mission_potal*);
        (org_ptr(0x140272d20L))(this);
    };
    bool __dp_mission_potal::find(char* pcode)
    {
        using org_ptr = bool (WINAPIV*)(struct __dp_mission_potal*, char*);
        return (org_ptr(0x14026f780L))(this, pcode);
    };
    void __dp_mission_potal::set(char* szCode)
    {
        using org_ptr = void (WINAPIV*)(struct __dp_mission_potal*, char*);
        (org_ptr(0x14027a190L))(this, szCode);
    };
    __dp_mission_potal::~__dp_mission_potal()
    {
        using org_ptr = void (WINAPIV*)(struct __dp_mission_potal*);
        (org_ptr(0x140272de0L))(this);
    };
    void __dp_mission_potal::dtor___dp_mission_potal()
    {
        using org_ptr = void (WINAPIV*)(struct __dp_mission_potal*);
        (org_ptr(0x140272de0L))(this);
    };
END_ATF_NAMESPACE
