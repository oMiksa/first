#ifndef ISHAPE_H
#define ISHAPE_H
#include <QtMath>

class IShape {
public:
    virtual double Area() = 0;
    virtual ~IShape(){}
};

class Square : public IShape {
private:
    double edge;

public:
    Square() {
        edge = 0;
    }

    Square(double len) {
        edge = len;
    }

    double Area() override {
        return edge * edge;
    }
};

class Rectangle : public IShape {
private:
    double edge_first, edge_second;

public:
    Rectangle() {
        edge_first = 0;
        edge_second = 0;
    }

    Rectangle(double len_1, double len_2) {
        edge_first = len_1;
        edge_second = len_2;
    }

    double Area() override {
        return edge_first * edge_second;
    }
};

class Triangle : public IShape {
private:
    double edge_first;
    double edge_second;
    double angle;

public:
    Triangle() {
        edge_first = 0;
        edge_second = 0;
        angle = 0;
    }

    Triangle(double len_1, double len_2, double a) {
        edge_first = len_1;
        edge_second = len_2;
        angle = a;
    }

    double Area() override {
        return 0.5 * edge_first * edge_second * qSin(qDegreesToRadians(angle));
    }
};

class Circle : public IShape {
private:
    double R;
public:
    Circle() {
        R = 0;
    }

    Circle(double r) {
        R = r;
    }

    double Area() override {
        return M_PI * qPow(R, 2);
    }
};

#endif // ISHAPE_H
