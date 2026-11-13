#include <iostream>

int main() {
	int a[7]{ 5, 3, 8, 1, 9, 2, 7 };
	int min = a[0];
	for (int i = 1; i < 7; i++) {
		if (a[i] < min) {
			min = a[i];
		}
	}
	std::cout << min;
	return 0;
}
