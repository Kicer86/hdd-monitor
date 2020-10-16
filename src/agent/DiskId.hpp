
#pragma once

#include <string>

class DiskId
{
public:
    DiskId(const std::string& systemId);

    std::string getSystemId();              ///< returns system specific disk identifier (/dev/sdX on linux and X: on Windows)

private:
    std::string m_systemId;
};
