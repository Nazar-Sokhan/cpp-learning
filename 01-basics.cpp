// Выведите ваше имя, возраст и город тремя строками, используя три переменные.
#include <iostream>
#include <string>

int main() {
    int age;
    std::string name;
    std::string city;

    std::cout << "Введите свое имя: ";
    std::cin >> name;

    std::cout << "Введите свой возраст: ";
    std::cin >> age;

    std::cout << "С какого вы города: ";
    std::cin.ignore();
    std::getline(std::cin, city);

    std::cout << '\n'
        << "Вас зовут: " << name << '\n'
        << "Вам " << age << " лет" << '\n'
        << "Вы проживаете в " << city << '\n';

    return 0;
}