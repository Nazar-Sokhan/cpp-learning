#include <iostream>
#include <string>

int main() {
    std::string word;
    std::cout << "Введіть слово: ";
    std::cin >> word;

    std::cout << "Розгорнуте слово: ";

    // Зворотний цикл: від останньої букви (length - 1) до першої (0)
    for (int i = word.length() - 1; i >= 0; i--) {
        std::cout << word[i];
    }
    std::cout << '\n';

    return 0;
}
