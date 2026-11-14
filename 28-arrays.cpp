#include <iostream>

int main() {
	int count = 0;
	int a[7]{ 5, 3, 8, 1, 9, 2, 7 };
	for (int i = 0; i < 7; i++) {
		if (a[i] % 2 == 0) {
			count++;
		}
	}
	std::cout << "Четных: " << count << '\n';
	return 0;
}
