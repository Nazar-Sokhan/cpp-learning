// Задача 14: Время года по номеру месяца.
#include <iostream>

int main() {
    int month;

    std::cout << "Введите месяц (1-12): ";
    std::cin >> month;

    switch (month) {
    case 12:
    case 1:
    case 2:
        std::cout << "Зима\n";
        break;

    case 3:
    case 4:
    case 5:
        std::cout << "Весна\n";
        break;

    case 6:
    case 7:
    case 8:
        std::cout << "Лето\n";
        break;

    case 9:
    case 10:
    case 11:
        std::cout << "Осень\n";
        break;

    default:
        std::cout << "Неверный месяц\n";
        break;
    }

    return 0;
}
