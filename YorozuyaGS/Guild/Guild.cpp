#include "stdafx.h"

#include "Guild.h"
#include <ATF/global.hpp>
#include <ATF/CItemStoreManager.hpp>

namespace GameServer
{
    namespace Fixes
    {
        void CGuild::load()
        {
            enable_hook(&ATF::CGuild::ManageAcceptORRefuseGuildBattle, &CGuild::ManageAcceptORRefuseGuildBattle);
            enable_hook(&ATF::CGuild::ManageExpulseMember, &CGuild::ManageExpulseMember);
        }

        void CGuild::unload()
        {
            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CGuild::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "fix.guild";
            return name;
        }

        char WINAPIV CGuild::ManageAcceptORRefuseGuildBattle(
            ATF::CGuild * pObj, 
            bool bAccept, 
            ATF::Info::CGuildManageAcceptORRefuseGuildBattle80_ptr next)
        {
            UNREFERENCED_PARAMETER(next);

            static const int dwCostBattleGold = 5000;

            char result = 0;
            do
            {
                if (pObj->m_GuildBattleSugestMatter.eState != ATF::_guild_battle_suggest_matter::APPLY_BATTLE_REQUEST_SUGGEST)
                {
                    result = 111;
                    break;
                }
                    
                if (bAccept)
                {
                    if (pObj->m_dTotalGold < dwCostBattleGold)
                    {
                        result = 116;
                        break;
                    }

                    result = ATF::CGuildBattleController::Instance()->Add(
                        pObj->m_GuildBattleSugestMatter.pkSrc,
                        pObj->m_GuildBattleSugestMatter.pkDest,
                        pObj->m_GuildBattleSugestMatter.dwStartTime,
                        pObj->m_GuildBattleSugestMatter.dwNumber,
                        pObj->m_GuildBattleSugestMatter.dwMapIdx);

                    if (result)
                    {
                        if (result == 112)
                            result = 119;

                        pObj->m_GuildBattleSugestMatter.pkSrc->PushDQSInGuildBattleCost();
                        pObj->m_GuildBattleSugestMatter.pkSrc->SendMsg_ApplyGuildBattleResultInform(result, pObj->m_wszName);
                    }
                    else
                    {
                        pObj->PushDQSDestGuildOutputGuildBattleCost();
                        if (ATF::CHonorGuild::Instance()->CheckHonorGuild(
                            pObj->m_GuildBattleSugestMatter.pkSrc->m_byRace, 
                            pObj->m_GuildBattleSugestMatter.pkSrc->m_dwSerial))
                        {
                            ATF::CMoneySupplyMgr::Instance()->UpdateHonorGuildMoneyData(1, pObj->m_byRace, dwCostBattleGold);
                        }
                    }
                }
                else
                {
                    pObj->m_GuildBattleSugestMatter.pkSrc->SendMsg_GuildBattleRefused(pObj->m_wszName);
                    pObj->m_GuildBattleSugestMatter.pkSrc->PushDQSInGuildBattleCost();
                }

                pObj->m_GuildBattleSugestMatter.pkSrc->m_GuildBattleSugestMatter.Clear();
                pObj->m_GuildBattleSugestMatter.Clear();
            } while (false);

            return result;
        }

        char WINAPIV CGuild::ManageExpulseMember(
            ATF::CGuild * pGuild,
            unsigned int dwMemberSerial,
            ATF::Info::CGuildManageExpulseMember84_ptr next)
        {
            auto pInstance = ATF::GUILD_BATTLE::CNormalGuildBattleManager::Instance();
            LPVOID pBattle = pInstance->GetBattleByGuildSerial(pGuild->m_dwSerial);
            if (pBattle)
            {
                return 0x6e;
            }

            return next(pGuild, dwMemberSerial);
        }
    }
}
