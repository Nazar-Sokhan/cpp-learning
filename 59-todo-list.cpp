#include <iostream>
#include <string>

int main() {
    std::string tasks[10];
    int count = 0;
    int choice = 0;

    while (true) {
        std::cout << "\n=== TO-DO LIST ===\n"
                  << "1. Добавить задачу\n"
                  << "2. Показать все задачи\n"
                  << "3. Выход\n"
                  << "Ваш выбор: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            if (count < 10) {
                std::cout << "Введите задачу: ";
                std::cin >> tasks[count];
                count++;
                std::cout << "Задача добавлена!\n";
            }
            else {
                std::cout << "Список полон!\n";
            }
            break;

        case 2:
            if (count == 0) {
                std::cout << "Список пуст!\n";
            }
            else {
                std::cout << "\n--- Ваши задачи ---\n";
                for (int i = 0; i < count; i++) {
                    std::cout << i + 1 << ". " << tasks[i] << '\n';
                }
            }
            break;

        case 3:
            std::cout << "До свидания!\n";
            return 0;
        }
    }
}
