#include <iostream>

int main() {
	int a[7]{ 5, 3, 8, 1, 9, 2, 7 };
	int max = a[0];
	int maxindex = 0;
	for (int i = 1; i < 7; i++) {
		if (a[i] > max) {
			max = a[i];
			maxindex = i;
		}
	}
	std::cout << max << "," << maxindex;
	return 0;
}
