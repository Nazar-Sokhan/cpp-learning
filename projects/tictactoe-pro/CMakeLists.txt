cmake_minimum_required(VERSION 3.20)
project(TicTacToePro VERSION 1.0 LANGUAGES CXX)

# Требуем современный стандарт C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Указываем, где лежат заголовочные файлы (.h)
include_directories(include)

# Собираем исполняемый файл из исходников
add_executable(tictactoe_pro
    src/main.cpp
    src/Board.cpp
)
