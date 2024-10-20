#include <iostream>

// S12 (1б) Используя другой тип цикла, перебрать числа от 1 до 1000 с шагом 4. Найти сумму всех чисел, которые делятся на 7 без остатка
/*
Sum: 17640  // (0 - 1000)
Sum: 17395  // (1 - 1000)
*/

int main() {
    int sum1 = 0; 
    int sum2 = 0;
    
    // Перебрать числа от 0 до 1000
    for (int i = 0; i <= 1000; i += 4) {
        if (i % 7 == 0) {
            sum1 += i;
        }
    }
    
    // Перебрать числа от 1 до 1000
    for (int i = 1; i <= 1000; i += 4) {
        if (i % 7 == 0) {
            sum2 += i;
        }
    }

    std::cout << "Sum (0 - 1000): " << sum1 << std::endl;
    std::cout << "Sum (1 - 1000): " << sum2 << std::endl;

    return 0;
}
