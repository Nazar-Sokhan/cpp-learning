#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Инициализация генератора случайных чисел текущим временем
    srand(time(nullptr));

    // Загадываем случайное число от 1 до 100
    int secret = rand() % 100 + 1;
    int attempts = 0;

    std::cout << "=== ИГРА «УГАДАЙ ЧИСЛО» (от 1 до 100) ===\n\n";

    // Игровой цикл
    while (true) {
        int guess = 0;
        std::cout << "Введите число: ";
        std::cin >> guess;
        attempts++;

        if (guess > secret) {
            std::cout << "Моё число меньше!\n";
        }
        else if (guess < secret) {
            std::cout << "Моё число больше!\n";
        }
        else {
            std::cout << "\n Поздравляю! Ты угадал число " << secret 
                      << " за " << attempts << " попыток!\n";
            break;
        }
    }

    return 0;
}
