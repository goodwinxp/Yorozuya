#pragma once

#include <Windows.h>
#include <cstdlib>
#include <cstdint>
#include <cstdio>
#include <memory>
#include <vector>

#define START_ATF_NAMESPACE namespace ATF {
#define END_ATF_NAMESPACE };

START_ATF_NAMESPACE
	const uint16_t usVersion = 0x0001;
	const wchar_t wszVersion[] = L"0.1";
	
	#include "ATFRegistry.hpp"
	
	typedef struct _hook_record {
		LPVOID pTrgAppOrig;	// Адрес в целевом приложении
		LPVOID* ppOrig;		// clbk
		LPVOID* ppTramp;	// tramp
		LPVOID  pWrapper;	// tramp
		LPVOID  pBind;		// bind
	} hook_record;
END_ATF_NAMESPACE
