// Задача 23: Числа, кратные 3.
#include <iostream>

int main() {
    int n;

    std::cout << "Введите число: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            std::cout << i << '\n';
        }
    }

    return 0;
}
