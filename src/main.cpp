#include "../include/Biblioteca.h"
#include "../include/Libro.h"
#include <iostream>
#include <string>
#include <cstdlib> // para system("clear") o system("cls")

void limpiarPantalla() {
#ifdef _WIN32
    std::system("cls");
#else
    std::system("clear");
#endif
}

void mostrarMarco() {
    std::cout << "#############################################\n";
}

void mostrarMenu() {
    mostrarMarco();
    mostrarMarco();
    std::cout << "##          Sistema de Biblioteca          ##\n";
    mostrarMarco();
    std::cout << "## 1. Agregar libro                        ##\n";
    std::cout << "## 2. Eliminar libro                       ##\n";
    std::cout << "## 3. Buscar libro por titulo              ##\n";
    std::cout << "## 4. Buscar libro por autor               ##\n";
    std::cout << "## 5. Mostrar libros disponibles           ##\n";
    std::cout << "## 6. Salir                                ##\n";
    mostrarMarco();
    mostrarMarco();
    std::cout << "Ingrese una opcion: ";
}

int main() {
    Biblioteca miBiblioteca;
    int opcion;

    do {
        limpiarPantalla();
        mostrarMenu();
        std::cin >> opcion;
        std::cin.ignore(); // para limpiar el buffer de entrada

        switch(opcion) {
            case 1: { //Agregar libro
                std::string titulo, autor, isbn;
                std::cout << "Ingrese titulo: ";
                std::getline(std::cin, titulo);
                std::cout << "Ingrese autor: ";
                std::getline(std::cin, autor);
                std::cout << "Ingrese ISBN: ";
                std::getline(std::cin, isbn);

                Libro nuevoLibro(titulo, autor, isbn);
                miBiblioteca.agregarLibro(nuevoLibro);
                std::cout << "Libro agregado exitosamente.\n";
                break;
            }
            case 2: { // Eliminar libro
                std::string isbnEliminar;
                std::cout << "Ingrese ISBN del libro a eliminar: ";
                std::getline(std::cin, isbnEliminar);

                bool eliminado = miBiblioteca.eliminarLibro(isbnEliminar);
                if (eliminado) {
                    std::cout << "Libro eliminado correctamente.\n";
                } else {
                    std::cout << "No se encontró un libro con el ISBN dado.\n";
                }
                break;
            }
            case 3: { //Buscar por Título
                std::string busqueda;
                std::cout << "Ingrese titulo a buscar: ";
                std::getline(std::cin, busqueda);
                std::string LibroEncontrado;
                Libro* libroEncontrado = miBiblioteca.buscarLibroTitulo(busqueda);
                if(libroEncontrado==nullptr){
                    std::cout<<"No se encontró un libro con el titulo "<<busqueda<<std::endl;
                }
                else{
                    std::cout << "Libro encontrado:\n";
                    libroEncontrado->mostrarInfo();
                }
                break;
            }
            case 4: { //Buscar por autor
                std::string busqueda;
                std::cout << "Ingrese autor a buscar: ";
                std::getline(std::cin, busqueda);
                std::string LibroEncontrado;
                Libro* libroEncontrado = miBiblioteca.buscarLibroAutor(busqueda);
                if(libroEncontrado==nullptr){
                    std::cout<<"No se encontró un libro con el autor "<<busqueda<<std::endl;
                }
                else{
                    std::cout << "Libro encontrado:\n";
                    libroEncontrado->mostrarInfo();
                }
                break;
            }
            case 5: { // Mostrar libros disponibles
                miBiblioteca.mostrarLibros();
                break;
            }
            case 6: { //Salir
                std::cout << "Saliendo...\n";
                break;
            }
            default:
                std::cout << "Opcion inválida. Intente de nuevo.\n";
                break;
        }
        if (opcion != 6) {
            std::cout << "\nPresione Enter para continuar...";
            std::cin.get();
        }
    } while (opcion != 6);

    return 0;
}
