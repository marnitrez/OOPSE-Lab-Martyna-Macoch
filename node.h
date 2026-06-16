#ifndef NODE_H
#define NODE_H

#include <QObject>
#include <QString>
#include <vector>
#include <string>
#include <functional>

struct Data
{
    std::string data_type;
    std::vector<double> values;
};

class Node : public QObject
{
    Q_OBJECT

private:
    Data value;
    std::function<Data(const Data&)> action;

public:
    explicit Node(QObject *parent,
                  const QString &name,
                  std::function<Data(const Data&)> action);

    QString to_string(const Data &data) const;

public slots:
    void set_value(Data data);

signals:
    void value_changed(Data data);
};

#endif