#include "stdafx.h"

#include "PostSystem.h"
#include "../../Common/ETypes.h"

#include <ATF/global.hpp>

namespace GameServer
{
    namespace Fixes
    {
        void CPostSystem::load()
        {
            enable_hook(&ATF::CPostSystemManager::CheckRegister, &CPostSystem::CheckRegister);
            enable_hook(&ATF::CMainThread::Load_ReturnPost_Complete, &CPostSystem::CMainThread__Load_ReturnPost_Complete);
            enable_hook(&ATF::CMainThread::Load_PostStorage_Complete, &CPostSystem::CMainThread__Load_PostStorage_Complete);
        }

        void CPostSystem::unload()
        {
            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CPostSystem::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "fix.post_system";
            return name;
        }

        void WINAPIV CPostSystem::CMainThread__Load_ReturnPost_Complete(
            ATF::CMainThread *pObj,
            char *pData,
            ATF::Info::CMainThreadLoad_ReturnPost_Complete114_ptr next)
        {
            UNREFERENCED_PARAMETER(pObj);
            UNREFERENCED_PARAMETER(next);
            ATF::_qry_case_post_return_list_get* pInfo = (ATF::_qry_case_post_return_list_get *)pData;

            do
            {
                if (pInfo->byProcRet == 1)
                    break;

                ATF::CPlayer* pPlayer = ATF::Global::GetPtrPlayerFromSerial(ATF::Global::g_Player, ATF::Global::max_player, pInfo->dwMasterSerial);
                if (!pPlayer)
                    break;

                if (!pPlayer->m_bLoad)
                    break;

                if (pPlayer->m_bPostLoad)
                    break;

                pPlayer->m_bPostLoad = true;

                auto pReturnPostStorage = &pPlayer->m_Param.m_ReturnPostStorage;
                for (unsigned int j = 0; j < pInfo->dwCount; ++j)
                {
                    auto pPost = pReturnPostStorage->AddReturnPost(
                        pInfo->List[j].byErr,
                        pInfo->List[j].dwSerial,
                        pInfo->List[j].byState,
                        pInfo->List[j].wszRecvName,
                        pInfo->List[j].wszTitle,
                        pInfo->List[j].wszContent,
                        pInfo->List[j].key,
                        pInfo->List[j].dwDur,
                        pInfo->List[j].dwUpt,
                        pInfo->List[j].dwGold,
                        pInfo->List[j].lnUID);

                    if (!pPost)
                        continue;

                    if (pPost->m_Key.IsFilled() || pPost->m_dwGold)
                    {
                        ATF::Global::s_MgrItemHistory->post_returnreceive(
                            pPost,
                            pPlayer->m_szItemHistoryFileName);
                    }
                }

                ATF::Global::s_MgrItemHistory->return_post_storage(
                    &pPlayer->m_Param.m_ReturnPostStorage, 
                    pPlayer->m_szItemHistoryFileName);

                if (!pInfo->dwCount)
                    break;

                for (auto& PostData : pReturnPostStorage->m_PostData)
                {
                    if (PostData.GetState() == -1)
                        continue;

                    pPlayer->SendMsg_PostReturn(
                        PostData.m_byErrCode,
                        PostData.m_dwPSSerial,
                        PostData.m_wszRecvName,
                        PostData.m_wszTitle,
                        PostData.m_wszContent,
                        PostData.m_Key.byTableCode,
                        PostData.m_Key.wItemIndex,
                        PostData.m_dwDur,
                        PostData.m_dwUpt,
                        PostData.m_dwGold);
                }
            } while (false);
        }

        void WINAPIV CPostSystem::CMainThread__Load_PostStorage_Complete(
            ATF::CMainThread * pObj,
            char * pData, 
            ATF::Info::CMainThreadLoad_PostStorage_Complete112_ptr next)
        {
            ATF::_qry_case_post_storage_list_get* pInfo = (ATF::_qry_case_post_storage_list_get *)pData;

            do
            {
                if (pInfo->byProcRet == 1)
                    break;

                ATF::CPlayer* pPlayer = ATF::Global::GetPtrPlayerFromSerial(ATF::Global::g_Player, ATF::Global::max_player, pInfo->dwMasterSerial);
                if (!pPlayer)
                    break;

                if (!pPlayer->m_bLoad)
                    break;

                if (pPlayer->m_bPostLoad)
                    break;

                next(pObj, pData);
            } while (false);
        }

        char WINAPIV CPostSystem::CheckRegister(
            ATF::CPostSystemManager * pObj, 
            ATF::CPlayer * pOne, 
            ATF::_STORAGE_POS_INDIV * pItemInfo, 
            unsigned int dwGold, 
            ATF::_STORAGE_LIST::_db_con ** pItem, 
            ATF::Info::CPostSystemManagerCheckRegister4_ptr next)
        {
            char byResult = next(pObj, pOne, pItemInfo, dwGold, pItem);
            if (byResult == 0 && *pItem != nullptr)
            {
                if (ATF::Global::IsOverLapItem((*pItem)->m_byTableCode))
                {
                    if (pItemInfo->byNum <= 0 || pItemInfo->byNum > 99)
                        byResult = 5;
                }
            }
            return byResult;
        }
    }
}