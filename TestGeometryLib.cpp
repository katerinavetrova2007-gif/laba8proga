#include <iostream>
#include "../StaticLib1/GeometryLib.h"
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {
    std::cout << "=== Тест статической библиотеки ===\n\n";

    Geometry::listShapes();
    std::cout << "\n";

    // Тест квадрата
    double side = 5.0;
    std::cout << "Квадрат со стороной " << side << ":\n";
    std::cout << "Площадь: " << Geometry::squareArea(side)
        << " (ожидалось: 25)\n";
    std::cout << "Периметр: " << Geometry::squarePerimeter(side)
        << " (ожидалось: 20)\n\n";  

    // Тест круга
    double radius = 3.0;
    std::cout << "Круг с радиусом " << radius << ":\n";
    std::cout << "Площадь: " << Geometry::circleArea(radius)
        << " (ожидалось: " << M_PI * 9 << ")\n";  
    std::cout << "Периметр (длина окружности): " << Geometry::circlePerimeter(radius)  // ОШИБКА 4: нужно передать радиус
        << " (ожидалось: " << 2 * M_PI * 3 << ")\n\n";

    // Тест треугольника
    double base = 4.0, height = 3.0;
    double side1 = 3.0, side2 = 4.0, side3 = 5.0;  
    std::cout << "Треугольник:\n";
    std::cout << "Площадь: " << Geometry::triangleArea(base, height)
        << " (ожидалось: 6)\n";
    std::cout << "Периметр: " << Geometry::trianglePerimeter(side1, side2, side3)  // ОШИБКА 6: завершить строку
        << " (ожидалось: 12)\n";

    return 0;
}