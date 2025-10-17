#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#include "Libro.h"
#include<vector>
#include<string>
/**
 * @class Biblioteca
 * @brief Función principal bilbioteca
 * 
 * Esta clase almacena los libros, y permite agregar, eliminar,
 * buscar y mostrar libros
 */

class Biblioteca{
    public:
    /**
     * @brief Constructor para crear una biblioteca vacía.
     */
    Biblioteca(); //Done
    /**
     * @brief Agrega un libro a la biblioteca.
     * @param libro Libro a agregar.
     */
    void agregarLibro(const Libro& libro); //Done
    /**
     * @brief Muestra todos los libros en la biblioteca.
     */
    void mostrarLibros() const;  //Done
    /**
     * @brief Busca un libro por título.
     * @param titulo Título del libro a buscar.
     * @return Puntero al libro si se encuentra, nullptr si no.
     */
    Libro* buscarLibroTitulo(const std::string& titulo);  //Done
    /**
     * @brief Busca un libro por autor.
     * @param autor Autor del libro a buscar.
     * @return Puntero al libro si se encuentra, nullptr si no.
     */
    Libro* buscarLibroTitulo(const std::string& autor);  //NOTDONE
    private:
    /**
     * @brief Vector que almacena los libros de la biblioteca.
     * @details Cada elemento del vector es un objeto de la clase Libro.
     */
    std::vector<Libro> libros;
};
#endif //BIBLIOTECA_H
