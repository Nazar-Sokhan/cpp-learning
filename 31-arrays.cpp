#include <iostream>

int main() {
	int a[6]{ 4, 12, 7, 25, 9, 1 };
	int target;
	std::cout << "Какое число искать? ";
	std::cin >> target;
	bool found = false;
	for (int i = 0; i < 6; i++) {
		if (a[i] == target) {
			found = true;
			break;
		}
	}
	if (found == true) {
		std::cout << "Найдено!\n";
	}
	else {
		std::cout << "Не найдено!\n";
	}
	return 0;
}
