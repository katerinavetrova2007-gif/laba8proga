#include <iostream>
#include <locale>
#include <windows.h>
#include "../StaticLib1/GeometryLib3D.h"
#include "../GeometryDll/GeometryDll3D.h"

using namespace Geometry;

void test3DStaticLibrary() {
    std::cout << "\n=== Тестирование 3D статической библиотеки ===\n\n";

    listShapes3D();
    std::cout << "\n";

    // Тест куба
    double side = 3.0;
    std::cout << "Куб со стороной " << side << ":\n";
    std::cout << "Объем: " << cubeVolume(side) << " (ожидается: 27)\n";
    std::cout << "Площадь поверхности: " << cubeSurfaceArea(side)
        << " (ожидается: 54)\n\n";

    // Тест сферы
    double radius = 2.0;
    std::cout << "Сфера с радиусом " << radius << ":\n";
    std::cout << "Объем: " << sphereVolume(radius)
        << " (ожидается: " << (4.0 / 3.0) * M_PI * 8 << ")\n";
    std::cout << "Площадь поверхности: " << sphereSurfaceArea(radius)
        << " (ожидается: " << 4 * M_PI * 4 << ")\n\n";

    // Тест цилиндра
    double cylRadius = 2.0, cylHeight = 5.0;
    std::cout << "Цилиндр с радиусом " << cylRadius
        << " и высотой " << cylHeight << ":\n";
    std::cout << "Объем: " << cylinderVolume(cylRadius, cylHeight)
        << " (ожидается: " << M_PI * 4 * 5 << ")\n";
    std::cout << "Площадь поверхности: "
        << cylinderSurfaceArea(cylRadius, cylHeight)
        << " (ожидается: " << 2 * M_PI * 2 * (2 + 5) << ")\n";
}

void test3DDynamicLibrary() {
    std::cout << "\n=== Тестирование 3D динамической библиотеки ===\n\n";

    // Создаем объекты 3D фигур
    Cube cube(4.0);
    Sphere sphere(3.0);
    Cylinder cylinder(2.0, 6.0);
    Pyramid pyramid(5.0, 8.0, 5.5);

    // Используем полиморфизм
    Shape3D* shapes3D[] = { &cube, &sphere, &cylinder, &pyramid };
    const char* shapeNames[] = { "Куб", "Сфера", "Цилиндр", "Пирамида" };

    for (int i = 0; i < 4; i++) {
        std::cout << "\n" << shapeNames[i] << ":\n";
        shapes3D[i]->display();
        std::cout << "Объем: " << shapes3D[i]->volume() << "\n";
        std::cout << "Площадь поверхности: " << shapes3D[i]->surfaceArea() << "\n";
    }
}

int main() {
    // Настройка русского языка
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "=============================================\n";
    std::cout << "   Лабораторная работа: 3D геометрические фигуры\n";
    std::cout << "=============================================\n\n";

    test3DStaticLibrary();
    test3DDynamicLibrary();

    std::cout << "\n\nНажмите Enter для выхода...";
    std::cin.get();

    return 0;
}