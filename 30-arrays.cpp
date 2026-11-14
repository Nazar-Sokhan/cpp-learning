#include <iostream>

int main() {
	int a[5];
	int sum = 0;
	std::cout << "Введите 5 чисел: ";
	for (int i = 0; i < 5; i++) {
		std::cin >> a[i];
		sum += a[i];
	}
	double average = (double)sum / 5;
	std::cout << "Среднее: " << average << '\n';
	std::cout << "Сумма: " << sum << '\n';
	return 0;
}
