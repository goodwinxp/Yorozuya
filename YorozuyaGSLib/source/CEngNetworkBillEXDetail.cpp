#include <CEngNetworkBillEXDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CEngNetworkBillEXArrangeString2_ptr CEngNetworkBillEXArrangeString2_next(nullptr);
        Info::CEngNetworkBillEXArrangeString2_clbk CEngNetworkBillEXArrangeString2_user(nullptr);
        
        
        Info::CEngNetworkBillEXctor_CEngNetworkBillEX4_ptr CEngNetworkBillEXctor_CEngNetworkBillEX4_next(nullptr);
        Info::CEngNetworkBillEXctor_CEngNetworkBillEX4_clbk CEngNetworkBillEXctor_CEngNetworkBillEX4_user(nullptr);
        
        Info::CEngNetworkBillEXCalcStreamSize6_ptr CEngNetworkBillEXCalcStreamSize6_next(nullptr);
        Info::CEngNetworkBillEXCalcStreamSize6_clbk CEngNetworkBillEXCalcStreamSize6_user(nullptr);
        
        Info::CEngNetworkBillEXConnectToNcash8_ptr CEngNetworkBillEXConnectToNcash8_next(nullptr);
        Info::CEngNetworkBillEXConnectToNcash8_clbk CEngNetworkBillEXConnectToNcash8_user(nullptr);
        
        Info::CEngNetworkBillEXFreeVectorData10_ptr CEngNetworkBillEXFreeVectorData10_next(nullptr);
        Info::CEngNetworkBillEXFreeVectorData10_clbk CEngNetworkBillEXFreeVectorData10_user(nullptr);
        
        Info::CEngNetworkBillEXInitialize12_ptr CEngNetworkBillEXInitialize12_next(nullptr);
        Info::CEngNetworkBillEXInitialize12_clbk CEngNetworkBillEXInitialize12_user(nullptr);
        
        Info::CEngNetworkBillEXIsGetConnected14_ptr CEngNetworkBillEXIsGetConnected14_next(nullptr);
        Info::CEngNetworkBillEXIsGetConnected14_clbk CEngNetworkBillEXIsGetConnected14_user(nullptr);
        
        Info::CEngNetworkBillEXLoadINIFile16_ptr CEngNetworkBillEXLoadINIFile16_next(nullptr);
        Info::CEngNetworkBillEXLoadINIFile16_clbk CEngNetworkBillEXLoadINIFile16_user(nullptr);
        
        Info::CEngNetworkBillEXParsingBuyItem18_ptr CEngNetworkBillEXParsingBuyItem18_next(nullptr);
        Info::CEngNetworkBillEXParsingBuyItem18_clbk CEngNetworkBillEXParsingBuyItem18_user(nullptr);
        
        Info::CEngNetworkBillEXParsingRemainCash20_ptr CEngNetworkBillEXParsingRemainCash20_next(nullptr);
        Info::CEngNetworkBillEXParsingRemainCash20_clbk CEngNetworkBillEXParsingRemainCash20_user(nullptr);
        
        Info::CEngNetworkBillEXParsingSeqNumber22_ptr CEngNetworkBillEXParsingSeqNumber22_next(nullptr);
        Info::CEngNetworkBillEXParsingSeqNumber22_clbk CEngNetworkBillEXParsingSeqNumber22_user(nullptr);
        
        Info::CEngNetworkBillEXReInitialize24_ptr CEngNetworkBillEXReInitialize24_next(nullptr);
        Info::CEngNetworkBillEXReInitialize24_clbk CEngNetworkBillEXReInitialize24_user(nullptr);
        
        Info::CEngNetworkBillEXSend26_ptr CEngNetworkBillEXSend26_next(nullptr);
        Info::CEngNetworkBillEXSend26_clbk CEngNetworkBillEXSend26_user(nullptr);
        
        Info::CEngNetworkBillEXdhExtractSubString31_ptr CEngNetworkBillEXdhExtractSubString31_next(nullptr);
        Info::CEngNetworkBillEXdhExtractSubString31_clbk CEngNetworkBillEXdhExtractSubString31_user(nullptr);
        
        Info::CEngNetworkBillEXdhRExtractSubString33_ptr CEngNetworkBillEXdhRExtractSubString33_next(nullptr);
        Info::CEngNetworkBillEXdhRExtractSubString33_clbk CEngNetworkBillEXdhRExtractSubString33_user(nullptr);
        
        Info::CEngNetworkBillEXs_DataAnalysis35_ptr CEngNetworkBillEXs_DataAnalysis35_next(nullptr);
        Info::CEngNetworkBillEXs_DataAnalysis35_clbk CEngNetworkBillEXs_DataAnalysis35_user(nullptr);
        
        
        Info::CEngNetworkBillEXdtor_CEngNetworkBillEX37_ptr CEngNetworkBillEXdtor_CEngNetworkBillEX37_next(nullptr);
        Info::CEngNetworkBillEXdtor_CEngNetworkBillEX37_clbk CEngNetworkBillEXdtor_CEngNetworkBillEX37_user(nullptr);
        
        void CEngNetworkBillEXArrangeString2_wrapper(struct CEngNetworkBillEX* _this, char* szDest, char* szSorc, char cToken)
        {
           CEngNetworkBillEXArrangeString2_user(_this, szDest, szSorc, cToken, CEngNetworkBillEXArrangeString2_next);
        };
        
        void CEngNetworkBillEXctor_CEngNetworkBillEX4_wrapper(struct CEngNetworkBillEX* _this)
        {
           CEngNetworkBillEXctor_CEngNetworkBillEX4_user(_this, CEngNetworkBillEXctor_CEngNetworkBillEX4_next);
        };
        uint16_t CEngNetworkBillEXCalcStreamSize6_wrapper(struct CEngNetworkBillEX* _this, char* pRecvData)
        {
           return CEngNetworkBillEXCalcStreamSize6_user(_this, pRecvData, CEngNetworkBillEXCalcStreamSize6_next);
        };
        int CEngNetworkBillEXConnectToNcash8_wrapper(struct CEngNetworkBillEX* _this)
        {
           return CEngNetworkBillEXConnectToNcash8_user(_this, CEngNetworkBillEXConnectToNcash8_next);
        };
        bool CEngNetworkBillEXFreeVectorData10_wrapper(struct CEngNetworkBillEX* _this, unsigned int dwSeq)
        {
           return CEngNetworkBillEXFreeVectorData10_user(_this, dwSeq, CEngNetworkBillEXFreeVectorData10_next);
        };
        bool CEngNetworkBillEXInitialize12_wrapper(struct CEngNetworkBillEX* _this)
        {
           return CEngNetworkBillEXInitialize12_user(_this, CEngNetworkBillEXInitialize12_next);
        };
        bool CEngNetworkBillEXIsGetConnected14_wrapper(struct CEngNetworkBillEX* _this)
        {
           return CEngNetworkBillEXIsGetConnected14_user(_this, CEngNetworkBillEXIsGetConnected14_next);
        };
        int CEngNetworkBillEXLoadINIFile16_wrapper(struct CEngNetworkBillEX* _this)
        {
           return CEngNetworkBillEXLoadINIFile16_user(_this, CEngNetworkBillEXLoadINIFile16_next);
        };
        void CEngNetworkBillEXParsingBuyItem18_wrapper(struct CEngNetworkBillEX* _this, struct Request_Buy_Item* data, char* pRecvData)
        {
           CEngNetworkBillEXParsingBuyItem18_user(_this, data, pRecvData, CEngNetworkBillEXParsingBuyItem18_next);
        };
        void CEngNetworkBillEXParsingRemainCash20_wrapper(struct CEngNetworkBillEX* _this, struct Request_Remain_Cash* data, char* pRecvData)
        {
           CEngNetworkBillEXParsingRemainCash20_user(_this, data, pRecvData, CEngNetworkBillEXParsingRemainCash20_next);
        };
        unsigned int CEngNetworkBillEXParsingSeqNumber22_wrapper(struct CEngNetworkBillEX* _this, char* pRecvData)
        {
           return CEngNetworkBillEXParsingSeqNumber22_user(_this, pRecvData, CEngNetworkBillEXParsingSeqNumber22_next);
        };
        bool CEngNetworkBillEXReInitialize24_wrapper(struct CEngNetworkBillEX* _this)
        {
           return CEngNetworkBillEXReInitialize24_user(_this, CEngNetworkBillEXReInitialize24_next);
        };
        int CEngNetworkBillEXSend26_wrapper(struct CEngNetworkBillEX* _this, char* pbyType, char* szMsg, uint16_t nLen)
        {
           return CEngNetworkBillEXSend26_user(_this, pbyType, szMsg, nLen, CEngNetworkBillEXSend26_next);
        };
        char* CEngNetworkBillEXdhExtractSubString31_wrapper(struct CEngNetworkBillEX* _this, char* szSub, char* szFull, char cToken)
        {
           return CEngNetworkBillEXdhExtractSubString31_user(_this, szSub, szFull, cToken, CEngNetworkBillEXdhExtractSubString31_next);
        };
        void CEngNetworkBillEXdhRExtractSubString33_wrapper(struct CEngNetworkBillEX* _this, char* szSub, char* szFull, char cToken)
        {
           CEngNetworkBillEXdhRExtractSubString33_user(_this, szSub, szFull, cToken, CEngNetworkBillEXdhRExtractSubString33_next);
        };
        bool CEngNetworkBillEXs_DataAnalysis35_wrapper(unsigned int dwProID, unsigned int dwClientIndex, struct _MSG_HEADER* pMsgHeader, char* pMsg)
        {
           return CEngNetworkBillEXs_DataAnalysis35_user(dwProID, dwClientIndex, pMsgHeader, pMsg, CEngNetworkBillEXs_DataAnalysis35_next);
        };
        
        void CEngNetworkBillEXdtor_CEngNetworkBillEX37_wrapper(struct CEngNetworkBillEX* _this)
        {
           CEngNetworkBillEXdtor_CEngNetworkBillEX37_user(_this, CEngNetworkBillEXdtor_CEngNetworkBillEX37_next);
        };
        
        ::std::array<hook_record, 17> CEngNetworkBillEX_functions = 
        {
            _hook_record {
                (LPVOID)0x14031cbe0L,
                (LPVOID *)&CEngNetworkBillEXArrangeString2_user,
                (LPVOID *)&CEngNetworkBillEXArrangeString2_next,
                (LPVOID)cast_pointer_function(CEngNetworkBillEXArrangeString2_wrapper),
                (LPVOID)cast_pointer_function((void(CEngNetworkBillEX::*)(char*, char*, char))&CEngNetworkBillEX::ArrangeString)
            },
            _hook_record {
                (LPVOID)0x14031b5d0L,
                (LPVOID *)&CEngNetworkBillEXctor_CEngNetworkBillEX4_user,
                (LPVOID *)&CEngNetworkBillEXctor_CEngNetworkBillEX4_next,
                (LPVOID)cast_pointer_function(CEngNetworkBillEXctor_CEngNetworkBillEX4_wrapper),
                (LPVOID)cast_pointer_function((void(CEngNetworkBillEX::*)())&CEngNetworkBillEX::ctor_CEngNetworkBillEX)
            },
            _hook_record {
                (LPVOID)0x14031bba0L,
                (LPVOID *)&CEngNetworkBillEXCalcStreamSize6_user,
                (LPVOID *)&CEngNetworkBillEXCalcStreamSize6_next,
                (LPVOID)cast_pointer_function(CEngNetworkBillEXCalcStreamSize6_wrapper),
                (LPVOID)cast_pointer_function((uint16_t(CEngNetworkBillEX::*)(char*))&CEngNetworkBillEX::CalcStreamSize)
            },
            _hook_record {
                (LPVOID)0x14031a420L,
                (LPVOID *)&CEngNetworkBillEXConnectToNcash8_user,
                (LPVOID *)&CEngNetworkBillEXConnectToNcash8_next,
                (LPVOID)cast_pointer_function(CEngNetworkBillEXConnectToNcash8_wrapper),
                (LPVOID)cast_pointer_function((int(CEngNetworkBillEX::*)())&CEngNetworkBillEX::ConnectToNcash)
            },
            _hook_record {
                (LPVOID)0x14031c290L,
                (LPVOID *)&CEngNetworkBillEXFreeVectorData10_user,
                (LPVOID *)&CEngNetworkBillEXFreeVectorData10_next,
                (LPVOID)cast_pointer_function(CEngNetworkBillEXFreeVectorData10_wrapper),
                (LPVOID)cast_pointer_function((bool(CEngNetworkBillEX::*)(unsigned int))&CEngNetworkBillEX::FreeVectorData)
            },
            _hook_record {
                (LPVOID)0x14031b850L,
                (LPVOID *)&CEngNetworkBillEXInitialize12_user,
                (LPVOID *)&CEngNetworkBillEXInitialize12_next,
                (LPVOID)cast_pointer_function(CEngNetworkBillEXInitialize12_wrapper),
                (LPVOID)cast_pointer_function((bool(CEngNetworkBillEX::*)())&CEngNetworkBillEX::Initialize)
            },
            _hook_record {
                (LPVOID)0x14022c320L,
                (LPVOID *)&CEngNetworkBillEXIsGetConnected14_user,
                (LPVOID *)&CEngNetworkBillEXIsGetConnected14_next,
                (LPVOID)cast_pointer_function(CEngNetworkBillEXIsGetConnected14_wrapper),
                (LPVOID)cast_pointer_function((bool(CEngNetworkBillEX::*)())&CEngNetworkBillEX::IsGetConnected)
            },
            _hook_record {
                (LPVOID)0x14031b740L,
                (LPVOID *)&CEngNetworkBillEXLoadINIFile16_user,
                (LPVOID *)&CEngNetworkBillEXLoadINIFile16_next,
                (LPVOID)cast_pointer_function(CEngNetworkBillEXLoadINIFile16_wrapper),
                (LPVOID)cast_pointer_function((int(CEngNetworkBillEX::*)())&CEngNetworkBillEX::LoadINIFile)
            },
            _hook_record {
                (LPVOID)0x14031c7c0L,
                (LPVOID *)&CEngNetworkBillEXParsingBuyItem18_user,
                (LPVOID *)&CEngNetworkBillEXParsingBuyItem18_next,
                (LPVOID)cast_pointer_function(CEngNetworkBillEXParsingBuyItem18_wrapper),
                (LPVOID)cast_pointer_function((void(CEngNetworkBillEX::*)(struct Request_Buy_Item*, char*))&CEngNetworkBillEX::ParsingBuyItem)
            },
            _hook_record {
                (LPVOID)0x14031c500L,
                (LPVOID *)&CEngNetworkBillEXParsingRemainCash20_user,
                (LPVOID *)&CEngNetworkBillEXParsingRemainCash20_next,
                (LPVOID)cast_pointer_function(CEngNetworkBillEXParsingRemainCash20_wrapper),
                (LPVOID)cast_pointer_function((void(CEngNetworkBillEX::*)(struct Request_Remain_Cash*, char*))&CEngNetworkBillEX::ParsingRemainCash)
            },
            _hook_record {
                (LPVOID)0x14031baa0L,
                (LPVOID *)&CEngNetworkBillEXParsingSeqNumber22_user,
                (LPVOID *)&CEngNetworkBillEXParsingSeqNumber22_next,
                (LPVOID)cast_pointer_function(CEngNetworkBillEXParsingSeqNumber22_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CEngNetworkBillEX::*)(char*))&CEngNetworkBillEX::ParsingSeqNumber)
            },
            _hook_record {
                (LPVOID)0x14031b9c0L,
                (LPVOID *)&CEngNetworkBillEXReInitialize24_user,
                (LPVOID *)&CEngNetworkBillEXReInitialize24_next,
                (LPVOID)cast_pointer_function(CEngNetworkBillEXReInitialize24_wrapper),
                (LPVOID)cast_pointer_function((bool(CEngNetworkBillEX::*)())&CEngNetworkBillEX::ReInitialize)
            },
            _hook_record {
                (LPVOID)0x14031ba40L,
                (LPVOID *)&CEngNetworkBillEXSend26_user,
                (LPVOID *)&CEngNetworkBillEXSend26_next,
                (LPVOID)cast_pointer_function(CEngNetworkBillEXSend26_wrapper),
                (LPVOID)cast_pointer_function((int(CEngNetworkBillEX::*)(char*, char*, uint16_t))&CEngNetworkBillEX::Send)
            },
            _hook_record {
                (LPVOID)0x14031c9f0L,
                (LPVOID *)&CEngNetworkBillEXdhExtractSubString31_user,
                (LPVOID *)&CEngNetworkBillEXdhExtractSubString31_next,
                (LPVOID)cast_pointer_function(CEngNetworkBillEXdhExtractSubString31_wrapper),
                (LPVOID)cast_pointer_function((char*(CEngNetworkBillEX::*)(char*, char*, char))&CEngNetworkBillEX::dhExtractSubString)
            },
            _hook_record {
                (LPVOID)0x14031cad0L,
                (LPVOID *)&CEngNetworkBillEXdhRExtractSubString33_user,
                (LPVOID *)&CEngNetworkBillEXdhRExtractSubString33_next,
                (LPVOID)cast_pointer_function(CEngNetworkBillEXdhRExtractSubString33_wrapper),
                (LPVOID)cast_pointer_function((void(CEngNetworkBillEX::*)(char*, char*, char))&CEngNetworkBillEX::dhRExtractSubString)
            },
            _hook_record {
                (LPVOID)0x14031bc20L,
                (LPVOID *)&CEngNetworkBillEXs_DataAnalysis35_user,
                (LPVOID *)&CEngNetworkBillEXs_DataAnalysis35_next,
                (LPVOID)cast_pointer_function(CEngNetworkBillEXs_DataAnalysis35_wrapper),
                (LPVOID)cast_pointer_function((bool(*)(unsigned int, unsigned int, struct _MSG_HEADER*, char*))&CEngNetworkBillEX::s_DataAnalysis)
            },
            _hook_record {
                (LPVOID)0x14031b680L,
                (LPVOID *)&CEngNetworkBillEXdtor_CEngNetworkBillEX37_user,
                (LPVOID *)&CEngNetworkBillEXdtor_CEngNetworkBillEX37_next,
                (LPVOID)cast_pointer_function(CEngNetworkBillEXdtor_CEngNetworkBillEX37_wrapper),
                (LPVOID)cast_pointer_function((void(CEngNetworkBillEX::*)())&CEngNetworkBillEX::dtor_CEngNetworkBillEX)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
