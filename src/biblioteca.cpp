#include"../include/Libro.h"
#include"../include/Biblioteca.h"
#include<iostream>
#include<string>
#include<vector>
/**
 * @brief Constructor para crear una biblioteca vacía.
 * 
 */
Biblioteca::Biblioteca(){}

/**
 * @brief Agrega un libro a la biblioteca.
 * @param libro Libro a agregar.
 */
void Biblioteca::agregarLibro(const Libro& libro){
    libros.push_back(libro);
}

/**
 * @brief Muestra los libros en la biblioteca.
 * @details Utiliza el método mostrarInfo de libro.cpp
 * 
 */
void Biblioteca::mostrarLibros() const{
    for(int i=0; i<libros.size(); i++){
        std::cout<<i+1<<". ";libros[i].mostrarInfo();
    }
}

/**
 * @brief Busca un libro por titulo en la bilbioteca.
 * @param titulo Título del libro a buscar.
 * @return Devuelve un puntero al libro si existe y nullptr si no
 */

Libro* Biblioteca::buscarLibroTitulo(const std::string& titulo){
    for(int i=0;i<libros.size();i++){
        if(libros[i].getTitulo()==titulo){
        return &libros[i];
        }
        else{return nullptr;}
    }
}
/**
 * @brief Busca un libro por autor en la bilbioteca.
 * @param autor Autor del libro a buscar.
 * @return Devuelve un puntero al libro si existe y nullptr si no
 */

Libro* Biblioteca::buscarLibroTitulo(const std::string& autor){
    for(int i=0;i<libros.size();i++){
        if(libros[i].getAutor()==autor){
        return &libros[i];
        }
        else{return nullptr;}
    }
}
