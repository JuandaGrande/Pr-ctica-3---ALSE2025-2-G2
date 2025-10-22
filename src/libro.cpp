#include "../include/Libro.h"
#include<iostream>
#include<string>

/**
 * @brief Constructor para nuevo objeto Libro
 * 
 * @param t Título del libro
 * @param a Autor del libro
 * @param i Código ISBN del libro
 */
Libro::Libro(std::string t, std::string a, std::string i) : titulo(t), autor(a), isbn(i),disponible(true){}

/**
 * @brief Muestra la información básica del libro
 * 
 */

void Libro::mostrarInfo() const{
    std::cout<< "Título: " << titulo << ", Autor: " << autor << ", ISBN: " << isbn;
    if(disponible){
        std::cout << " (Disponible)" << std::endl;
    }else{
        std::cout << " (Prestado)" << std::endl;
    }
}
/**
 * @brief Indica si el libro está disponible para préstamo
 * @return true si está disponible, false si está prestado
 */

bool Libro::estaDisponible() const{
    return disponible;
}

/**
 * @brief Muestra el título del libro
 * @return titulo
 * 
 */

std::string Libro::getTitulo() const{
    return titulo;
}
/**
 * @brief Muestra el autor del libro
 * @return autor
 * 
 */

std::string Libro::getAutor() const{
    return autor;
}
/**
 * @brief Muestra el ISBN del libro
 * @return ISBN
 * 
 */

std::string Libro::getISBN() const{
    return isbn;
}