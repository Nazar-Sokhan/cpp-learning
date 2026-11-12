// Задача 11: Високосный год.
#include <iostream>

int main() {
    int year;

    std::cout << "Введите год: ";
    std::cin >> year;

    if (year % 400 == 0) {
        std::cout << "Високосный\n";
    }
    else if (year % 100 == 0) {
        std::cout << "Не високосный\n";
    }
    else if (year % 4 == 0) {
        std::cout << "Високосный\n";
    }
    else {
        std::cout << "Не високосный\n";
    }

    return 0;
}
