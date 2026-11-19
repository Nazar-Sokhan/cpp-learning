#include <iostream>
#include <string>

// Повноцінний ігровий клас персонажа з поведінкою (методи бою, лікування та життєздатності)
class Player {
private:
    std::string name;
    int hp;

public:
    // Конструктор ініціалізації
    Player(std::string pName, int pHp) {
        name = pName;
        hp = pHp;
    }

    // Метод отримання шкоди з захистом від падіння HP нижче нуля
    void TakeDamage(int damage) {
        hp -= damage;
        if (hp < 0) {
            hp = 0;
        }
        std::cout << name << " отримав " << damage << " урону! Залишилось: " << hp << " HP\n";
    }

    // Метод відновлення здоров'я
    void heal(int amount) {
        hp += amount;
        std::cout << name << " полікувався на " << amount << "! Тепер HP: " << hp << '\n';
    }

    // Метод перевірки стану життя
    bool isAlive() {
        return hp > 0;
    }
};

int main() {
    Player hero("Nazar", 100);

    // Імітація бою
    hero.TakeDamage(40);
    hero.heal(25);
    hero.TakeDamage(100);

    // Перевірка фінального стану персонажа
    if (hero.isAlive()) {
        std::cout << "Герой ще живий!\n";
    }
    else {
        std::cout << "Герой загинув у бою!\n";
    }

    return 0;
}
