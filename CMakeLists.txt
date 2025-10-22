cmake_minimum_required(VERSION 3.10)

# Nombre del proyecto
project(SistemaBiblioteca)

# Para usar C++11 o superior
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Incluye carpeta con headers
include_directories(include)

# Define el ejecutable y los archivos fuente
add_executable(SistemaBiblioteca
    src/main.cpp
    src/libro.cpp
    src/biblioteca.cpp
)
