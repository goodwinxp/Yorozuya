#pragma once

#include <Windows.h>

class CCriticalSection
{
public:
    CCriticalSection()
    {
        ::InitializeCriticalSection(&m_cs);
    }

    ~CCriticalSection()
    {
        ::DeleteCriticalSection(&m_cs);
    }

    void Enter()
    {
        ::EnterCriticalSection(&m_cs);
    }

    void Leave()
    {
        ::LeaveCriticalSection(&m_cs);
    }

private:
    CRITICAL_SECTION m_cs;

private:
    CCriticalSection(const CCriticalSection&) = delete;
    CCriticalSection(CCriticalSection&&) = delete;

    CCriticalSection& operator=(const CCriticalSection&) = delete;
    CCriticalSection& operator=(CCriticalSection&&) = delete;
};

class CCriticalSectionGuard
{
public:
    CCriticalSectionGuard(CCriticalSection& cs)
        : m_cs(cs)
    {
        m_cs.Enter();
    }

    ~CCriticalSectionGuard()
    {
        m_cs.Leave();
    }

private:
    CCriticalSection& m_cs;

private:
private:
    CCriticalSectionGuard(const CCriticalSectionGuard&) = delete;
    CCriticalSectionGuard(CCriticalSectionGuard&&) = delete;

    CCriticalSectionGuard& operator=(const CCriticalSectionGuard&) = delete;
    CCriticalSectionGuard& operator=(CCriticalSectionGuard&&) = delete;
};
