// Задача 3: Частное как дробное число.
#include <iostream>

int main() {
    int a, b;

    std::cout << "Введите два целых числа: ";
    std::cin >> a >> b;

    std::cout << "Результат деления: " << (double)a / b << '\n';

    return 0;
}
