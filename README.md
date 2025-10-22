# Sistema de Gestión de Biblioteca

**Descripción:**  
Este programa en C++ permite gestionar una biblioteca digital, ofreciendo funcionalidades básicas para agregar, eliminar, buscar y mostrar libros disponibles. Está diseñado para ser simple, eficiente y fácil de usar desde una interfaz de línea de comandos tipo menú.

---

## Funcionalidades principales:
- **Agregar libros** con título, autor e ISBN.  
- **Eliminar libros** por código ISBN.  
- **Buscar libros** por título o autor (uno por autor).  
- **Mostrar todos los libros disponibles** en la biblioteca.  
- Interfaz de menú amigable con opciones claras y limpieza de pantalla.

---

## Detalles técnicos:
- Implementado en C++ con CMake para la compilación.  
- Documentación generada con Doxygen para facilitar mantenimiento y extensión.  
- No depende de librerías externas ni DLLs, facilitando su uso portable en sistemas Windows compatibles.  
- Código modular con separación clara entre clases `Libro` y `Biblioteca`.

---

## Instrucciones de uso:
1. Clonar o descargar el repositorio.  
2. Compilar con CMake desde la carpeta `build`:  

cmake -DCMAKE_BUILD_TYPE=Release ..
cmake --build .

3. Ejecutar el archivo generado (`SistemaBiblioteca.exe` en Windows).  
4. Usar el menú para explorar las opciones disponibles.

## Instrucción alternativa
1. Descargar y ejecutar el .exe en [Releases](https://github.com/JuandaGrande/Sistema-de-Gestion-de-Biblioteca/releases/latest) (Solo funciona en Windows x64)
---

## Licencia:
Este proyecto está licenciado bajo MIT License.
