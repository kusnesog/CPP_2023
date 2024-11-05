#include <iostream>
using namespace std;

// S41 (1б) Напишите функцию squared_sum(), которая принимает два дробных числа и возвращает квадрат их суммы

double squared_sum(double a, double b) {
    double sum = a + b; 
    return sum * sum;   
}

int main() {
    double num1, num2;

    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;

    cout << "Квадрат суммы: " << squared_sum(num1, num2) << "\n";

    return 0;
}
