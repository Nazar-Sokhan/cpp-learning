#include <iostream>
#include <string>

int main() {
    std::string word;
    std::string reversed = "";

    std::cout << "Введіть слово: ";
    std::cin >> word;

    // Збираємо розгорнуте слово задом наперед
    for (int i = word.length() - 1; i >= 0; i--) {
        reversed += word[i];
    }

    // Перевіряємо, чи збігаються оригінал і розгорнуте слово
    if (word == reversed) {
        std::cout << "Це паліндром!\n";
    } else {
        std::cout << "Це не паліндром!\n";
    }

    return 0;
}
