#include <iostream>

int main() {
	int a[6]{ 5, -3, 8, -1, 0, -7 };
	for (int i = 0; i < 6; i++) {
		if (a[i] < 0) {
			a[i] = 0;
		}
	}
	for (int i = 0; i < 6; i++) {
		std::cout << a[i] << " ";
	}
	std::cout << '\n';
	return 0;
}
