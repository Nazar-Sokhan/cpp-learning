#include <iostream>

int findMax(int arr[], int size) {
	int max = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

int main() {
	int a[5] = { 1, 2, 3, 4, 5 };
	std::cout << "Максимум: " << findMax(a, 5) << '\n';
	return 0;
}
