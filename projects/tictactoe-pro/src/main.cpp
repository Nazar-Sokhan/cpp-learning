#include <iostream>
#include "Board.h"

int main() {
    std::cout << "======================================\n";
    std::cout << "  TIC-TAC-TOE PRO (C++20 Modular CMake)\n";
    std::cout << "======================================\n";

    Board board;
    char currentPlayer = 'X';

    while (true) {
        board.print();

        int move;
        std::cout << "Игрок " << currentPlayer << ", выберите клетку (1-9): ";
        if (!(std::cin >> move)) {
            std::cout << ">> Ошибка ввода! Введите число от 1 до 9.\n";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            continue;
        }

        if (!board.makeMove(move, currentPlayer)) {
            std::cout << ">> Неверный ход! Клетка занята или не существует (1-9). Попробуйте снова.\n";
            continue;
        }

        if (board.checkWin(currentPlayer)) {
            board.print();
            std::cout << ">>> ИГРОК " << currentPlayer << " ПОБЕДИЛ! ПОЗДРАВЛЯЕМ! <<<\n";
            break;
        }

        if (board.isFull()) {
            board.print();
            std::cout << ">>> НИЧЬЯ! Свободных клеток не осталось. <<<\n";
            break;
        }

        // Переключение игрока
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}
