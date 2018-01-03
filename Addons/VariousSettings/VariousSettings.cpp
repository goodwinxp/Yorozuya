#include "stdafx.h"

#include "VariousSettings.h"
#include "../../Common/ETypes.h"
#include "../../Common/Helpers/RapidHelper.hpp"

#include <ATF/global.hpp>

#include "Exchange\ExchangeSettings.h"

namespace GameServer
{
    namespace Addon
    {
        CVariousSettings::CVariousSettings()
        {
            m_mapSettings = {
                { "exchange", make_module<CExchangeSettings>() }
            };
        }

        void CVariousSettings::load()
        {
            for (auto& r : m_mapSettings)
            {
                r.second->load();
            }
        }

        void CVariousSettings::unload()
        {
            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CVariousSettings::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "addon.various_settings";
            return name;
        }

        void CVariousSettings::configure(const rapidjson::Value& nodeConfig)
        {
            for (auto& module : nodeConfig["settings"].GetArray())
            {
                Yorozuya::Module::ModuleName_t name =
                    RapidHelper::GetValue<::std::string>(module, "name");

                auto it = m_mapSettings.find(name);
                if (it == m_mapSettings.end())
                {
                    continue;
                }

                it->second->configure(module["config"]);
            }
        }
    }
}
