#include <iostream>
#include <string>
#include <locale>

using namespace std;

// S51 (1б) Напишите функцию reverse(), которая принимает строку и выводит ее на экран в отраженном виде. «Testing» → «gnitseT»

void reverse(string str) { 
    cout << string(str.rbegin(), str.rend()) << endl;
}

int main() {
    
    setlocale(LC_ALL, "ru_RU.UTF-8"); 
    
    string word;
    cout << "Введите строку: ";
    getline(cin, word);
    reverse(word); // Вызываем функцию
    return 0;
}
