#ifndef SSHCONNECTIONSERIALIZER_H
#define SSHCONNECTIONSERIALIZER_H

#include <QString>
#include <QJsonObject>
#include <QJsonDocument>
#include <QFile>
#include <QVector>

#include "connection.h"

class SSHConnectionSerializer
{
public:
    SSHConnectionSerializer();
    ~SSHConnectionSerializer();

    void   add(SSHConnectionSettings *sshSettings);
    static QJsonObject sshSettingsToJSON(SSHConnectionSettings *sshSettings);
    static SSHConnectionSettings jsonToSSHSettings(QString name, QJsonObject jsonSettings);

private:
    QFile savedConnectionsFile;
    QVector<SSHConnectionSettings> savedConnections;
    bool modifiedConnectionsFile;
};

#endif // SSHCONNECTIONSERIALIZER_H
