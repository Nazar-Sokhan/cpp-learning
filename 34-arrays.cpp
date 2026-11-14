#include <iostream>

int main() {
	int a[6]{ 1,2,3,4,5,6 };
	for (int i = 0; i < 3; i++) {
		int temp = a[i];
		a[i] = a[5 - i];
		a[5 - i] = temp;
	}
	for (int i = 0; i < 6; i++) {
		std::cout << a[i] << " ";
	}
	std::cout << '\n';
	return 0;
}
