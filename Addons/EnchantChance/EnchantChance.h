#pragma once

#include <array>
#include <memory>
#include "../../Common/Interfaces/ModuleInterface.h"
#include "../../Common/Helpers/ModuleHook.hpp"

namespace GameServer
{
    namespace Addon
    {
        namespace detail
        {
            const size_t max_enchant_grade = 7;
            const size_t max_item_grade = 11;
            const size_t size_array = max_enchant_grade * max_item_grade;
        }

        class CEnchantChance
            : public Yorozuya::Module::IModule
            , CModuleHook
        {
        public:
            CEnchantChance() { };

            virtual void load() override;

            virtual void unload() override;

            virtual Yorozuya::Module::ModuleName_t get_name() override;

            virtual void configure(const rapidjson::Value& nodeConfig) override;

        private:
            enum class e_type_chance : size_t
            {
                item_save,
                item_destroy,
                gem_destroy,
                num
            };

            using EnchantChance_t = ::std::array<uint32_t, detail::size_array>;
            using EnchantChanceVisitor_t = ::std::function<void(e_type_chance eTypeChance, int nGrade, int nLv, uint32_t* pChance)>;

        private:
            void read_config(const std::string& sPath);

            void generate_config(const std::string& sPath);

            void traverse_chance(const EnchantChanceVisitor_t& fnVisitor);
        private:
            EnchantChance_t m_Chance[(size_t)e_type_chance::num];
        };
    };
};
