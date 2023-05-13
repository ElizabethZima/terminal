cmake_minimum_required(VERSION 3.24)
project(untitled14)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled14 main.cpp includes/Terminale.hpp src/Deposite.cpp includes/Deposite.hpp src/Withdraw.cpp includes/Withdraw.hpp src/Pay.cpp includes/Pay.hpp)
