#include "Triangle.h"
#include <cmath>
#include <iostream>
using namespace std;
void  Triangle::Point::Init(double x0, double y0) {
    x = x0;
    y = y0;
}
double  Triangle::Point::distanceTo(const Point& p) const {
    return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
}

void  Triangle::Point::Display() const {
    cout << "(" << x << ", " << y << ")";
}

double Triangle::side(const Point& a, const Point& b) const {
    return a.distanceTo(b);
}
void Triangle::Init(Point a, Point b, Point c) {
    P1 = a;
    P2 = b;
    P3 = c;
}
double Triangle::perimeter() const {
    return get_a() + get_b() + get_c();
}

double Triangle::area() const {
    double a = get_a();
    double b = get_b();
    double c = get_c();
    double p = perimeter() / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
string Triangle::type() const {
    double a = get_a();
    double b = get_b();
    double c = get_c();

    if (fabs(a - b) < 0.001 && fabs(b - c) < 0.001)
        return "Рівносторонній";
    else if (fabs(a - b) < 0.001 || fabs(b - c) < 0.001 || fabs(a - c) < 0.001)
        return "Рівнобедрений";
    else if (fabs(a * a + b * b - c * c) < 0.001 ||
        fabs(a * a + c * c - b * b) < 0.001 ||
        fabs(b * b + c * c - a * a) < 0.001)
        return "Прямокутний";
    else
        return "Різносторонній";
}

void Triangle::Display() const {
    cout << "Triangle: ";
    P1.Display(); cout << " ";
    P2.Display(); cout << " ";
    P3.Display(); cout << endl;
}