#include <iostream>

int main() {
	int a[5]{ 10,20,30,40,50 };
	int temp;
	temp = a[0];
	a[0] = a[4];
	a[4] = temp;
	for (int i = 0; i < 5; i++) {
		std::cout << a[i] << " ";
	}
	std::cout << '\n';
	return 0;
}
