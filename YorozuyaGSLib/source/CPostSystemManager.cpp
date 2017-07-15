#include <CPostSystemManager.hpp>


START_ATF_NAMESPACE
    CPostSystemManager::CPostSystemManager()
    {
        using org_ptr = void (WINAPIV*)(struct CPostSystemManager*);
        (org_ptr(0x140324080L))(this);
    };
    void CPostSystemManager::ctor_CPostSystemManager()
    {
        using org_ptr = void (WINAPIV*)(struct CPostSystemManager*);
        (org_ptr(0x140324080L))(this);
    };
    char CPostSystemManager::CheckRegister(struct CPlayer* pOne, struct _STORAGE_POS_INDIV* pItemInfo, unsigned int dwGold, struct _STORAGE_LIST::_db_con** pItem)
    {
        using org_ptr = char (WINAPIV*)(struct CPostSystemManager*, struct CPlayer*, struct _STORAGE_POS_INDIV*, unsigned int, struct _STORAGE_LIST::_db_con**);
        return (org_ptr(0x140325a50L))(this, pOne, pItemInfo, dwGold, pItem);
    };
    void CPostSystemManager::CompletePostReceiverCheck(char* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CPostSystemManager*, char*);
        (org_ptr(0x1403267d0L))(this, pData);
    };
    void CPostSystemManager::CompleteRegist(char* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CPostSystemManager*, char*);
        (org_ptr(0x140325db0L))(this, pData);
    };
    void CPostSystemManager::CompleteSend(char* pData)
    {
        using org_ptr = void (WINAPIV*)(struct CPostSystemManager*, char*);
        (org_ptr(0x1403261a0L))(this, pData);
    };
    void CPostSystemManager::Destroy()
    {
        using org_ptr = void (WINAPIV*)();
        (org_ptr(0x140326f00L))();
    };
    bool CPostSystemManager::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct CPostSystemManager*);
        return (org_ptr(0x140324430L))(this);
    };
    bool CPostSystemManager::InitLogger()
    {
        using org_ptr = bool (WINAPIV*)(struct CPostSystemManager*);
        return (org_ptr(0x1403245f0L))(this);
    };
    bool CPostSystemManager::InsertDefaultPSRecord()
    {
        using org_ptr = bool (WINAPIV*)(struct CPostSystemManager*);
        return (org_ptr(0x140325190L))(this);
    };
    struct CPostSystemManager* CPostSystemManager::Instace()
    {
        using org_ptr = struct CPostSystemManager* (WINAPIV*)();
        return (org_ptr(0x140326e40L))();
    };
    bool CPostSystemManager::Load()
    {
        using org_ptr = bool (WINAPIV*)(struct CPostSystemManager*);
        return (org_ptr(0x1403248a0L))(this);
    };
    void CPostSystemManager::Log(char* fmt)
    {
        using org_ptr = void (WINAPIV*)(struct CPostSystemManager*, char*);
        (org_ptr(0x140324780L))(this, fmt);
    };
    void CPostSystemManager::Log(wchar_t* fmt)
    {
        using org_ptr = void (WINAPIV*)(struct CPostSystemManager*, wchar_t*);
        (org_ptr(0x140324810L))(this, fmt);
    };
    void CPostSystemManager::Loop()
    {
        using org_ptr = void (WINAPIV*)(struct CPostSystemManager*);
        (org_ptr(0x140324910L))(this);
    };
    char CPostSystemManager::PostReceiverCheck(char* pData)
    {
        using org_ptr = char (WINAPIV*)(struct CPostSystemManager*, char*);
        return (org_ptr(0x140326520L))(this, pData);
    };
    bool CPostSystemManager::PostRegistryLoad()
    {
        using org_ptr = bool (WINAPIV*)(struct CPostSystemManager*);
        return (org_ptr(0x140324f30L))(this);
    };
    char CPostSystemManager::PostSend(char* pData)
    {
        using org_ptr = char (WINAPIV*)(struct CPostSystemManager*, char*);
        return (org_ptr(0x140325ef0L))(this, pData);
    };
    bool CPostSystemManager::PostSendRequest(struct CPlayer* pOne, char* wszRecvName, char* wszTitle, char* wszContent, struct _STORAGE_POS_INDIV* pItemInfo, unsigned int dwGold, char byRace)
    {
        using org_ptr = bool (WINAPIV*)(struct CPostSystemManager*, struct CPlayer*, char*, char*, char*, struct _STORAGE_POS_INDIV*, unsigned int, char);
        return (org_ptr(0x1403252a0L))(this, pOne, wszRecvName, wszTitle, wszContent, pItemInfo, dwGold, byRace);
    };
    void CPostSystemManager::SetNextWriteTime()
    {
        using org_ptr = void (WINAPIV*)(struct CPostSystemManager*);
        (org_ptr(0x140326f80L))(this);
    };
    bool CPostSystemManager::UpdateDisappearOwnerRecord()
    {
        using org_ptr = bool (WINAPIV*)(struct CPostSystemManager*);
        return (org_ptr(0x140325240L))(this);
    };
    char CPostSystemManager::UpdateRegist(char* pData)
    {
        using org_ptr = char (WINAPIV*)(struct CPostSystemManager*, char*);
        return (org_ptr(0x140325c20L))(this, pData);
    };
    CPostSystemManager::~CPostSystemManager()
    {
        using org_ptr = void (WINAPIV*)(struct CPostSystemManager*);
        (org_ptr(0x140324210L))(this);
    };
    void CPostSystemManager::dtor_CPostSystemManager()
    {
        using org_ptr = void (WINAPIV*)(struct CPostSystemManager*);
        (org_ptr(0x140324210L))(this);
    };
END_ATF_NAMESPACE
