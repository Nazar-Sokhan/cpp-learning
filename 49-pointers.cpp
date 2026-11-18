#include <iostream>

// Функция обмена значениями двух переменных через ССЫЛКИ (&)
void mySwap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10;
    int y = 20;

    std::cout << "До: x = " << x << ", y = " << y << '\n';

    // Вызываем swap — переменные меняются местами в оригинале!
    mySwap(x, y);

    std::cout << "После: x = " << x << ", y = " << y << '\n';

    return 0;
}
