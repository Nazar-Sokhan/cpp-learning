#include <iostream>

int sumArray(int arr[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum;
}

int main() {
	int a[5];
	std::cout << "Введите числа в масив: ";
	for (int i = 0; i < 5; i++) {
		std::cin >> a[i];
	}
	std::cout << "Сумма: " << sumArray(a, 5) << '\n';
	return 0;
}
