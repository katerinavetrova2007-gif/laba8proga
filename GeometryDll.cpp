#include "GeometryDll.h"
#include <iostream>
#include <cmath>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

namespace Geometry
{
    // Реализация класса Square
    Square::Square(double s) : side(s) {}

    double Square::area() const {
        return side * side;
    }

    double Square::perimeter() const {
        return 4 * side;
    }

    void Square::display() const {
        std::cout << "Квадрат со стороной: " << side << std::endl;
    }

    // Реализация класса Circle
    Circle::Circle(double r) : radius(r) {}

    double Circle::area() const {
        return M_PI * radius * radius;
    }

    double Circle::perimeter() const {
        return 2 * M_PI * radius;
    }

    void Circle::display() const {
        std::cout << "Круг с радиусом: " << radius << std::endl;
    }

    // Реализация класса Triangle
    Triangle::Triangle(double s1, double s2, double s3, double b, double h)
        : side1(s1), side2(s2), side3(s3), base(b), height(h) {
    }

    double Triangle::area() const {
        return 0.5 * base * height;
    }

    double Triangle::perimeter() const {
        return side1 + side2 + side3;
    }

    void Triangle::display() const {
        std::cout << "Треугольник со сторонами: " << side1 << ", "
            << side2 << ", " << side3 << std::endl;
    }
}