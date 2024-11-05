#include <iostream>
#include <cstring> 

// S32 (1б) Пользователь вводит строку. Используя указатель на строку, сдвиньте каждую букву в строке на 1 (a → b, b→c …) (каждый символ задается числом) длину строки можно получить функцией strlen() из библиотеки cstring.

void shiftString(char* str) {
    int length = strlen(str); 
    for (int i = 0; i < length; i++) {
     
     
        if (str[i] >= 'a' && str[i] < 'z') {
            str[i]++; 
        } else if (str[i] == 'z') {
            str[i] = 'a'; 
        } else if (str[i] >= 'A' && str[i] < 'Z') {
            str[i]++; 
        } else if (str[i] == 'Z') {
            str[i] = 'A'; 
        }
      
    }
}

int main() {
    char str[100]; 
    std::cout << "Введите строку: ";
    std::cin.getline(str, 100); 

    shiftString(str); 

    std::cout << "Результат: " << str << std::endl; 
    return 0;
}
