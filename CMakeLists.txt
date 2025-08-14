# Versão mínima do CMake
cmake_minimum_required(VERSION 3.10)

# Define o nome do projeto
project(BatalhaNaval LANGUAGES C)

# Define C11 como padrão C que será usado na compilação
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

add_executable(BatalhaNaval batalhaNaval.c)
