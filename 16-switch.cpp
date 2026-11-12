// Задача 16: Простой калькулятор (+, -, *, /).
#include <iostream>

int main() {
    float a, b;
    char znak;

    std::cout << "Введите два числа: ";
    std::cin >> a >> b;

    std::cout << "Введите знак операции: ";
    std::cin >> znak;

    switch (znak) {
    case '+':
        std::cout << "Результат: " << a + b << '\n';
        break;

    case '-':
        std::cout << "Результат: " << a - b << '\n';
        break;

    case '*':
        std::cout << "Результат: " << a * b << '\n';
        break;

    case '/':
        if (b != 0) {
            std::cout << "Результат: " << a / b << '\n';
        }
        else {
            std::cout << "Ошибка деления на ноль\n";
        }
        break;

    default:
        std::cout << "Неизвестная операция!\n";
        break;
    }

    return 0;
}
