cmake_minimum_required(VERSION 3.13)
project(Project)

set(CMAKE_CXX_STANDARD 14)

add_executable(Project main.cpp Expression.h Number.cpp Number.h BinaryExpression.cpp BinaryExpression.h Plus.cpp Plus.h Plus.cpp Plus.h Plus.cpp Plus.cpp Plus.h Minus.cpp Minus.h Mul.cpp Mul.h Div.cpp Div.h UnaryExpression.cpp UnaryExpression.h Negative.cpp Negative.h OpenServerCommand.cpp OpenServerCommand.h Command.h DataReaderServer.cpp DataReaderServer.h)

set(CMAKE_CXX_FLAGS -pthread)