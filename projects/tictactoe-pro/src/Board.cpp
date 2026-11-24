#include "Board.h"
#include <iostream>

Board::Board() {
    char initial = '1';
    for (int r = 0; r < 3; ++r) {
        for (int c = 0; c < 3; ++c) {
            grid[r][c] = initial++;
        }
    }
}

void Board::print() const {
    std::cout << "\n";
    for (int r = 0; r < 3; ++r) {
        for (int c = 0; c < 3; ++c) {
            std::cout << " " << grid[r][c];
            if (c < 2) std::cout << " |";
        }
        std::cout << "\n";
        if (r < 2) std::cout << "---+---+---\n";
    }
    std::cout << "\n";
}

bool Board::makeMove(int cell, char playerSymbol) {
    if (cell < 1 || cell > 9) {
        return false;
    }

    int row = (cell - 1) / 3;
    int col = (cell - 1) % 3;

    // Защита: нельзя ходить в уже занятую клетку
    if (grid[row][col] == 'X' || grid[row][col] == 'O') {
        return false;
    }

    grid[row][col] = playerSymbol;
    return true;
}

bool Board::checkWin(char p) const {
    // Проверка 3 горизонталей
    for (int i = 0; i < 3; ++i) {
        if (grid[i][0] == p && grid[i][1] == p && grid[i][2] == p) return true;
    }
    // Проверка 3 вертикалей
    for (int i = 0; i < 3; ++i) {
        if (grid[0][i] == p && grid[1][i] == p && grid[2][i] == p) return true;
    }
    // Проверка 2 диагоналей
    if (grid[0][0] == p && grid[1][1] == p && grid[2][2] == p) return true;
    if (grid[0][2] == p && grid[1][1] == p && grid[2][0] == p) return true;

    return false;
}

bool Board::isFull() const {
    for (int r = 0; r < 3; ++r) {
        for (int c = 0; c < 3; ++c) {
            if (grid[r][c] != 'X' && grid[r][c] != 'O') {
                return false;
            }
        }
    }
    return true;
}
