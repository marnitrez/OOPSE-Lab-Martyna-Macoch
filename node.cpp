#include "node.h"
#include <QDebug>

Node::Node(QObject *parent,
           const QString &name,
           std::function<Data(const Data&)> action)
    : QObject(parent), action(action)
{
    setObjectName(name);
}

QString Node::to_string(const Data &data) const
{
    QString result = QString::fromStdString(data.data_type) + ": ";

    for(double x : data.values)
    {
        result += QString::number(x) + " ";
    }

    return result;
}

void Node::set_value(Data data)
{
    qDebug() << objectName() << "received:" << to_string(data);

    value = action(data);

    qDebug() << objectName() << "processed:" << to_string(value);

    emit value_changed(value);
}