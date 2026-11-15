#include <iostream>

bool IsEven(int n) {
	if (n % 2 == 0) {
		return true;
	}
	else return false;
}

int main() {
	int number = 0;
	std::cout << "Введите число: ";
	std::cin >> number;
	if (IsEven(number)) {
		std::cout << "Четное\n";
	}
	else {
		std::cout << "Нечетное\n";
	}
	return 0;
}
