#include <AutominePersonal.hpp>


START_ATF_NAMESPACE
    AutominePersonal::AutominePersonal()
    {
        using org_ptr = void (WINAPIV*)(struct AutominePersonal*);
        (org_ptr(0x1402da090L))(this);
    };
    void AutominePersonal::ctor_AutominePersonal()
    {
        using org_ptr = void (WINAPIV*)(struct AutominePersonal*);
        (org_ptr(0x1402da090L))(this);
    };
    int AutominePersonal::GetDefFC(int nAttactPart, struct CCharacter* pAttChar, int* pnConvertPart)
    {
        using org_ptr = int (WINAPIV*)(struct AutominePersonal*, int, struct CCharacter*, int*);
        return (org_ptr(0x1402db7e0L))(this, nAttactPart, pAttChar, pnConvertPart);
    };
    float AutominePersonal::GetDefFacing(int nPart)
    {
        using org_ptr = float (WINAPIV*)(struct AutominePersonal*, int);
        return (org_ptr(0x1402db730L))(this, nPart);
    };
    float AutominePersonal::GetDefGap(int nPart)
    {
        using org_ptr = float (WINAPIV*)(struct AutominePersonal*, int);
        return (org_ptr(0x1402db680L))(this, nPart);
    };
    int AutominePersonal::GetHP()
    {
        using org_ptr = int (WINAPIV*)(struct AutominePersonal*);
        return (org_ptr(0x1402ddbf0L))(this);
    };
    int AutominePersonal::GetMaxHP()
    {
        using org_ptr = int (WINAPIV*)(struct AutominePersonal*);
        return (org_ptr(0x1402ddbd0L))(this);
    };
    int AutominePersonal::GetObjRace()
    {
        using org_ptr = int (WINAPIV*)(struct AutominePersonal*);
        return (org_ptr(0x1402ddc60L))(this);
    };
    struct CPlayer* AutominePersonal::GetOwner()
    {
        using org_ptr = struct CPlayer* (WINAPIV*)(struct AutominePersonal*);
        return (org_ptr(0x1402dcfc0L))(this);
    };
    bool AutominePersonal::IsBeAttackedAble(bool bFirst)
    {
        using org_ptr = bool (WINAPIV*)(struct AutominePersonal*, bool);
        return (org_ptr(0x1402ddd00L))(this, bFirst);
    };
    bool AutominePersonal::IsBeDamagedAble(struct CCharacter* pAtter)
    {
        using org_ptr = bool (WINAPIV*)(struct AutominePersonal*, struct CCharacter*);
        return (org_ptr(0x1402ddce0L))(this, pAtter);
    };
    void AutominePersonal::LoadDBComplete()
    {
        using org_ptr = void (WINAPIV*)(struct AutominePersonal*);
        (org_ptr(0x1402da620L))(this);
    };
    void AutominePersonal::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct AutominePersonal*);
        (org_ptr(0x1402dc310L))(this);
    };
    void AutominePersonal::SendMsg_FixPosition(int n)
    {
        using org_ptr = void (WINAPIV*)(struct AutominePersonal*, int);
        (org_ptr(0x1402dcd60L))(this, n);
    };
    int AutominePersonal::SetDamage(int nDam, struct CCharacter* pDst, int nDstLv, bool bCrt, int nAttackType, unsigned int dwAttackSerial, bool bJadeReturn)
    {
        using org_ptr = int (WINAPIV*)(struct AutominePersonal*, int, struct CCharacter*, int, bool, int, unsigned int, bool);
        return (org_ptr(0x1402db890L))(this, nDam, pDst, nDstLv, bCrt, nAttackType, dwAttackSerial, bJadeReturn);
    };
    bool AutominePersonal::do_automine(unsigned int dwTime)
    {
        using org_ptr = bool (WINAPIV*)(struct AutominePersonal*, unsigned int);
        return (org_ptr(0x1402db9c0L))(this, dwTime);
    };
    bool AutominePersonal::extract_battery(char bySlotIdx, struct _STORAGE_LIST::_db_con* pBattery)
    {
        using org_ptr = bool (WINAPIV*)(struct AutominePersonal*, char, struct _STORAGE_LIST::_db_con*);
        return (org_ptr(0x1402da880L))(this, bySlotIdx, pBattery);
    };
    unsigned int AutominePersonal::get_battery(int n)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct AutominePersonal*, int);
        return (org_ptr(0x1402e1ac0L))(this, n);
    };
    unsigned int AutominePersonal::get_battery()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct AutominePersonal*);
        return (org_ptr(0x1402de0b0L))(this);
    };
    struct _STORAGE_LIST::_db_con* AutominePersonal::get_item()
    {
        using org_ptr = struct _STORAGE_LIST::_db_con* (WINAPIV*)(struct AutominePersonal*);
        return (org_ptr(0x1402e1810L))(this);
    };
    uint16_t AutominePersonal::get_itemserial()
    {
        using org_ptr = uint16_t (WINAPIV*)(struct AutominePersonal*);
        return (org_ptr(0x1402e19d0L))(this);
    };
    unsigned int AutominePersonal::get_objserial()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct AutominePersonal*);
        return (org_ptr(0x14029d690L))(this);
    };
    struct CPlayer* AutominePersonal::get_owner()
    {
        using org_ptr = struct CPlayer* (WINAPIV*)(struct AutominePersonal*);
        return (org_ptr(0x1402e1a50L))(this);
    };
    unsigned int AutominePersonal::get_ownerserial()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct AutominePersonal*);
        return (org_ptr(0x1402de040L))(this);
    };
    bool AutominePersonal::initialize(uint16_t wIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct AutominePersonal*, uint16_t);
        return (org_ptr(0x1402da3d0L))(this, wIndex);
    };
    bool AutominePersonal::insert_battery(char bySlotIdx, uint16_t wItemSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct AutominePersonal*, char, uint16_t);
        return (org_ptr(0x1402da640L))(this, bySlotIdx, wItemSerial);
    };
    bool AutominePersonal::is_installed()
    {
        using org_ptr = bool (WINAPIV*)(struct AutominePersonal*);
        return (org_ptr(0x1400d3dd0L))(this);
    };
    bool AutominePersonal::is_run()
    {
        using org_ptr = bool (WINAPIV*)(struct AutominePersonal*);
        return (org_ptr(0x1402e1aa0L))(this);
    };
    void AutominePersonal::make_minepacket(uint16_t wItemIndex, uint16_t wItemSerial, char byStorageIndex, uint16_t nNewOre, unsigned int dwDur)
    {
        using org_ptr = void (WINAPIV*)(struct AutominePersonal*, uint16_t, uint16_t, char, uint16_t, unsigned int);
        (org_ptr(0x1402dc130L))(this, wItemIndex, wItemSerial, byStorageIndex, nNewOre, dwDur);
    };
    bool AutominePersonal::regist_to_map(struct CPlayer* pOne, struct _STORAGE_LIST::_db_con* pDstItem, char byDummyIndex, unsigned int dwObjSerial, float fDelayProf)
    {
        using org_ptr = bool (WINAPIV*)(struct AutominePersonal*, struct CPlayer*, struct _STORAGE_LIST::_db_con*, char, unsigned int, float);
        return (org_ptr(0x1402dabc0L))(this, pOne, pDstItem, byDummyIndex, dwObjSerial, fDelayProf);
    };
    void AutominePersonal::send_attacked()
    {
        using org_ptr = void (WINAPIV*)(struct AutominePersonal*);
        (org_ptr(0x1402dcb70L))(this);
    };
    void AutominePersonal::send_changed_packet(int n)
    {
        using org_ptr = void (WINAPIV*)(struct AutominePersonal*, int);
        (org_ptr(0x1402dc930L))(this, n);
    };
    void AutominePersonal::send_current_state()
    {
        using org_ptr = void (WINAPIV*)(struct AutominePersonal*);
        (org_ptr(0x1402dcea0L))(this);
    };
    void AutominePersonal::send_ecode(char byCode)
    {
        using org_ptr = void (WINAPIV*)(struct AutominePersonal*, char);
        (org_ptr(0x1402dcc90L))(this, byCode);
    };
    void AutominePersonal::send_installed()
    {
        using org_ptr = void (WINAPIV*)(struct AutominePersonal*);
        (org_ptr(0x1402dc9f0L))(this);
    };
    void AutominePersonal::set_delay(unsigned int dwDelay)
    {
        using org_ptr = void (WINAPIV*)(struct AutominePersonal*, unsigned int);
        (org_ptr(0x14029d540L))(this, dwDelay);
    };
    void AutominePersonal::set_delaysec(unsigned int dwDS)
    {
        using org_ptr = void (WINAPIV*)(struct AutominePersonal*, unsigned int);
        (org_ptr(0x14029d570L))(this, dwDS);
    };
    void AutominePersonal::set_openUI_Inven(bool bFlag)
    {
        using org_ptr = void (WINAPIV*)(struct AutominePersonal*, bool);
        (org_ptr(0x1402e1b20L))(this, bFlag);
    };
    void AutominePersonal::set_openUI_battery(bool bFlag)
    {
        using org_ptr = void (WINAPIV*)(struct AutominePersonal*, bool);
        (org_ptr(0x1402e1b50L))(this, bFlag);
    };
    void AutominePersonal::set_selore(char bySelOre)
    {
        using org_ptr = void (WINAPIV*)(struct AutominePersonal*, char);
        (org_ptr(0x1402e1940L))(this, bySelOre);
    };
    void AutominePersonal::set_work(bool bWork)
    {
        using org_ptr = void (WINAPIV*)(struct AutominePersonal*, bool);
        (org_ptr(0x1402e1a70L))(this, bWork);
    };
    char AutominePersonal::sub_battery(unsigned int dwUsed)
    {
        using org_ptr = char (WINAPIV*)(struct AutominePersonal*, unsigned int);
        return (org_ptr(0x1402da990L))(this, dwUsed);
    };
    void AutominePersonal::sub_filledslot()
    {
        using org_ptr = void (WINAPIV*)(struct AutominePersonal*);
        (org_ptr(0x1402e1be0L))(this);
    };
    bool AutominePersonal::unregist_from_map(char byDestroyType)
    {
        using org_ptr = bool (WINAPIV*)(struct AutominePersonal*, char);
        return (org_ptr(0x1402db110L))(this, byDestroyType);
    };
    AutominePersonal::~AutominePersonal()
    {
        using org_ptr = void (WINAPIV*)(struct AutominePersonal*);
        (org_ptr(0x1402da210L))(this);
    };
    void AutominePersonal::dtor_AutominePersonal()
    {
        using org_ptr = void (WINAPIV*)(struct AutominePersonal*);
        (org_ptr(0x1402da210L))(this);
    };
END_ATF_NAMESPACE
