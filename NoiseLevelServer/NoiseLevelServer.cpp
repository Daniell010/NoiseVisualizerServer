#include "NoiseLevelServer.h"

NoiseLevelServer::NoiseLevelServer(QObject *parent)
    : QAbstractItemModel(parent)
{
}

QVariant NoiseLevelServer::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
}

QModelIndex NoiseLevelServer::index(int row, int column, const QModelIndex &parent) const
{
    // FIXME: Implement me!
}

QModelIndex NoiseLevelServer::parent(const QModelIndex &index) const
{
    // FIXME: Implement me!
}

int NoiseLevelServer::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

int NoiseLevelServer::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

QVariant NoiseLevelServer::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}
