// Задача 5: Перевод секунд в часы, минуты и секунды.
#include <iostream>

int main() {
    int totalSeconds;

    std::cout << "Введите общее количество секунд: ";
    std::cin >> totalSeconds;

    int hours = totalSeconds / 3600;
    int octaloc = totalSeconds % 3600;
    int minyti = octaloc / 60;
    int cekyndi = octaloc % 60;

    std::cout << "Часы: " << hours << '\n';
    std::cout << "Минуты: " << minyti << '\n';
    std::cout << "Секунды: " << cekyndi << '\n';

    return 0;
}
