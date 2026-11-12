// Задача 15: Символьные команды (a / b / c).
#include <iostream>

int main() {
    char command;

    std::cout << "Введите букву (a, b, c): ";
    std::cin >> command;

    switch (command) {
    case 'a':
        std::cout << "Начать игру\n";
        break;

    case 'b':
        std::cout << "Настройки\n";
        break;

    case 'c':
        std::cout << "Выйти\n";
        break;

    default:
        std::cout << "Неизвестная команда!\n";
        break;
    }

    return 0;
}
