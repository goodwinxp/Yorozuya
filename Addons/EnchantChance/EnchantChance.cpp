#include "stdafx.h"

#include "EnchantChance.h"

#include <string>
#include <fstream>
#include <filesystem>
#include <ATF/global.hpp>
#include <rapidjson/prettywriter.h>
#include <rapidjson/document.h>
#include <rapidjson/istreamwrapper.h>
#include <rapidjson/ostreamwrapper.h>

#include "../../Common/ETypes.h"
#include "../../Common/Helpers/Memory.hpp"
#include "../../Common/Helpers/RapidHelper.hpp"

namespace fs = ::std::experimental::filesystem::v1;

namespace GameServer
{
    namespace Addon
    {
        void CEnchantChance::load()
        {
        }

        void CEnchantChance::unload()
        {
            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CEnchantChance::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "addon.enchant_chance";
            return name;
        }

        void CEnchantChance::configure(const rapidjson::Value& nodeConfig)
        {
            bool bActivated = RapidHelper::GetValueOrDefault(nodeConfig, "activated", false);
            if (!bActivated)
                return;

            std::string sPathToConfig = RapidHelper::GetValueOrDefault<std::string>(
                nodeConfig, "path_to_enchant_config", "./YorozuyaGS/enchant.json");

            if (fs::exists(sPathToConfig))
                read_config(sPathToConfig);
            else
                generate_config(sPathToConfig);

            auto fnPatchMemory = [&](e_type_chance eTypeChance, int nGrade, int nLv, uint32_t* pChance)
            {
                auto& value = m_Chance[(size_t)eTypeChance][nGrade * detail::max_enchant_grade + nLv];

                Memory::WriteMemory(pChance, value);
            };

            traverse_chance(fnPatchMemory);
        }

        void CEnchantChance::read_config(
            const std::string& sPath)
        {
            std::ifstream ifs(sPath);

            rapidjson::IStreamWrapper isw(ifs);
            rapidjson::Document EnchantConfig;
            if (EnchantConfig.ParseStream(isw).HasParseError())
            {
                throw std::runtime_error("Configuration file - corrupted");
            }

            for (auto& block : EnchantConfig.GetObject())
            {
                EnchantChance_t* trgChance = &m_Chance[(size_t)e_type_chance::item_save];
                std::string sNameBlock(block.name.GetString());
                if (sNameBlock == "item_save")
                {
                    trgChance = &m_Chance[(size_t)e_type_chance::item_save];
                }
                else if (sNameBlock == "item_destroy")
                {
                    trgChance = &m_Chance[(size_t)e_type_chance::item_destroy];
                }
                else if (sNameBlock == "gem_destroy")
                {
                    trgChance = &m_Chance[(size_t)e_type_chance::gem_destroy];
                }
                else
                {
                    continue;
                }

                for (auto& grade : block.value.GetArray())
                {
                    int nGrade = RapidHelper::GetValue<int>(grade, "item_grade");
                    auto& arrChances = grade["chances"];

                    int nLv = 0;
                    for (auto& chance : arrChances.GetArray())
                    {
                        (*trgChance)[nGrade * detail::max_enchant_grade + nLv] = chance.Get<int>();
                        ++nLv;
                    }
                }
            }
        }

        void CEnchantChance::generate_config(
            const std::string& sPath)
        {
            auto fnReadMemory = [&](e_type_chance eTypeChance, int nGrade, int nLv, uint32_t* pChance)
            {
                auto& value = m_Chance[(size_t)eTypeChance][nGrade * detail::max_enchant_grade + nLv];

                Memory::ReadMemory(pChance, &value);
            };

            traverse_chance(fnReadMemory);

            rapidjson::Document EnchantConfig(rapidjson::kObjectType);
            auto& allocator = EnchantConfig.GetAllocator();
            for (size_t i = 0; i < _countof(m_Chance); ++i)
            {
                rapidjson::Value valueBlock(rapidjson::kArrayType);
                for (int grade = 0; grade < detail::max_item_grade; ++grade)
                {
                    rapidjson::Value valueGrade(rapidjson::kObjectType);
                    rapidjson::Value valueChances(rapidjson::kArrayType);

                    for (int lv = 0; lv < detail::max_enchant_grade; ++lv)
                    {
                        valueChances.PushBack(m_Chance[i][grade * detail::max_enchant_grade + lv], allocator);
                    }

                    valueGrade.AddMember("item_grade", grade, allocator);
                    valueGrade.AddMember("chances", valueChances, allocator);
                    valueBlock.PushBack(valueGrade, allocator);
                }

                switch ((e_type_chance)i)
                {
                case GameServer::Addon::CEnchantChance::e_type_chance::item_save:
                    EnchantConfig.AddMember("item_save", valueBlock, allocator);
                    break;
                case GameServer::Addon::CEnchantChance::e_type_chance::item_destroy:
                    EnchantConfig.AddMember("item_destroy", valueBlock, allocator);
                    break;
                case GameServer::Addon::CEnchantChance::e_type_chance::gem_destroy:
                    EnchantConfig.AddMember("gem_destroy", valueBlock, allocator);
                    break;
                }
            }

            ::std::ofstream ofs(sPath);
            rapidjson::OStreamWrapper osw(ofs);
            rapidjson::PrettyWriter<rapidjson::OStreamWrapper> writer(osw);
            EnchantConfig.Accept(writer);
        }

        void CEnchantChance::traverse_chance(
            const EnchantChanceVisitor_t& fnVisitor)
        {
            const ptrdiff_t offset = 11;

            struct _data
            {
                uint32_t* baseOffset;
                e_type_chance eType;
            };
            ::std::vector<_data> vecData{
                { (uint32_t*)0x1400B1BEAL, e_type_chance::item_save},
                { (uint32_t*)0x1400B2070L, e_type_chance::item_destroy },
                { (uint32_t*)0x1400B23BFL, e_type_chance::gem_destroy }
            };

            for (auto& i : vecData)
            {
                uint32_t* src = i.baseOffset;
                for (int grade = 0; grade < detail::max_item_grade; ++grade)
                {
                    for (int lv = 0; lv < detail::max_enchant_grade; ++lv)
                    {
                        fnVisitor(i.eType, grade, lv, src);
                        src = (uint32_t *)(((uint8_t *)src) + offset);
                    }
                }
            }
        }
    }
}
