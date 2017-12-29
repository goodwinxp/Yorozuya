#pragma once

#include <string.h>
#include <sstream>
#include <memory>
#include <exception>
#include <unordered_map>

#include <P7_Trace.h>
#include <P7_Telemetry.h>

namespace P7Helper
{
    class CP7LogShared;
    class CP7Trace
    {
    public:
        using Ptr_t = ::std::shared_ptr<CP7Trace>;

    public:
        CP7Trace(
            IP7_Trace* pP7Trace,
            ::std::shared_ptr<CP7LogShared> spP7Client,
            const wchar_t* wszModuleName)
            : m_pP7Trace(pP7Trace)
            , m_spP7Client(spP7Client)
        {
            if (!m_pP7Trace->Register_Module(wszModuleName, &m_hModule))
            {
                throw ::std::runtime_error("can't register module");
            }
        }

        ~CP7Trace()
        {
            m_pP7Trace->Release();
            m_spP7Client.reset();
        }

        bool trace(
            eP7Trace_Level eLevel,
            uint16_t wLine,
            const char* pszFile,
            const char* pszFunction,
            const wchar_t* pwszMessage)
        {
            return m_pP7Trace->Trace(
                0,
                eLevel,
                m_hModule,
                wLine,
                pszFile,
                pszFunction,
                pwszMessage);
        }

    private:
        IP7_Trace * m_pP7Trace;
        IP7_Trace::hModule m_hModule;
        ::std::shared_ptr<CP7LogShared> m_spP7Client;
    };

    class CP7LogShared
        : public ::std::enable_shared_from_this<CP7LogShared>
    {
    public:
        using Ptr_t = ::std::shared_ptr<CP7LogShared>;

    public:
        CP7LogShared(
            const wchar_t* wszInitString,
            const wchar_t* wszSharedClientName)
        {
            m_pClient = P7_Create_Client(wszInitString);
            if (!m_pClient)
            {
                throw ::std::runtime_error("can't create p7 client");
            }

            if (!m_pClient->Share(wszSharedClientName))
            {
                throw ::std::runtime_error("can't shared p7 client");
            }

            IP7_Client* pSharedClient = P7_Get_Shared(wszSharedClientName);
            if (!pSharedClient)
            {
                throw ::std::runtime_error("can't shared p7 client");
            }

            m_pClient->Release();
            m_pClient = pSharedClient;
        }

        ~CP7LogShared()
        {
            if (m_pClient)
            {
                m_pClient->Release();
                m_pClient = nullptr;
            }
        }

        CP7Trace::Ptr_t create_trace(
            const wchar_t* wszName,
            const wchar_t* wszModuleName,
            const stTrace_Conf* i_pConf = nullptr)
        {
            IP7_Trace* pTrace = P7_Create_Trace(m_pClient, wszName, i_pConf);
            if (!pTrace)
            {
                throw ::std::runtime_error("can't create trace");
            }

            return ::std::make_shared<CP7Trace>( pTrace, shared_from_this(), wszModuleName );
        }

    private:
        CP7LogShared(CP7LogShared&&) = delete;
        CP7LogShared(const CP7LogShared&) = delete;
        CP7LogShared& operator=(const CP7LogShared&) = delete;
    private:
        IP7_Client * m_pClient = nullptr;
    };

    #define MSG_LOG(tr, lv, msg) \
    { \
        ::std::wstringstream ss; \
        ss << msg; \
        tr->trace(lv, __LINE__, __FILE__, __FUNCTION__, ss.str().c_str()); \
    }

    #define MSG_LOG_UTF8(tr, lv, msg) \
    { \
        ::std::stringstream ss; \
        ss << msg; \
        ::std::wstring_convert<::std::codecvt_utf8_utf16<wchar_t>> converter; \
        ::std::wstring wstr = converter.from_bytes(ss.str()); \
        tr->trace(lv, __LINE__, __FILE__, __FUNCTION__, wstr.c_str()); \
    }
}
