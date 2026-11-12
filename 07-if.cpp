// Задача 7: Положительное, отрицательное или ноль.
#include <iostream>

int main() {
    int number;

    std::cout << "Введите число: ";
    std::cin >> number;

    if (number > 0) {
        std::cout << "Положительное\n";
    }
    else if (number == 0) {
        std::cout << "Число 0\n";
    }
    else {
        std::cout << "Отрицательное\n";
    }

    return 0;
}
