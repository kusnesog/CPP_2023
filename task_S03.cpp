#include <iostream>

int main() {
    
    // S11 (1б) Циклически перебрать числа от 0 до 100. 
    
    for (int i = 0; i <= 100; i++) {
        if (i % 3 == 0) {
            std::cout << i << "\t"; 
        }
    }

    return 0;
}
