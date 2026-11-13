#include <iostream>

int main() {
	int a[7]{ 1,2,3,4,5,6,7 };
	for (int i = 0; i < 7; i++) {
		std::cout << a[i] << ' ';
	}
	std::cout << '\n';
	for (int i = 6; i >= 0; i--) {
		std::cout << a[i] << ' ';
	}
	std::cout << '\n';
	return 0;
}
