#include "pch.h"
#include "CppUnitTest.h"
#include "../lab.1.8_OOP/Triangle.h"
#include <string>   

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace TriangleTests
{
    TEST_CLASS(TriangleTests)
    {
    public:

        // Тестуємо обчислення сторін та периметру
        TEST_METHOD(TestPerimeterAndSides)
        {
            // Arrange (Підготовка)
            Triangle::Point A, B, C;
            A.Init(0, 0);
            B.Init(3, 0);
            C.Init(0, 4);

            Triangle t;
            t.Init(A, B, C);

            double tolerance = 0.001; // Похибка для порівняння double

            // Act & Assert (Виконання та Перевірка)
            // Assert::AreEqual(Очікуване, Фактичне, Похибка, Повідомлення про помилку)
            Assert::AreEqual(5.0, t.get_a(), tolerance, L"Сторона A обчислена неправильно");
            Assert::AreEqual(4.0, t.get_b(), tolerance, L"Сторона B обчислена неправильно");
            Assert::AreEqual(3.0, t.get_c(), tolerance, L"Сторона C обчислена неправильно");

            Assert::AreEqual(12.0, t.perimeter(), tolerance, L"Периметр обчислено неправильно");
        }

        // Тестуємо обчислення площі
        TEST_METHOD(TestArea)
        {
            Triangle::Point A, B, C;
            A.Init(0, 0);
            B.Init(3, 0);
            C.Init(0, 4);
            Triangle t;
            t.Init(A, B, C);

            double tolerance = 0.001;
            Assert::AreEqual(6.0, t.area(), tolerance, L"Площа обчислена неправильно");
        }

        // Тестуємо визначення типу
        TEST_METHOD(TestType)
        {
            Triangle::Point A, B, C;
            A.Init(0, 0);
            B.Init(3, 0);
            C.Init(0, 4);
            Triangle t;
            t.Init(A, B, C);

            string expected = "Прямокутний";
            Assert::AreEqual(expected, t.type(), L"Тип трикутника визначено неправильно");
        }
    };
}