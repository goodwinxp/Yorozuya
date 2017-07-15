#include <_DTRADE_PARAM.hpp>


START_ATF_NAMESPACE
    void _DTRADE_PARAM::Init()
    {
        using org_ptr = void (WINAPIV*)(struct _DTRADE_PARAM*);
        (org_ptr(0x140072c10L))(this);
    };
    void _DTRADE_PARAM::SetDTradeStart(uint16_t pl_dwDstIndex, unsigned int pl_dwDstSerial, int pl_mEmptyInvenNum, unsigned int* pl_dwKey)
    {
        using org_ptr = void (WINAPIV*)(struct _DTRADE_PARAM*, uint16_t, unsigned int, int, unsigned int*);
        (org_ptr(0x1400f78b0L))(this, pl_dwDstIndex, pl_dwDstSerial, pl_mEmptyInvenNum, pl_dwKey);
    };
    _DTRADE_PARAM::_DTRADE_PARAM()
    {
        using org_ptr = void (WINAPIV*)(struct _DTRADE_PARAM*);
        (org_ptr(0x140072bc0L))(this);
    };
    void _DTRADE_PARAM::ctor__DTRADE_PARAM()
    {
        using org_ptr = void (WINAPIV*)(struct _DTRADE_PARAM*);
        (org_ptr(0x140072bc0L))(this);
    };
END_ATF_NAMESPACE
