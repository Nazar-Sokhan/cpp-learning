#include <iostream>

int GetMax(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}

int main() {
	int a, b;
	std::cout << "Введите два числа: ";
	std::cin >> a >> b;
	std::cout << "Максимум: " << GetMax(a, b) << '\n';
	return 0;
}
