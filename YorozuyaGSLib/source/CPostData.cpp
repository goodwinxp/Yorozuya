#include <CPostData.hpp>


START_ATF_NAMESPACE
    CPostData::CPostData()
    {
        using org_ptr = void (WINAPIV*)(struct CPostData*);
        (org_ptr(0x140322720L))(this);
    };
    void CPostData::ctor_CPostData()
    {
        using org_ptr = void (WINAPIV*)(struct CPostData*);
        (org_ptr(0x140322720L))(this);
    };
    char CPostData::GetState()
    {
        using org_ptr = char (WINAPIV*)(struct CPostData*);
        return (org_ptr(0x140322ca0L))(this);
    };
    void CPostData::Init()
    {
        using org_ptr = void (WINAPIV*)(struct CPostData*);
        (org_ptr(0x140322790L))(this);
    };
    void CPostData::SetPostContent(char* wszContent)
    {
        using org_ptr = void (WINAPIV*)(struct CPostData*, char*);
        (org_ptr(0x140322c10L))(this, wszContent);
    };
    void CPostData::SetPostData(int nNumber, unsigned int dwSenderSerial, char* wszSendName, char* wszRecvName, char* wszTitle, struct _INVENKEY Key, uint64_t dwDur, unsigned int dwUpt, unsigned int dwGold, unsigned int dwPSSerial, char bySendRace, char bySenderDgr)
    {
        using org_ptr = void (WINAPIV*)(struct CPostData*, int, unsigned int, char*, char*, char*, struct _INVENKEY, uint64_t, unsigned int, unsigned int, unsigned int, char, char);
        (org_ptr(0x1403228d0L))(this, nNumber, dwSenderSerial, wszSendName, wszRecvName, wszTitle, Key, dwDur, dwUpt, dwGold, dwPSSerial, bySendRace, bySenderDgr);
    };
    void CPostData::SetPostItemSerial(uint64_t lnUID)
    {
        using org_ptr = void (WINAPIV*)(struct CPostData*, uint64_t);
        (org_ptr(0x140324050L))(this, lnUID);
    };
    void CPostData::SetPostTitleData(int nNumber, unsigned int dwPSSerial, char byState, char* wszSendName, char* wszTitle, struct _INVENKEY Key, uint64_t dwDur, unsigned int dwUpt, unsigned int dwGold, bool bUpdateIndex)
    {
        using org_ptr = void (WINAPIV*)(struct CPostData*, int, unsigned int, char, char*, char*, struct _INVENKEY, uint64_t, unsigned int, unsigned int, bool);
        (org_ptr(0x140322b10L))(this, nNumber, dwPSSerial, byState, wszSendName, wszTitle, Key, dwDur, dwUpt, dwGold, bUpdateIndex);
    };
    void CPostData::SetReturnPostData(char byErrCode, unsigned int dwPostSerial, char* wszRecvName, char* wszTitle, char* wszContent, struct _INVENKEY Key, uint64_t dwDur, unsigned int dwUpt, unsigned int dwGold)
    {
        using org_ptr = void (WINAPIV*)(struct CPostData*, char, unsigned int, char*, char*, char*, struct _INVENKEY, uint64_t, unsigned int, unsigned int);
        (org_ptr(0x140322a10L))(this, byErrCode, dwPostSerial, wszRecvName, wszTitle, wszContent, Key, dwDur, dwUpt, dwGold);
    };
    void CPostData::SetState(char byState)
    {
        using org_ptr = void (WINAPIV*)(struct CPostData*, char);
        (org_ptr(0x140322c80L))(this, byState);
    };
    CPostData::~CPostData()
    {
        using org_ptr = void (WINAPIV*)(struct CPostData*);
        (org_ptr(0x140322780L))(this);
    };
    void CPostData::dtor_CPostData()
    {
        using org_ptr = void (WINAPIV*)(struct CPostData*);
        (org_ptr(0x140322780L))(this);
    };
END_ATF_NAMESPACE
