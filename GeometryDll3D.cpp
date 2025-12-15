#include "GeometryDll3D.h"
#include <iostream>
#include <cmath>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

namespace Geometry
{
    // Реализация класса Cube
    Cube::Cube(double s) : side(s) {}

    double Cube::volume() const {
        return side * side * side;
    }

    double Cube::surfaceArea() const {
        return 6 * side * side;
    }

    void Cube::display() const {
        std::cout << "Куб со стороной: " << side << std::endl;
    }

    // Реализация класса Sphere
    Sphere::Sphere(double r) : radius(r) {}

    double Sphere::volume() const {
        return (4.0 / 3.0) * M_PI * radius * radius * radius;
    }

    double Sphere::surfaceArea() const {
        return 4 * M_PI * radius * radius;
    }

    void Sphere::display() const {
        std::cout << "Сфера с радиусом: " << radius << std::endl;
    }

    // Реализация класса Cylinder
    Cylinder::Cylinder(double r, double h) : radius(r), height(h) {}

    double Cylinder::volume() const {
        return M_PI * radius * radius * height;
    }

    double Cylinder::surfaceArea() const {
        return 2 * M_PI * radius * (radius + height);
    }

    void Cylinder::display() const {
        std::cout << "Цилиндр с радиусом: " << radius
            << " и высотой: " << height << std::endl;
    }

    // Реализация класса Pyramid
    Pyramid::Pyramid(double base, double h, double slant)
        : baseSide(base), height(h), slantHeight(slant) {
    }

    double Pyramid::volume() const {
        return (1.0 / 3.0) * baseSide * baseSide * height;
    }

    double Pyramid::surfaceArea() const {
        double baseArea = baseSide * baseSide;
        double lateralArea = 2 * baseSide * slantHeight;
        return baseArea + lateralArea;
    }

    void Pyramid::display() const {
        std::cout << "Пирамида с основанием: " << baseSide
            << ", высотой: " << height
            << ", апофемой: " << slantHeight << std::endl;
    }
}