#include <iostream>

void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << ' ';
	}
	std::cout << "\n";
}

int main() {
	int numbers[5] = { 4, 8, 15, 20, 15 };
	printArray(numbers, 5);
	return 0;
}
