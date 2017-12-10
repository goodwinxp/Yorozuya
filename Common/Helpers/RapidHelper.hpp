#pragma once

#include <rapidjson/document.h>

namespace RapidHelper
{
    template<typename _Ty>
    _Ty GetValue(
        const rapidjson::Value& node,
        const char* wszNameAttr);

    template<>
    uint32_t GetValue<uint32_t>(
        const rapidjson::Value& node,
        const char* wszNameAttr)
    {
        return node[wszNameAttr].GetUint();
    }

    template<>
    uint64_t GetValue<uint64_t>(
        const rapidjson::Value& node,
        const char* wszNameAttr)
    {
        return node[wszNameAttr].GetUint64();
    }

    template<>
    int32_t GetValue<int32_t>(
        const rapidjson::Value& node,
        const char* wszNameAttr)
    {
        return node[wszNameAttr].GetInt();
    }

    template<>
    int64_t GetValue<int64_t>(
        const rapidjson::Value& node,
        const char* wszNameAttr)
    {
        return node[wszNameAttr].GetInt64();
    }

    template<>
    float GetValue<float>(
        const rapidjson::Value& node,
        const char* wszNameAttr)
    {
        return node[wszNameAttr].GetFloat();
    }

    template<>
    double GetValue<double>(
        const rapidjson::Value& node,
        const char* wszNameAttr)
    {
        return node[wszNameAttr].GetDouble();
    }

    template<>
    bool GetValue<bool>(
        const rapidjson::Value& node,
        const char* wszNameAttr)
    {
        return node[wszNameAttr].GetBool();
    }

    template<typename _Ty>
    _Ty GetValueOrDefault(
        const rapidjson::Value& node,
        const char* wszNameAttr,
        const _Ty& default_value)
    {
        auto& val = node[wszNameAttr];
        if (val.IsNull())
            return default_value;

        return GetValue<_Ty>(node, wszNameAttr);
    }
}
