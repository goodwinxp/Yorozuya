#include "stdafx.h"

#include "ChatLog.h"
#include "../../Common/ETypes.h"
#include "../../Common/Helpers/RapidHelper.hpp"

#include <ATF/global.hpp>

namespace GameServer
{
    namespace Addon
    {
        void CChatLog::load()
        {
        }

        void CChatLog::unload()
        {
            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CChatLog::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "addon.chat_log";
            return name;
        }

        void CChatLog::configure(const rapidjson::Value & nodeConfig)
        {
            // todo
        }
    }
}
