#include <iostream>

int sum(int a, int b) {
	return a + b;
}

int main() {
	int a, b;
	std::cout << "Введите два числа с клавиатуры: ";
	std::cin >> a >> b;
	std::cout << "Сумма: " << sum(a, b) << '\n';
	return 0;
}
