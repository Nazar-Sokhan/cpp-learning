#include <iostream>
#include <vector>

// Демонстрація динамічного контейнера std::vector: гнучкий масив зі змінним розміром
int main() {
    // Створення порожнього динамічного масиву цілих чисел
    std::vector<int> scores;

    // Додавання елементів у кінець вектора за допомогою push_back
    scores.push_back(100);
    scores.push_back(50);
    scores.push_back(25);
    scores.push_back(70);

    // .size() повертає точну кількість елементів у векторі
    std::cout << "Кількість елементів: " << scores.size() << '\n';

    // Звернення до елементів вектора за індексом [i], як у звичайному масиві
    std::cout << "Елементи вектора: ";
    for (int i = 0; i < scores.size(); i++) {
        std::cout << scores[i] << " ";
    }
    std::cout << '\n';

    return 0;
}
