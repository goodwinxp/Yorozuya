#pragma once

#pragma pack(push, 1)
struct _qry_case_unmandtrader_re_registsingleitem_ex
{
    struct __list
    {
        char byProcRet;
        bool bRegist;
        unsigned __int16 wItemSerial;
        unsigned int dwTax;
        unsigned int dwListIndex;
        char byClass1;
        char byClass2;
        char byClass3;
        char byAmount;
        unsigned int dwPrice;
        unsigned int dwRegistSerial;
        char byUpdateState;
    };
    char byType;
    unsigned __int16 wInx;
    char byNum;
    unsigned int dwOwnerSerial;
    __list List[10];
};
#pragma pack(pop)
