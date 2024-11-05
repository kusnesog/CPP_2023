#include <iostream>
#include <cmath>
#include <stdexcept>

//M08 (3б) Функция get_angle() принимает три числа - длины трех сторон треугольника и возвращает значение угла (в градусах), расположенного напротив первой стороны. Разрешено использовать обратные тригонометрические функции из библиотеки math.h. Введите проверку на корректность значений аргументов (>0).

double get_angle(double a, double b, double c) {
    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) {
        throw std::invalid_argument("Некорректные длины сторон.");
    }
    return acos((b * b + c * c - a * a) / (2 * b * c)) * (180.0 / M_PI);
}

int main() {
    double a, b, c;
    
    std::cout << "Введите длины сторон треугольника (a, b, c), пример: 5 4 3: ";
    std::cin >> a >> b >> c;

    try {
        std::cout << "Угол напротив стороны a: " << get_angle(a, b, c) << " градусов" << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
    }
    
    return 0;
}
