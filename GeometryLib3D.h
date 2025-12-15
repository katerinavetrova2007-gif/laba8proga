#pragma once
#include <cmath>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

namespace Geometry
{
    // 3D фигуры - статические функции

    // Куб
    double cubeVolume(double side);
    double cubeSurfaceArea(double side);

    // Сфера
    double sphereVolume(double radius);
    double sphereSurfaceArea(double radius);

    // Цилиндр
    double cylinderVolume(double radius, double height);
    double cylinderSurfaceArea(double radius, double height);

    // Пирамида (квадратная)
    double pyramidVolume(double baseSide, double height);
    double pyramidSurfaceArea(double baseSide, double height, double slantHeight);

    // Обновленная функция listShapes с 3D фигурами
    void listShapes3D();
}
