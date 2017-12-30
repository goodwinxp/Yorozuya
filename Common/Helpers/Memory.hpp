#pragma once

#include <Windows.h>
#include <vector>

namespace Memory
{
    namespace detail
    {
        uint8_t sym_to_byte(const char sym)
        {
            uint8_t value = 0;
            if (sym >= 'A' && sym <= 'F')
            {
                value = ((sym - 'A') + 10);
            }
            else if (sym >= 'a' && sym <= 'f')
            {
                value = ((sym - 'a') + 10);
            }
            else if (sym >= '0' && sym <= '9')
            {
                value = ((sym - '0'));
            }

            return value;
        }

        std::vector<uint8_t> to_array(const std::string& str)
        {
            std::vector<uint8_t> result;
            for (int i = 0; i < str.size(); i += 2)
            {
                uint8_t value = sym_to_byte(str[i]) << 4;
                value |= sym_to_byte(str[i + 1]);

                result.emplace_back(value);
            }

            return result;
        }

        inline bool WriteMemory(LPVOID lpAddress, LPVOID lpBuffer, SIZE_T nSize)
        {
            DWORD   flOldProtect = PAGE_NOACCESS;
            SIZE_T  nNumberOfBytesWritten = 0;
            HANDLE  hProcess = GetCurrentProcess();
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

    inline bool WriteMemoryStr(ULONG_PTR lpAddress, const std::string& sValue)
    {
        auto arr = detail::to_array(sValue);
        return detail::WriteMemory(lpAddress, arr.data(), arr.size());
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
