#include <CPlayerDB.hpp>


START_ATF_NAMESPACE
    void CPlayerDB::AddTrunkDalant(unsigned int dwPush)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayerDB*, unsigned int);
        (org_ptr(0x14010c200L))(this, dwPush);
    };
    void CPlayerDB::AddTrunkGold(unsigned int dwPush)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayerDB*, unsigned int);
        (org_ptr(0x14010c330L))(this, dwPush);
    };
    void CPlayerDB::AppointSerialStorageItem()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayerDB*);
        (org_ptr(0x14010b950L))(this);
    };
    bool CPlayerDB::BeHaveBoxOfAMP()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayerDB*);
        return (org_ptr(0x1400ef400L))(this);
    };
    CPlayerDB::CPlayerDB()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayerDB*);
        (org_ptr(0x1401087e0L))(this);
    };
    void CPlayerDB::ctor_CPlayerDB()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayerDB*);
        (org_ptr(0x1401087e0L))(this);
    };
    char CPlayerDB::CalcCharGrade(char byLv, uint16_t wRankRate)
    {
        using org_ptr = char (WINAPIV*)(char, uint16_t);
        return (org_ptr(0x14010bc80L))(byLv, wRankRate);
    };
    bool CPlayerDB::ConvertAvatorDB(struct _AVATOR_DATA* pData)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayerDB*, struct _AVATOR_DATA*);
        return (org_ptr(0x140108ee0L))(this, pData);
    };
    bool CPlayerDB::ConvertGeneralDB(struct _AVATOR_DATA* pData, struct _AVATOR_DATA* pOutData)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayerDB*, struct _AVATOR_DATA*, struct _AVATOR_DATA*);
        return (org_ptr(0x140109450L))(this, pData, pOutData);
    };
    bool CPlayerDB::DeleteItemCountFromCode(char* pszItemCode, int nCount)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayerDB*, char*, int);
        return (org_ptr(0x14010c760L))(this, pszItemCode, nCount);
    };
    char CPlayerDB::GetBagNum()
    {
        using org_ptr = char (WINAPIV*)(struct CPlayerDB*);
        return (org_ptr(0x140034910L))(this);
    };
    char* CPlayerDB::GetCharNameA()
    {
        using org_ptr = char* (WINAPIV*)(struct CPlayerDB*);
        return (org_ptr(0x140034810L))(this);
    };
    char* CPlayerDB::GetCharNameW()
    {
        using org_ptr = char* (WINAPIV*)(struct CPlayerDB*);
        return (org_ptr(0x140078d40L))(this);
    };
    unsigned int CPlayerDB::GetCharSerial()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CPlayerDB*);
        return (org_ptr(0x140078d60L))(this);
    };
    char CPlayerDB::GetClassInGuild()
    {
        using org_ptr = char (WINAPIV*)(struct CPlayerDB*);
        return (org_ptr(0x1400ad430L))(this);
    };
    uint16_t CPlayerDB::GetCurItemSerial()
    {
        using org_ptr = uint16_t (WINAPIV*)(struct CPlayerDB*);
        return (org_ptr(0x14007ba10L))(this);
    };
    float* CPlayerDB::GetCurPos()
    {
        using org_ptr = float* (WINAPIV*)(struct CPlayerDB*);
        return (org_ptr(0x14007d380L))(this);
    };
    int CPlayerDB::GetDP()
    {
        using org_ptr = int (WINAPIV*)(struct CPlayerDB*);
        return (org_ptr(0x14007c4d0L))(this);
    };
    unsigned int CPlayerDB::GetDalant()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CPlayerDB*);
        return (org_ptr(0x140034930L))(this);
    };
    long double CPlayerDB::GetExp()
    {
        using org_ptr = long double (WINAPIV*)(struct CPlayerDB*);
        return (org_ptr(0x1400348b0L))(this);
    };
    char CPlayerDB::GetExtTrunkSlotNum()
    {
        using org_ptr = char (WINAPIV*)(struct CPlayerDB*);
        return (org_ptr(0x1400c2cb0L))(this);
    };
    char CPlayerDB::GetExtTrunkSlotRace(unsigned int dwItemSerial)
    {
        using org_ptr = char (WINAPIV*)(struct CPlayerDB*, unsigned int);
        return (org_ptr(0x14010c4d0L))(this, dwItemSerial);
    };
    int CPlayerDB::GetFP()
    {
        using org_ptr = int (WINAPIV*)(struct CPlayerDB*);
        return (org_ptr(0x140034870L))(this);
    };
    unsigned int CPlayerDB::GetGold()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CPlayerDB*);
        return (org_ptr(0x140034950L))(this);
    };
    unsigned int CPlayerDB::GetGuildSerial()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CPlayerDB*);
        return (org_ptr(0x14010c540L))(this);
    };
    int CPlayerDB::GetHP()
    {
        using org_ptr = int (WINAPIV*)(struct CPlayerDB*);
        return (org_ptr(0x140034850L))(this);
    };
    int CPlayerDB::GetHaveUnitNum()
    {
        using org_ptr = int (WINAPIV*)(struct CPlayerDB*);
        return (org_ptr(0x140108e60L))(this);
    };
    int CPlayerDB::GetInvenItemCountFromCode(char* pszItemCode)
    {
        using org_ptr = int (WINAPIV*)(struct CPlayerDB*, char*);
        return (org_ptr(0x14010c630L))(this, pszItemCode);
    };
    struct _STORAGE_LIST::_db_con* CPlayerDB::GetItem(char byInvenIndex)
    {
        using org_ptr = struct _STORAGE_LIST::_db_con* (WINAPIV*)(struct CPlayerDB*, char);
        return (org_ptr(0x14010c5a0L))(this, byInvenIndex);
    };
    int CPlayerDB::GetLevel()
    {
        using org_ptr = int (WINAPIV*)(struct CPlayerDB*);
        return (org_ptr(0x1400348f0L))(this);
    };
    long double CPlayerDB::GetLossExp()
    {
        using org_ptr = long double (WINAPIV*)(struct CPlayerDB*);
        return (org_ptr(0x14007a520L))(this);
    };
    int CPlayerDB::GetMapCode()
    {
        using org_ptr = int (WINAPIV*)(struct CPlayerDB*);
        return (org_ptr(0x14007d360L))(this);
    };
    int CPlayerDB::GetMaxLevel()
    {
        using org_ptr = int (WINAPIV*)(struct CPlayerDB*);
        return (org_ptr(0x14007a890L))(this);
    };
    uint16_t CPlayerDB::GetNewItemSerial()
    {
        using org_ptr = uint16_t (WINAPIV*)(struct CPlayerDB*);
        return (org_ptr(0x14010c100L))(this);
    };
    struct _class_fld* CPlayerDB::GetPtrBaseClass()
    {
        using org_ptr = struct _class_fld* (WINAPIV*)(struct CPlayerDB*);
        return (org_ptr(0x14007dc50L))(this);
    };
    struct _class_fld* CPlayerDB::GetPtrCurClass()
    {
        using org_ptr = struct _class_fld* (WINAPIV*)(struct CPlayerDB*);
        return (org_ptr(0x14007dc30L))(this);
    };
    struct _STORAGE_LIST::_db_con* CPlayerDB::GetPtrItemStorage(uint16_t wSerial, char* pbyStorageCode)
    {
        using org_ptr = struct _STORAGE_LIST::_db_con* (WINAPIV*)(struct CPlayerDB*, uint16_t, char*);
        return (org_ptr(0x14010c160L))(this, wSerial, pbyStorageCode);
    };
    long double CPlayerDB::GetPvPCashBag()
    {
        using org_ptr = long double (WINAPIV*)(struct CPlayerDB*);
        return (org_ptr(0x1400f7870L))(this);
    };
    long double CPlayerDB::GetPvPPoint()
    {
        using org_ptr = long double (WINAPIV*)(struct CPlayerDB*);
        return (org_ptr(0x140077f70L))(this);
    };
    unsigned int CPlayerDB::GetPvpRank()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CPlayerDB*);
        return (org_ptr(0x1402b63e0L))(this);
    };
    int CPlayerDB::GetRaceCode()
    {
        using org_ptr = int (WINAPIV*)(struct CPlayerDB*);
        return (org_ptr(0x140034830L))(this);
    };
    int CPlayerDB::GetRaceSexCode()
    {
        using org_ptr = int (WINAPIV*)(struct CPlayerDB*);
        return (org_ptr(0x1400790f0L))(this);
    };
    char CPlayerDB::GetResBufferNum()
    {
        using org_ptr = char (WINAPIV*)(struct CPlayerDB*);
        return (org_ptr(0x14010bdd0L))(this);
    };
    int CPlayerDB::GetSP()
    {
        using org_ptr = int (WINAPIV*)(struct CPlayerDB*);
        return (org_ptr(0x140034890L))(this);
    };
    char* CPlayerDB::GetTrunkPasswdW()
    {
        using org_ptr = char* (WINAPIV*)(struct CPlayerDB*);
        return (org_ptr(0x1400fc2d0L))(this);
    };
    char CPlayerDB::GetTrunkSlotNum()
    {
        using org_ptr = char (WINAPIV*)(struct CPlayerDB*);
        return (org_ptr(0x1400c2c90L))(this);
    };
    char CPlayerDB::GetTrunkSlotRace(unsigned int dwItemSerial)
    {
        using org_ptr = char (WINAPIV*)(struct CPlayerDB*, unsigned int);
        return (org_ptr(0x14010c460L))(this, dwItemSerial);
    };
    char CPlayerDB::GetUseSlot()
    {
        using org_ptr = char (WINAPIV*)(struct CPlayerDB*);
        return (org_ptr(0x1400d3e50L))(this);
    };
    void CPlayerDB::InitAlterMastery()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayerDB*);
        (org_ptr(0x14007db10L))(this);
    };
    void CPlayerDB::InitClass()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayerDB*);
        (org_ptr(0x14010b7b0L))(this);
    };
    void CPlayerDB::InitPlayerDB(struct CPlayer* pThis)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayerDB*, struct CPlayer*);
        (org_ptr(0x140108b60L))(this, pThis);
    };
    void CPlayerDB::InitResBuffer()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayerDB*);
        (org_ptr(0x14010be50L))(this);
    };
    bool CPlayerDB::IsActableClassSkill(char* pszSkillCode, int* pnClassGrade)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayerDB*, char*, int*);
        return (org_ptr(0x14010bf40L))(this, pszSkillCode, pnClassGrade);
    };
    bool CPlayerDB::IsClassChangeableLv()
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayerDB*);
        return (org_ptr(0x14010bed0L))(this);
    };
    void CPlayerDB::PopLink(int nLinkIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayerDB*, int);
        (org_ptr(0x14010b900L))(this, nLinkIndex);
    };
    bool CPlayerDB::PushLink(int nLinkIndex, uint16_t wSerail, bool bInit)
    {
        using org_ptr = bool (WINAPIV*)(struct CPlayerDB*, int, uint16_t, bool);
        return (org_ptr(0x14010b830L))(this, nLinkIndex, wSerail, bInit);
    };
    void CPlayerDB::SelectClass(char byHistoryRecordNum, struct _class_fld* pSelectClass)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayerDB*, char, struct _class_fld*);
        (org_ptr(0x14010b700L))(this, byHistoryRecordNum, pSelectClass);
    };
    void CPlayerDB::SetBagNum(char byNum)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayerDB*, char);
        (org_ptr(0x1400b8590L))(this, byNum);
    };
    void CPlayerDB::SetClassInGuild(char byClassInGuild)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayerDB*, char);
        (org_ptr(0x1400ad320L))(this, byClassInGuild);
    };
    void CPlayerDB::SetCurPos(float* fPos)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayerDB*, float*);
        (org_ptr(0x140079ee0L))(this, fPos);
    };
    void CPlayerDB::SetDP(unsigned int dwDP)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayerDB*, unsigned int);
        (org_ptr(0x14007d9d0L))(this, dwDP);
    };
    void CPlayerDB::SetDalant(unsigned int dwDt)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayerDB*, unsigned int);
        (org_ptr(0x14007c270L))(this, dwDt);
    };
    void CPlayerDB::SetExp(long double dExp)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayerDB*, long double);
        (org_ptr(0x14007d6c0L))(this, dExp);
    };
    void CPlayerDB::SetFP(unsigned int dwFP)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayerDB*, unsigned int);
        (org_ptr(0x14007d990L))(this, dwFP);
    };
    void CPlayerDB::SetGold(unsigned int dwGold)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayerDB*, unsigned int);
        (org_ptr(0x14007c290L))(this, dwGold);
    };
    void CPlayerDB::SetHP(unsigned int dwHP)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayerDB*, unsigned int);
        (org_ptr(0x14007d970L))(this, dwHP);
    };
    void CPlayerDB::SetHaveBoxOfAMP(bool bFlag)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayerDB*, bool);
        (org_ptr(0x1402e1c40L))(this, bFlag);
    };
    void CPlayerDB::SetLevel(int nLv)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayerDB*, int);
        (org_ptr(0x14007c250L))(this, nLv);
    };
    void CPlayerDB::SetLossExp(long double dLossExp)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayerDB*, long double);
        (org_ptr(0x14007a560L))(this, dLossExp);
    };
    void CPlayerDB::SetMapCode(char byCode)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayerDB*, char);
        (org_ptr(0x140079ec0L))(this, byCode);
    };
    void CPlayerDB::SetMaxLevel(int nLv)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayerDB*, int);
        (org_ptr(0x1400c2cf0L))(this, nLv);
    };
    void CPlayerDB::SetPvPPoint(long double dPoint)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayerDB*, long double);
        (org_ptr(0x14007d9f0L))(this, dPoint);
    };
    void CPlayerDB::SetSP(unsigned int dwSP)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayerDB*, unsigned int);
        (org_ptr(0x14007d9b0L))(this, dwSP);
    };
    void CPlayerDB::SubTrunkDalant(unsigned int dwSub)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayerDB*, unsigned int);
        (org_ptr(0x14010c2a0L))(this, dwSub);
    };
    void CPlayerDB::SubTrunkGold(unsigned int dwSub)
    {
        using org_ptr = void (WINAPIV*)(struct CPlayerDB*, unsigned int);
        (org_ptr(0x14010c3d0L))(this, dwSub);
    };
    CPlayerDB::~CPlayerDB()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayerDB*);
        (org_ptr(0x140108aa0L))(this);
    };
    void CPlayerDB::dtor_CPlayerDB()
    {
        using org_ptr = void (WINAPIV*)(struct CPlayerDB*);
        (org_ptr(0x140108aa0L))(this);
    };
END_ATF_NAMESPACE
