#include <iostream>

// ─── Вывод игрового поля ──────────────────────────────────────────────────────
void printBoard(char board[3][3]) {
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            std::cout << ' ' << board[row][col];
            if (col < 2) std::cout << " |";
        }
        std::cout << '\n';
        if (row < 2) std::cout << "---+---+---\n";
    }
}

// ─── Проверка победы ──────────────────────────────────────────────────────────
bool checkWin(char board[3][3], char player) {
    // Три строки
    for (int i = 0; i < 3; i++)
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;

    // Три столбца
    for (int i = 0; i < 3; i++)
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true;

    // Две диагонали
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;

    return false;
}

// ─── Главная функция ──────────────────────────────────────────────────────────
int main() {
    char board[3][3] = {
        {'1','2','3'},
        {'4','5','6'},
        {'7','8','9'}
    };

    char currentPlayer = 'X';

    std::cout << "=== КРЕСТИКИ-НОЛИКИ ===\n\n";
    printBoard(board);

    for (int turn = 0; turn < 9; turn++) {
        // Просим игрока сделать ход
        int move;
        std::cout << "\nИгрок " << currentPlayer << ", введите клетку (1-9): ";
        std::cin >> move;

        // Переводим номер клетки в строку и столбец
        int row = (move - 1) / 3;
        int col = (move - 1) % 3;

        // Ставим символ на поле
        board[row][col] = currentPlayer;

        // Выводим обновлённое поле
        printBoard(board);

        // Проверяем победу
        if (checkWin(board, currentPlayer)) {
            std::cout << "\nИгрок " << currentPlayer << " ПОБЕДИЛ! Поздравляем!\n";
            return 0;
        }

        // Меняем игрока
        if (currentPlayer == 'X') currentPlayer = 'O';
        else currentPlayer = 'X';
    }

    // Если 9 ходов сделано и никто не выиграл — ничья
    std::cout << "\nНичья! Хорошая игра!\n";

    return 0;
}
