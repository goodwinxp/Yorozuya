#include <LtdWriter.hpp>


START_ATF_NAMESPACE
    bool LtdWriter::InitLogDB(char* szDBName, char* szIP)
    {
        using org_ptr = bool (WINAPIV*)(struct LtdWriter*, char*, char*);
        return (org_ptr(0x14024a850L))(this, szDBName, szIP);
    };
    LtdWriter::LtdWriter()
    {
        using org_ptr = void (WINAPIV*)(struct LtdWriter*);
        (org_ptr(0x14024a130L))(this);
    };
    void LtdWriter::ctor_LtdWriter()
    {
        using org_ptr = void (WINAPIV*)(struct LtdWriter*);
        (org_ptr(0x14024a130L))(this);
    };
    struct LtdWriter* LtdWriter::PtrInstance()
    {
        using org_ptr = struct LtdWriter* (WINAPIV*)();
        return (org_ptr(0x14024a700L))();
    };
    void LtdWriter::PushLog(char* byLogType, struct _LTD_PARAM* pParam)
    {
        using org_ptr = void (WINAPIV*)(struct LtdWriter*, char*, struct _LTD_PARAM*);
        (org_ptr(0x14024ad10L))(this, byLogType, pParam);
    };
    void LtdWriter::Release()
    {
        using org_ptr = void (WINAPIV*)(struct LtdWriter*);
        (org_ptr(0x14024a7c0L))(this);
    };
    void LtdWriter::_CreateTable()
    {
        using org_ptr = void (WINAPIV*)(struct LtdWriter*);
        (org_ptr(0x14024a3d0L))(this);
    };
    int LtdWriter::_GetLocalDate()
    {
        using org_ptr = int (WINAPIV*)(struct LtdWriter*);
        return (org_ptr(0x14024a300L))(this);
    };
    void LtdWriter::_PushItemCut(char bySubLogType, struct _LTD_PARAM* pParam, struct _LTD* pl)
    {
        using org_ptr = void (WINAPIV*)(struct LtdWriter*, char, struct _LTD_PARAM*, struct _LTD*);
        (org_ptr(0x14024aeb0L))(this, bySubLogType, pParam, pl);
    };
    void LtdWriter::_PushItemMove(char bySubLogType, struct _LTD_PARAM* pParam, struct _LTD* pl)
    {
        using org_ptr = void (WINAPIV*)(struct LtdWriter*, char, struct _LTD_PARAM*, struct _LTD*);
        (org_ptr(0x14024b300L))(this, bySubLogType, pParam, pl);
    };
    void LtdWriter::_SetExpend(char* pszExpend, struct _LTD_EXPEND* pe)
    {
        using org_ptr = void (WINAPIV*)(struct LtdWriter*, char*, struct _LTD_EXPEND*);
        (org_ptr(0x14024c110L))(this, pszExpend, pe);
    };
    void LtdWriter::_SetItemInfo(char byIndex, struct _STORAGE_LIST::_db_con* pItem, char byOverlapNum, struct _LTD_ITEMINFO* pi, int nMoveType)
    {
        using org_ptr = void (WINAPIV*)(struct LtdWriter*, char, struct _STORAGE_LIST::_db_con*, char, struct _LTD_ITEMINFO*, int);
        (org_ptr(0x14024b760L))(this, byIndex, pItem, byOverlapNum, pi, nMoveType);
    };
    void LtdWriter::_SetLtd(struct CUserDB* pUserDB, struct _LTD* pl, bool bItemInfo, bool bExpend)
    {
        using org_ptr = void (WINAPIV*)(struct LtdWriter*, struct CUserDB*, struct _LTD*, bool, bool);
        (org_ptr(0x14024c0a0L))(this, pUserDB, pl, bItemInfo, bExpend);
    };
    void LtdWriter::_WriteDB(unsigned int dwIndex)
    {
        using org_ptr = void (WINAPIV*)(struct LtdWriter*, unsigned int);
        (org_ptr(0x14024abe0L))(this, dwIndex);
    };
    void LtdWriter::s_Working(void* pv)
    {
        using org_ptr = void (WINAPIV*)(void*);
        (org_ptr(0x14024a5d0L))(pv);
    };
    bool LtdWriter::start()
    {
        using org_ptr = bool (WINAPIV*)(struct LtdWriter*);
        return (org_ptr(0x14024a9e0L))(this);
    };
    void LtdWriter::stop()
    {
        using org_ptr = void (WINAPIV*)(struct LtdWriter*);
        (org_ptr(0x14024ab90L))(this);
    };
    LtdWriter::~LtdWriter()
    {
        using org_ptr = void (WINAPIV*)(struct LtdWriter*);
        (org_ptr(0x14024a230L))(this);
    };
    void LtdWriter::dtor_LtdWriter()
    {
        using org_ptr = void (WINAPIV*)(struct LtdWriter*);
        (org_ptr(0x14024a230L))(this);
    };
END_ATF_NAMESPACE
