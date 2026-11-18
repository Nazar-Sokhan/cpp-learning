#include <iostream>
#include <string>

int main() {
    std::string word;
    std::cout << "Введите слово: ";
    std::cin >> word;

    std::cout << "Длина: " << word.length() << '\n';

    // Пробегаем по строке посимвольно от 0 до word.length()
    for (int i = 0; i < word.length(); i++) {
        std::cout << word[i] << " ";
    }
    std::cout << '\n';

    return 0;
}
