#include <CNetSocketDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CNetSocketAccept_Client2_ptr CNetSocketAccept_Client2_next(nullptr);
        Info::CNetSocketAccept_Client2_clbk CNetSocketAccept_Client2_user(nullptr);
        
        Info::CNetSocketAccept_Server4_ptr CNetSocketAccept_Server4_next(nullptr);
        Info::CNetSocketAccept_Server4_clbk CNetSocketAccept_Server4_user(nullptr);
        
        
        Info::CNetSocketctor_CNetSocket6_ptr CNetSocketctor_CNetSocket6_next(nullptr);
        Info::CNetSocketctor_CNetSocket6_clbk CNetSocketctor_CNetSocket6_user(nullptr);
        
        Info::CNetSocketCloseAll8_ptr CNetSocketCloseAll8_next(nullptr);
        Info::CNetSocketCloseAll8_clbk CNetSocketCloseAll8_user(nullptr);
        
        Info::CNetSocketCloseSocket10_ptr CNetSocketCloseSocket10_next(nullptr);
        Info::CNetSocketCloseSocket10_clbk CNetSocketCloseSocket10_user(nullptr);
        
        Info::CNetSocketConnect12_ptr CNetSocketConnect12_next(nullptr);
        Info::CNetSocketConnect12_clbk CNetSocketConnect12_user(nullptr);
        
        Info::CNetSocketEmptySocketBuffer14_ptr CNetSocketEmptySocketBuffer14_next(nullptr);
        Info::CNetSocketEmptySocketBuffer14_clbk CNetSocketEmptySocketBuffer14_user(nullptr);
        
        Info::CNetSocketFindEmptySocket16_ptr CNetSocketFindEmptySocket16_next(nullptr);
        Info::CNetSocketFindEmptySocket16_clbk CNetSocketFindEmptySocket16_user(nullptr);
        
        Info::CNetSocketGetSocket18_ptr CNetSocketGetSocket18_next(nullptr);
        Info::CNetSocketGetSocket18_clbk CNetSocketGetSocket18_user(nullptr);
        
        Info::CNetSocketGetSocketIPAddress20_ptr CNetSocketGetSocketIPAddress20_next(nullptr);
        Info::CNetSocketGetSocketIPAddress20_clbk CNetSocketGetSocketIPAddress20_user(nullptr);
        
        Info::CNetSocketGetSocketType22_ptr CNetSocketGetSocketType22_next(nullptr);
        Info::CNetSocketGetSocketType22_clbk CNetSocketGetSocketType22_user(nullptr);
        
        Info::CNetSocketGetTotalCount24_ptr CNetSocketGetTotalCount24_next(nullptr);
        Info::CNetSocketGetTotalCount24_clbk CNetSocketGetTotalCount24_user(nullptr);
        
        Info::CNetSocketInitAcceptSocket26_ptr CNetSocketInitAcceptSocket26_next(nullptr);
        Info::CNetSocketInitAcceptSocket26_clbk CNetSocketInitAcceptSocket26_user(nullptr);
        
        Info::CNetSocketOnLoop28_ptr CNetSocketOnLoop28_next(nullptr);
        Info::CNetSocketOnLoop28_clbk CNetSocketOnLoop28_user(nullptr);
        
        Info::CNetSocketPushIPCheckList30_ptr CNetSocketPushIPCheckList30_next(nullptr);
        Info::CNetSocketPushIPCheckList30_clbk CNetSocketPushIPCheckList30_user(nullptr);
        
        Info::CNetSocketRecv32_ptr CNetSocketRecv32_next(nullptr);
        Info::CNetSocketRecv32_clbk CNetSocketRecv32_user(nullptr);
        
        Info::CNetSocketRelease34_ptr CNetSocketRelease34_next(nullptr);
        Info::CNetSocketRelease34_clbk CNetSocketRelease34_user(nullptr);
        
        Info::CNetSocketSend36_ptr CNetSocketSend36_next(nullptr);
        Info::CNetSocketSend36_clbk CNetSocketSend36_user(nullptr);
        
        Info::CNetSocketSetSocket38_ptr CNetSocketSetSocket38_next(nullptr);
        Info::CNetSocketSetSocket38_clbk CNetSocketSetSocket38_user(nullptr);
        
        
        Info::CNetSocketdtor_CNetSocket43_ptr CNetSocketdtor_CNetSocket43_next(nullptr);
        Info::CNetSocketdtor_CNetSocket43_clbk CNetSocketdtor_CNetSocket43_user(nullptr);
        
        bool CNetSocketAccept_Client2_wrapper(struct CNetSocket* _this, unsigned int dwSocketIndex)
        {
           return CNetSocketAccept_Client2_user(_this, dwSocketIndex, CNetSocketAccept_Client2_next);
        };
        unsigned int CNetSocketAccept_Server4_wrapper(struct CNetSocket* _this)
        {
           return CNetSocketAccept_Server4_user(_this, CNetSocketAccept_Server4_next);
        };
        
        void CNetSocketctor_CNetSocket6_wrapper(struct CNetSocket* _this)
        {
           CNetSocketctor_CNetSocket6_user(_this, CNetSocketctor_CNetSocket6_next);
        };
        void CNetSocketCloseAll8_wrapper(struct CNetSocket* _this)
        {
           CNetSocketCloseAll8_user(_this, CNetSocketCloseAll8_next);
        };
        bool CNetSocketCloseSocket10_wrapper(struct CNetSocket* _this, unsigned int n)
        {
           return CNetSocketCloseSocket10_user(_this, n, CNetSocketCloseSocket10_next);
        };
        int CNetSocketConnect12_wrapper(struct CNetSocket* _this, unsigned int n, struct sockaddr_in* pAddr)
        {
           return CNetSocketConnect12_user(_this, n, pAddr, CNetSocketConnect12_next);
        };
        void CNetSocketEmptySocketBuffer14_wrapper(struct CNetSocket* _this, unsigned int n)
        {
           CNetSocketEmptySocketBuffer14_user(_this, n, CNetSocketEmptySocketBuffer14_next);
        };
        unsigned int CNetSocketFindEmptySocket16_wrapper(struct CNetSocket* _this)
        {
           return CNetSocketFindEmptySocket16_user(_this, CNetSocketFindEmptySocket16_next);
        };
        struct _socket* CNetSocketGetSocket18_wrapper(struct CNetSocket* _this, unsigned int dwIndex)
        {
           return CNetSocketGetSocket18_user(_this, dwIndex, CNetSocketGetSocket18_next);
        };
        unsigned int CNetSocketGetSocketIPAddress20_wrapper(struct CNetSocket* _this, unsigned int dwIndex)
        {
           return CNetSocketGetSocketIPAddress20_user(_this, dwIndex, CNetSocketGetSocketIPAddress20_next);
        };
        struct _SOCK_TYPE_PARAM* CNetSocketGetSocketType22_wrapper(struct CNetSocket* _this)
        {
           return CNetSocketGetSocketType22_user(_this, CNetSocketGetSocketType22_next);
        };
        struct _total_count* CNetSocketGetTotalCount24_wrapper(struct CNetSocket* _this)
        {
           return CNetSocketGetTotalCount24_user(_this, CNetSocketGetTotalCount24_next);
        };
        bool CNetSocketInitAcceptSocket26_wrapper(struct CNetSocket* _this, char* pszErrMsg)
        {
           return CNetSocketInitAcceptSocket26_user(_this, pszErrMsg, CNetSocketInitAcceptSocket26_next);
        };
        void CNetSocketOnLoop28_wrapper(struct CNetSocket* _this)
        {
           CNetSocketOnLoop28_user(_this, CNetSocketOnLoop28_next);
        };
        bool CNetSocketPushIPCheckList30_wrapper(struct CNetSocket* _this, unsigned int dwIP)
        {
           return CNetSocketPushIPCheckList30_user(_this, dwIP, CNetSocketPushIPCheckList30_next);
        };
        bool CNetSocketRecv32_wrapper(struct CNetSocket* _this, unsigned int n, char* pBuf, int nBufMaxSize, int* pnRet)
        {
           return CNetSocketRecv32_user(_this, n, pBuf, nBufMaxSize, pnRet, CNetSocketRecv32_next);
        };
        void CNetSocketRelease34_wrapper(struct CNetSocket* _this)
        {
           CNetSocketRelease34_user(_this, CNetSocketRelease34_next);
        };
        bool CNetSocketSend36_wrapper(struct CNetSocket* _this, unsigned int n, char* pBuf, int nSize, int* pnRet)
        {
           return CNetSocketSend36_user(_this, n, pBuf, nSize, pnRet, CNetSocketSend36_next);
        };
        bool CNetSocketSetSocket38_wrapper(struct CNetSocket* _this, struct _SOCK_TYPE_PARAM* pType, char* pszErrMsg)
        {
           return CNetSocketSetSocket38_user(_this, pType, pszErrMsg, CNetSocketSetSocket38_next);
        };
        
        void CNetSocketdtor_CNetSocket43_wrapper(struct CNetSocket* _this)
        {
           CNetSocketdtor_CNetSocket43_user(_this, CNetSocketdtor_CNetSocket43_next);
        };
        
        ::std::array<hook_record, 20> CNetSocket_functions = 
        {
            _hook_record {
                (LPVOID)0x14047e750L,
                (LPVOID *)&CNetSocketAccept_Client2_user,
                (LPVOID *)&CNetSocketAccept_Client2_next,
                (LPVOID)cast_pointer_function(CNetSocketAccept_Client2_wrapper),
                (LPVOID)cast_pointer_function((bool(CNetSocket::*)(unsigned int))&CNetSocket::Accept_Client)
            },
            _hook_record {
                (LPVOID)0x14047e3b0L,
                (LPVOID *)&CNetSocketAccept_Server4_user,
                (LPVOID *)&CNetSocketAccept_Server4_next,
                (LPVOID)cast_pointer_function(CNetSocketAccept_Server4_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CNetSocket::*)())&CNetSocket::Accept_Server)
            },
            _hook_record {
                (LPVOID)0x14047db60L,
                (LPVOID *)&CNetSocketctor_CNetSocket6_user,
                (LPVOID *)&CNetSocketctor_CNetSocket6_next,
                (LPVOID)cast_pointer_function(CNetSocketctor_CNetSocket6_wrapper),
                (LPVOID)cast_pointer_function((void(CNetSocket::*)())&CNetSocket::ctor_CNetSocket)
            },
            _hook_record {
                (LPVOID)0x14047f060L,
                (LPVOID *)&CNetSocketCloseAll8_user,
                (LPVOID *)&CNetSocketCloseAll8_next,
                (LPVOID)cast_pointer_function(CNetSocketCloseAll8_wrapper),
                (LPVOID)cast_pointer_function((void(CNetSocket::*)())&CNetSocket::CloseAll)
            },
            _hook_record {
                (LPVOID)0x14047ec40L,
                (LPVOID *)&CNetSocketCloseSocket10_user,
                (LPVOID *)&CNetSocketCloseSocket10_next,
                (LPVOID)cast_pointer_function(CNetSocketCloseSocket10_wrapper),
                (LPVOID)cast_pointer_function((bool(CNetSocket::*)(unsigned int))&CNetSocket::CloseSocket)
            },
            _hook_record {
                (LPVOID)0x14047e830L,
                (LPVOID *)&CNetSocketConnect12_user,
                (LPVOID *)&CNetSocketConnect12_next,
                (LPVOID)cast_pointer_function(CNetSocketConnect12_wrapper),
                (LPVOID)cast_pointer_function((int(CNetSocket::*)(unsigned int, struct sockaddr_in*))&CNetSocket::Connect)
            },
            _hook_record {
                (LPVOID)0x14047eb70L,
                (LPVOID *)&CNetSocketEmptySocketBuffer14_user,
                (LPVOID *)&CNetSocketEmptySocketBuffer14_next,
                (LPVOID)cast_pointer_function(CNetSocketEmptySocketBuffer14_wrapper),
                (LPVOID)cast_pointer_function((void(CNetSocket::*)(unsigned int))&CNetSocket::EmptySocketBuffer)
            },
            _hook_record {
                (LPVOID)0x14047f180L,
                (LPVOID *)&CNetSocketFindEmptySocket16_user,
                (LPVOID *)&CNetSocketFindEmptySocket16_next,
                (LPVOID)cast_pointer_function(CNetSocketFindEmptySocket16_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CNetSocket::*)())&CNetSocket::FindEmptySocket)
            },
            _hook_record {
                (LPVOID)0x14047d3b0L,
                (LPVOID *)&CNetSocketGetSocket18_user,
                (LPVOID *)&CNetSocketGetSocket18_next,
                (LPVOID)cast_pointer_function(CNetSocketGetSocket18_wrapper),
                (LPVOID)cast_pointer_function((struct _socket*(CNetSocket::*)(unsigned int))&CNetSocket::GetSocket)
            },
            _hook_record {
                (LPVOID)0x14047f150L,
                (LPVOID *)&CNetSocketGetSocketIPAddress20_user,
                (LPVOID *)&CNetSocketGetSocketIPAddress20_next,
                (LPVOID)cast_pointer_function(CNetSocketGetSocketIPAddress20_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CNetSocket::*)(unsigned int))&CNetSocket::GetSocketIPAddress)
            },
            _hook_record {
                (LPVOID)0x14047f110L,
                (LPVOID *)&CNetSocketGetSocketType22_user,
                (LPVOID *)&CNetSocketGetSocketType22_next,
                (LPVOID)cast_pointer_function(CNetSocketGetSocketType22_wrapper),
                (LPVOID)cast_pointer_function((struct _SOCK_TYPE_PARAM*(CNetSocket::*)())&CNetSocket::GetSocketType)
            },
            _hook_record {
                (LPVOID)0x14047f130L,
                (LPVOID *)&CNetSocketGetTotalCount24_user,
                (LPVOID *)&CNetSocketGetTotalCount24_next,
                (LPVOID)cast_pointer_function(CNetSocketGetTotalCount24_wrapper),
                (LPVOID)cast_pointer_function((struct _total_count*(CNetSocket::*)())&CNetSocket::GetTotalCount)
            },
            _hook_record {
                (LPVOID)0x14047ee00L,
                (LPVOID *)&CNetSocketInitAcceptSocket26_user,
                (LPVOID *)&CNetSocketInitAcceptSocket26_next,
                (LPVOID)cast_pointer_function(CNetSocketInitAcceptSocket26_wrapper),
                (LPVOID)cast_pointer_function((bool(CNetSocket::*)(char*))&CNetSocket::InitAcceptSocket)
            },
            _hook_record {
                (LPVOID)0x14047e2b0L,
                (LPVOID *)&CNetSocketOnLoop28_user,
                (LPVOID *)&CNetSocketOnLoop28_next,
                (LPVOID)cast_pointer_function(CNetSocketOnLoop28_wrapper),
                (LPVOID)cast_pointer_function((void(CNetSocket::*)())&CNetSocket::OnLoop)
            },
            _hook_record {
                (LPVOID)0x14047ed20L,
                (LPVOID *)&CNetSocketPushIPCheckList30_user,
                (LPVOID *)&CNetSocketPushIPCheckList30_next,
                (LPVOID)cast_pointer_function(CNetSocketPushIPCheckList30_wrapper),
                (LPVOID)cast_pointer_function((bool(CNetSocket::*)(unsigned int))&CNetSocket::PushIPCheckList)
            },
            _hook_record {
                (LPVOID)0x14047e9c0L,
                (LPVOID *)&CNetSocketRecv32_user,
                (LPVOID *)&CNetSocketRecv32_next,
                (LPVOID)cast_pointer_function(CNetSocketRecv32_wrapper),
                (LPVOID)cast_pointer_function((bool(CNetSocket::*)(unsigned int, char*, int, int*))&CNetSocket::Recv)
            },
            _hook_record {
                (LPVOID)0x14047e140L,
                (LPVOID *)&CNetSocketRelease34_user,
                (LPVOID *)&CNetSocketRelease34_next,
                (LPVOID)cast_pointer_function(CNetSocketRelease34_wrapper),
                (LPVOID)cast_pointer_function((void(CNetSocket::*)())&CNetSocket::Release)
            },
            _hook_record {
                (LPVOID)0x14047ea70L,
                (LPVOID *)&CNetSocketSend36_user,
                (LPVOID *)&CNetSocketSend36_next,
                (LPVOID)cast_pointer_function(CNetSocketSend36_wrapper),
                (LPVOID)cast_pointer_function((bool(CNetSocket::*)(unsigned int, char*, int, int*))&CNetSocket::Send)
            },
            _hook_record {
                (LPVOID)0x14047dda0L,
                (LPVOID *)&CNetSocketSetSocket38_user,
                (LPVOID *)&CNetSocketSetSocket38_next,
                (LPVOID)cast_pointer_function(CNetSocketSetSocket38_wrapper),
                (LPVOID)cast_pointer_function((bool(CNetSocket::*)(struct _SOCK_TYPE_PARAM*, char*))&CNetSocket::SetSocket)
            },
            _hook_record {
                (LPVOID)0x14047dcc0L,
                (LPVOID *)&CNetSocketdtor_CNetSocket43_user,
                (LPVOID *)&CNetSocketdtor_CNetSocket43_next,
                (LPVOID)cast_pointer_function(CNetSocketdtor_CNetSocket43_wrapper),
                (LPVOID)cast_pointer_function((void(CNetSocket::*)())&CNetSocket::dtor_CNetSocket)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
