#include "Triangle.h"
#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Triangle::Point A, B, C;

    A.Init(0, 0);
    B.Init(3, 0);
    C.Init(2, 4);

    Triangle t;
    t.Init(A, B, C);

    t.Display();

    cout << "Периметр: " << t.perimeter() << endl;
    cout << "Площа: " << t.area() << endl;

    cout << "Висоти: "
        << t.heightA() << ", "
        << t.heightB() << ", "
        << t.heightC() << endl;

    cout << "Тип: " << t.type() << endl;

    return 0;
}