#include <iostream>
#include <string>

int main() {
    std::string wordd;
    std::cout << "Введите слово: ";
    std::cin >> wordd;

    int vowels = 0;

    // Пробегаем по строке и считаем все гласные буквы
    for (int i = 0; i < wordd.length(); i++) {
        if (wordd[i] == 'a' || wordd[i] == 'e' || wordd[i] == 'i' || wordd[i] == 'o' || wordd[i] == 'u') {
            vowels++;
        }
    }

    std::cout << "Кількість голосних: " << vowels << '\n';

    return 0;
}
