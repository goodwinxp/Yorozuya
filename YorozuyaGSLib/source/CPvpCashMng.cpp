#include <CPvpCashMng.hpp>


START_ATF_NAMESPACE
    CPvpCashMng::CPvpCashMng()
    {
        using org_ptr = void (WINAPIV*)(struct CPvpCashMng*);
        (org_ptr(0x1403f6e20L))(this);
    };
    void CPvpCashMng::ctor_CPvpCashMng()
    {
        using org_ptr = void (WINAPIV*)(struct CPvpCashMng*);
        (org_ptr(0x1403f6e20L))(this);
    };
    int CPvpCashMng::GetMaxTempPoint(char nLv, bool bPremium)
    {
        using org_ptr = int (WINAPIV*)(struct CPvpCashMng*, char, bool);
        return (org_ptr(0x1403f6590L))(this, nLv, bPremium);
    };
    int CPvpCashMng::GetMinTempPoint(char nLv)
    {
        using org_ptr = int (WINAPIV*)(struct CPvpCashMng*, char);
        return (org_ptr(0x1403f6650L))(this, nLv);
    };
    int CPvpCashMng::GetMyClassVal(char* pClass)
    {
        using org_ptr = int (WINAPIV*)(struct CPvpCashMng*, char*);
        return (org_ptr(0x1403f64d0L))(this, pClass);
    };
    int CPvpCashMng::GetTalikNum()
    {
        using org_ptr = int (WINAPIV*)(struct CPvpCashMng*);
        return (org_ptr(0x1403f63d0L))(this);
    };
    int CPvpCashMng::GetTalikRecvrPoint(int i)
    {
        using org_ptr = int (WINAPIV*)(struct CPvpCashMng*, int);
        return (org_ptr(0x1403f63f0L))(this, i);
    };
    int CPvpCashMng::GetTalikRecvrPoint(char byTblCode, unsigned int dwIndex)
    {
        using org_ptr = int (WINAPIV*)(struct CPvpCashMng*, char, unsigned int);
        return (org_ptr(0x1403f6420L))(this, byTblCode, dwIndex);
    };
    struct CPvpCashMng* CPvpCashMng::Instance()
    {
        using org_ptr = struct CPvpCashMng* (WINAPIV*)();
        return (org_ptr(0x1403f5a10L))();
    };
    bool CPvpCashMng::IsTalikItem(char* strCode)
    {
        using org_ptr = bool (WINAPIV*)(struct CPvpCashMng*, char*);
        return (org_ptr(0x1403f66f0L))(this, strCode);
    };
    bool CPvpCashMng::LoadData()
    {
        using org_ptr = bool (WINAPIV*)(struct CPvpCashMng*);
        return (org_ptr(0x1403f5ea0L))(this);
    };
    bool CPvpCashMng::Parsing(char* szTitle, char* szItem, char** szBuff, int nInx, char byParseType)
    {
        using org_ptr = bool (WINAPIV*)(struct CPvpCashMng*, char*, char*, char**, int, char);
        return (org_ptr(0x1403f5c40L))(this, szTitle, szItem, szBuff, nInx, byParseType);
    };
    void CPvpCashMng::Release()
    {
        using org_ptr = void (WINAPIV*)(struct CPvpCashMng*);
        (org_ptr(0x1403f5ad0L))(this);
    };
    bool CPvpCashMng::SetItem(char* szItemCode, int nInx)
    {
        using org_ptr = bool (WINAPIV*)(struct CPvpCashMng*, char*, int);
        return (org_ptr(0x1403f5b50L))(this, szItemCode, nInx);
    };
    CPvpCashMng::~CPvpCashMng()
    {
        using org_ptr = void (WINAPIV*)(struct CPvpCashMng*);
        (org_ptr(0x1403f7170L))(this);
    };
    void CPvpCashMng::dtor_CPvpCashMng()
    {
        using org_ptr = void (WINAPIV*)(struct CPvpCashMng*);
        (org_ptr(0x1403f7170L))(this);
    };
END_ATF_NAMESPACE
