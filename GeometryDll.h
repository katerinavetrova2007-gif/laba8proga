#pragma once

#ifdef GEOMETRYDLL_EXPORTS
#define GEOMETRY_API __declspec(dllexport)
#else
#define GEOMETRY_API __declspec(dllimport)
#endif

namespace Geometry
{
    class GEOMETRY_API Shape {
    public:
        virtual double area() const = 0;
        virtual double perimeter() const = 0;
        virtual void display() const = 0;
        virtual ~Shape() {}
    };

    class GEOMETRY_API Square : public Shape {
    private:
        double side;
    public:
        Square(double s);
        double area() const override;
        double perimeter() const override;
        void display() const override;
    };

    class GEOMETRY_API Circle : public Shape {
    private:
        double radius;
    public:
        Circle(double r);
        double area() const override;
        double perimeter() const override;
        void display() const override;
    };

    class GEOMETRY_API Triangle : public Shape {
    private:
        double side1, side2, side3;
        double base, height;
    public:
        Triangle(double s1, double s2, double s3, double b, double h);
        double area() const override;
        double perimeter() const override;
        void display() const override;
    };
}
