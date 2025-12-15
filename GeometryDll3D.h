#pragma once

#ifdef GEOMETRYDLL_EXPORTS
#define GEOMETRY_API __declspec(dllexport)
#else
#define GEOMETRY_API __declspec(dllimport)
#endif

namespace Geometry
{
    // Базовый класс для 3D фигур
    class GEOMETRY_API Shape3D {
    public:
        virtual double volume() const = 0;
        virtual double surfaceArea() const = 0;
        virtual void display() const = 0;
        virtual ~Shape3D() {}
    };

    // Класс Куб
    class GEOMETRY_API Cube : public Shape3D {
    private:
        double side;
    public:
        Cube(double s);
        double volume() const override;
        double surfaceArea() const override;
        void display() const override;
    };

    // Класс Сфера
    class GEOMETRY_API Sphere : public Shape3D {
    private:
        double radius;
    public:
        Sphere(double r);
        double volume() const override;
        double surfaceArea() const override;
        void display() const override;
    };

    // Класс Цилиндр
    class GEOMETRY_API Cylinder : public Shape3D {
    private:
        double radius;
        double height;
    public:
        Cylinder(double r, double h);
        double volume() const override;
        double surfaceArea() const override;
        void display() const override;
    };

    // Класс Пирамида
    class GEOMETRY_API Pyramid : public Shape3D {
    private:
        double baseSide;
        double height;
        double slantHeight;
    public:
        Pyramid(double base, double h, double slant);
        double volume() const override;
        double surfaceArea() const override;
        void display() const override;
    };
}
