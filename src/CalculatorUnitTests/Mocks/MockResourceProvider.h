// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

#include <unordered_map>
#include <string_view>
#include "CalcManager/CalculatorResource.h"

namespace CalculatorApp
{
    class MockResourceProvider : public CalculationManager::IResourceProvider
    {
    public:
        MockResourceProvider();
        virtual std::wstring GetCEngineString(std::wstring_view id) override;
    private:
        std::unordered_map<std::wstring, std::wstring> map;
    };
}
