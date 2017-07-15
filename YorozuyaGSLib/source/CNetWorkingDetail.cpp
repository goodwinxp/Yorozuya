#include <CNetWorkingDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CNetWorkingAcceptClientCheck2_ptr CNetWorkingAcceptClientCheck2_next(nullptr);
        Info::CNetWorkingAcceptClientCheck2_clbk CNetWorkingAcceptClientCheck2_user(nullptr);
        
        Info::CNetWorkingAnsyncConnectComplete4_ptr CNetWorkingAnsyncConnectComplete4_next(nullptr);
        Info::CNetWorkingAnsyncConnectComplete4_clbk CNetWorkingAnsyncConnectComplete4_user(nullptr);
        
        
        Info::CNetWorkingctor_CNetWorking6_ptr CNetWorkingctor_CNetWorking6_next(nullptr);
        Info::CNetWorkingctor_CNetWorking6_clbk CNetWorkingctor_CNetWorking6_user(nullptr);
        
        Info::CNetWorkingCloseClientCheck8_ptr CNetWorkingCloseClientCheck8_next(nullptr);
        Info::CNetWorkingCloseClientCheck8_clbk CNetWorkingCloseClientCheck8_user(nullptr);
        
        Info::CNetWorkingCloseSocket10_ptr CNetWorkingCloseSocket10_next(nullptr);
        Info::CNetWorkingCloseSocket10_clbk CNetWorkingCloseSocket10_user(nullptr);
        
        Info::CNetWorkingConnect12_ptr CNetWorkingConnect12_next(nullptr);
        Info::CNetWorkingConnect12_clbk CNetWorkingConnect12_user(nullptr);
        
        Info::CNetWorkingDataAnalysis14_ptr CNetWorkingDataAnalysis14_next(nullptr);
        Info::CNetWorkingDataAnalysis14_clbk CNetWorkingDataAnalysis14_user(nullptr);
        
        Info::CNetWorkingExpulsionSocket16_ptr CNetWorkingExpulsionSocket16_next(nullptr);
        Info::CNetWorkingExpulsionSocket16_clbk CNetWorkingExpulsionSocket16_user(nullptr);
        
        Info::CNetWorkingGetCheckRecvTime18_ptr CNetWorkingGetCheckRecvTime18_next(nullptr);
        Info::CNetWorkingGetCheckRecvTime18_clbk CNetWorkingGetCheckRecvTime18_user(nullptr);
        
        Info::CNetWorkingGetSocket20_ptr CNetWorkingGetSocket20_next(nullptr);
        Info::CNetWorkingGetSocket20_clbk CNetWorkingGetSocket20_user(nullptr);
        
        Info::CNetWorkingOnLoop22_ptr CNetWorkingOnLoop22_next(nullptr);
        Info::CNetWorkingOnLoop22_clbk CNetWorkingOnLoop22_user(nullptr);
        
        Info::CNetWorkingOnLoop_Receipt24_ptr CNetWorkingOnLoop_Receipt24_next(nullptr);
        Info::CNetWorkingOnLoop_Receipt24_clbk CNetWorkingOnLoop_Receipt24_user(nullptr);
        
        Info::CNetWorkingProcessLogFile26_ptr CNetWorkingProcessLogFile26_next(nullptr);
        Info::CNetWorkingProcessLogFile26_clbk CNetWorkingProcessLogFile26_user(nullptr);
        
        Info::CNetWorkingRelease28_ptr CNetWorkingRelease28_next(nullptr);
        Info::CNetWorkingRelease28_clbk CNetWorkingRelease28_user(nullptr);
        
        Info::CNetWorkingSetNetSystem30_ptr CNetWorkingSetNetSystem30_next(nullptr);
        Info::CNetWorkingSetNetSystem30_clbk CNetWorkingSetNetSystem30_user(nullptr);
        
        Info::CNetWorkingUserLoop32_ptr CNetWorkingUserLoop32_next(nullptr);
        Info::CNetWorkingUserLoop32_clbk CNetWorkingUserLoop32_user(nullptr);
        
        
        Info::CNetWorkingdtor_CNetWorking37_ptr CNetWorkingdtor_CNetWorking37_next(nullptr);
        Info::CNetWorkingdtor_CNetWorking37_clbk CNetWorkingdtor_CNetWorking37_user(nullptr);
        
        void CNetWorkingAcceptClientCheck2_wrapper(struct CNetWorking* _this, unsigned int dwProID, unsigned int dwIndex, unsigned int dwSerial)
        {
           CNetWorkingAcceptClientCheck2_user(_this, dwProID, dwIndex, dwSerial, CNetWorkingAcceptClientCheck2_next);
        };
        void CNetWorkingAnsyncConnectComplete4_wrapper(struct CNetWorking* _this, unsigned int dwProID, unsigned int dwIndex, int nResult)
        {
           CNetWorkingAnsyncConnectComplete4_user(_this, dwProID, dwIndex, nResult, CNetWorkingAnsyncConnectComplete4_next);
        };
        
        void CNetWorkingctor_CNetWorking6_wrapper(struct CNetWorking* _this)
        {
           CNetWorkingctor_CNetWorking6_user(_this, CNetWorkingctor_CNetWorking6_next);
        };
        void CNetWorkingCloseClientCheck8_wrapper(struct CNetWorking* _this, unsigned int dwProID, unsigned int dwIndex, unsigned int dwSerial)
        {
           CNetWorkingCloseClientCheck8_user(_this, dwProID, dwIndex, dwSerial, CNetWorkingCloseClientCheck8_next);
        };
        void CNetWorkingCloseSocket10_wrapper(struct CNetWorking* _this, unsigned int dwProID, unsigned int dwSocketIndex, bool bSlowClose)
        {
           CNetWorkingCloseSocket10_user(_this, dwProID, dwSocketIndex, bSlowClose, CNetWorkingCloseSocket10_next);
        };
        int CNetWorkingConnect12_wrapper(struct CNetWorking* _this, unsigned int dwProID, unsigned int dwSocketIndex, unsigned int dwIP, uint16_t wPort)
        {
           return CNetWorkingConnect12_user(_this, dwProID, dwSocketIndex, dwIP, wPort, CNetWorkingConnect12_next);
        };
        bool CNetWorkingDataAnalysis14_wrapper(struct CNetWorking* _this, unsigned int dwProID, unsigned int dwClientIndex, struct _MSG_HEADER* pMsgHeader, char* pMsg)
        {
           return CNetWorkingDataAnalysis14_user(_this, dwProID, dwClientIndex, pMsgHeader, pMsg, CNetWorkingDataAnalysis14_next);
        };
        bool CNetWorkingExpulsionSocket16_wrapper(struct CNetWorking* _this, unsigned int dwProID, unsigned int dwIndex, char byReason, void* pvInfo)
        {
           return CNetWorkingExpulsionSocket16_user(_this, dwProID, dwIndex, byReason, pvInfo, CNetWorkingExpulsionSocket16_next);
        };
        unsigned int CNetWorkingGetCheckRecvTime18_wrapper(struct CNetWorking* _this, unsigned int dwProID, unsigned int dwSocketIndex)
        {
           return CNetWorkingGetCheckRecvTime18_user(_this, dwProID, dwSocketIndex, CNetWorkingGetCheckRecvTime18_next);
        };
        struct _socket* CNetWorkingGetSocket20_wrapper(struct CNetWorking* _this, unsigned int dwProID, unsigned int dwSocketIndex)
        {
           return CNetWorkingGetSocket20_user(_this, dwProID, dwSocketIndex, CNetWorkingGetSocket20_next);
        };
        void CNetWorkingOnLoop22_wrapper(struct CNetWorking* _this)
        {
           CNetWorkingOnLoop22_user(_this, CNetWorkingOnLoop22_next);
        };
        void CNetWorkingOnLoop_Receipt24_wrapper(struct CNetWorking* _this)
        {
           CNetWorkingOnLoop_Receipt24_user(_this, CNetWorkingOnLoop_Receipt24_next);
        };
        void CNetWorkingProcessLogFile26_wrapper(struct CNetWorking* _this, unsigned int dwProID, bool bRecv, bool bSend, bool bSystem)
        {
           CNetWorkingProcessLogFile26_user(_this, dwProID, bRecv, bSend, bSystem, CNetWorkingProcessLogFile26_next);
        };
        void CNetWorkingRelease28_wrapper(struct CNetWorking* _this)
        {
           CNetWorkingRelease28_user(_this, CNetWorkingRelease28_next);
        };
        bool CNetWorkingSetNetSystem30_wrapper(struct CNetWorking* _this, unsigned int dwUseProcessNum, struct _NET_TYPE_PARAM* pType, char* szSystemName, char* pszLogPath)
        {
           return CNetWorkingSetNetSystem30_user(_this, dwUseProcessNum, pType, szSystemName, pszLogPath, CNetWorkingSetNetSystem30_next);
        };
        void CNetWorkingUserLoop32_wrapper(struct CNetWorking* _this)
        {
           CNetWorkingUserLoop32_user(_this, CNetWorkingUserLoop32_next);
        };
        
        void CNetWorkingdtor_CNetWorking37_wrapper(struct CNetWorking* _this)
        {
           CNetWorkingdtor_CNetWorking37_user(_this, CNetWorkingdtor_CNetWorking37_next);
        };
        
        ::std::array<hook_record, 17> CNetWorking_functions = 
        {
            _hook_record {
                (LPVOID)0x140482160L,
                (LPVOID *)&CNetWorkingAcceptClientCheck2_user,
                (LPVOID *)&CNetWorkingAcceptClientCheck2_next,
                (LPVOID)cast_pointer_function(CNetWorkingAcceptClientCheck2_wrapper),
                (LPVOID)cast_pointer_function((void(CNetWorking::*)(unsigned int, unsigned int, unsigned int))&CNetWorking::AcceptClientCheck)
            },
            _hook_record {
                (LPVOID)0x140482210L,
                (LPVOID *)&CNetWorkingAnsyncConnectComplete4_user,
                (LPVOID *)&CNetWorkingAnsyncConnectComplete4_next,
                (LPVOID)cast_pointer_function(CNetWorkingAnsyncConnectComplete4_wrapper),
                (LPVOID)cast_pointer_function((void(CNetWorking::*)(unsigned int, unsigned int, int))&CNetWorking::AnsyncConnectComplete)
            },
            _hook_record {
                (LPVOID)0x140481020L,
                (LPVOID *)&CNetWorkingctor_CNetWorking6_user,
                (LPVOID *)&CNetWorkingctor_CNetWorking6_next,
                (LPVOID)cast_pointer_function(CNetWorkingctor_CNetWorking6_wrapper),
                (LPVOID)cast_pointer_function((void(CNetWorking::*)())&CNetWorking::ctor_CNetWorking)
            },
            _hook_record {
                (LPVOID)0x140482180L,
                (LPVOID *)&CNetWorkingCloseClientCheck8_user,
                (LPVOID *)&CNetWorkingCloseClientCheck8_next,
                (LPVOID)cast_pointer_function(CNetWorkingCloseClientCheck8_wrapper),
                (LPVOID)cast_pointer_function((void(CNetWorking::*)(unsigned int, unsigned int, unsigned int))&CNetWorking::CloseClientCheck)
            },
            _hook_record {
                (LPVOID)0x140481ae0L,
                (LPVOID *)&CNetWorkingCloseSocket10_user,
                (LPVOID *)&CNetWorkingCloseSocket10_next,
                (LPVOID)cast_pointer_function(CNetWorkingCloseSocket10_wrapper),
                (LPVOID)cast_pointer_function((void(CNetWorking::*)(unsigned int, unsigned int, bool))&CNetWorking::CloseSocket)
            },
            _hook_record {
                (LPVOID)0x1404819b0L,
                (LPVOID *)&CNetWorkingConnect12_user,
                (LPVOID *)&CNetWorkingConnect12_next,
                (LPVOID)cast_pointer_function(CNetWorkingConnect12_wrapper),
                (LPVOID)cast_pointer_function((int(CNetWorking::*)(unsigned int, unsigned int, unsigned int, uint16_t))&CNetWorking::Connect)
            },
            _hook_record {
                (LPVOID)0x140482140L,
                (LPVOID *)&CNetWorkingDataAnalysis14_user,
                (LPVOID *)&CNetWorkingDataAnalysis14_next,
                (LPVOID)cast_pointer_function(CNetWorkingDataAnalysis14_wrapper),
                (LPVOID)cast_pointer_function((bool(CNetWorking::*)(unsigned int, unsigned int, struct _MSG_HEADER*, char*))&CNetWorking::DataAnalysis)
            },
            _hook_record {
                (LPVOID)0x1404821a0L,
                (LPVOID *)&CNetWorkingExpulsionSocket16_user,
                (LPVOID *)&CNetWorkingExpulsionSocket16_next,
                (LPVOID)cast_pointer_function(CNetWorkingExpulsionSocket16_wrapper),
                (LPVOID)cast_pointer_function((bool(CNetWorking::*)(unsigned int, unsigned int, char, void*))&CNetWorking::ExpulsionSocket)
            },
            _hook_record {
                (LPVOID)0x140481d60L,
                (LPVOID *)&CNetWorkingGetCheckRecvTime18_user,
                (LPVOID *)&CNetWorkingGetCheckRecvTime18_next,
                (LPVOID)cast_pointer_function(CNetWorkingGetCheckRecvTime18_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CNetWorking::*)(unsigned int, unsigned int))&CNetWorking::GetCheckRecvTime)
            },
            _hook_record {
                (LPVOID)0x140481bd0L,
                (LPVOID *)&CNetWorkingGetSocket20_user,
                (LPVOID *)&CNetWorkingGetSocket20_next,
                (LPVOID)cast_pointer_function(CNetWorkingGetSocket20_wrapper),
                (LPVOID)cast_pointer_function((struct _socket*(CNetWorking::*)(unsigned int, unsigned int))&CNetWorking::GetSocket)
            },
            _hook_record {
                (LPVOID)0x140481c50L,
                (LPVOID *)&CNetWorkingOnLoop22_user,
                (LPVOID *)&CNetWorkingOnLoop22_next,
                (LPVOID)cast_pointer_function(CNetWorkingOnLoop22_wrapper),
                (LPVOID)cast_pointer_function((void(CNetWorking::*)())&CNetWorking::OnLoop)
            },
            _hook_record {
                (LPVOID)0x140481ce0L,
                (LPVOID *)&CNetWorkingOnLoop_Receipt24_user,
                (LPVOID *)&CNetWorkingOnLoop_Receipt24_next,
                (LPVOID)cast_pointer_function(CNetWorkingOnLoop_Receipt24_wrapper),
                (LPVOID)cast_pointer_function((void(CNetWorking::*)())&CNetWorking::OnLoop_Receipt)
            },
            _hook_record {
                (LPVOID)0x140481940L,
                (LPVOID *)&CNetWorkingProcessLogFile26_user,
                (LPVOID *)&CNetWorkingProcessLogFile26_next,
                (LPVOID)cast_pointer_function(CNetWorkingProcessLogFile26_wrapper),
                (LPVOID)cast_pointer_function((void(CNetWorking::*)(unsigned int, bool, bool, bool))&CNetWorking::ProcessLogFile)
            },
            _hook_record {
                (LPVOID)0x140481340L,
                (LPVOID *)&CNetWorkingRelease28_user,
                (LPVOID *)&CNetWorkingRelease28_next,
                (LPVOID)cast_pointer_function(CNetWorkingRelease28_wrapper),
                (LPVOID)cast_pointer_function((void(CNetWorking::*)())&CNetWorking::Release)
            },
            _hook_record {
                (LPVOID)0x1404813e0L,
                (LPVOID *)&CNetWorkingSetNetSystem30_user,
                (LPVOID *)&CNetWorkingSetNetSystem30_next,
                (LPVOID)cast_pointer_function(CNetWorkingSetNetSystem30_wrapper),
                (LPVOID)cast_pointer_function((bool(CNetWorking::*)(unsigned int, struct _NET_TYPE_PARAM*, char*, char*))&CNetWorking::SetNetSystem)
            },
            _hook_record {
                (LPVOID)0x140482130L,
                (LPVOID *)&CNetWorkingUserLoop32_user,
                (LPVOID *)&CNetWorkingUserLoop32_next,
                (LPVOID)cast_pointer_function(CNetWorkingUserLoop32_wrapper),
                (LPVOID)cast_pointer_function((void(CNetWorking::*)())&CNetWorking::UserLoop)
            },
            _hook_record {
                (LPVOID)0x140481230L,
                (LPVOID *)&CNetWorkingdtor_CNetWorking37_user,
                (LPVOID *)&CNetWorkingdtor_CNetWorking37_next,
                (LPVOID)cast_pointer_function(CNetWorkingdtor_CNetWorking37_wrapper),
                (LPVOID)cast_pointer_function((void(CNetWorking::*)())&CNetWorking::dtor_CNetWorking)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
