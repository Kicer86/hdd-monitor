
#pragma once

#include <vector>

#include "DiskId.hpp"


class DiskEnumerator
{
    public:
        std::vector<DiskId> enumerate();
};
