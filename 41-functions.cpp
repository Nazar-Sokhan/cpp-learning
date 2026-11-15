#include <iostream>

int power(int base, int exp) {
	int result = 1;
	for (int i = 1; i <= exp; i++) {
		result *= base;
	}
	return result;
}

int main() {
	int base, exp;
	std::cout << "Введите число: ";
	std::cin >> base;
	std::cout << "Введите степень: ";
	std::cin >> exp;
	std::cout << "Результат: " << power(base, exp) << '\n';
	return 0;
}
