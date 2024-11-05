#include <iostream>
using namespace std;

// M01 (3б) Используя циклы выведите таблицу Пифагора. Она должна быть отформатирована (используйте символ табуляции).

int main() {
    int s = 10;

    for (int i = 1; i <= s; i++) {
        for (int j = 1; j <= s; j++) {
            cout << i * j << "\t";
        }
        cout << endl;
    }

    return 0;
}
