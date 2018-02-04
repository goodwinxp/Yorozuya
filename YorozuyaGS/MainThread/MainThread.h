#pragma once

#include "../Common/ModuleRegistry.h"
#include "../../Common/Interfaces/ModuleInterface.h"
#include "../../Common/Helpers/TimeHelper.hpp"

#include <unordered_map>
#include <ATF/CMainThreadInfo.hpp>
#include <ATF/CExchangeEvent.hpp>

namespace GameServer
{
    namespace Fixes
    {
        namespace detail
        {
            class CRunRule
            {
            public:
                CRunRule()
                    : CRunRule(false)
                {
                }

                CRunRule(const ::std::chrono::milliseconds& interval)
                    : CRunRule(true, interval)
                {
                }

                bool runnable() const
                {
                    bool result = true;
                    if (m_bEnabledTimer)
                    {
                        result = m_timer.is_end();
                        if (result)
                            m_timer.begin(m_interval);
                    }

                    return result;
                }

            private:
                CRunRule(bool enabled_timer,
                    const ::std::chrono::milliseconds& interval = ::std::chrono::milliseconds(0))
                    : m_bEnabledTimer(enabled_timer)
                    , m_interval(interval)
                {
                    if (m_bEnabledTimer)
                    {
                        m_timer.begin(m_interval);
                    }
                }

            private:
                const bool m_bEnabledTimer;
                const ::std::chrono::milliseconds m_interval;
                mutable TimeHelper::CTimer m_timer;
            };

            class CTask
            {
            public:
                CTask(const CRunRule& rule, const ::std::function<void()>& impl)
                    : m_ruleRun(rule)
                    , m_fnImpl(impl)
                {
                }

                CTask(const ::std::function<void()>& impl)
                    : CTask(CRunRule{}, impl)
                {
                }

                void run() const
                {
                    if (m_ruleRun.runnable())
                        m_fnImpl();
                }

            private:
                const CRunRule m_ruleRun;
                const ::std::function<void()> m_fnImpl;
            };

            using Tasks_t = ::std::vector<CTask>;

            enum class priority_task
            {
                one,
                two,
                three,
                four,
                five,
                num
            };

            using PriorityTimer_t = ::std::unordered_map<priority_task, ::std::chrono::milliseconds>;
        }

        class CMainThread
            : public Yorozuya::Module::IModule
            , CModuleRegister<CMainThread>
        {
        public:
            CMainThread() { };

            virtual void load() override;

            virtual void unload() override;

            virtual Yorozuya::Module::ModuleName_t get_name() override;

            virtual void configure(const rapidjson::Value& nodeConfig) override;

        private:
            void make_tasks(const detail::PriorityTimer_t& PriorityTimerValue);

        private:
            detail::Tasks_t m_Tasks;

        private:
            static void WINAPIV CheckForceClose(
                ATF::CMainThread* pObj,
                ATF::Info::CMainThreadCheckForceClose24_ptr next);

            static void WINAPIV OnRun(
                ATF::CMainThread* pObj,
                ATF::Info::CMainThreadOnRun130_ptr next);
        };
    };
};
