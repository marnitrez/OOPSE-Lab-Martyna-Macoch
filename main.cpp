#include <QCoreApplication>
#include "node.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qRegisterMetaType<Data>("Data");

    Node generator(nullptr, "Generator",
                   [](const Data &data)
                   {
                       return data;
                   });

    Node processor_1_1(&generator, "Processor_1_1",
                       [](const Data &data)
                       {
                           Data result = data;

                           for(double &x : result.values)
                           {
                               x *= 2;
                           }

                           return result;
                       });

    Node processor_1_2(&processor_1_1, "Processor_1_2",
                       [](const Data &data)
                       {
                           Data result = data;

                           for(double &x : result.values)
                           {
                               x = x * x;
                           }

                           return result;
                       });

    Node processor_2_1(&generator, "Processor_2_1",
                       [](const Data &data)
                       {
                           Data result = data;

                           for(double &x : result.values)
                           {
                               x += 10;
                           }

                           return result;
                       });

    Node processor_2_2(&processor_2_1, "Processor_2_2",
                       [](const Data &data)
                       {
                           Data result = data;

                           for(double &x : result.values)
                           {
                               x -= 1;
                           }

                           return result;
                       });

    QObject::connect(&generator, &Node::value_changed,
                     &processor_1_1, &Node::set_value);

    QObject::connect(&processor_1_1, &Node::value_changed,
                     &processor_1_2, &Node::set_value);

    QObject::connect(&generator, &Node::value_changed,
                     &processor_2_1, &Node::set_value);

    QObject::connect(&processor_2_1, &Node::value_changed,
                     &processor_2_2, &Node::set_value);

    Data data;
    data.data_type = "numbers";
    data.values = {1, 9, 8, 4};

    generator.set_value(data);

    return 0;
}