#include <_ATTACK_DELAY_CHECKER.hpp>


START_ATF_NAMESPACE
    void _ATTACK_DELAY_CHECKER::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _ATTACK_DELAY_CHECKER*);
        (org_ptr(0x140072e60L))(this);
    };
    bool _ATTACK_DELAY_CHECKER::IsDelay(char code, uint16_t index, char mastery)
    {
        using org_ptr = bool (WINAPIV*)(struct _ATTACK_DELAY_CHECKER*, char, uint16_t, char);
        return (org_ptr(0x14008ec60L))(this, code, index, mastery);
    };
    void _ATTACK_DELAY_CHECKER::SetDelay(unsigned int delay)
    {
        using org_ptr = void (WINAPIV*)(struct _ATTACK_DELAY_CHECKER*, unsigned int);
        (org_ptr(0x14008e760L))(this, delay);
    };
    _ATTACK_DELAY_CHECKER::_ATTACK_DELAY_CHECKER()
    {
        using org_ptr = void (WINAPIV*)(struct _ATTACK_DELAY_CHECKER*);
        (org_ptr(0x140072d80L))(this);
    };
    void _ATTACK_DELAY_CHECKER::ctor__ATTACK_DELAY_CHECKER()
    {
        using org_ptr = void (WINAPIV*)(struct _ATTACK_DELAY_CHECKER*);
        (org_ptr(0x140072d80L))(this);
    };
    bool _ATTACK_DELAY_CHECKER::_delay_check(char code, uint16_t index, char mastery)
    {
        using org_ptr = bool (WINAPIV*)(struct _ATTACK_DELAY_CHECKER*, char, uint16_t, char);
        return (org_ptr(0x14008ed10L))(this, code, index, mastery);
    };
    _ATTACK_DELAY_CHECKER::_eff_list::_eff_list()
    {
        using org_ptr = void (WINAPIV*)(struct _ATTACK_DELAY_CHECKER::_eff_list*);
        (org_ptr(0x140072e20L))(this);
    };
    void _ATTACK_DELAY_CHECKER::_eff_list::ctor__eff_list()
    {
        using org_ptr = void (WINAPIV*)(struct _ATTACK_DELAY_CHECKER::_eff_list*);
        (org_ptr(0x140072e20L))(this);
    };
    bool _ATTACK_DELAY_CHECKER::_eff_list::fill()
    {
        using org_ptr = bool (WINAPIV*)(struct _ATTACK_DELAY_CHECKER::_eff_list*);
        return (org_ptr(0x14008eb90L))(this);
    };
    void _ATTACK_DELAY_CHECKER::_eff_list::init()
    {
        using org_ptr = void (WINAPIV*)(struct _ATTACK_DELAY_CHECKER::_eff_list*);
        (org_ptr(0x140072f70L))(this);
    };
    _ATTACK_DELAY_CHECKER::_mas_list::_mas_list()
    {
        using org_ptr = void (WINAPIV*)(struct _ATTACK_DELAY_CHECKER::_mas_list*);
        (org_ptr(0x140072e40L))(this);
    };
    void _ATTACK_DELAY_CHECKER::_mas_list::ctor__mas_list()
    {
        using org_ptr = void (WINAPIV*)(struct _ATTACK_DELAY_CHECKER::_mas_list*);
        (org_ptr(0x140072e40L))(this);
    };
    bool _ATTACK_DELAY_CHECKER::_mas_list::fill()
    {
        using org_ptr = bool (WINAPIV*)(struct _ATTACK_DELAY_CHECKER::_mas_list*);
        return (org_ptr(0x14008ebc0L))(this);
    };
    void _ATTACK_DELAY_CHECKER::_mas_list::init()
    {
        using org_ptr = void (WINAPIV*)(struct _ATTACK_DELAY_CHECKER::_mas_list*);
        (org_ptr(0x140072f90L))(this);
    };
END_ATF_NAMESPACE
