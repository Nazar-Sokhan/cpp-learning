#include <iostream>

int main() {
	int a[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			std::cout << a[i][j] << " ";
		}
		std::cout << '\n';
	}
	std::cout << '\n';
	for (int i = 0; i < 3; i++) {
		int rowsum = 0;
		for (int j = 0; j < 3; j++) {
			rowsum += a[i][j];
		}
		std::cout << "Сумма строки " << i << ": " << rowsum << '\n';
	}
	return 0;
}
