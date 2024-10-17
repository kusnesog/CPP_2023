#include <iostream>

int main() {
    
    // S02 (1б) Покажите работу операторов деления нацело и определения остатка от деления
    
    int num1, num2;
    
    std::cout << "Введите первое число: "; std::cin >> num1;
    std::cout << "Введите второе число: "; std::cin >> num2;

    // Деление нацело
    int first = num1 / num2;  

    // Определение остатка от деления
    int second = num1 % num2; 
    
    std::cout << num1 << " / " << num2 << " = " << first << " (деление нацело)" << std::endl;
    std::cout << num1 << " % " << num2 << " = " << second << " (остаток от деления)" << std::endl;

    return 0;
}
