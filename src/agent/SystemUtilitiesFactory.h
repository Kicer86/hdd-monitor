
#pragma once

#include <memory>

#include "IDiskCollector.h"
#include "agent/IProbe.h"


class SystemUtilitiesFactory
{
public:
    SystemUtilitiesFactory() = default;

    std::unique_ptr<IDiskCollector> diskCollector();
    std::unique_ptr<IProbe> generalAnalyzer();
};