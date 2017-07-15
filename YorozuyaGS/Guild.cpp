#include "stdafx.h"

#include "Guild.h"
#include <ATF/global.hpp>


namespace GameServer
{
    namespace Fixes
    {
        void CGuild::load()
        {
            auto& core = ATF::CATFCore::get_instance();
            core.set_hook(&ATF::CGuild::ManageAcceptORRefuseGuildBattle, &CGuild::ManageAcceptORRefuseGuildBattle);
        }

        void CGuild::unload()
        {
            auto& core = ATF::CATFCore::get_instance();
            core.unset_hook(&ATF::CGuild::ManageAcceptORRefuseGuildBattle);
        }

        void CGuild::loop()
        {
        }

        ModuleVersion_t CGuild::get_version()
        {
            return ATF::usVersion;
        }

        ModuleName_t CGuild::get_name()
        {
            static const ModuleName_t name = "fix_Guild";
            return name;
        }

        void CGuild::configure(const rapidjson::Value & nodeConfig)
        {
            UNREFERENCED_PARAMETER(nodeConfig);
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
    }
}
