#ifndef LIBRO_H
#define LIBRO_H
#include<string>
/**
 * @class Libro
 * @brief Representa un libro en la biblioteca.
 *
 * Esta clase almacena los datos básicos de un libro: título, autor,
 * ISBN y si está disponible para préstamo.
 */
class Libro {
public:
    /**
     * @brief Constructor para crear un libro nuevo.
     * @param t Título del libro.
     * @param a Autor del libro.
     * @param i ISBN del libro.
     */
    Libro(std::string t, std::string a, std::string i); //Done

    /**
     * @brief Muestra información básica del libro.
     */
    void mostrarInfo() const; //Done

    /**
     * @brief Indica si el libro está disponible.
     * @return true si disponible, false si prestado.
     */
    bool estaDisponible() const; //Done

    /**
     * @brief Muestra el título del libro
     * @return titulo
     * 
     */
    std::string getTitulo() const;  //Done
    /**
     * @brief Muestra el autor del libro
     * @return autor
     * 
     */
    std::string getAutor() const;  //Done

private:
    std::string titulo;
    std::string autor;
    std::string isbn;
    bool disponible;
};

#endif  //LIBRO_H