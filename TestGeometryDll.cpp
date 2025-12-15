#include <iostream>
#include "../GeometryDll/GeometryDll.h"
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {
    std::cout << "=== Тест динамической библиотеки ===\n\n";

    // Создание объектов фигур
    Geometry::Square square(5.0);
    Geometry::Circle circle(3.0);
    Geometry::Triangle triangle(3.0, 4.0, 5.0, 4.0, 3.0);

    // Тестирование квадрата
    square.display();
    std::cout << "Площадь: " << square.area() << " (ожидалось: 25)\n";
    std::cout << "Периметр: " << square.perimeter() << " (ожидалось: 20)\n\n";

    // Тестирование круга
    circle.display();
    std::cout << "Площадь: " << circle.area() << " (ожидалось: " << M_PI * 9 << ")\n";
    std::cout << "Периметр: " << circle.perimeter() << " (ожидалось: " << 2 * M_PI * 3 << ")\n\n";

    // Тестирование треугольника
    triangle.display();
    std::cout << "Площадь: " << triangle.area() << " (ожидалось: 6)\n";
    std::cout << "Периметр: " << triangle.perimeter() << " (ожидалось: 12)\n";

    return 0;
}