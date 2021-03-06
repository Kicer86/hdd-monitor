
#pragma once

#include <QRemoteObjectHost>

#include "common/GeneralHealth.h"
#include "common/constants.hpp"
#include "rep_AgentStatus_source.h"
#include "common/DiskInfo.h"


class Server : public AgentStatusSource
{
    Q_OBJECT

public:
    Server(QObject* parent = nullptr);
    bool Init();

    const QString& ip() const;
    quint16 port() const;

    void setOverallStatus(GeneralHealth::Health overallStatus) override;
    void setDiskInfoCollection(std::vector<DiskInfo> diskInfoCollection) override;
    GeneralHealth::Health overallStatus() const override;
    std::vector<DiskInfo> diskInfoCollection() const override;
    void refresh() override;

private:
    void CollectInfoAboutDiscs();

    GeneralHealth::Health m_health;
    std::vector<DiskInfo> m_diskInfoCollection;    

    QRemoteObjectHost m_ROHost;
    QString m_ip;
};