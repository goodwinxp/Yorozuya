#include <CGoldenBoxItemMgr.hpp>


START_ATF_NAMESPACE
    void CGoldenBoxItemMgr::BoxItemDataCopy()
    {
        using org_ptr = void (WINAPIV*)(struct CGoldenBoxItemMgr*);
        (org_ptr(0x140415500L))(this);
    };
    struct _ItemExchange_fld::_output* CGoldenBoxItemMgr::BoxItemOpen(char byIndex)
    {
        using org_ptr = struct _ItemExchange_fld::_output* (WINAPIV*)(struct CGoldenBoxItemMgr*, char);
        return (org_ptr(0x140414800L))(this, byIndex);
    };
    void CGoldenBoxItemMgr::BoxItemOpenEffectType(char* szUseItem, char* szNewItem, char* pbyType, bool* bCircle)
    {
        using org_ptr = void (WINAPIV*)(struct CGoldenBoxItemMgr*, char*, char*, char*, bool*);
        (org_ptr(0x140415580L))(this, szUseItem, szNewItem, pbyType, bCircle);
    };
    CGoldenBoxItemMgr::CGoldenBoxItemMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CGoldenBoxItemMgr*);
        (org_ptr(0x140411e60L))(this);
    };
    void CGoldenBoxItemMgr::ctor_CGoldenBoxItemMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CGoldenBoxItemMgr*);
        (org_ptr(0x140411e60L))(this);
    };
    void CGoldenBoxItemMgr::Check_Event_Status()
    {
        using org_ptr = void (WINAPIV*)(struct CGoldenBoxItemMgr*);
        (org_ptr(0x140412b80L))(this);
    };
    void CGoldenBoxItemMgr::Check_Loaded_Event_Status()
    {
        using org_ptr = void (WINAPIV*)(struct CGoldenBoxItemMgr*);
        (org_ptr(0x140412320L))(this);
    };
    struct _db_golden_box_item* CGoldenBoxItemMgr::GetGodBoxItemInfoPtr()
    {
        using org_ptr = struct _db_golden_box_item* (WINAPIV*)(struct CGoldenBoxItemMgr*);
        return (org_ptr(0x1402059f0L))(this);
    };
    uint16_t CGoldenBoxItemMgr::GetGoldBoxItemIndex(uint16_t wIndex)
    {
        using org_ptr = uint16_t (WINAPIV*)(struct CGoldenBoxItemMgr*, uint16_t);
        return (org_ptr(0x1400d3e70L))(this, wIndex);
    };
    char* CGoldenBoxItemMgr::GetGoldBoxItemPtr()
    {
        using org_ptr = char* (WINAPIV*)(struct CGoldenBoxItemMgr*);
        return (org_ptr(0x140415230L))(this);
    };
    char CGoldenBoxItemMgr::GetLoopCount()
    {
        using org_ptr = char (WINAPIV*)(struct CGoldenBoxItemMgr*);
        return (org_ptr(0x1400b84c0L))(this);
    };
    uint16_t CGoldenBoxItemMgr::GetOreItemTotalCnt()
    {
        using org_ptr = uint16_t (WINAPIV*)(struct CGoldenBoxItemMgr*);
        return (org_ptr(0x140415180L))(this);
    };
    char* CGoldenBoxItemMgr::GetStarterBoxCode(uint16_t wIndex)
    {
        using org_ptr = char* (WINAPIV*)(struct CGoldenBoxItemMgr*, uint16_t);
        return (org_ptr(0x1400798f0L))(this, wIndex);
    };
    uint16_t CGoldenBoxItemMgr::Get_BoxItem_Count(char byIndex, unsigned int dwIndex)
    {
        using org_ptr = uint16_t (WINAPIV*)(struct CGoldenBoxItemMgr*, char, unsigned int);
        return (org_ptr(0x140414070L))(this, byIndex, dwIndex);
    };
    uint16_t CGoldenBoxItemMgr::Get_Box_Count(char byIndex)
    {
        using org_ptr = uint16_t (WINAPIV*)(struct CGoldenBoxItemMgr*, char);
        return (org_ptr(0x140413ee0L))(this, byIndex);
    };
    char CGoldenBoxItemMgr::Get_Event_Status()
    {
        using org_ptr = char (WINAPIV*)(struct CGoldenBoxItemMgr*);
        return (org_ptr(0x140412300L))(this);
    };
    uint16_t CGoldenBoxItemMgr::Get_StarterBox_Count()
    {
        using org_ptr = uint16_t (WINAPIV*)(struct CGoldenBoxItemMgr*);
        return (org_ptr(0x140413f90L))(this);
    };
    bool CGoldenBoxItemMgr::Initialize()
    {
        using org_ptr = bool (WINAPIV*)(struct CGoldenBoxItemMgr*);
        return (org_ptr(0x1404120d0L))(this);
    };
    struct CGoldenBoxItemMgr* CGoldenBoxItemMgr::Instance()
    {
        using org_ptr = struct CGoldenBoxItemMgr* (WINAPIV*)();
        return (org_ptr(0x140079920L))();
    };
    char CGoldenBoxItemMgr::IsBuyRaceBossGoldBox(struct CPlayer* pOne)
    {
        using org_ptr = char (WINAPIV*)(struct CGoldenBoxItemMgr*, struct CPlayer*);
        return (org_ptr(0x140414a70L))(this, pOne);
    };
    bool CGoldenBoxItemMgr::Load_Event_INI(struct _golden_box_item_ini* pIni)
    {
        using org_ptr = bool (WINAPIV*)(struct CGoldenBoxItemMgr*, struct _golden_box_item_ini*);
        return (org_ptr(0x140412ca0L))(this, pIni);
    };
    bool CGoldenBoxItemMgr::Load_Golden_Box_Item_Event()
    {
        using org_ptr = bool (WINAPIV*)(struct CGoldenBoxItemMgr*);
        return (org_ptr(0x1404121a0L))(this);
    };
    void CGoldenBoxItemMgr::Loop_Event()
    {
        using org_ptr = void (WINAPIV*)(struct CGoldenBoxItemMgr*);
        (org_ptr(0x1404129a0L))(this);
    };
    void CGoldenBoxItemMgr::PushDQSUpdate()
    {
        using org_ptr = void (WINAPIV*)(struct CGoldenBoxItemMgr*);
        (org_ptr(0x140414490L))(this);
    };
    void CGoldenBoxItemMgr::RateCheck(char byIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CGoldenBoxItemMgr*, char);
        (org_ptr(0x1404145d0L))(this, byIndex);
    };
    void CGoldenBoxItemMgr::SendMsg_RaceChat(struct CPlayer* pOne, char* pwszChatData)
    {
        using org_ptr = void (WINAPIV*)(struct CGoldenBoxItemMgr*, struct CPlayer*, char*);
        (org_ptr(0x140414f60L))(this, pOne, pwszChatData);
    };
    void CGoldenBoxItemMgr::SetDBSerial(int nDBSerial)
    {
        using org_ptr = void (WINAPIV*)(struct CGoldenBoxItemMgr*, int);
        (org_ptr(0x140412170L))(this, nDBSerial);
    };
    bool CGoldenBoxItemMgr::SetGoldBoxItemIndex()
    {
        using org_ptr = bool (WINAPIV*)(struct CGoldenBoxItemMgr*);
        return (org_ptr(0x140415250L))(this);
    };
    void CGoldenBoxItemMgr::Set_BoxItem_Count(char byIndex, unsigned int dwIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CGoldenBoxItemMgr*, char, unsigned int);
        (org_ptr(0x140414130L))(this, byIndex, dwIndex);
    };
    void CGoldenBoxItemMgr::Set_Box_Count(char byIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CGoldenBoxItemMgr*, char);
        (org_ptr(0x140413f10L))(this, byIndex);
    };
    void CGoldenBoxItemMgr::Set_DCK(char byDCK)
    {
        using org_ptr = void (WINAPIV*)(struct CGoldenBoxItemMgr*, char);
        (org_ptr(0x140413c90L))(this, byDCK);
    };
    void CGoldenBoxItemMgr::Set_Event_Status(char byStatus)
    {
        using org_ptr = void (WINAPIV*)(struct CGoldenBoxItemMgr*, char);
        (org_ptr(0x140412280L))(this, byStatus);
    };
    void CGoldenBoxItemMgr::Set_FromINIToStruct(struct _golden_box_item_ini* pIni)
    {
        using org_ptr = void (WINAPIV*)(struct CGoldenBoxItemMgr*, struct _golden_box_item_ini*);
        (org_ptr(0x140413900L))(this, pIni);
    };
    void CGoldenBoxItemMgr::Set_FromStruct()
    {
        using org_ptr = void (WINAPIV*)(struct CGoldenBoxItemMgr*);
        (org_ptr(0x140413cc0L))(this);
    };
    void CGoldenBoxItemMgr::Set_StarterBox_Count(unsigned int dwNum, bool bAdd)
    {
        using org_ptr = void (WINAPIV*)(struct CGoldenBoxItemMgr*, unsigned int, bool);
        (org_ptr(0x140413fb0L))(this, dwNum, bAdd);
    };
    void CGoldenBoxItemMgr::Set_ToStruct()
    {
        using org_ptr = void (WINAPIV*)(struct CGoldenBoxItemMgr*);
        (org_ptr(0x140414260L))(this);
    };
    bool CGoldenBoxItemMgr::StarterBox_InsertToInven(struct CPlayer* pOne, char* szItemCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CGoldenBoxItemMgr*, struct CPlayer*, char*);
        return (org_ptr(0x140414d70L))(this, pOne, szItemCode);
    };
    bool CGoldenBoxItemMgr::SynchINIANDDB()
    {
        using org_ptr = bool (WINAPIV*)(struct CGoldenBoxItemMgr*);
        return (org_ptr(0x140412560L))(this);
    };
    void CGoldenBoxItemMgr::WriteEventCouponLog(struct CPlayer* pOne, struct _STORAGE_LIST::_db_con* pItem)
    {
        using org_ptr = void (WINAPIV*)(struct CGoldenBoxItemMgr*, struct CPlayer*, struct _STORAGE_LIST::_db_con*);
        (org_ptr(0x1404158a0L))(this, pOne, pItem);
    };
    void CGoldenBoxItemMgr::WriteGetGoldBarLog(struct CPlayer* pOne, struct _STORAGE_LIST::_db_con* pItem)
    {
        using org_ptr = void (WINAPIV*)(struct CGoldenBoxItemMgr*, struct CPlayer*, struct _STORAGE_LIST::_db_con*);
        (org_ptr(0x140415730L))(this, pOne, pItem);
    };
    bool CGoldenBoxItemMgr::_init_loggers()
    {
        using org_ptr = bool (WINAPIV*)(struct CGoldenBoxItemMgr*);
        return (org_ptr(0x140414e30L))(this);
    };
    bool CGoldenBoxItemMgr::_insert_to_inven(struct CPlayer* pOne, char byTableCode, uint16_t wItemIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CGoldenBoxItemMgr*, struct CPlayer*, char, uint16_t);
        return (org_ptr(0x140414b50L))(this, pOne, byTableCode, wItemIndex);
    };
    CGoldenBoxItemMgr::~CGoldenBoxItemMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CGoldenBoxItemMgr*);
        (org_ptr(0x140411fc0L))(this);
    };
    void CGoldenBoxItemMgr::dtor_CGoldenBoxItemMgr()
    {
        using org_ptr = void (WINAPIV*)(struct CGoldenBoxItemMgr*);
        (org_ptr(0x140411fc0L))(this);
    };
    
END_ATF_NAMESPACE
