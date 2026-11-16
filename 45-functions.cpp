#include <iostream>

int add(int a, int b) {
	return a + b;
}

double add(double a, double b) {
	return a + b;
}

int main() {
	int a, b;
	std::cout << "Введіть два цілих числа: ";
	std::cin >> a >> b;
	std::cout << "Сумма int: " << add(a, b) << "\n\n";

	double x, y;
	std::cout << "Введіть два дробових числа через крапку: ";
	std::cin >> x >> y;
	std::cout << "Сумма double: " << add(x, y) << '\n';

	return 0;
}
