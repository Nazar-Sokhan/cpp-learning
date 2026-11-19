#include <iostream>
#include <string>

// Демонстрація конструктора класу: автоматична ініціалізація полів при народженні об'єкта
class Weapon {
private:
    std::string Name;
    int Damage;

public:
    // Конструктор: ім'я збігається з класом, немає поверненого типу
    Weapon(std::string wName, int wDamage) {
        Name = wName;
        Damage = wDamage;
    }

    // Метод для відображення параметрів зброї
    void show() {
        std::cout << "Назва: " << Name << " | Дамаг: " << Damage << '\n';
    }
};

int main() {
    // Об'єкти створюються одразу готовими в один рядок
    Weapon sword("Меч", 25);
    Weapon bow("Лук", 15);

    sword.show();
    bow.show();

    return 0;
}
