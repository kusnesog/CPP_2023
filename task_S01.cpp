#include <iostream>

int main() {
    
    //S01 (1б) создать 4 переменных разного типа, продемонстрировать работу четырех арифметических операторов на выбор

    // Переменные
    int a = 15;           
    float b = 0.8f;       
    double c = 2.02;      
    char d = 'D';       
    
    // Операторы
    float theamount = a + b;           
    double subtraction = c - a;        
    float multiplication = a * b;     
    double division = c / b;           

    std::cout << "Сумма (a + b): " << theamount << std::endl;
    std::cout << "Разность (c - a): " << subtraction << std::endl;
    std::cout << "Произведение (a * b): " << multiplication << std::endl;
    std::cout << "Деление (c / b): " << division << std::endl;
    std::cout << "Просто выведу переменную d: " << d << std::endl;
    return 0;
}
