// Задача 24: Рисование треугольника из звёздочек.
#include <iostream>

int main() {
    int height;

    std::cout << "Введите высоту: ";
    std::cin >> height;

    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << '\n';
    }

    return 0;
}
