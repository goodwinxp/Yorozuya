#include <CGuildRoomSystem.hpp>


START_ATF_NAMESPACE
    CGuildRoomSystem::CGuildRoomSystem()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildRoomSystem*);
        (org_ptr(0x1402e9610L))(this);
    };
    void CGuildRoomSystem::ctor_CGuildRoomSystem()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildRoomSystem*);
        (org_ptr(0x1402e9610L))(this);
    };
    struct CGuildRoomSystem* CGuildRoomSystem::GetInstance()
    {
        using org_ptr = struct CGuildRoomSystem* (WINAPIV*)();
        return (org_ptr(0x14007a070L))();
    };
    struct CMapData* CGuildRoomSystem::GetMapData(char byRace, char byMapType)
    {
        using org_ptr = struct CMapData* (WINAPIV*)(struct CGuildRoomSystem*, char, char);
        return (org_ptr(0x1402ea9c0L))(this, byRace, byMapType);
    };
    bool CGuildRoomSystem::GetMapPos(unsigned int dwGuildSerial, float* pPos, struct CMapData* pMap, uint16_t* wMapLayer, char* byRoomType)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildRoomSystem*, unsigned int, float*, struct CMapData*, uint16_t*, char*);
        return (org_ptr(0x1402ea790L))(this, dwGuildSerial, pPos, pMap, wMapLayer, byRoomType);
    };
    bool CGuildRoomSystem::GetRestTime(unsigned int dwGuildSerial, int* tt)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildRoomSystem*, unsigned int, int*);
        return (org_ptr(0x1402eaa10L))(this, dwGuildSerial, tt);
    };
    int CGuildRoomSystem::GetRoomCountByType(char byRace, char byRoomType)
    {
        using org_ptr = int (WINAPIV*)(struct CGuildRoomSystem*, char, char);
        return (org_ptr(0x1402ea460L))(this, byRace, byRoomType);
    };
    char CGuildRoomSystem::GetRoomType(unsigned int dwGuildSerial)
    {
        using org_ptr = char (WINAPIV*)(struct CGuildRoomSystem*, unsigned int);
        return (org_ptr(0x1402eaae0L))(this, dwGuildSerial);
    };
    bool CGuildRoomSystem::Init()
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildRoomSystem*);
        return (org_ptr(0x1402e9a00L))(this);
    };
    bool CGuildRoomSystem::IsGuildRoomMemberIn(unsigned int dwGuildSerial, int n, unsigned int dwCharSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildRoomSystem*, unsigned int, int, unsigned int);
        return (org_ptr(0x1402eaba0L))(this, dwGuildSerial, n, dwCharSerial);
    };
    bool CGuildRoomSystem::IsRoomRented(unsigned int dwGuildSerial)
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildRoomSystem*, unsigned int);
        return (org_ptr(0x1402ea540L))(this, dwGuildSerial);
    };
    bool CGuildRoomSystem::Load_db()
    {
        using org_ptr = bool (WINAPIV*)(struct CGuildRoomSystem*);
        return (org_ptr(0x1402e9690L))(this);
    };
    char CGuildRoomSystem::RentRoom(char byRace, char byRoomType, int iGuildInx, unsigned int dwGuildSerial, struct tagTIMESTAMP_STRUCT* ts, bool bRestore)
    {
        using org_ptr = char (WINAPIV*)(struct CGuildRoomSystem*, char, char, int, unsigned int, struct tagTIMESTAMP_STRUCT*, bool);
        return (org_ptr(0x1402ea230L))(this, byRace, byRoomType, iGuildInx, dwGuildSerial, ts, bRestore);
    };
    void CGuildRoomSystem::RentRoomTimer()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildRoomSystem*);
        (org_ptr(0x1402ea1a0L))(this);
    };
    int CGuildRoomSystem::RoomIn(unsigned int dwGuildSerial, int n, unsigned int dwCharSerial)
    {
        using org_ptr = int (WINAPIV*)(struct CGuildRoomSystem*, unsigned int, int, unsigned int);
        return (org_ptr(0x1402ea5f0L))(this, dwGuildSerial, n, dwCharSerial);
    };
    int CGuildRoomSystem::RoomOut(unsigned int dwGuildSerial, int n, unsigned int dwCharSerial)
    {
        using org_ptr = int (WINAPIV*)(struct CGuildRoomSystem*, unsigned int, int, unsigned int);
        return (org_ptr(0x1402ea6c0L))(this, dwGuildSerial, n, dwCharSerial);
    };
    int CGuildRoomSystem::SetPlayerOut(unsigned int dwGuildSerial, int n, unsigned int dwCharSerial)
    {
        using org_ptr = int (WINAPIV*)(struct CGuildRoomSystem*, unsigned int, int, unsigned int);
        return (org_ptr(0x1402ea8d0L))(this, dwGuildSerial, n, dwCharSerial);
    };
    CGuildRoomSystem::~CGuildRoomSystem()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildRoomSystem*);
        (org_ptr(0x1402e9650L))(this);
    };
    void CGuildRoomSystem::dtor_CGuildRoomSystem()
    {
        using org_ptr = void (WINAPIV*)(struct CGuildRoomSystem*);
        (org_ptr(0x1402e9650L))(this);
    };
END_ATF_NAMESPACE
