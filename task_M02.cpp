#include <iostream>
#include <cmath>
#include <locale>
using namespace std;

// М02 (3б) Функция get_square(A, N) принимает два параметра: сторона А и число сторон N, и должна вернуть площадь N-угольника со стороной А.

double get_square(double A, int N) {
    if (N < 3) {
        cerr << "Ошибка: количество сторон должно быть не менее 3." << endl;
        return -1; 
    }
    return (N * A * A) / (4 * tan(M_PI / N)); // N - Число сторон, A - Длина стороны.
}

int main() {
    
    setlocale(LC_ALL, "ru_RU.UTF-8"); 
    
    double A;
    int N;

    cout << "Введите длину стороны A: "; cin >> A;
    cout << "Введите число сторон N: "; cin >> N;

    double polygon = get_square(A, N);
    if (polygon != -1) { // Проверка, была ли ошибка
        cout << "Площадь нашего " << N << "-угольника со стороной " << A << " будет равна: " << polygon << endl;
    }

    return 0;
}