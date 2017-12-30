#include "stdafx.h"

#include "ServerMemoryPatch.h"
#include "../../Common/ETypes.h"
#include "../../Common/Helpers/RapidHelper.hpp"
#include "../../Common/Helpers/Memory.hpp"

#include <ATF/global.hpp>

namespace GameServer
{
    namespace Addon
    {
        namespace
        {
            const uint64_t base_offset = 0x140000C00;
        }

        bool CServerMemoryPatch::m_bActivated = false;

        void CServerMemoryPatch::load()
        {
        }

        void CServerMemoryPatch::unload()
        {
            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CServerMemoryPatch::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "addon.server_memory_patch";
            return name;
        }

        void CServerMemoryPatch::configure(const rapidjson::Value & nodeConfig)
        {
            CServerMemoryPatch::m_bActivated = RapidHelper::GetValueOrDefault(nodeConfig, "activated", false);
            if (!CServerMemoryPatch::m_bActivated)
                return;

            const auto& nodeRecords = nodeConfig["records"];
            for (auto& rec : nodeRecords.GetArray())
            {
                std::string sAddress = RapidHelper::GetValue<std::string>(rec, "address");
                uint64_t file_address = std::stoul(sAddress, nullptr, 16);
                uint64_t virtual_address = file_address + base_offset;

                std::string value = RapidHelper::GetValue<std::string>(rec, "value");
                Memory::WriteMemoryStr(virtual_address, value);
            }
        }
    }
}
