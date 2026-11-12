// Задача 2: Сумма, разность, произведение двух чисел.
#include <iostream>

int main() {
    int a, b;

    std::cout << "Введите два числа: ";
    std::cin >> a >> b;

    std::cout << "Сумма: " << a + b << '\n';
    std::cout << "Разность: " << a - b << '\n';
    std::cout << "Произведение: " << a * b << '\n';

    return 0;
}
