#include <iostream>

int main() {
    int a = 10;
    int* p = &a;

    std::cout << "До: " << a << '\n';

    // Разыменование: меняем значение в памяти по адресу через указатель
    *p = 99;

    std::cout << "После: " << a << '\n';
    std::cout << "Через *p: " << *p << '\n';

    return 0;
}
