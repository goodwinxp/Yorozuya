#include <_STORAGE_LIST.hpp>


START_ATF_NAMESPACE
    bool _STORAGE_LIST::AlterCurDur(int n, int nAlter, uint64_t* pdwLeftDur)
    {
        using org_ptr = bool (WINAPIV*)(struct _STORAGE_LIST*, int, int, uint64_t*);
        return (org_ptr(0x14010f090L))(this, n, nAlter, pdwLeftDur);
    };
    bool _STORAGE_LIST::EmptyCon(int n)
    {
        using org_ptr = bool (WINAPIV*)(struct _STORAGE_LIST*, int);
        return (org_ptr(0x14010eeb0L))(this, n);
    };
    int _STORAGE_LIST::GetIndexEmptyCon()
    {
        using org_ptr = int (WINAPIV*)(struct _STORAGE_LIST*);
        return (org_ptr(0x14010ecf0L))(this);
    };
    int _STORAGE_LIST::GetIndexFromSerial(uint16_t wSerial)
    {
        using org_ptr = int (WINAPIV*)(struct _STORAGE_LIST*, uint16_t);
        return (org_ptr(0x14010ed70L))(this, wSerial);
    };
    int _STORAGE_LIST::GetNumEmptyCon()
    {
        using org_ptr = int (WINAPIV*)(struct _STORAGE_LIST*);
        return (org_ptr(0x14010ebd0L))(this);
    };
    int _STORAGE_LIST::GetNumUseCon()
    {
        using org_ptr = int (WINAPIV*)(struct _STORAGE_LIST*);
        return (org_ptr(0x14010ec60L))(this);
    };
    struct _STORAGE_LIST::_db_con* _STORAGE_LIST::GetPtrFromItemCode(char* pwszItemCode)
    {
        using org_ptr = struct _STORAGE_LIST::_db_con* (WINAPIV*)(struct _STORAGE_LIST*, char*);
        return (org_ptr(0x14010f6d0L))(this, pwszItemCode);
    };
    struct _STORAGE_LIST::_db_con* _STORAGE_LIST::GetPtrFromItemInfo(char byTableCode, uint16_t ItemIndex)
    {
        using org_ptr = struct _STORAGE_LIST::_db_con* (WINAPIV*)(struct _STORAGE_LIST*, char, uint16_t);
        return (org_ptr(0x14010f530L))(this, byTableCode, ItemIndex);
    };
    struct _STORAGE_LIST::_db_con* _STORAGE_LIST::GetPtrFromSerial(uint16_t wSerial)
    {
        using org_ptr = struct _STORAGE_LIST::_db_con* (WINAPIV*)(struct _STORAGE_LIST*, uint16_t);
        return (org_ptr(0x14010ee40L))(this, wSerial);
    };
    unsigned int _STORAGE_LIST::GetRemainLendTime(int n, int tmCur)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct _STORAGE_LIST*, int, int);
        return (org_ptr(0x14010f640L))(this, n, tmCur);
    };
    bool _STORAGE_LIST::GradeDown(int n, unsigned int dwUptInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct _STORAGE_LIST*, int, unsigned int);
        return (org_ptr(0x14010f310L))(this, n, dwUptInfo);
    };
    bool _STORAGE_LIST::GradeUp(int n, unsigned int dwUptInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct _STORAGE_LIST*, int, unsigned int);
        return (org_ptr(0x14010f2d0L))(this, n, dwUptInfo);
    };
    void _STORAGE_LIST::SetAllEmpty()
    {
        using org_ptr = void (WINAPIV*)(struct _STORAGE_LIST*);
        (org_ptr(0x14010eb60L))(this);
    };
    char _STORAGE_LIST::SetClientIndexFromSerial(uint16_t wSerial, char byClientIndex, char* pbyoutOldClientIndex)
    {
        using org_ptr = char (WINAPIV*)(struct _STORAGE_LIST*, uint16_t, char, char*);
        return (org_ptr(0x14010f3f0L))(this, wSerial, byClientIndex, pbyoutOldClientIndex);
    };
    bool _STORAGE_LIST::SetGrade(int n, char byLv, unsigned int dwUptInfo)
    {
        using org_ptr = bool (WINAPIV*)(struct _STORAGE_LIST*, int, char, unsigned int);
        return (org_ptr(0x14010f350L))(this, n, byLv, dwUptInfo);
    };
    void _STORAGE_LIST::SetLimCurDur(int n, unsigned int dwSetDur)
    {
        using org_ptr = void (WINAPIV*)(struct _STORAGE_LIST*, int, unsigned int);
        (org_ptr(0x14010f290L))(this, n, dwSetDur);
    };
    void _STORAGE_LIST::SetLock(int n, bool bLock)
    {
        using org_ptr = void (WINAPIV*)(struct _STORAGE_LIST*, int, bool);
        (org_ptr(0x14010f390L))(this, n, bLock);
    };
    void _STORAGE_LIST::SetMemory(struct _STORAGE_LIST::_db_con* pList, int nListName, int nListNum, int nUsedNum)
    {
        using org_ptr = void (WINAPIV*)(struct _STORAGE_LIST*, struct _STORAGE_LIST::_db_con*, int, int, int);
        (org_ptr(0x14010ea40L))(this, pList, nListName, nListNum, nUsedNum);
    };
    bool _STORAGE_LIST::SetUseListNum(int nUsedNum)
    {
        using org_ptr = bool (WINAPIV*)(struct _STORAGE_LIST*, int);
        return (org_ptr(0x14010eb20L))(this, nUsedNum);
    };
    unsigned int _STORAGE_LIST::TransInCon(struct _STORAGE_LIST::_storage_con* pCon)
    {
        using org_ptr = unsigned int (WINAPIV*)(struct _STORAGE_LIST*, struct _STORAGE_LIST::_storage_con*);
        return (org_ptr(0x14010ef40L))(this, pCon);
    };
    bool _STORAGE_LIST::UpdateCurDur(int n, int nUpdate)
    {
        using org_ptr = bool (WINAPIV*)(struct _STORAGE_LIST*, int, int);
        return (org_ptr(0x14010f4c0L))(this, n, nUpdate);
    };
    _STORAGE_LIST::_STORAGE_LIST()
    {
        using org_ptr = void (WINAPIV*)(struct _STORAGE_LIST*);
        (org_ptr(0x14010ea10L))(this);
    };
    void _STORAGE_LIST::ctor__STORAGE_LIST()
    {
        using org_ptr = void (WINAPIV*)(struct _STORAGE_LIST*);
        (org_ptr(0x14010ea10L))(this);
    };
    void _STORAGE_LIST::_storage_con::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _STORAGE_LIST::_storage_con*);
        (org_ptr(0x140208310L))(this);
    };
    _STORAGE_LIST::_storage_con::_storage_con(char byTableCode, uint16_t wItemIndex, unsigned int dwDur, unsigned int dwLv, uint16_t wSerial)
    {
        using org_ptr = void (WINAPIV*)(struct _STORAGE_LIST::_storage_con*, char, uint16_t, unsigned int, unsigned int, uint16_t);
        (org_ptr(0x140108200L))(this, byTableCode, wItemIndex, dwDur, dwLv, wSerial);
    };
    void _STORAGE_LIST::_storage_con::ctor__storage_con(char byTableCode, uint16_t wItemIndex, unsigned int dwDur, unsigned int dwLv, uint16_t wSerial)
    {
        using org_ptr = void (WINAPIV*)(struct _STORAGE_LIST::_storage_con*, char, uint16_t, unsigned int, unsigned int, uint16_t);
        (org_ptr(0x140108200L))(this, byTableCode, wItemIndex, dwDur, dwLv, wSerial);
    };
    _STORAGE_LIST::_storage_con::_storage_con()
    {
        using org_ptr = void (WINAPIV*)(struct _STORAGE_LIST::_storage_con*);
        (org_ptr(0x140098260L))(this);
    };
    void _STORAGE_LIST::_storage_con::ctor__storage_con()
    {
        using org_ptr = void (WINAPIV*)(struct _STORAGE_LIST::_storage_con*);
        (org_ptr(0x140098260L))(this);
    };
    void _STORAGE_LIST::_storage_con::empty()
    {
        using org_ptr = void (WINAPIV*)(struct _STORAGE_LIST::_storage_con*);
        (org_ptr(0x14010fb50L))(this);
    };
    void _STORAGE_LIST::_storage_con::lock(bool bLock)
    {
        using org_ptr = void (WINAPIV*)(struct _STORAGE_LIST::_storage_con*, bool);
        (org_ptr(0x140079090L))(this, bLock);
    };
    unsigned int _STORAGE_LIST::_db_con::CalcNewSerialNumber()
    {
        using org_ptr = unsigned int (WINAPIV*)();
        return (org_ptr(0x14010e1f0L))();
    };
    unsigned int _STORAGE_LIST::_db_con::GetSerialNumber()
    {
        using org_ptr = unsigned int (WINAPIV*)(struct _STORAGE_LIST::_db_con*);
        return (org_ptr(0x14010e1d0L))(this);
    };
    void _STORAGE_LIST::_db_con::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _STORAGE_LIST::_db_con*);
        (org_ptr(0x1402082b0L))(this);
    };
    void _STORAGE_LIST::_db_con::SetSerialNumber(unsigned int dwSN)
    {
        using org_ptr = void (WINAPIV*)(struct _STORAGE_LIST::_db_con*, unsigned int);
        (org_ptr(0x14010e160L))(this, dwSN);
    };
    _STORAGE_LIST::_db_con::_db_con()
    {
        using org_ptr = void (WINAPIV*)(struct _STORAGE_LIST::_db_con*);
        (org_ptr(0x1400981f0L))(this);
    };
    void _STORAGE_LIST::_db_con::ctor__db_con()
    {
        using org_ptr = void (WINAPIV*)(struct _STORAGE_LIST::_db_con*);
        (org_ptr(0x1400981f0L))(this);
    };
END_ATF_NAMESPACE
