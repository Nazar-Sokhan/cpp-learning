#include <iostream>

int main() {
	int a[5]{ 2, 8, 4, 10, 6 };
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += a[i];
	}
	double average = (double)sum / 5;
	for (int i = 0; i < 5; i++) {
		if (a[i] > average) {
			std::cout << a[i] << " ";
		}
	}
	return 0;
}
