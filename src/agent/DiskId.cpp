
#include "DiskId.hpp"

DiskId::DiskId(const std::string& system_id)
    : m_systemId(system_id)
{

}


std::string DiskId::getSystemId()
{
    return m_systemId;
}
