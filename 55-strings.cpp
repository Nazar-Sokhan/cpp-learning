#include <iostream>
#include <string>

int main() {
    std::string word = "";
    std::cout << "Введіть слово: ";
    std::cin >> word;

    // Шифр Цезаря: зсуваємо кожен символ на +1 в таблиці ASCII
    for (int i = 0; i < word.length(); i++) {
        word[i] += 1;
    }

    std::cout << "Зашифроване слово: " << word << '\n';

    return 0;
}
