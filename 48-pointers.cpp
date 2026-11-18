#include <iostream>

int main() {
    int x = 5;
    int& ref = x;

    std::cout << "До: x = " << x << ", ref = " << ref << '\n';

    // Меняем через второе имя (ссылку):
    ref = 77;

    std::cout << "После: x = " << x << ", ref = " << ref << '\n';
    std::cout << "Адрес x:   " << &x << '\n';
    std::cout << "Адрес ref: " << &ref << '\n';

    return 0;
}
