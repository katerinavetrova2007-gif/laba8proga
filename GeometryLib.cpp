#include "GeometryLib.h"
#include <iostream>
#include <cmath>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

namespace Geometry
{
    // === 2D ÔÈÃÓĞÛ (ñóùåñòâóşùèé êîä) ===
    double squareArea(double side) { return side * side; }
    double squarePerimeter(double side) { return 4 * side; }

    double circleArea(double radius) { return M_PI * radius * radius; }
    double circlePerimeter(double radius) { return 2 * M_PI * radius; }

    double triangleArea(double base, double height) { return 0.5 * base * height; }
    double trianglePerimeter(double side1, double side2, double side3) {
        return side1 + side2 + side3;
    }

    // === 3D ÔÈÃÓĞÛ (íîâûé êîä) ===
    double cubeVolume(double side) { return side * side * side; }
    double cubeSurfaceArea(double side) { return 6 * side * side; }

    double sphereVolume(double radius) {
        return (4.0 / 3.0) * M_PI * radius * radius * radius;
    }
    double sphereSurfaceArea(double radius) {
        return 4 * M_PI * radius * radius;
    }

    double cylinderVolume(double radius, double height) {
        return M_PI * radius * radius * height;
    }
    double cylinderSurfaceArea(double radius, double height) {
        return 2 * M_PI * radius * (radius + height);
    }

    double pyramidVolume(double baseSide, double height) {
        return (1.0 / 3.0) * baseSide * baseSide * height;
    }
    double pyramidSurfaceArea(double baseSide, double height, double slantHeight) {
        double baseArea = baseSide * baseSide;
        double lateralArea = 2 * baseSide * slantHeight;
        return baseArea + lateralArea;
    }

    // === ÎÁÍÎÂËÅÍÍÀß ÔÓÍÊÖÈß ===
    void listAllShapes() {
        std::cout << "=== ÄÎÑÒÓÏÍÛÅ ÃÅÎÌÅÒĞÈ×ÅÑÊÈÅ ÔÈÃÓĞÛ ===\n\n";

        std::cout << "2D ÔÈÃÓĞÛ:\n";
        std::cout << "1. Êâàäğàò\n";
        std::cout << "2. Êğóã\n";
        std::cout << "3. Òğåóãîëüíèê\n\n";

        std::cout << "3D ÔÈÃÓĞÛ:\n";
        std::cout << "4. Êóá\n";
        std::cout << "5. Ñôåğà\n";
        std::cout << "6. Öèëèíäğ\n";
        std::cout << "7. Ïèğàìèäà\n";

        std::cout << "\n=======================================\n";
    }
}