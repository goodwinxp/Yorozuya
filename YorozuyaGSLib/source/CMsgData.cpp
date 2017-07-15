#include <CMsgData.hpp>


START_ATF_NAMESPACE
    CMsgData::CMsgData(int nObjNum)
    {
        using org_ptr = void (WINAPIV*)(struct CMsgData*, int);
        (org_ptr(0x1404377d0L))(this, nObjNum);
    };
    void CMsgData::ctor_CMsgData(int nObjNum)
    {
        using org_ptr = void (WINAPIV*)(struct CMsgData*, int);
        (org_ptr(0x1404377d0L))(this, nObjNum);
    };
    CMsgData::CMsgData()
    {
        using org_ptr = void (WINAPIV*)(struct CMsgData*);
        (org_ptr(0x1404379c0L))(this);
    };
    void CMsgData::ctor_CMsgData()
    {
        using org_ptr = void (WINAPIV*)(struct CMsgData*);
        (org_ptr(0x1404379c0L))(this);
    };
    void CMsgData::Init(int nObjNum)
    {
        using org_ptr = void (WINAPIV*)(struct CMsgData*, int);
        (org_ptr(0x140437b80L))(this, nObjNum);
    };
    bool CMsgData::PackingMsg(unsigned int dwMessage, unsigned int dwKey1, unsigned int dwKey2, unsigned int dwKey3)
    {
        using org_ptr = bool (WINAPIV*)(struct CMsgData*, unsigned int, unsigned int, unsigned int, unsigned int);
        return (org_ptr(0x1404380f0L))(this, dwMessage, dwKey1, dwKey2, dwKey3);
    };
    struct _message* CMsgData::PopEmptyBuf()
    {
        using org_ptr = struct _message* (WINAPIV*)(struct CMsgData*);
        return (org_ptr(0x140438380L))(this);
    };
    struct _message* CMsgData::PopMsg()
    {
        using org_ptr = struct _message* (WINAPIV*)(struct CMsgData*);
        return (org_ptr(0x140438220L))(this);
    };
    void CMsgData::ProcessMessage(struct _message* pMsg)
    {
        using org_ptr = void (WINAPIV*)(struct CMsgData*, struct _message*);
        (org_ptr(0x1404387d0L))(this, pMsg);
    };
    void CMsgData::PumpMsgList()
    {
        using org_ptr = void (WINAPIV*)(struct CMsgData*);
        (org_ptr(0x140438040L))(this);
    };
    void CMsgData::PushEmptyBuf(struct _message* pMsg)
    {
        using org_ptr = void (WINAPIV*)(struct CMsgData*, struct _message*);
        (org_ptr(0x1404382e0L))(this, pMsg);
    };
    void CMsgData::PushMsg(struct _message* pMsg)
    {
        using org_ptr = void (WINAPIV*)(struct CMsgData*, struct _message*);
        (org_ptr(0x140438180L))(this, pMsg);
    };
    CMsgData::~CMsgData()
    {
        using org_ptr = void (WINAPIV*)(struct CMsgData*);
        (org_ptr(0x140437e20L))(this);
    };
    void CMsgData::dtor_CMsgData()
    {
        using org_ptr = void (WINAPIV*)(struct CMsgData*);
        (org_ptr(0x140437e20L))(this);
    };
END_ATF_NAMESPACE
