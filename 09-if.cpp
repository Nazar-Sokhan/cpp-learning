// Задача 9: Наибольшее из трёх чисел.
#include <iostream>

int main() {
    int a, b, c;

    std::cout << "Введите три числа: ";
    std::cin >> a >> b >> c;

    int max = a;

    if (b > max) {
        max = b;
    }

    if (c > max) {
        max = c;
    }

    std::cout << "Наибольшее: " << max << '\n';

    return 0;
}
