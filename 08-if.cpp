// Задача 8: Чётное или нечётное число.
#include <iostream>

int main() {
    int number;

    std::cout << "Введите число: ";
    std::cin >> number;

    if (number % 2 == 0) {
        std::cout << "Четное\n";
    }
    else {
        std::cout << "Нечетное\n";
    }

    return 0;
}
