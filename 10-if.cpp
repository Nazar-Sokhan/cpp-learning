// Задача 10: Возрастная категория.
#include <iostream>

int main() {
    int age;

    std::cout << "Сколько вам лет: ";
    std::cin >> age;

    if (age < 12) {
        std::cout << "Ребенок\n";
    }
    else if (age <= 17) {
        std::cout << "Подросток\n";
    }
    else if (age <= 59) {
        std::cout << "Взрослый\n";
    }
    else {
        std::cout << "Пенсионер\n";
    }

    return 0;
}
