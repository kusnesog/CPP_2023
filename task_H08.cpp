#include <iostream>
#include <vector>

// ~~H08 (4б) Функция get_day_of_week(int d) принимает шестизначное число d отражающее дату (120461 = 12.04.61) и возвращает название дня недели, на который приходится эта дата. Вычисления вести от даты 1.01.1970 - это был четверг. ~~

std::string get_day_of_week(int inputDate) {
    int day = inputDate % 100;          
    int month = (inputDate / 100) % 100; 
    int year = inputDate / 10000;       

    if (month < 3) {
        month += 12;
        year--;
    }

  
    int k = year % 100;
    int j = year / 100;
    int day_of_week = (day + (13 * (month + 1)) / 5 + k + (k / 4) + (j / 4) + 5 * j) % 7;

    day_of_week = (day_of_week + 5) % 7;

    const std::vector<std::string> weekDays = {
        "Суббота", "Воскресенье", "Понедельник", "Вторник", 
        "Среда", "Четверг", "Пятница"
    };
    
    return weekDays[day_of_week];
}

int main() {
    int date;
    std::cout << "Введите дату (например, 240423 для 24 апреля 2023): ";
    std::cin >> date;

    std::string dayOfWeek = get_day_of_week(date);
    std::cout << "День недели: " << dayOfWeek << std::endl;

    return 0;
}
