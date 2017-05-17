#include "stdafx.h"

#include "Yorozuya.h"


BOOL APIENTRY DllMain(
    HMODULE hModule,
    DWORD   ul_reason_for_call,
    LPVOID  lpReserved)
{
    UNREFERENCED_PARAMETER(hModule);
    UNREFERENCED_PARAMETER(lpReserved);

    auto instance = GameServer::CYorozuya::get_instance();
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        instance->start();
        break;
    case DLL_PROCESS_DETACH:
        instance->stop();
        break;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
        break;
    }
    return TRUE;
}
