#include <iostream>

int main() {
	int x = 42;
	int* ptr = &x;

	std::cout << "Значение х: " << x << '\n'
	          << "Адрес х: " << &x << '\n'
	          << "Значение ptr (адрес): " << ptr << '\n';

	return 0;
}
