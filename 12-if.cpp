// Задача 12: Можно ли составить треугольник.
#include <iostream>

int main() {
    int a, b, c;

    std::cout << "Введите три числа: ";
    std::cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        std::cout << "Можно\n";
    }
    else {
        std::cout << "Нельзя\n";
    }

    return 0;
}
