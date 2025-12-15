#include "GeometryLib3D.h"
#include <iostream>

namespace Geometry
{
    // Куб
    double cubeVolume(double side) {
        return side * side * side;
    }

    double cubeSurfaceArea(double side) {
        return 6 * side * side;
    }

    // Сфера
    double sphereVolume(double radius) {
        return (4.0 / 3.0) * M_PI * radius * radius * radius;
    }

    double sphereSurfaceArea(double radius) {
        return 4 * M_PI * radius * radius;
    }

    // Цилиндр
    double cylinderVolume(double radius, double height) {
        return M_PI * radius * radius * height;
    }

    double cylinderSurfaceArea(double radius, double height) {
        return 2 * M_PI * radius * (radius + height);
    }

    // Пирамида (квадратная)
    double pyramidVolume(double baseSide, double height) {
        return (1.0 / 3.0) * baseSide * baseSide * height;
    }

    double pyramidSurfaceArea(double baseSide, double height, double slantHeight) {
        double baseArea = baseSide * baseSide;
        double lateralArea = 2 * baseSide * slantHeight;
        return baseArea + lateralArea;
    }

    // Обновленная функция для 3D фигур
    void listShapes3D() {
        std::cout << "Доступные 3D фигуры:\n";
        std::cout << "1. Куб\n";
        std::cout << "2. Сфера\n";
        std::cout << "3. Цилиндр\n";
        std::cout << "4. Пирамида (квадратная)\n";
    }
}