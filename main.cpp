#include <QCoreApplication>
#include <QSharedPointer>
#include <QVector>
#include <iostream>
#include "ishape.h"

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    QVector<QSharedPointer<IShape>> arr;

    QSharedPointer<IShape> q1(new Square(5.5));
    QSharedPointer<IShape> q2(new Rectangle(4.2, 7.2));
    QSharedPointer<IShape> q3(new Triangle(3.3, 12, 30));
    QSharedPointer<IShape> q4(new Circle(7.2));

    arr.push_back(q1);
    arr.push_back(q2);
    arr.push_back(q3);
    arr.push_back(q4);

    for (auto &it : arr)
        std::cout << it->Area() << std::endl;

    return a.exec();
}
