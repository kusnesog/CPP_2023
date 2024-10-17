#include <iostream>
#include <string>


int main() {
    
    setlocale(LC_ALL, "Russian");
    
    std::string numbers[10] = {
        "ноль", "один", "два", "три", "четыре", 
        "пять", "шесть", "семь", "восемь", "девять"
    };

    int number;
    std::cout << "Введите число от 0 до 9: ";
    std::cin >> number;

    //проверка числа 
    if (number >= 0 && number <= 9) {
        std::cout << "Название числа: " << numbers[number] << std::endl;
    } else {
        std::cout << "Ошибка: Данное число не входит в диапазон от 0 до 9" << std::endl;
    }

    return 0;
}
