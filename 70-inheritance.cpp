#include <iostream>
#include <string>
#include <vector>

class Enemy {
private:
	std::string name;
	int hp;
public:
	static int count;
	Enemy(std::string n, int h) {
		name = n;
		hp = h;
		count++;
	}
	void TakeDamage(int dmg){
		hp -= dmg;
		std::cout << name << " Отримав " << dmg << " Шкоди! залишилось " << hp << " HP!\n";
	}
};

class Play : public Enemy {
public:
	Play(std::string n, int h) : Enemy(n,h) {
	}
	void SuperAttack(Enemy& target) {
		std::cout << "Супер удар гравця! ";
		target.TakeDamage(30);
	}
};

int Enemy::count = 0;

int main() {
	Enemy e1("Goblin", 50);
	Enemy e2("Troll", 25);
	Play e3("Player", 20);
	e3.SuperAttack(e1);
	std::cout << "Кількість супротивників: " << Enemy::count << '\n';
	return 0;
}
