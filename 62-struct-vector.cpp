#include <iostream>

// Структура двовимірного вектора для ігрової математики
struct Vector2D {
    float x;
    float y;
};

// Функція додавання двох векторів (позиція + вектор швидкості)
Vector2D addVectors(Vector2D a, Vector2D b) {
    Vector2D res;
    res.x = a.x + b.x;
    res.y = a.y + b.y;
    return res;
}

int main() {
    Vector2D pos = { 10.0f, 20.0f };
    Vector2D speed = { 5.0f, -2.0f };

    Vector2D newPos = addVectors(pos, speed);

    std::cout << "Нова позиція: X = " << newPos.x << ", Y = " << newPos.y << '\n';

    return 0;
}
