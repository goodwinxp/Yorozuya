#pragma once

#include <Windows.h>

namespace Memory
{
    namespace detail
    {
        inline bool WriteMemory(LPVOID lpAddress, LPVOID lpBuffer, SIZE_T nSize)
        {
            DWORD   flOldProtect = PAGE_NOACCESS;
            SIZE_T  nNumberOfBytesWritten = 0;
            HANDLE  hProcess = GetCurrentProcess();

            if (hProcess == INVALID_HANDLE_VALUE)
            {
                return false;
            }

            if (!VirtualProtectEx(hProcess, lpAddress, nSize, PAGE_WRITECOPY, &flOldProtect))
            {
                return false;
            }

            if (!WriteProcessMemory(hProcess, lpAddress, lpBuffer, nSize, &nNumberOfBytesWritten))
            {
                return false;
            }

            if (!VirtualProtectEx(hProcess, lpAddress, nSize, flOldProtect, &flOldProtect))
            {
                return false;
            }

            return true;
        }

        inline bool WriteMemory(ULONG_PTR lpAddress, LPVOID lpBuffer, SIZE_T nSize)
        {
            return WriteMemory(reinterpret_cast<LPVOID>(lpAddress), lpBuffer, nSize);
        }

        inline bool ReadMemory(LPVOID lpAddress, LPVOID lpBuffer, SIZE_T nSize)
        {
            DWORD   flOldProtect = PAGE_NOACCESS;
            SIZE_T  nNumberOfBytesRead = 0;
            HANDLE  hProcess = GetCurrentProcess();

            if (hProcess == INVALID_HANDLE_VALUE)
            {
                return false;
            }

            if (!VirtualProtectEx(hProcess, lpAddress, nSize, PAGE_READONLY, &flOldProtect))
            {
                return false;
            }

            if (!ReadProcessMemory(hProcess, lpAddress, lpBuffer, nSize, &nNumberOfBytesRead))
            {
                return false;
            }

            if (!VirtualProtectEx(hProcess, lpAddress, nSize, flOldProtect, &flOldProtect))
            {
                return false;
            }

            return true;
        }

        inline bool ReadMemory(ULONG_PTR lpAddress, LPVOID lpBuffer, SIZE_T nSize)
        {
            return ReadMemory(reinterpret_cast<LPVOID>(lpAddress), lpBuffer, nSize);
        }
    }

    template<typename T>
    inline bool WriteMemory(LPVOID lpAddress, T Value)
    {
        return detail::WriteMemory(lpAddress, &Value, sizeof(T));
    }

    template<typename T>
    inline bool WriteMemory(ULONG_PTR lpAddress, T Value)
    {
        return detail::WriteMemory(lpAddress, &Value, sizeof(T));
    }

    template<typename T>
    inline bool ReadMemory(LPVOID lpAddress, T *lpValue)
    {
        return detail::ReadMemory(lpAddress, lpValue, sizeof(T));
    }

    template<typename T>
    inline bool ReadMemory(ULONG_PTR lpAddress, T *lpValue)
    {
        return detail::ReadMemory(lpAddress, lpValue, sizeof(T));
    }
}
