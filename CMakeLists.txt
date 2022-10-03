cmake_minimum_required(VERSION 3.20)
project(X0_Game_OOP)

set(CMAKE_CXX_STANDARD 14)

add_executable(X0_Game_OOP main.cpp Board.cpp Board.h Winner.cpp Winner.h PlayGame.cpp PlayGame.h)
