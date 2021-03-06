
#include <QDebug>

#include "AgentsExplorer.hpp"
#include "common/constants.hpp"


AgentsExplorer::AgentsExplorer(QObject* parent)
{
    connect(&m_zeroConf, &QZeroConf::serviceAdded, this, &AgentsExplorer::newAgent);
    connect(&m_zeroConf, &QZeroConf::serviceRemoved, this, &AgentsExplorer::lostAgent);
}


void AgentsExplorer::startListening()
{
    m_zeroConf.startBrowser(ZeroConfServiceName);
}


void AgentsExplorer::newAgent(const QZeroConfService& info)
{
    qDebug() << "New agent discovered:" << info;

    if (info->ip().isLoopback())
        qDebug() << "Ignoring loopback";
    else
    {
        AgentInformation agentInfo(info->name(), info->ip(), info->port(), AgentInformation::DetectionSource::ZeroConf);
        emit agentDiscovered(agentInfo);
    }
}


void AgentsExplorer::lostAgent(const QZeroConfService& info)
{
    qDebug() << "Agent lost:" << info;

    AgentInformation agentInfo(info->name(), info->ip(), info->port(), AgentInformation::DetectionSource::ZeroConf);
    emit agentLost(agentInfo);
}
