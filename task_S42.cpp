#include <iostream>
#include <algorithm> 

//S42 (2б) Напишите функцию sort(), которая принимает массив из 10 чисел и сортирует их по убыванию

void sort(int arr[10]) {
    std::sort(arr, arr + 10, [](int a, int b) {
        return a > b; 
    });
}

int main() {
    int a[10] = {1, 8, 3, 6, 5, 4, 9, 2, 8, 12};
    
    sort(a); 
   
    std::cout << "Отсортированный массив по убыванию: ";
    for (int i = 0; i < 10; i++) {
        std::cout << a[i] << " ";
    }
    
    return 0;
}

