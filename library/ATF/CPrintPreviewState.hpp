// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CView.hpp"
#include "HACCEL__.hpp"
#include "HMENU__.hpp"


START_ATF_NAMESPACE
    struct CPrintPreviewState
    {
        unsigned int nIDMainPane;
        HMENU__ *hMenu;
        unsigned int dwStates;
        CView *pViewActiveOld;
        int (WINAPIV *lpfnCloseProc)(CFrameWnd *);
        HACCEL__ *hAccelTable;
    };
END_ATF_NAMESPACE