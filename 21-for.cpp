// Задача 21: Таблица умножения для введённого числа.
#include <iostream>

int main() {
    int num;

    std::cout << "Введите число: ";
    std::cin >> num;

    for (int i = 1; i <= 10; i++) {
        std::cout << num << " * " << i << " = " << num * i << '\n';
    }

    return 0;
}
