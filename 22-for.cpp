// Задача 22: Факториал числа (n!).
#include <iostream>

int main() {
    int n;

    std::cout << "Введите число: ";
    std::cin >> n;

    int fact = 1;

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    std::cout << "Факториал: " << fact << '\n';

    return 0;
}
