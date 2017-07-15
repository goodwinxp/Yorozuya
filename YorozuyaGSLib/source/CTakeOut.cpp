#include <CTakeOut.hpp>


START_ATF_NAMESPACE
    void CTakeOut::TakeOut_Lotto(int* pBuff, unsigned int dwNodeCount)
    {
        using org_ptr = void (WINAPIV*)(int*, unsigned int);
        (org_ptr(0x1402af680L))(pBuff, dwNodeCount);
    };
END_ATF_NAMESPACE
