#pragma once

#include <unordered_map>
#include "../../Common/Interfaces/ModuleInterface.h"
#include "../../Common/Helpers/ModuleHook.hpp"

namespace GameServer
{
    namespace Addon
    {
        class CVariousSettings
            : public Yorozuya::Module::IModule
            , CModuleHook
        {
        public:
            CVariousSettings();

            virtual void load() override;

            virtual void unload() override;

            virtual Yorozuya::Module::ModuleName_t get_name() override;

            virtual void configure(const rapidjson::Value& nodeConfig) override;

        private:
            template<typename _Ty>
            ::std::shared_ptr<_Ty> make_module()
            {
                return ::std::make_shared<_Ty>(dynamic_cast<CModuleHook*>(this));
            }

        private:
            using ModulesMap_t = ::std::unordered_map<
                Yorozuya::Module::ModuleName_t,
                Yorozuya::Module::Module_ptr>;

            ModulesMap_t m_mapSettings;
        };
    };
};
