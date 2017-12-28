////////////////////////////////////////////////////////////////////////////////
//                                                                             /
// 2012-2017 (c) Baical                                                        /
//                                                                             /
// This library is free software; you can redistribute it and/or               /
// modify it under the terms of the GNU Lesser General Public                  /
// License as published by the Free Software Foundation; either                /
// version 3.0 of the License, or (at your option) any later version.          /
//                                                                             /
// This library is distributed in the hope that it will be useful,             /
// but WITHOUT ANY WARRANTY; without even the implied warranty of              /
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU           /
// Lesser General Public License for more details.                             /
//                                                                             /
// You should have received a copy of the GNU Lesser General Public            /
// License along with this library.                                            /
//                                                                             /
////////////////////////////////////////////////////////////////////////////////
#pragma once

#include <winsock2.h>
#include <ws2tcpip.h>
#include <mswsock.h>

//256k
#define CLIENT_RECV_BUFFER_SIZE                                        (0x40000) 
#define CLIENT_SEND_BUFFER_SIZE                                        (0x40000) 

//2m
#define SERVER_RECV_BUFFER_SIZE                                       (0x200000) 
//256k
#define SERVER_SEND_BUFFER_SIZE                                        (0x40000) 


typedef SOCKET      tSOCKET; 

typedef int         tADDR_LEN; 

typedef addrinfoW   tADDR_INFO;


#define INVALID_SOCKET_VAL                                      (INVALID_SOCKET)
#define CONNECTION_IN_PROGRESS                                  (WSAEWOULDBLOCK)

#define CLOSE_SOCKET(i_Socket)                            closesocket(m_hSocket)


#define GET_SOCKET_ERROR()                                     WSAGetLastError()

//#define SOCKET_ERROR                                                      (-1)

#define GET_ADDR_INFO(i_Node, i_Service, i_Hints, o_Res) GetAddrInfoW(i_Node,\
                                                                      i_Service,\
                                                                      i_Hints,\
                                                                      o_Res)                                  

#define FREE_ADDR_INFO(i_Info) FreeAddrInfoW(i_Info)    


////////////////////////////////////////////////////////////////////////////////
//WSA_Init
static inline tBOOL WSA_Init()
{
    WSADATA l_tWSA;
    
    if (0 != WSAStartup(MAKEWORD(1,1), &l_tWSA))
    {
        return FALSE;
    }
    return TRUE;
}//WSA_Init


////////////////////////////////////////////////////////////////////////////////
//WSA_UnInit
static inline void WSA_UnInit()
{
    WSACleanup();
}//WSA_UnInit


////////////////////////////////////////////////////////////////////////////////
//Print_SAddr
static tBOOL Print_SAddr(sockaddr *i_pAddress, XCHAR *o_pIP, tUINT32 i_dwLen)
{
    tBOOL   l_bReturn = FALSE;
    tUINT32 l_dwSize  = 0;

    if (NULL == i_pAddress)
    {
        return l_bReturn;
    }

    if (AF_INET6 == i_pAddress->sa_family)
    {
        l_dwSize = sizeof(sockaddr_in6);
    }
    else if (AF_INET == i_pAddress->sa_family)
    {
        l_dwSize = sizeof(sockaddr_in);
    }

    if (0 == WSAAddressToStringW(i_pAddress, 
                                 l_dwSize, 
                                 NULL, 
                                 o_pIP, 
                                 (LPDWORD)&i_dwLen
                                )
       )
    {
        l_bReturn = TRUE;
    }
    
    return l_bReturn;
}//Print_SAddr


////////////////////////////////////////////////////////////////////////////////
//Disable_PortUnreachable_ICMP
static tBOOL Disable_PortUnreachable_ICMP(tSOCKET i_hSocket)
{
    tUINT32  l_dwBytesReturned = 0;
    tBOOL    l_bNewBehavior    = FALSE;
    tINT32   l_iStatus         = 0;
    
    
    l_iStatus = WSAIoctl(i_hSocket, 
                         SIO_UDP_CONNRESET,
                         &l_bNewBehavior, 
                         sizeof(l_bNewBehavior),
                         NULL, 
                         0,
                         (LPDWORD)&l_dwBytesReturned,
                         NULL,
                         NULL
                        );
    return (SOCKET_ERROR == l_iStatus) ? FALSE : TRUE;
}//Disable_PortUnreachable_ICMP
