#include <iostream>

int main() {
	int inventory[3]{ 0, 0, 0 };
	int slot = 0;
	int weight = 0;
	char key = ' ';

	while (true) {
		std::cout << "\n1 - Додати, 2 - Показати, q - Вихід: ";
		std::cin >> key;

		if (key == '1') {
			std::cout << "Номер слота (0-2)?: ";
			std::cin >> slot;

			std::cout << "Вага предмета?: ";
			std::cin >> weight;

			inventory[slot] = weight;
			std::cout << "Предмет додано!\n";
		}
		else if (key == '2') {
			std::cout << "\n--- Інвентар ---\n";
			for (int i = 0; i < 3; i++) {
				std::cout << "Слот " << i << " -> Вага: " << inventory[i] << '\n';
			}
		}
		else if (key == 'q' || key == 'Q') {
			std::cout << "\nВихід з гри... До зустрічі!\n";
			break;
		}
	}

	return 0;
}
