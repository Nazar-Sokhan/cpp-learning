#pragma once

// Класс игрового поля крестиков-ноликов
class Board {
private:
    char grid[3][3];

public:
    // Конструктор: заполняет поле начальными цифрами '1'..'9'
    Board();

    // Отрисовка поля в консоль (const - метод не изменяет данные)
    void print() const;

    // Сделать ход: возвращает true при успехе, false если клетка занята/неверна
    bool makeMove(int cell, char playerSymbol);

    // Проверка победы заданного игрока ('X' или 'O')
    bool checkWin(char playerSymbol) const;

    // Проверка, заполнено ли поле полностью (ничья)
    bool isFull() const;
};
