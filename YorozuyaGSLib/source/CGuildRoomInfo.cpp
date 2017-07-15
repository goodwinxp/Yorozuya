#include <CGuildRoomInfo.hpp>


START_ATF_NAMESPACE
    CGuildRoomInfo::CGuildRoomInfo(struct CGuildRoomInfo* __that)
    {
        using org_ptr = void (WINAPIV*)(struct CGuildRoomInfo*, struct CGuildRoomInfo*);
        (org_ptr(0x1402eb8f0L))(this, __that);
    };
    void CGuildRoomInfo::ctor_CGuildRoomInfo(struct CGuildRoomInfo* __that)
    {
        using org_ptr = void (WINAPIV*)(struct CGuildRoomInfo*, struct CGuildRoomInfo*);
        (org_ptr(0x1402eb8f0L))(this, __that);
    };
    CGuildRoomInfo::CGuildRoomInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildRoomInfo*);
        (org_ptr(0x1402e5920L))(this);
    };
    void CGuildRoomInfo::ctor_CGuildRoomInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildRoomInfo*);
        (org_ptr(0x1402e5920L))(this);
    };
    unsigned int CGuildRoomInfo::GetGuildSerial()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct CGuildRoomInfo*);
        return (org_ptr(0x1402eb230L))(this);
    };
    struct CMapData* CGuildRoomInfo::GetMapData()
    {
        using org_ptr = struct CMapData* (WINAPIV*)(struct CGuildRoomInfo*);
        return (org_ptr(0x1402eb250L))(this);
    };
    uint16_t CGuildRoomInfo::GetMapLayer()
    {
        using org_ptr = uint16_t (WINAPIV*)(struct CGuildRoomInfo*);
        return (org_ptr(0x1402eb270L))(this);
    };
    bool CGuildRoomInfo::GetMapPos(float* pPos)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildRoomInfo*, float*);
        return (org_ptr(0x1402e6690L))(this, pPos);
    };
    int CGuildRoomInfo::GetRestTime()
    {
        using org_ptr = int (WINAPIV*)(struct CGuildRoomInfo*);
        return (org_ptr(0x1402e6820L))(this);
    };
    char CGuildRoomInfo::GetRoomType()
    {
        using org_ptr = char (WINAPIV*)(struct CGuildRoomInfo*);
        return (org_ptr(0x1402eb210L))(this);
    };
    bool CGuildRoomInfo::IsMemberIn(int n, unsigned int dwCharSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildRoomInfo*, int, unsigned int);
        return (org_ptr(0x1402e65b0L))(this, n, dwCharSerial);
    };
    bool CGuildRoomInfo::IsRent()
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildRoomInfo*);
        return (org_ptr(0x1402e6d10L))(this);
    };
    void CGuildRoomInfo::OutAllRoomMember()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildRoomInfo*);
        (org_ptr(0x1402e6000L))(this);
    };
    int CGuildRoomInfo::RoomIn(int n, unsigned int dwCharSerial)
    {
        using org_ptr = int (WINAPIV*)(struct CGuildRoomInfo*, int, unsigned int);
        return (org_ptr(0x1402e60f0L))(this, n, dwCharSerial);
    };
    int CGuildRoomInfo::RoomOut(int n, unsigned int dwCharSerial)
    {
        using org_ptr = int (WINAPIV*)(struct CGuildRoomInfo*, int, unsigned int);
        return (org_ptr(0x1402e6210L))(this, n, dwCharSerial);
    };
    void CGuildRoomInfo::RoomTimer()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildRoomInfo*);
        (org_ptr(0x1402e5f20L))(this);
    };
    void CGuildRoomInfo::Room_Initialize()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildRoomInfo*);
        (org_ptr(0x1402e59f0L))(this);
    };
    void CGuildRoomInfo::SendDQS_RoomInsert()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildRoomInfo*);
        (org_ptr(0x1402e66f0L))(this);
    };
    void CGuildRoomInfo::SendDQS_RoomUpdate()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildRoomInfo*);
        (org_ptr(0x1402e6790L))(this);
    };
    void CGuildRoomInfo::SendMsg_RoomTimeOver()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildRoomInfo*);
        (org_ptr(0x1402e6890L))(this);
    };
    bool CGuildRoomInfo::SetPlayerOut(int n, unsigned int dwCharSerial, int iMemberIdx)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildRoomInfo*, int, unsigned int, int);
        return (org_ptr(0x1402e6310L))(this, n, dwCharSerial, iMemberIdx);
    };
    bool CGuildRoomInfo::SetRoom(int iGuildInx, unsigned int dwGuildSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildRoomInfo*, int, unsigned int);
        return (org_ptr(0x1402e5b20L))(this, iGuildInx, dwGuildSerial);
    };
    void CGuildRoomInfo::SetRoomMapInfo(struct CMapData* pMap, uint16_t wMapLayer, char byRoomType, char byRace)
    {
        using org_ptr = void (WINAPIV*)(struct CGuildRoomInfo*, struct CMapData*, uint16_t, char, char);
        (org_ptr(0x1402e5a80L))(this, pMap, wMapLayer, byRoomType, byRace);
    };
    void CGuildRoomInfo::SetRoomTime()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildRoomInfo*);
        (org_ptr(0x1402e5da0L))(this);
    };
    void CGuildRoomInfo::SetRoomTime_Restore(struct tagTIMESTAMP_STRUCT ts)
    {
        using org_ptr = void (WINAPIV*)(struct CGuildRoomInfo*, struct tagTIMESTAMP_STRUCT);
        (org_ptr(0x1402e5e10L))(this, ts);
    };
    bool CGuildRoomInfo::SetRoom_Restore(int iGuildInx, unsigned int dwGuildSerial, struct tagTIMESTAMP_STRUCT ts)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildRoomInfo*, int, unsigned int, struct tagTIMESTAMP_STRUCT);
        return (org_ptr(0x1402e5c80L))(this, iGuildInx, dwGuildSerial, ts);
    };
    void CGuildRoomInfo::TimeOver()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildRoomInfo*);
        (org_ptr(0x1402e5f90L))(this);
    };
    CGuildRoomInfo::~CGuildRoomInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildRoomInfo*);
        (org_ptr(0x1402e59b0L))(this);
    };
    void CGuildRoomInfo::dtor_CGuildRoomInfo()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildRoomInfo*);
        (org_ptr(0x1402e59b0L))(this);
    };
END_ATF_NAMESPACE
