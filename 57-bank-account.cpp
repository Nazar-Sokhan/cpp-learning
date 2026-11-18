#include <iostream>

int main() {
    float balance = 0.0f;
    int choice = 0;
    int amount = 0;

    std::cout << "=== ДОБРО ПОЖАЛОВАТЬ В БАНК ===\n";

    while (true) {
        std::cout << "\n=== МЕНЮ ===\n"
                  << "1. Проверить баланс\n"
                  << "2. Пополнить счёт\n"
                  << "3. Снять деньги\n"
                  << "4. Выход\n"
                  << "Выберите действие: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Ваш баланс: " << balance << " грн\n";
            break;

        case 2:
            std::cout << "Сумма пополнения: ";
            std::cin >> amount;
            balance += amount;
            std::cout << "Счёт пополнен! Текущий баланс: " << balance << " грн\n";
            break;

        case 3:
            std::cout << "Сумма снятия: ";
            std::cin >> amount;
            if (amount > balance) {
                std::cout << "Ошибка: Недостаточно средств на счёте!\n";
            }
            else {
                balance -= amount;
                std::cout << "Успешно снято! Остаток на счёте: " << balance << " грн\n";
            }
            break;

        case 4:
            std::cout << "Спасибо, что пользуетесь нашим банком. До свидания!\n";
            return 0; // Завершаем программу

        default:
            std::cout << "Неверный выбор пункта меню. Попробуйте снова.\n";
            break;
        }
    }

    return 0;
}
