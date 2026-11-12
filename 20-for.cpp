// Задача 20: Сумма чисел от 1 до n.
#include <iostream>

int main() {
    int n;

    std::cout << "Введите число: ";
    std::cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    std::cout << "Сумма: " << sum << '\n';

    return 0;
}
