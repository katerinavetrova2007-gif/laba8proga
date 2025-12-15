#pragma once

namespace Geometry
{
    // === 2D ФИГУРЫ ===
    // Квадрат
    double squareArea(double side);
    double squarePerimeter(double side);

    // Круг
    double circleArea(double radius);
    double circlePerimeter(double radius);

    // Треугольник
    double triangleArea(double base, double height);
    double trianglePerimeter(double side1, double side2, double side3);

    // === 3D ФИГУРЫ ===
    // Куб
    double cubeVolume(double side);
    double cubeSurfaceArea(double side);

    // Сфера
    double sphereVolume(double radius);
    double sphereSurfaceArea(double radius);

    // Цилиндр
    double cylinderVolume(double radius, double height);
    double cylinderSurfaceArea(double radius, double height);

    // Пирамида
    double pyramidVolume(double baseSide, double height);
    double pyramidSurfaceArea(double baseSide, double height, double slantHeight);

    // === ОБЩИЕ ФУНКЦИИ ===
    void listAllShapes();  // Теперь показывает и 2D и 3D фигуры
}