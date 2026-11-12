// Задача 6: Цифры трёхзначного числа.
#include <iostream>

int main() {
    int number;

    std::cout << "Введите трехзначное число: ";
    std::cin >> number;

    int sotni = number / 100;
    int desyatki = (number / 10) % 10;
    int edinicy = number % 10;

    std::cout << "Перше число: " << sotni << '\n'
              << "Друге число: " << desyatki << '\n'
              << "Третє число: " << edinicy << '\n';

    return 0;
}
