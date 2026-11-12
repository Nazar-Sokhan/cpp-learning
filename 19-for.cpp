// Задача 19: Чётные числа от 1 до 50.
#include <iostream>

int main() {
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            std::cout << i << '\n';
        }
    }

    return 0;
}
