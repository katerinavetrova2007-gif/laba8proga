#include <iostream>
#include <locale>
#include <windows.h>
#include "../StaticLib1/GeometryLib3D.h"
#include "../GeometryDll/GeometryDll3D.h"
#include "../StaticLib1/GeometryLib.h"
#include "../GeometryDll/GeometryDll.h"

using namespace Geometry;

void demonstrateAllFeatures() {
    std::cout << "\n\n=== ДЕМОНСТРАЦИЯ ВСЕХ ВОЗМОЖНОСТЕЙ ===\n\n";

    // Показываем все фигуры
    listAllShapes();

    std::cout << "\nПримеры расчетов:\n\n";

    // 2D фигуры
    std::cout << "2D ФИГУРЫ:\n";
    std::cout << "Квадрат (сторона=5): S=" << squareArea(5)
        << ", P=" << squarePerimeter(5) << "\n";
    std::cout << "Круг (радиус=3): S=" << circleArea(3)
        << ", P=" << circlePerimeter(3) << "\n\n";

    // 3D фигуры
    std::cout << "3D ФИГУРЫ:\n";
    std::cout << "Куб (сторона=4): V=" << cubeVolume(4)
        << ", S=" << cubeSurfaceArea(4) << "\n";
    std::cout << "Сфера (радиус=2): V=" << sphereVolume(2)
        << ", S=" << sphereSurfaceArea(2) << "\n";

    // Демонстрация классов
    std::cout << "\nИСПОЛЬЗОВАНИЕ КЛАССОВ:\n";

    Cube cube(3);
    std::cout << "\nОбъект Cube(3):\n";
    cube.display();
    std::cout << "Объем: " << cube.volume() << "\n";
    std::cout << "Площадь поверхности: " << cube.surfaceArea() << "\n";

    Square square(3);
    std::cout << "\nОбъект Square(3):\n";
    square.display();
    std::cout << "Площадь: " << square.area() << "\n";
    std::cout << "Периметр: " << square.perimeter() << "\n";
}

int main() {
    // Настройка русского языка
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "==================================================\n";
    std::cout << "   ГЕОМЕТРИЧЕСКИЕ ФИГУРЫ: 2D и 3D РЕАЛИЗАЦИЯ\n";
    std::cout << "==================================================\n\n";

    demonstrateAllFeatures();

    std::cout << "\n\n==================================================\n";
    std::cout << "   ПРОЕКТ УСПЕШНО ОБЪЕДИНЕН!\n";
    std::cout << "   Ветка feature-3d-figures слияна с main\n";
    std::cout << "==================================================\n";

    std::cout << "\nНажмите Enter для выхода...";
    std::cin.get();

    return 0;
}
int main() {

    setlocale(LC_ALL, "Russian");
    std::cout << "=== Лабораторная работа по геометрическим фигурам ===\n\n";

    // Использование статической библиотеки
    std::cout << "1. Использование статической библиотеки:\n";
    Geometry::listShapes();

    std::cout << "\n2. Вычисления из статической библиотеки:\n";
    std::cout << "Площадь квадрата со стороной 7: " << Geometry::squareArea(7) << std::endl;
    std::cout << "Площадь круга с радиусом 5: " << Geometry::circleArea(5) << std::endl;

    std::cout << "\n3. Использование динамической библиотеки (классы):\n";

    // Использование динамической библиотеки
    Geometry::Square square(10);
    Geometry::Circle circle(7);

    square.display();
    std::cout << "Площадь: " << square.area() << std::endl;
    std::cout << "Периметр: " << square.perimeter() << std::endl;

    std::cout << "\n";
    circle.display();
    std::cout << "Площадь: " << circle.area() << std::endl;
    std::cout << "Периметр: " << circle.perimeter() << std::endl;

    return 0;
}