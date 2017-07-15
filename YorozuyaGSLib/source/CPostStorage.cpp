#include <CPostStorage.hpp>


START_ATF_NAMESPACE
    int CPostStorage::AddNewPost(unsigned int dwSenderSerial, char* wszSendName, char* wszRecvName, char* wszTitle, char* wszContent, struct _INVENKEY Key, uint64_t dwDur, unsigned int dwUpt, unsigned int dwGold, unsigned int dwPSSerial, char byState, int* nNumber, uint64_t lnUID)
    {
        using org_ptr = int (WINAPIV*)(struct CPostStorage*, unsigned int, char*, char*, char*, char*, struct _INVENKEY, uint64_t, unsigned int, unsigned int, unsigned int, char, int*, uint64_t);
        return (org_ptr(0x140322fd0L))(this, dwSenderSerial, wszSendName, wszRecvName, wszTitle, wszContent, Key, dwDur, dwUpt, dwGold, dwPSSerial, byState, nNumber, lnUID);
    };
    int CPostStorage::AddPostTitleData(int nIndex, unsigned int dwSerial, char byState, char* wszSendName, char* wszTitle, struct _INVENKEY Key, uint64_t dwDur, unsigned int dwUpt, unsigned int dwGold, uint64_t lnUID)
    {
        using org_ptr = int (WINAPIV*)(struct CPostStorage*, int, unsigned int, char, char*, char*, struct _INVENKEY, uint64_t, unsigned int, unsigned int, uint64_t);
        return (org_ptr(0x140323350L))(this, nIndex, dwSerial, byState, wszSendName, wszTitle, Key, dwDur, dwUpt, dwGold, lnUID);
    };
    bool CPostStorage::AddPostTitleDataByStorageIndex(int nStorageIndex, int nNumber, unsigned int dwSerial, char byState, char* wszSendName, char* wszTitle, struct _INVENKEY Key, uint64_t dwDur, unsigned int dwUpt, unsigned int dwGold, uint64_t lnUID)
    {
        using org_ptr = bool (WINAPIV*)(struct CPostStorage*, int, int, unsigned int, char, char*, char*, struct _INVENKEY, uint64_t, unsigned int, unsigned int, uint64_t);
        return (org_ptr(0x140323200L))(this, nStorageIndex, nNumber, dwSerial, byState, wszSendName, wszTitle, Key, dwDur, dwUpt, dwGold, lnUID);
    };
    CPostStorage::CPostStorage()
    {
        using org_ptr = void (WINAPIV*)(struct CPostStorage*);
        (org_ptr(0x140322e20L))(this);
    };
    void CPostStorage::ctor_CPostStorage()
    {
        using org_ptr = void (WINAPIV*)(struct CPostStorage*);
        (org_ptr(0x140322e20L))(this);
    };
    void CPostStorage::DelPostData(unsigned int dwIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPostStorage*, unsigned int);
        (org_ptr(0x1403236b0L))(this, dwIndex);
    };
    struct CPostData* CPostStorage::GetPostDataFromInx(int nIndex)
    {
        using org_ptr = struct CPostData* (WINAPIV*)(struct CPostStorage*, int);
        return (org_ptr(0x1403235c0L))(this, nIndex);
    };
    struct CPostData* CPostStorage::GetPostDataFromSerial(unsigned int dwPostSerial)
    {
        using org_ptr = struct CPostData* (WINAPIV*)(struct CPostStorage*, unsigned int);
        return (org_ptr(0x140323620L))(this, dwPostSerial);
    };
    int CPostStorage::GetSize()
    {
        using org_ptr = int (WINAPIV*)(struct CPostStorage*);
        return (org_ptr(0x140322f20L))(this);
    };
    void CPostStorage::Init()
    {
        using org_ptr = void (WINAPIV*)(struct CPostStorage*);
        (org_ptr(0x140322f40L))(this);
    };
    bool CPostStorage::IsContentLoad(unsigned int dwIndex)
    {
        using org_ptr = bool (WINAPIV*)(struct CPostStorage*, unsigned int);
        return (org_ptr(0x140323730L))(this, dwIndex);
    };
    int CPostStorage::SetPostContent(unsigned int dwSerial, char* wszContent)
    {
        using org_ptr = int (WINAPIV*)(struct CPostStorage*, unsigned int, char*);
        return (org_ptr(0x140323510L))(this, dwSerial, wszContent);
    };
    CPostStorage::~CPostStorage()
    {
        using org_ptr = void (WINAPIV*)(struct CPostStorage*);
        (org_ptr(0x140322ed0L))(this);
    };
    void CPostStorage::dtor_CPostStorage()
    {
        using org_ptr = void (WINAPIV*)(struct CPostStorage*);
        (org_ptr(0x140322ed0L))(this);
    };
END_ATF_NAMESPACE
