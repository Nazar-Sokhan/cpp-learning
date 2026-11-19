#include <iostream>
#include <string>

// Оголошення власного типу даних — структури Player
struct Player {
    std::string name;
    int hp;
    int speed;
}; // Крапка з комою після структури обов'язкова!

int main() {
    // Створення першого об'єкта гравця
    Player p1;
    p1.name = "Nazar";
    p1.hp = 100;
    p1.speed = 15;

    // Створення другого об'єкта (ворога)
    Player p2;
    p2.name = "Goblin";
    p2.hp = 50;
    p2.speed = 10;

    // Звернення до полів через крапку (.)
    std::cout << "Гравець: " << p1.name << " | HP: " << p1.hp << " | Швидкість: " << p1.speed << '\n';
    std::cout << "Ворог:   " << p2.name << " | HP: " << p2.hp << " | Швидкість: " << p2.speed << '\n';

    return 0;
}
