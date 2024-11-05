#include <iostream>
#include <fstream>

// S21 (1б) Получить от пользователя два числа А, В (В>A). Пройти циклом от А до В, вывести значение каждого числа умноженного на 3 в файл «output»

int main() {
    int A, B;
    std::cout << "Введите A и B (B > A) (Пример: 3 4):  ";
    std::cin >> A >> B;

    if (B > A) {
        std::ofstream file("output.txt");
        for (int i = A; i < B; ++i)
            file << i * 3 << std::endl;
        std::cout << "Значения записаны в файл 'output.txt'" << std::endl;
    } else {
        std::cout << "Ошибка: B должно быть больше A." << std::endl;
    }

    return 0;
}
